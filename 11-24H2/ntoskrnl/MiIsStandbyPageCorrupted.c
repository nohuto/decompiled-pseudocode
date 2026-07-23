/*
 * XREFs of MiIsStandbyPageCorrupted @ 0x140423260
 * Callers:
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 * Callees:
 *     MiArePagefileContentsCorrupted @ 0x140341C34 (MiArePagefileContentsCorrupted.c)
 *     MiIsPteInStore @ 0x140423310 (MiIsPteInStore.c)
 */

__int64 __fastcall MiIsStandbyPageCorrupted(__int64 a1)
{
  __int64 v1; // r10
  __int64 v2; // r9
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // r11

  v1 = 48 * a1 - 0x220000000000LL;
  v2 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v1 + 40) >> 43) & 0x3FFLL));
  if ( (*(_DWORD *)(v2 + 4) & 0x80u) != 0 )
    v2 = **(_QWORD **)(v2 + 17624);
  if ( (unsigned int)MiIsPteInStore(v2, *(_QWORD *)(v1 + 16))
    || !*(_QWORD *)(*(_QWORD *)(v3 + 8LL * ((unsigned __int8)HIBYTE(*(_WORD *)(v4 + 16)) >> 4) + 18528) + 184LL) )
  {
    return 0LL;
  }
  else
  {
    return MiArePagefileContentsCorrupted(v5, 0LL);
  }
}
