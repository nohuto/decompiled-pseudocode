/*
 * XREFs of GetNextFrameId @ 0x1C00E5930
 * Callers:
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C01BE724 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 * Callees:
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C00B9418 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00B9500 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetNextFrameId(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rbx
  unsigned int v5; // edi
  struct tagDESKTOP *v6; // rbx
  CInpLockGuard *v8[9]; // [rsp+20h] [rbp-48h] BYREF

  v4 = *(_DWORD **)(SGDGetUserSessionState(a1, a2, a3, a4) + 16368);
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v8,
    (struct CInpLockGuard *)(v4 + 2),
    0LL);
  v5 = (*v4)++;
  if ( v5 == -1 )
  {
    *v4 = 1;
    v6 = grpdeskRitInput;
    if ( qword_1C0296850 )
    {
      if ( (int)qword_1C0296850() >= 0 && qword_1C0296858 )
        qword_1C0296858(v6);
    }
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v8);
  return v5;
}
