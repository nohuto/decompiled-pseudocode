/*
 * XREFs of bSetFntCacheReg @ 0x14026C7C0
 * Callers:
 *     InitFNTCache @ 0x140115854 (InitFNTCache.c)
 *     bServicingStackModifiedFonts @ 0x140115E98 (bServicingStackModifiedFonts.c)
 *     EngCloseFNTCache @ 0x140302DE4 (EngCloseFNTCache.c)
 *     EngFntCacheFault @ 0x140302EF0 (EngFntCacheFault.c)
 * Callees:
 *     bSetRegDWORDValue @ 0x1402105B4 (bSetRegDWORDValue.c)
 */

_BOOL8 __fastcall bSetFntCacheReg(unsigned int a1, __int64 a2)
{
  int v2; // edi
  __int64 v3; // rbx
  __int64 SessionState; // rax

  v2 = a2;
  v3 = a1;
  SessionState = W32GetSessionState(a1, a2);
  return bSetRegDWORDValue(*(HANDLE *)(*(_QWORD *)(SessionState + 96) + 19616LL), off_14034CF70[v3], v2);
}
