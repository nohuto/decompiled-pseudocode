/*
 * XREFs of bServicingStackModifiedFonts @ 0x1C0019FA4
 * Callers:
 *     InitFNTCache @ 0x1C0018810 (InitFNTCache.c)
 * Callees:
 *     bSetFntCacheReg @ 0x1C0018C84 (bSetFntCacheReg.c)
 *     bQueryFntCacheReg @ 0x1C001A130 (bQueryFntCacheReg.c)
 */

__int64 __fastcall bServicingStackModifiedFonts(__int64 a1)
{
  __int64 v1; // rax

  v1 = SGDGetSessionState(a1);
  bQueryFntCacheReg(*(HANDLE *)(*(_QWORD *)(v1 + 32) + 19408LL));
  bSetFntCacheReg(2u, 2);
  return 1LL;
}
