/*
 * XREFs of CrmComparisonRoutineSebLevel @ 0x180066940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmComparisonRoutineSebLevel(__int64 a1, _DWORD *a2)
{
  int v2; // eax

  v2 = 0;
  if ( *a2 )
    v2 = (a2[2] >> 1) & 1;
  return (unsigned int)(2 * v2);
}
