/*
 * XREFs of ?ForwardInertiaFrameToManipulationThread@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C01C2D80
 * Callers:
 *     ?RouteSyntheticTouchpadToMT@CInertiaManager@@QEBAXIUtagPOINT@@0_K@Z @ 0x1C01E2098 (-RouteSyntheticTouchpadToMT@CInertiaManager@@QEBAXIUtagPOINT@@0_K@Z.c)
 * Callees:
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00B9740 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z @ 0x1C01B9658 (--0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x1C01C2DE0 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTE.c)
 */

void __fastcall CTouchProcessor::ForwardInertiaFrameToManipulationThread(const struct CPointerInputFrame *a1)
{
  __int64 v1; // rbx
  CInpLockGuard *v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)a1;
  CInpLockGuardShared::CInpLockGuardShared(
    (CInpLockGuardShared *)&v3,
    (struct CInpLockGuard *)(*(_QWORD *)a1 + 32LL),
    1);
  CTouchProcessor::ForwardInputToManipulationThread(v1, a1, 2LL);
  if ( !v4 )
    CInpLockGuard::UnLock(v3);
}
