/*
 * XREFs of ?PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z @ 0x1C01CDD8C
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01D4A80 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x1C00B9720 (-ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00B9790 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00E3A96 (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C00E4A0E (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C01B52A4 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C01B537C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C01CD15C (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ApiSetEditionPointerParentNotify @ 0x1C0207028 (ApiSetEditionPointerParentNotify.c)
 */

void __fastcall CTouchProcessor::PointerParentNotify(struct _KTHREAD **this, struct CInputDest *a2, void **a3)
{
  __int64 v6; // r9
  void *v7; // r8
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  _OWORD v17[7]; // [rsp+28h] [rbp-99h] BYREF
  _BYTE v18[40]; // [rsp+98h] [rbp-29h] BYREF
  CInpLockGuard *v19; // [rsp+C0h] [rbp-1h]
  _BYTE v20[64]; // [rsp+C8h] [rbp+7h] BYREF

  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12466);
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)a3) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12470);
  if ( (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval((CPointerInfoNode *)a3, gptiCurrent) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12471);
  CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v20, a2);
  CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
    (CInpUnlockGuardExclusive *)v18,
    (struct CInpLockGuard *)(this + 4),
    a3[2],
    v6);
  v7 = a3[2];
  v8 = *((_OWORD *)a2 + 1);
  v17[0] = *(_OWORD *)a2;
  v9 = *((_OWORD *)a2 + 2);
  v17[1] = v8;
  v10 = *((_OWORD *)a2 + 3);
  v17[2] = v9;
  v11 = *((_OWORD *)a2 + 4);
  v17[3] = v10;
  v12 = *((_OWORD *)a2 + 5);
  v17[4] = v11;
  v13 = *((_OWORD *)a2 + 6);
  v17[5] = v12;
  v17[6] = v13;
  ApiSetEditionPointerParentNotify(v17, a3, v7);
  CInpLockGuard::LockExclusive(v19);
  CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v18, v14, v15, v16);
  CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v20);
}
