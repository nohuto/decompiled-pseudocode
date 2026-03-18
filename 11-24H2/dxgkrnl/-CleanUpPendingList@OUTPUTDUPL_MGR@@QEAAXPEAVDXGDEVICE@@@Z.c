/*
 * XREFs of ?CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1403356F4
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

void __fastcall OUTPUTDUPL_MGR::CleanUpPendingList(struct _KTHREAD **this, struct DXGDEVICE *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  struct _KTHREAD *v6; // r14
  struct _KTHREAD *v7; // rdi
  struct _KTHREAD *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int i; // esi
  __int64 v13; // rcx
  struct _KTHREAD **v14; // rax
  struct _KTHREAD **RemoteOutputDuplMgr; // rax
  char v16[8]; // [rsp+50h] [rbp-38h] BYREF
  char *v17; // [rsp+58h] [rbp-30h]
  int v18; // [rsp+60h] [rbp-28h]

  if ( *this )
  {
    v4 = *((_QWORD *)*this + 2);
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
  if ( *this )
  {
    v5 = *((_QWORD *)*this + 2);
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
  v17 = (char *)(this + 3);
  if ( this != (struct _KTHREAD **)-24LL && this[4] == KeGetCurrentThread() )
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
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 3));
  v6 = (struct _KTHREAD *)(this + 7);
  v18 = 2;
  v7 = this[7];
  while ( v7 != v6 )
  {
    v8 = v7;
    v7 = *(struct _KTHREAD **)v7;
    if ( a2 )
    {
      if ( a2 == OUTPUTDUPL_CONTEXT::GetProducerDevice(v8) )
      {
        for ( i = 0; i < *((_DWORD *)v8 + 10); ++i )
          DXGDXGIKEYEDMUTEX::CloseFromDevice(*((DXGDXGIKEYEDMUTEX **)v8 + i + 6), v9, v10, v11);
      }
    }
    if ( !OUTPUTDUPL_CONTEXT::GetProducerDevice(v8) )
    {
      v13 = *(_QWORD *)v8;
      if ( *(struct _KTHREAD **)(*(_QWORD *)v8 + 8LL) != v8
        || (v14 = (struct _KTHREAD **)*((_QWORD *)v8 + 1), *v14 != v8) )
      {
        __fastfail(3u);
      }
      *v14 = (struct _KTHREAD *)v13;
      *(_QWORD *)(v13 + 8) = v14;
      OUTPUTDUPL_CONTEXT::`scalar deleting destructor'(v8);
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16);
  RemoteOutputDuplMgr = (struct _KTHREAD **)FindRemoteOutputDuplMgr();
  if ( RemoteOutputDuplMgr )
    OUTPUTDUPL_MGR::ProcessPendingDestroy(RemoteOutputDuplMgr, a2, 0);
}
