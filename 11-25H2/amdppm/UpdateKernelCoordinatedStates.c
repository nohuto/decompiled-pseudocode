/*
 * XREFs of UpdateKernelCoordinatedStates @ 0x14003621C
 * Callers:
 *     PepUpdateCoordinatedStateWorker @ 0x140038A30 (PepUpdateCoordinatedStateWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x14000D700 (_guard_dispatch_icall.c)
 *     ProcLibTraceCoordinatedIdleStates @ 0x14003F82C (ProcLibTraceCoordinatedIdleStates.c)
 */

__int64 __fastcall UpdateKernelCoordinatedStates(__int64 a1)
{
  int v2; // edx
  int v3; // ebx
  int v5; // [rsp+28h] [rbp-10h]

  *(_BYTE *)(a1 + 40) = 1;
  v3 = ((__int64 (*)(void))qword_1400148F0)();
  if ( v3 >= 0 )
  {
    if ( a1 == qword_140014C48 )
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
      (__int64)&WPP_98f9ac7a230638fb843a3fa300c5ade8_Traceguids,
      v5);
  }
  return (unsigned int)v3;
}
