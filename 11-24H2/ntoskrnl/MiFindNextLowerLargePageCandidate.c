/*
 * XREFs of MiFindNextLowerLargePageCandidate @ 0x14044437C
 * Callers:
 *     MiPfnsWorthTrying @ 0x14030F9E0 (MiPfnsWorthTrying.c)
 *     MiFindBestLargePageStealCandidates @ 0x140443E10 (MiFindBestLargePageStealCandidates.c)
 * Callees:
 *     RtlFindNextClearBitBackwardsEx @ 0x140444428 (RtlFindNextClearBitBackwardsEx.c)
 */

__int64 __fastcall MiFindNextLowerLargePageCandidate(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 *v5; // r9
  __int64 v6; // r8
  int v7; // esi
  unsigned __int64 v8; // rdi
  __int64 NextClearBitBackwards; // rax
  unsigned __int64 v10; // r11
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 16102) )
    return a2;
  v4 = 0LL;
  v5 = MiPageSizes;
  do
  {
    if ( *v5 == a3 )
      break;
    v4 = (unsigned int)(v4 + 1);
    ++v5;
  }
  while ( (unsigned int)v4 < 3 );
  if ( (unsigned int)v4 > 1 )
    return a2;
  v6 = a1 + 16LL * (unsigned int)v4;
  if ( !*(_QWORD *)(v6 + 16328) )
    return a2;
  v7 = MiLargePageShifts[v4];
  v8 = a2 >> v7;
  NextClearBitBackwards = RtlFindNextClearBitBackwardsEx(v6 + 16328, a2 >> v7);
  if ( NextClearBitBackwards == -1 )
    return 0LL;
  v10 = NextClearBitBackwards + 1;
  result = (NextClearBitBackwards + 1) << v7;
  if ( v10 >= v8 )
    return a2;
  return result;
}
