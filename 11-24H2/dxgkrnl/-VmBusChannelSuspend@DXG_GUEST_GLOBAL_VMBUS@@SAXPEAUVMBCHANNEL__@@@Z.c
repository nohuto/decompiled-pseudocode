/*
 * XREFs of ?VmBusChannelSuspend@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x140220BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x140054F44 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusChannelSuspend(struct VMBCHANNEL__ *a1)
{
  __int64 v2; // rax
  bool v3; // zf

  v2 = ((__int64 (*)(void))qword_140160398)();
  v3 = bTracingEnabled == 0;
  *(_BYTE *)(v2 + 68) = 0;
  if ( !v3 )
    VgpuTrace(1, 0, 0LL, L"DXG_GUEST_GLOBAL_VMBUS::VmBusChannelSuspend", (wchar_t *)L"%p", a1);
}
