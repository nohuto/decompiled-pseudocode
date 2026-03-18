/*
 * XREFs of ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x1400BA380
 * Callers:
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1400C38DC (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1400C47E4 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1400D3998 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 * Callees:
 *     ?UnreferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1400BA3DC (-UnreferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 */

void __fastcall CRefUnRefPointerMsgId::ThreadUnlockAndUnReference(CRefUnRefPointerMsgId *this)
{
  __int64 v1; // rbx
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v4; // rcx
  __int64 UserSessionState; // rax

  v1 = 0LL;
  if ( *((_BYTE *)this + 32) )
  {
    CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(this);
    if ( CurrentThreadNonPaged )
      v1 = *CurrentThreadNonPaged;
    *(_QWORD *)(v1 + 384) = *((_QWORD *)this + 1);
    UserSessionState = W32GetUserSessionState(v4);
    CTouchProcessor::UnreferenceMsgDataFromGuard(*(_QWORD *)(UserSessionState + 3264), *(_QWORD *)this);
  }
}
