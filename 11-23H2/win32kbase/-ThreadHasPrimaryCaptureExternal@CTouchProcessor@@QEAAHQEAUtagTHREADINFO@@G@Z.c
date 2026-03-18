/*
 * XREFs of ?ThreadHasPrimaryCaptureExternal@CTouchProcessor@@QEAAHQEAUtagTHREADINFO@@G@Z @ 0x1C01D7940
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0057318 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00B9740 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C00E3E18 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ??0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z @ 0x1C01B9658 (--0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z.c)
 */

__int64 __fastcall CTouchProcessor::ThreadHasPrimaryCaptureExternal(
        struct _KTHREAD **this,
        struct tagTHREADINFO *const a2,
        unsigned __int16 a3)
{
  unsigned int v6; // esi
  struct CInputPointerNode *NodeById; // rax
  CInpLockGuard *v9; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+28h] [rbp-10h]

  v6 = 1;
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v9, (struct CInpLockGuard *)(this + 4), 1);
  NodeById = CTouchProcessor::FindNodeById(this, a3, 1, 0);
  if ( !NodeById
    || (*((_DWORD *)NodeById + 75) & 4) == 0
    || CInputDest::GetThreadInfo((struct CInputPointerNode *)((char *)NodeById + 72)) != a2 )
  {
    v6 = 0;
  }
  if ( !v10 )
    CInpLockGuard::UnLock(v9);
  return v6;
}
