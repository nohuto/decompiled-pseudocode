/*
 * XREFs of ?SendAsyncSGHOSTINFO@@YAHQEAU_GHOSTINFO@@@Z @ 0x1C01F341C
 * Callers:
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F3794 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?_RegisterErrorReportingDialog@@YAHPEAUtagWND@@K@Z @ 0x1C01F38A0 (-_RegisterErrorReportingDialog@@YAHPEAUtagWND@@K@Z.c)
 * Callees:
 *     DwmAsyncSignalGhost @ 0x1C026D248 (DwmAsyncSignalGhost.c)
 */

_BOOL8 __fastcall SendAsyncSGHOSTINFO(struct _GHOSTINFO *const a1, __int64 a2)
{
  void *v2; // rax

  v2 = (void *)ReferenceDwmApiPort(a1, a2);
  return (int)DwmAsyncSignalGhost(v2) >= 0;
}
