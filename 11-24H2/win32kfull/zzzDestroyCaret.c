/*
 * XREFs of zzzDestroyCaret @ 0x140094F8C
 * Callers:
 *     ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x14008A638 (-xxxMoveFocusAway@@YAXPEBUtagWND@@@Z.c)
 *     NtUserDestroyCaret @ 0x140094F50 (NtUserDestroyCaret.c)
 * Callees:
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x140095308 (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     zzzInternalDestroyCaret @ 0x140095744 (zzzInternalDestroyCaret.c)
 */

__int64 zzzDestroyCaret()
{
  if ( !(unsigned int)UT_CaretSet(0LL) )
    return 0LL;
  zzzInternalDestroyCaret();
  return 1LL;
}
