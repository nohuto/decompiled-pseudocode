/*
 * XREFs of UpdateKernelCoordinatedStates @ 0x140037420
 * Callers:
 *     PepUpdateCoordinatedStateWorker @ 0x140039C80 (PepUpdateCoordinatedStateWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x14000E3B0 (_guard_dispatch_icall.c)
 *     ProcLibTraceCoordinatedIdleStates @ 0x140040A7C (ProcLibTraceCoordinatedIdleStates.c)
 */

__int64 __fastcall UpdateKernelCoordinatedStates(__int64 a1)
{
  int v2; // edx
  int v3; // ebx
  int v5; // [rsp+28h] [rbp-10h]

  *(_BYTE *)(a1 + 40) = 1;
  v3 = ((__int64 (*)(void))qword_140015920)();
  if ( v3 >= 0 )
  {
    if ( a1 == qword_140015C80 )
      ProcLibTraceCoordinatedIdleStates(0LL);
    return 0;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = v3;
    LOBYTE(v2) = 2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v2,
      3,
      23,
      (__int64)&WPP_3d108ec8cf663db9a9e3117b4bdc697c_Traceguids,
      v5);
  }
  return (unsigned int)v3;
}
