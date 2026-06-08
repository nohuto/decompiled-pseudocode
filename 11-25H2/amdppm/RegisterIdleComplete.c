/*
 * XREFs of RegisterIdleComplete @ 0x140034408
 * Callers:
 *     RegisterHvLpiStates @ 0x1400264CC (RegisterHvLpiStates.c)
 *     RegisterVmIdleStates @ 0x1400269A0 (RegisterVmIdleStates.c)
 *     RegisterKernelIdleStates @ 0x140034BC0 (RegisterKernelIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003C68 (WPP_RECORDER_SF_.c)
 *     RegisterKernelCoordinatedLpiStates @ 0x140034938 (RegisterKernelCoordinatedLpiStates.c)
 *     RegisterKernelCoordinatedStates @ 0x140034AA8 (RegisterKernelCoordinatedStates.c)
 *     RegisterKernelPlatformStates @ 0x140035E64 (RegisterKernelPlatformStates.c)
 */

void __fastcall RegisterIdleComplete(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rax
  struct _IO_WORKITEM *WorkItem; // rax

  if ( ++dword_140014C18 == dword_1400145A4 )
  {
    IoWorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
    if ( IoWorkItem )
    {
      v3 = *(_QWORD *)(a1 + 280);
      if ( (v3 & 0x20E0000000000LL) != 0 )
      {
        RegisterKernelCoordinatedLpiStates(a1);
      }
      else if ( (v3 & 0x200000200LL) != 0 )
      {
        RegisterKernelCoordinatedStates(a1);
        if ( !qword_140014C48 )
          RegisterKernelPlatformStates(a1);
      }
      WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
      if ( WorkItem )
        IoQueueWorkItem(WorkItem, PepRegisterBootVetoes, CriticalWorkQueue, WorkItem);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v2,
        4,
        15,
        (__int64)&WPP_98f9ac7a230638fb843a3fa300c5ade8_Traceguids);
    }
  }
}
