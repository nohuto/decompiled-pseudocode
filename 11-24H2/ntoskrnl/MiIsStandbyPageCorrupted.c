/*
 * XREFs of MiIsStandbyPageCorrupted @ 0x1404D4DBC
 * Callers:
 *     MiInsertPageInList @ 0x14022CB10 (MiInsertPageInList.c)
 * Callees:
 *     MiIsPteInStore @ 0x1402E5460 (MiIsPteInStore.c)
 *     MiArePagefileContentsCorrupted @ 0x1402E5A94 (MiArePagefileContentsCorrupted.c)
 */

__int64 __fastcall MiIsStandbyPageCorrupted(__int64 a1)
{
  __int64 v1; // r10
  __int64 v2; // r9
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // r11

  v1 = 48 * a1 - 0x220000000000LL;
  v2 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v1 + 40) >> 43) & 0x3FFLL));
  if ( (*(_DWORD *)(v2 + 4) & 0x80u) != 0 )
    v2 = **(_QWORD **)(v2 + 17624);
  if ( MiIsPteInStore(v2, *(_QWORD *)(v1 + 16))
    || !*(_QWORD *)(*(_QWORD *)(v3 + 8LL * ((unsigned __int8)HIBYTE(*(_WORD *)(v4 + 16)) >> 4) + 18528) + 184LL) )
  {
    return 0LL;
  }
  else
  {
    return MiArePagefileContentsCorrupted(v5, 0LL);
  }
}
