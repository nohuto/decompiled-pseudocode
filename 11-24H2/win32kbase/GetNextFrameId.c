/*
 * XREFs of GetNextFrameId @ 0x1400D3920
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1400D3998 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F6360 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ApiSetResetLastSeenFrameId @ 0x140222544 (ApiSetResetLastSeenFrameId.c)
 */

__int64 __fastcall GetNextFrameId(__int64 a1)
{
  unsigned int *v1; // rbx
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  _BYTE v6[72]; // [rsp+20h] [rbp-48h] BYREF

  v1 = *(unsigned int **)(W32GetUserSessionState(a1) + 16728);
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v6,
    (struct CEResourceLock *)(v1 + 2),
    0LL);
  v2 = *v1;
  v3 = *v1 + 1;
  *v1 = v3;
  if ( v2 == -1 )
  {
    *v1 = 1;
    UserSessionState = W32GetUserSessionState(v3);
    ApiSetResetLastSeenFrameId(*(_QWORD *)(UserSessionState + 19200));
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded((CInpLockGuardExclusiveIfNeeded *)v6);
  return v2;
}
