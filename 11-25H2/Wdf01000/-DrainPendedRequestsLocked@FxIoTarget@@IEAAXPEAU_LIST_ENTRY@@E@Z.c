/*
 * XREFs of ?DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x140042DDC
 * Callers:
 *     ?GotoPurgeState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x140041790 (-GotoPurgeState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_.c)
 *     ?GotoStartState@FxIoTarget@@MEAAJPEAU_LIST_ENTRY@@E@Z @ 0x140042BF0 (-GotoStartState@FxIoTarget@@MEAAJPEAU_LIST_ENTRY@@E@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x140011A74 (WPP_IFR_SF_qq.c)
 *     ?CancelTimer@FxRequestBase@@QEAAEXZ @ 0x14001DC00 (-CancelTimer@FxRequestBase@@QEAAEXZ.c)
 *     ?ClearCompletedRequestVerifierFlags@FxIoTarget@@AEAAXPEAVFxRequestBase@@@Z @ 0x140064D68 (-ClearCompletedRequestVerifierFlags@FxIoTarget@@AEAAXPEAVFxRequestBase@@@Z.c)
 */

void __fastcall FxIoTarget::DrainPendedRequestsLocked(
        FxIoTarget *this,
        _LIST_ENTRY *RequestListHead,
        unsigned __int8 RequestWillBeResent)
{
  FxIrpQueue *p_m_PendedQueue; // r14
  bool v7; // zf
  __int64 i; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  _QWORD *v11; // rcx
  _QWORD *v12; // rcx
  unsigned __int64 _a2; // rbx
  __int64 v14; // rax
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *v16; // rbx
  unsigned __int64 v17; // rcx
  const void *_a1; // rdx

  p_m_PendedQueue = &this->m_PendedQueue;
LABEL_2:
  v7 = p_m_PendedQueue->m_Queue.Flink == (_LIST_ENTRY *)p_m_PendedQueue;
  for ( i = (__int64)&p_m_PendedQueue->m_Queue.Flink[-11].Blink; ; i = *(_QWORD *)v9 - 168LL )
  {
    if ( v7 )
      i = 0LL;
    if ( !i )
      break;
    v9 = i + 168;
    if ( _InterlockedExchange64((volatile __int64 *)(i + 104), 0LL) )
    {
      v10 = *(_QWORD *)v9;
      if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 )
        goto LABEL_14;
      v11 = *(_QWORD **)(i + 176);
      if ( *v11 != v9 )
        goto LABEL_14;
      *v11 = v10;
      *(_QWORD *)(v10 + 8) = v11;
      *(_QWORD *)(i + 176) = i + 168;
      *(_QWORD *)v9 = v9;
      --p_m_PendedQueue->m_RequestCount;
      v12 = *(_QWORD **)(i + 144);
      *(_QWORD *)(i + 144) = 0LL;
      v12[1] = v12;
      _a2 = (unsigned __int64)(v12 - 15);
      *v12 = v12;
      v14 = v12[4];
      ++*(_BYTE *)(v14 + 67);
      *(_QWORD *)(v14 + 184) += 72LL;
      *((_BYTE *)v12 + 92) &= ~2u;
      if ( !RequestWillBeResent
        || FxRequestBase::CancelTimer((FxRequestBase *)(v12 - 15))
        && _InterlockedExchangeAdd((volatile signed __int32 *)(_a2 + 208), 0xFFFFFFFF) == 1 )
      {
        FxIoTarget::ClearCompletedRequestVerifierFlags(this, (FxRequestBase *)_a2);
        Blink = RequestListHead->Blink;
        v16 = (_LIST_ENTRY *)(_a2 + 120);
        if ( Blink->Flink == RequestListHead )
        {
          v16->Flink = RequestListHead;
          v16->Blink = Blink;
          Blink->Flink = v16;
          RequestListHead->Blink = v16;
          goto LABEL_2;
        }
LABEL_14:
        __fastfail(3u);
      }
      *(_DWORD *)(*(_QWORD *)(_a2 + 152) + 48LL) = -1073741536;
      *(_BYTE *)(_a2 + 212) |= 1u;
      if ( this->m_Globals->FxVerboseOn )
      {
        v17 = _a2 ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !*(_WORD *)(_a2 + 10) )
          v17 = 0LL;
        if ( v17 )
          _a2 = v17;
        _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          _a1 = 0LL;
        WPP_IFR_SF_qq(this->m_Globals, 5u, 0xEu, 0x10u, WPP_FxIoTarget_cpp_Traceguids, _a1, (const void *)_a2);
      }
      goto LABEL_2;
    }
    v7 = *(_QWORD *)v9 == (_QWORD)p_m_PendedQueue;
  }
}
