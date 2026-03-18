/*
 * XREFs of _lambda_a196522e28cbefec8f1ebe5a826d98cf_::_lambda_invoker_cdecl_ @ 0x140306110
 * Callers:
 *     OutputDuplCleanUpPendingList @ 0x140305E44 (OutputDuplCleanUpPendingList.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z @ 0x140076E30 (--_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1401E44AC (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x14028F454 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1402D4830 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ @ 0x1403E4C7C (-GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ.c)
 */

__int64 __fastcall lambda_a196522e28cbefec8f1ebe5a826d98cf_::_lambda_invoker_cdecl_(__int64 a1, struct DXGDEVICE *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  _QWORD *v6; // r14
  _QWORD *v7; // rdi
  _QWORD *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int i; // esi
  __int64 v13; // rcx
  _QWORD *v14; // rax
  struct _KTHREAD **RemoteOutputDuplMgr; // rax
  _BYTE v17[8]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v18; // [rsp+58h] [rbp-30h]
  int v19; // [rsp+60h] [rbp-28h]

  if ( *(_QWORD *)a1 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v4 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v4 + 168)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1469;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"(m_pDisplayCore == NULL) || (m_pDisplayCore->IsCoreResourceSharedOwner())",
        1469LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  if ( *(_QWORD *)a1 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v5 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v5 + 168)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2331;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"(m_pDisplayCore == NULL) || (m_pDisplayCore->IsCoreResourceSharedOwner())",
        2331LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  v18 = a1 + 24;
  if ( a1 != -24 && *(struct _KTHREAD **)(a1 + 32) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1512;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1512LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(a1 + 24));
  v6 = (_QWORD *)(a1 + 56);
  v19 = 2;
  v7 = *(_QWORD **)(a1 + 56);
  while ( v7 != v6 )
  {
    v8 = v7;
    v7 = (_QWORD *)*v7;
    if ( a2 )
    {
      if ( a2 == OUTPUTDUPL_CONTEXT::GetProducerDevice((OUTPUTDUPL_CONTEXT *)v8) )
      {
        for ( i = 0; i < *((_DWORD *)v8 + 10); ++i )
          DXGDXGIKEYEDMUTEX::CloseFromDevice((DXGDXGIKEYEDMUTEX *)v8[i + 6], v9, v10, v11);
      }
    }
    if ( !OUTPUTDUPL_CONTEXT::GetProducerDevice((OUTPUTDUPL_CONTEXT *)v8) )
    {
      v13 = *v8;
      if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v14 = (_QWORD *)v8[1], (_QWORD *)*v14 != v8) )
        __fastfail(3u);
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
      OUTPUTDUPL_CONTEXT::`scalar deleting destructor'((OUTPUTDUPL_CONTEXT *)v8);
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17);
  RemoteOutputDuplMgr = (struct _KTHREAD **)FindRemoteOutputDuplMgr();
  if ( RemoteOutputDuplMgr )
    OUTPUTDUPL_MGR::ProcessPendingDestroy(RemoteOutputDuplMgr, a2, 0);
  return 0LL;
}
