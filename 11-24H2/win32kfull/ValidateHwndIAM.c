/*
 * XREFs of ValidateHwndIAM @ 0x1400F5AA4
 * Callers:
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1400F5A44 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     NtUserSetBridgeWindowChild @ 0x14029C7B0 (NtUserSetBridgeWindowChild.c)
 *     NtUserShellMigrateWindow @ 0x14029FD10 (NtUserShellMigrateWindow.c)
 *     NtUserShellSetWindowPos @ 0x1402A01F0 (NtUserShellSetWindowPos.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1CDisableILCheckAuto@@QEAA@XZ @ 0x140061790 (--1CDisableILCheckAuto@@QEAA@XZ.c)
 *     ??0CDisableILCheckAuto@@QEAA@XZ @ 0x1400617A8 (--0CDisableILCheckAuto@@QEAA@XZ.c)
 *     IAMThreadAccessGranted @ 0x1400F5BC0 (IAMThreadAccessGranted.c)
 */

__int64 __fastcall ValidateHwndIAM(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rbx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = PtiCurrent(a1, a2);
  if ( !(unsigned int)IAMThreadAccessGranted(v3) )
    return ValidateHwnd(a1);
  CDisableILCheckAuto::CDisableILCheckAuto((CDisableILCheckAuto *)v7, v4);
  v5 = ValidateHwnd(a1);
  CDisableILCheckAuto::~CDisableILCheckAuto((CDisableILCheckAuto *)v7);
  return v5;
}
