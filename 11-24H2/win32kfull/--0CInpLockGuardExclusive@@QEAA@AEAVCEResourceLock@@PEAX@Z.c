/*
 * XREFs of ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x14027A054
 * Callers:
 *     ?DelegateCapturePointersMitOn@@YAHIPEAI0@Z @ 0x1400A5FD8 (-DelegateCapturePointersMitOn@@YAHIPEAI0@Z.c)
 *     ?_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1400A6290 (-_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 *     xxxRealInternalGetMessage @ 0x140107DFC (xxxRealInternalGetMessage.c)
 *     ?_HandleShellHandwritingDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1401EACDC (-_HandleShellHandwritingDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 * Callees:
 *     <none>
 */

CInpLockGuardExclusive *__fastcall CInpLockGuardExclusive::CInpLockGuardExclusive(
        CInpLockGuardExclusive *this,
        PERESOURCE *a2,
        void *a3)
{
  *(_QWORD *)this = 0LL;
  *((_BYTE *)this + 32) = 0;
  *((_QWORD *)this + 5) = a2;
  ExEnterCriticalRegionAndAcquireResourceExclusive(*a2);
  CRefUnRefPointerMsgId::ReferenceAndThreadLock(this);
  return this;
}
