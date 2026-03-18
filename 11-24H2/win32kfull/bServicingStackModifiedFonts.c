/*
 * XREFs of bServicingStackModifiedFonts @ 0x140115E98
 * Callers:
 *     InitFNTCache @ 0x140115854 (InitFNTCache.c)
 * Callees:
 *     bQueryFntCacheReg @ 0x1401161F4 (bQueryFntCacheReg.c)
 *     bSetFntCacheReg @ 0x14026C7C0 (bSetFntCacheReg.c)
 */

__int64 __fastcall bServicingStackModifiedFonts(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState(a1, a2, a3);
  bQueryFntCacheReg(*(HANDLE *)(*(_QWORD *)(SessionState + 96) + 19616LL));
  bSetFntCacheReg(2LL, 2LL);
  return 1LL;
}
