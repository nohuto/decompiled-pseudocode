/*
 * XREFs of GetActiveNodeCount @ 0x1401280A4
 * Callers:
 *     GetCpuInformation @ 0x14012811C (GetCpuInformation.c)
 * Callees:
 *     <none>
 */

__int64 GetActiveNodeCount()
{
  USHORT HighestNodeNumber; // si
  USHORT v1; // bx
  unsigned __int16 v2; // di
  USHORT Count; // [rsp+30h] [rbp+8h] BYREF

  HighestNodeNumber = KeQueryHighestNodeNumber();
  v1 = 0;
  v2 = 0;
  do
  {
    Count = 0;
    KeQueryNodeActiveAffinity(v1, 0LL, &Count);
    if ( Count )
      ++v2;
    ++v1;
  }
  while ( v1 <= HighestNodeNumber );
  return v2;
}
