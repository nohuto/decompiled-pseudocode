/*
 * XREFs of MiInsertNewCombineBlocks @ 0x140478EDC
 * Callers:
 *     MiAllocateCombineBlock @ 0x140239A90 (MiAllocateCombineBlock.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MiLockPagedRange @ 0x140A50D1C (MiLockPagedRange.c)
 */

_QWORD *__fastcall MiInsertNewCombineBlocks(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  int v5; // edi
  KIRQL v6; // al
  __int64 *v7; // rdx
  __int64 v8; // r8

  v2 = a2;
  if ( !(unsigned int)MiLockPagedRange(a2, 3960LL) )
    return 0LL;
  memset_0(v2, 0, 0xF78uLL);
  v5 = 54;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88));
  v7 = (__int64 *)(a1 + 72);
  do
  {
    v8 = *v7;
    if ( *(__int64 **)(*v7 + 8) != v7 )
      __fastfail(3u);
    *v2 = v8;
    v2[1] = v7;
    *(_QWORD *)(v8 + 8) = v2;
    *v7 = (__int64)v2;
    v2 += 9;
    --v5;
  }
  while ( v5 );
  MiReleaseSpinLockExclusive((_DWORD *)(a1 + 88), v6);
  return v2;
}
