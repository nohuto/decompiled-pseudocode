/*
 * XREFs of ?PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z @ 0x1402022B8
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x140205FD0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1400967F8 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1400C38DC (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1400C3C74 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8564 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ApiSetEditionPointerParentNotify @ 0x140192BA8 (ApiSetEditionPointerParentNotify.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1401F32F4 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F63B8 (--0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1402019E0 (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 */

void __fastcall CTouchProcessor::PointerParentNotify(PERESOURCE *this, struct CInputDest *a2, void **a3)
{
  struct CEResourceLock *v3; // rsi
  __int64 v6; // rcx
  struct tagTHREADINFO *v7; // rax
  __int64 v8; // r8
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  _OWORD v15[7]; // [rsp+28h] [rbp-99h] BYREF
  PERESOURCE *v16[6]; // [rsp+98h] [rbp-29h] BYREF
  _BYTE v17[64]; // [rsp+C8h] [rbp+7h] BYREF

  v3 = (struct CEResourceLock *)(this + 4);
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12573);
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)a3) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12577);
  v7 = PtiCurrent(v6);
  if ( (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval((CPointerInfoNode *)a3, v7) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12578);
  CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v17, a2);
  CInpUnlockGuardExclusive::CInpUnlockGuardExclusive((CInpUnlockGuardExclusive *)v16, v3, a3[2]);
  v8 = (__int64)a3[2];
  v9 = *((_OWORD *)a2 + 1);
  v15[0] = *(_OWORD *)a2;
  v10 = *((_OWORD *)a2 + 2);
  v15[1] = v9;
  v11 = *((_OWORD *)a2 + 3);
  v15[2] = v10;
  v12 = *((_OWORD *)a2 + 4);
  v15[3] = v11;
  v13 = *((_OWORD *)a2 + 5);
  v15[4] = v12;
  v14 = *((_OWORD *)a2 + 6);
  v15[5] = v13;
  v15[6] = v14;
  ApiSetEditionPointerParentNotify(v15, (__int64)a3, v8);
  CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v16);
  CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v17);
}
