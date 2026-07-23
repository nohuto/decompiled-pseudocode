/*
 * XREFs of RtlProcessFlsData @ 0x1800F3DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall RtlProcessFlsData(__int64 *a1, char a2)
{
  char v2; // r8

  v2 = a2 & 1 | 2;
  if ( (a2 & 2) == 0 )
    v2 = a2 & 1;
  RtlpFlsDataCleanup(&RtlpFlsContext, a1, v2);
}
