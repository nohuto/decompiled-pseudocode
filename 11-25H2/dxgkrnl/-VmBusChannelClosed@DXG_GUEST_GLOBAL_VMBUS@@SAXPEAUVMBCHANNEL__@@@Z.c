/*
 * XREFs of ?VmBusChannelClosed@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x14021A0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x140055794 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?DisableChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAXXZ @ 0x14007AB80 (-DisableChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusChannelClosed(struct VMBCHANNEL__ *a1)
{
  PRKEVENT *v2; // rbx

  v2 = (PRKEVENT *)((__int64 (*)(void))qword_14015D378)();
  KeSetEvent(v2[7], 0, 0);
  DXG_VMBUS_CHANNEL_BASE::DisableChannel((DXG_VMBUS_CHANNEL_BASE *)v2);
  if ( bTracingEnabled )
    VgpuTrace(1, 0, 0LL, L"DXG_GUEST_GLOBAL_VMBUS::VmBusChannelClosed", (wchar_t *)L"%p", a1);
}
