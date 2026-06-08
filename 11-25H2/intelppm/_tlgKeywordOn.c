/*
 * XREFs of _tlgKeywordOn @ 0x140001008
 * Callers:
 *     ProcLibTraceUnexpectedTurboDisable @ 0x1400088F4 (ProcLibTraceUnexpectedTurboDisable.c)
 *     InitCpcStatesInternal @ 0x1400358D0 (InitCpcStatesInternal.c)
 *     ProcLibTraceInvalidPowerCurve @ 0x1400494D4 (ProcLibTraceInvalidPowerCurve.c)
 * Callees:
 *     <none>
 */

char __fastcall tlgKeywordOn(__int64 a1, __int64 a2)
{
  char v2; // r8

  v2 = 0;
  if ( !a2 || (a2 & *(_QWORD *)(a1 + 16)) != 0 && (a2 & *(_QWORD *)(a1 + 24)) == *(_QWORD *)(a1 + 24) )
    return 1;
  return v2;
}
