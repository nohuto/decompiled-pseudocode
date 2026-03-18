/*
 * XREFs of ?ForwardInertiaFrameToManipulationThread@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z @ 0x14019C9C0
 * Callers:
 *     ?RouteSyntheticTouchpadToMT@CInertiaManager@@QEBAXIUtagPOINT@@0_K@Z @ 0x14015971C (-RouteSyntheticTouchpadToMT@CInertiaManager@@QEBAXIUtagPOINT@@0_K@Z.c)
 * Callees:
 *     ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1400B7840 (-UnLockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x140183BB0 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTE.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x14019CA14 (--0CInpLockGuardShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 */

void __fastcall CTouchProcessor::ForwardInertiaFrameToManipulationThread(const struct CPointerInputFrame *a1)
{
  __int64 v1; // rbx
  tagDomLock *v3; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)a1;
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v3, (struct CEResourceLock *)(*(_QWORD *)a1 + 32LL));
  CTouchProcessor::ForwardInputToManipulationThread(v1, (__int64)a1, 2);
  if ( !v4 )
    tagDomLock::UnLockExclusive((PERESOURCE *)v3);
}
