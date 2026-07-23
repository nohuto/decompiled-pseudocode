/*
 * XREFs of PopQpcTimeInMs @ 0x140B6BC70
 * Callers:
 *     PopWriteBsdPoInfo @ 0x14041C188 (PopWriteBsdPoInfo.c)
 *     PopPowerTransitionTimesInMs @ 0x1404A62DC (PopPowerTransitionTimesInMs.c)
 *     PopDiagTraceHiberStats @ 0x140A533BC (PopDiagTraceHiberStats.c)
 *     PopDiagTracePerfTrackData @ 0x140A537D4 (PopDiagTracePerfTrackData.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
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
