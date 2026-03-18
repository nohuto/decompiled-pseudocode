/*
 * XREFs of Controller_IsRunningWithIrqlRaisedAndTracked @ 0x1400413E8
 * Callers:
 *     ESM_RunStateMachine @ 0x140013200 (ESM_RunStateMachine.c)
 *     ESM_ShouldQueueWorkItem @ 0x14002A5C0 (ESM_ShouldQueueWorkItem.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

char __fastcall Controller_IsRunningWithIrqlRaisedAndTracked(__int64 a1)
{
  ULONG CurrentProcessorNumber; // eax
  int v3; // edx
  ULONG_PTR v4; // rax

  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  if ( CurrentProcessorNumber >= *(_DWORD *)(a1 + 1280) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 72),
        v3,
        4,
        338,
        (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
        CurrentProcessorNumber);
    }
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 264))(
           WdfDriverGlobals,
           *(_QWORD *)a1);
    KeBugCheckEx(0x144u, 4uLL, v4, 2uLL, 4uLL);
  }
  return *(_BYTE *)(*(_QWORD *)(a1 + 1272) + 2LL * CurrentProcessorNumber);
}
