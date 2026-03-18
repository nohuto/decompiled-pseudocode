/*
 * XREFs of ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x1C006E4C4
 * Callers:
 *     NtUserQueryWindow @ 0x1C006E2B0 (NtUserQueryWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00AC0AC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     EditionHandleHungWindow @ 0x1C01555E0 (EditionHandleHungWindow.c)
 *     NtUserShellMigrateWindow @ 0x1C01DD400 (NtUserShellMigrateWindow.c)
 *     NtUserShellSetWindowPos @ 0x1C01DD7E0 (NtUserShellSetWindowPos.c)
 *     ?ProcessHungWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F33B8 (-ProcessHungWindow@@YAXPEAUtagWND@@@Z.c)
 *     ?ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C01F3588 (-ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z @ 0x1C01F4878 (-xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z.c)
 *     PsW32ScreenSaver_Show @ 0x1C02000E0 (PsW32ScreenSaver_Show.c)
 * Callees:
 *     ?IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z @ 0x1C003AABC (-IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z.c)
 *     ?IsPumpingInputMsgs@@YA_NPEBUtagWND@@@Z @ 0x1C006E504 (-IsPumpingInputMsgs@@YA_NPEBUtagWND@@@Z.c)
 */

bool __fastcall IsHungWindow(const struct tagTHREADINFO **a1)
{
  return IsThreadHungTimeCheck(a1[2], gdwHungAppTimeout) || !IsPumpingInputMsgs((const struct tagWND *)a1);
}
