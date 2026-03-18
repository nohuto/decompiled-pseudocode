/*
 * XREFs of ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1400A63D0
 * Callers:
 *     ?DelegateCapturePointersMitOn@@YAHIPEAI0@Z @ 0x1400A5FD8 (-DelegateCapturePointersMitOn@@YAHIPEAI0@Z.c)
 *     ?_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1400A6290 (-_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 *     xxxRealInternalGetMessage @ 0x140107DFC (xxxRealInternalGetMessage.c)
 *     ?_HandleShellHandwritingDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1401EACDC (-_HandleShellHandwritingDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CInpLockGuardExclusive::~CInpLockGuardExclusive(PERESOURCE **this)
{
  CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)this);
  ExReleaseResourceAndLeaveCriticalRegion(*this[5]);
}
