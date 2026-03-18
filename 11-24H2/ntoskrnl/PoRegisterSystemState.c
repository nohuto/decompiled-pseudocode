/*
 * XREFs of PoRegisterSystemState @ 0x1403310B0
 * Callers:
 *     <none>
 * Callees:
 *     PopDiagTraceRegisterSystemState @ 0x140330FEC (PopDiagTraceRegisterSystemState.c)
 *     PopPowerRequestCreateCommon @ 0x1403313A8 (PopPowerRequestCreateCommon.c)
 *     PoDestroyReasonContext @ 0x140331BA4 (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x140331D38 (PoCaptureReasonContext.c)
 *     PoSetSystemState @ 0x1403F2B30 (PoSetSystemState.c)
 *     PopApplyLegacyPowerRequestFlags @ 0x14046BB18 (PopApplyLegacyPowerRequestFlags.c)
 *     PopGetLegacyPowerRequestFlags @ 0x14047C988 (PopGetLegacyPowerRequestFlags.c)
 */

PVOID __stdcall PoRegisterSystemState(PVOID StateHandle, EXECUTION_STATE Flags)
{
  PVOID v2; // rbx
  int v5; // r9d
  int v6; // eax
  PVOID v7; // rsi
  int v9; // eax
  PVOID v10; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  P = 0LL;
  v2 = 0LL;
  if ( (Flags & 0x7FFFFFF8) == 0 )
  {
    if ( (int)Flags > 0 )
    {
      PoSetSystemState(Flags);
    }
    else
    {
      PopDiagTraceRegisterSystemState(Flags, (__int64)StateHandle);
      v2 = StateHandle;
      v10 = StateHandle;
      if ( StateHandle
        || (LOBYTE(v5) = 1, v6 = PoCaptureReasonContext(0, 0, 0, v5, 0LL, (__int64)&P), v7 = P, v6 >= 0)
        && (v9 = PopPowerRequestCreateCommon(P, 0LL, &v10), v2 = v10, v9 >= 0) )
      {
        PopGetLegacyPowerRequestFlags(v2, Flags, 0LL);
        PopApplyLegacyPowerRequestFlags(v2);
      }
      else if ( v7 )
      {
        PoDestroyReasonContext(v7);
      }
    }
  }
  return v2;
}
