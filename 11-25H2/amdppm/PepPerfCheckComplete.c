/*
 * XREFs of PepPerfCheckComplete @ 0x1400024F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 */

void __fastcall PepPerfCheckComplete(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // edx
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF

  if ( !PepSkipPerfCheckNotification )
  {
    v4 = a2;
    v2 = PoFxProcessorNotification(a1, 33LL, &v4);
    if ( v2 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v3) = 4;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v3,
          2,
          22,
          (__int64)&WPP_1e2c66cd4e403eb679a1b1edce07a74a_Traceguids,
          v2);
      }
      PepSkipPerfCheckNotification = 1;
    }
  }
}
