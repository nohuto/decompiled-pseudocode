/*
 * XREFs of PoRegisterSystemState @ 0x1402B9710
 * Callers:
 *     <none>
 * Callees:
 *     PopDiagTraceRegisterSystemState @ 0x1402B97DC (PopDiagTraceRegisterSystemState.c)
 *     PopPowerRequestCreateCommon @ 0x1402BAAB0 (PopPowerRequestCreateCommon.c)
 *     PoDestroyReasonContext @ 0x1402BC528 (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x1402BC6B8 (PoCaptureReasonContext.c)
 *     PoSetSystemState @ 0x1403E6850 (PoSetSystemState.c)
 *     PopApplyLegacyPowerRequestFlags @ 0x140464798 (PopApplyLegacyPowerRequestFlags.c)
 *     PopGetLegacyPowerRequestFlags @ 0x140477B10 (PopGetLegacyPowerRequestFlags.c)
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
      PopDiagTraceRegisterSystemState(Flags, StateHandle);
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
