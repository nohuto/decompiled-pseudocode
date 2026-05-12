/*
 * XREFs of StorGetAndLogNVMeErrorInfoWorkRoutine @ 0x1400C3CB0
 * Callers:
 *     <none>
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     StorLogNVMeErrorInfo @ 0x14008F9E8 (StorLogNVMeErrorInfo.c)
 *     StorBuildMFNDGetSingleCCLogPageCommand @ 0x1400C36B0 (StorBuildMFNDGetSingleCCLogPageCommand.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 *     StorSendMFNDCommand @ 0x140190F24 (StorSendMFNDCommand.c)
 */

void __fastcall StorGetAndLogNVMeErrorInfoWorkRoutine(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned int v4; // ebx
  _WORD *v5; // rdi
  void *Pool; // r15
  unsigned int i; // ebp
  unsigned __int16 v8; // r12
  __int64 v9; // rax
  _BYTE v10[64]; // [rsp+60h] [rbp-68h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  memset_0(v10, 0, sizeof(v10));
  v4 = 0;
  v5 = (_WORD *)(a2 + 20);
  Pool = (void *)RaidAllocatePool(64LL, 4096LL, 1179476306LL, *(_QWORD *)(v2 + 8));
  if ( Pool )
  {
    for ( i = 0; i < (unsigned __int16)*v5; ++i )
    {
      v8 = *(_WORD *)(a2 + 2LL * i + 22);
      if ( (unsigned __int16)(v8 - 1) <= 0xFFFDu )
      {
        memset_0(v10, 0, sizeof(v10));
        StorBuildMFNDGetSingleCCLogPageCommand((__int64)v10, v8, 1, 0, *(_BYTE *)(a2 + 8) & 1, 0x1000u);
        if ( (int)StorSendMFNDCommand(v2, (_DWORD)Pool, 0, 4096, (__int64)v10) < 0 )
          break;
        StorLogNVMeErrorInfo(v2, (__int64)Pool);
      }
    }
    ExFreePoolWithTag(Pool, 0x464D6152u);
  }
  if ( *(_QWORD *)(*(_QWORD *)(v2 + 6160) + 56LL) && *v5 )
  {
    do
    {
      v9 = v4++;
      _interlockedbittestandreset(
        (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v2 + 6160) + 56LL)
                                  + 4 * (((unsigned __int64)*(unsigned __int16 *)(a2 + 2 * v9 + 22) - 1) >> 5)),
        ((unsigned __int8)*(_WORD *)(a2 + 2 * v9 + 22) - 1) & 0x1F);
    }
    while ( v4 < (unsigned __int16)*v5 );
  }
  IoFreeWorkItem(*(PIO_WORKITEM *)a2);
  ExFreePoolWithTag((PVOID)a2, 0x49576152u);
}
