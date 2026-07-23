/*
 * XREFs of MiPreparePfnDatabasePageForFree @ 0x14066F968
 * Callers:
 *     MiPfnRangeIsZero @ 0x14066F480 (MiPfnRangeIsZero.c)
 * Callees:
 *     MiSetOriginalPtePfnFromFreeList @ 0x14033E678 (MiSetOriginalPtePfnFromFreeList.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiPreparePfnDatabasePageForFree(_QWORD *a1, int a2, int a3)
{
  __int64 v5; // rbx
  __int64 result; // rax
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+38h] [rbp+10h]

  v5 = 48 * ((*a1 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v7 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v7);
    while ( *(__int64 *)(v5 + 24) < 0 );
  }
  if ( (*(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
    *(_QWORD *)(v5 + 24) = *(_QWORD *)(v5 + 24) & 0xC000000000000000uLL | 1;
  if ( !a2 && a3 == 3 )
  {
    v8 = *(_DWORD *)(v5 + 32);
    LOWORD(v8) = v8 - 1;
    *(_DWORD *)(v5 + 32) = v8;
  }
  *(_QWORD *)(v5 + 16) = CLFS_LSN_NULL_EXT;
  if ( a2 )
    MiSetOriginalPtePfnFromFreeList((__int64 *)(v5 + 16));
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
