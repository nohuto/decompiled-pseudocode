/*
 * XREFs of ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x140148A3C
 * Callers:
 *     EditionHandleHungWindow @ 0x1401489A0 (EditionHandleHungWindow.c)
 *     ?ProcessHungWindow@@YAXPEAUtagWND@@@Z @ 0x1401489D8 (-ProcessHungWindow@@YAXPEAUtagWND@@@Z.c)
 *     ?ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x140148C3C (-ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z @ 0x140194B60 (-xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023413C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     NtUserQueryWindow @ 0x140244680 (NtUserQueryWindow.c)
 *     NtUserShellMigrateWindow @ 0x14029FD10 (NtUserShellMigrateWindow.c)
 *     NtUserShellSetWindowPos @ 0x1402A01F0 (NtUserShellSetWindowPos.c)
 *     PsW32ScreenSaver_Show @ 0x1402B5170 (PsW32ScreenSaver_Show.c)
 * Callees:
 *     ?IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z @ 0x140148A70 (-IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z.c)
 *     ?IsPumpingInputMsgs@@YA_NPEBUtagWND@@@Z @ 0x140148AA0 (-IsPumpingInputMsgs@@YA_NPEBUtagWND@@@Z.c)
 */

bool __fastcall IsHungWindow(const struct tagTHREADINFO **a1)
{
  return IsThreadHung(a1[2]) || !IsPumpingInputMsgs((const struct tagWND *)a1);
}
