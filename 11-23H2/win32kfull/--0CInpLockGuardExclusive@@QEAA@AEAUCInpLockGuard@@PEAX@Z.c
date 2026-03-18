/*
 * XREFs of ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00156E0
 * Callers:
 *     ?_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1C0015650 (-_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 *     xxxRealInternalGetMessage @ 0x1C01287E0 (xxxRealInternalGetMessage.c)
 *     ?_HandleShellHandwritingDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1C01B5AA4 (-_HandleShellHandwritingDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 *     ?DelegateCapturePointersMitOn@@YAHIPEAI0@Z @ 0x1C01CB598 (-DelegateCapturePointersMitOn@@YAHIPEAI0@Z.c)
 * Callees:
 *     <none>
 */

CInpLockGuardExclusive *__fastcall CInpLockGuardExclusive::CInpLockGuardExclusive(
        CInpLockGuardExclusive *this,
        struct CInpLockGuard *a2,
        void *a3)
{
  *(_QWORD *)this = 0LL;
  *((_BYTE *)this + 32) = 0;
  *((_QWORD *)this + 5) = a2;
  CInpLockGuard::LockExclusive(a2);
  CRefUnRefPointerMsgId::ReferenceAndThreadLock(this);
  return this;
}
