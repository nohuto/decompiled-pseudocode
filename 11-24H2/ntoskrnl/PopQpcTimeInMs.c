/*
 * XREFs of PopQpcTimeInMs @ 0x140B6A560
 * Callers:
 *     PopWriteBsdPoInfo @ 0x140427FF8 (PopWriteBsdPoInfo.c)
 *     PopPowerTransitionTimesInMs @ 0x1404ABDF0 (PopPowerTransitionTimesInMs.c)
 *     PopDiagTraceHiberStats @ 0x140A5B7EC (PopDiagTraceHiberStats.c)
 *     PopDiagTracePerfTrackData @ 0x140A5BC04 (PopDiagTracePerfTrackData.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopQpcTimeInMs(_QWORD *a1, _QWORD *a2)
{
  unsigned int v2; // r8d
  unsigned __int64 v3; // r9

  v2 = 0;
  if ( *a2 )
  {
    v3 = *a2 - *a1;
    if ( is_mul_ok(v3, 0x3E8uLL) )
      return (unsigned int)(v3 * (unsigned __int128)0x3E8uLL / PopQpcFrequency);
    else
      return (unsigned int)(v3 / (PopQpcFrequency / 0x3E8));
  }
  return v2;
}
