/*
 * XREFs of StorGetAndLogNVMeDevicePanicWorkRoutine @ 0x1400C3AE0
 * Callers:
 *     <none>
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     StorLogNVMeErrorRecoveryInfo @ 0x14008FB98 (StorLogNVMeErrorRecoveryInfo.c)
 *     StorBuildMFNDGetSingleCCLogPageCommand @ 0x1400C36B0 (StorBuildMFNDGetSingleCCLogPageCommand.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 *     StorSendMFNDCommand @ 0x140190F24 (StorSendMFNDCommand.c)
 */

void __fastcall StorGetAndLogNVMeDevicePanicWorkRoutine(PDEVICE_OBJECT DeviceObject, _WORD *Context)
{
  _QWORD *DeviceExtension; // r14
  unsigned int v4; // ebx
  _WORD *v5; // rdi
  void *Pool; // r15
  unsigned int i; // ebp
  unsigned __int16 v8; // r12
  __int64 v9; // rax
  _BYTE v10[64]; // [rsp+60h] [rbp-68h] BYREF

  DeviceExtension = DeviceObject->DeviceExtension;
  memset_0(v10, 0, sizeof(v10));
  v4 = 0;
  v5 = Context + 10;
  Pool = (void *)RaidAllocatePool(64LL, 512LL, 1179476306LL, DeviceExtension[1]);
  if ( Pool )
  {
    for ( i = 0; i < (unsigned __int16)*v5; ++i )
    {
      v8 = Context[i + 11];
      if ( (unsigned __int16)(v8 - 1) <= 0xFFFDu )
      {
        memset_0(v10, 0, sizeof(v10));
        StorBuildMFNDGetSingleCCLogPageCommand((__int64)v10, v8, 193, 0, Context[4] & 1, 0x200u);
        if ( (int)StorSendMFNDCommand((_DWORD)DeviceExtension, (_DWORD)Pool, 0, 512, (__int64)v10) < 0 )
          break;
        StorLogNVMeErrorRecoveryInfo((__int64)DeviceExtension, (__int64)Pool);
      }
    }
    ExFreePoolWithTag(Pool, 0x464D6152u);
  }
  if ( *(_QWORD *)(DeviceExtension[770] + 72LL) && *v5 )
  {
    do
    {
      v9 = v4++;
      _interlockedbittestandreset(
        (volatile signed __int32 *)(*(_QWORD *)(DeviceExtension[770] + 72LL)
                                  + 4 * (((unsigned __int64)(unsigned __int16)Context[v9 + 11] - 1) >> 5)),
        ((unsigned __int8)Context[v9 + 11] - 1) & 0x1F);
    }
    while ( v4 < (unsigned __int16)*v5 );
  }
  IoFreeWorkItem(*(PIO_WORKITEM *)Context);
  ExFreePoolWithTag(Context, 0x49576152u);
}
