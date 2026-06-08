/*
 * XREFs of RegisterIdleComplete @ 0x140037B28
 * Callers:
 *     RegisterHvLpiStates @ 0x140030B8C (RegisterHvLpiStates.c)
 *     RegisterVmIdleStates @ 0x140030E80 (RegisterVmIdleStates.c)
 *     RegisterKernelIdleStates @ 0x14003D3B0 (RegisterKernelIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003CF8 (WPP_RECORDER_SF_.c)
 *     RegisterKernelCoordinatedLpiStates @ 0x140037DB4 (RegisterKernelCoordinatedLpiStates.c)
 *     RegisterKernelCoordinatedStates @ 0x140037F24 (RegisterKernelCoordinatedStates.c)
 *     RegisterKernelPlatformStates @ 0x140038AC4 (RegisterKernelPlatformStates.c)
 */

void __fastcall RegisterIdleComplete(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rax
  struct _IO_WORKITEM *WorkItem; // rax

  if ( ++dword_1400197F8 == dword_140019184 )
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
        if ( !qword_140019828 )
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
