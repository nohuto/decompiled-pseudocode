/*
 * XREFs of ?ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x1400C29C0
 * Callers:
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F6318 (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F6360 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F63B8 (--0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 * Callees:
 *     ?ReferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1400C2A4C (-ReferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 */

void __fastcall CRefUnRefPointerMsgId::ReferenceAndThreadLock(CRefUnRefPointerMsgId *this)
{
  __int64 v1; // rbx
  __int64 UserSessionState; // rax
  _QWORD *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 *CurrentThreadNonPaged; // rax

  v1 = 0LL;
  if ( *(_QWORD *)this && !*((_BYTE *)this + 32) )
  {
    *((_BYTE *)this + 32) = 1;
    UserSessionState = W32GetUserSessionState(this);
    CTouchProcessor::ReferenceMsgDataFromGuard(*(_QWORD *)(UserSessionState + 3264), *(_QWORD *)this);
    v4 = (_QWORD *)((char *)this + 8);
    v5 = *(_QWORD *)this;
    CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(v6);
    if ( CurrentThreadNonPaged )
      v1 = *CurrentThreadNonPaged;
    *v4 = *(_QWORD *)(v1 + 384);
    *(_QWORD *)(v1 + 384) = v4;
    v4[2] = CRefUnRefPointerMsgId::UnReferenceOnThreadTermination;
    v4[1] = v5;
  }
}
