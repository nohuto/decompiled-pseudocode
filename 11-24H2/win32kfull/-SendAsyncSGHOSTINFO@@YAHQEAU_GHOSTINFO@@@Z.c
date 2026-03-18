/*
 * XREFs of ?SendAsyncSGHOSTINFO@@YAHQEAU_GHOSTINFO@@@Z @ 0x1402ACF34
 * Callers:
 *     NtUserRegisterErrorReportingDialog @ 0x14029B290 (NtUserRegisterErrorReportingDialog.c)
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1402AD010 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     DwmAsyncSignalGhost @ 0x140323EC8 (DwmAsyncSignalGhost.c)
 */

_BOOL8 __fastcall SendAsyncSGHOSTINFO(struct _GHOSTINFO *const a1, __int64 a2)
{
  void *v2; // rax

  v2 = (void *)ReferenceDwmApiPort(a1, a2);
  return (int)DwmAsyncSignalGhost(v2) >= 0;
}
