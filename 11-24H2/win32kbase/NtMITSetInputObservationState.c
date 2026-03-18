/*
 * XREFs of NtMITSetInputObservationState @ 0x1401B8BB0
 * Callers:
 *     <none>
 * Callees:
 *     IsInputThread @ 0x1400BB380 (IsInputThread.c)
 *     SetUMInputObservationState @ 0x140213468 (SetUMInputObservationState.c)
 */

__int64 __fastcall NtMITSetInputObservationState(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v5; // esi

  v5 = a1;
  if ( IsInputThread(a1) )
    return SetUMInputObservationState(v5, a2, a3);
  else
    return 3221225506LL;
}
