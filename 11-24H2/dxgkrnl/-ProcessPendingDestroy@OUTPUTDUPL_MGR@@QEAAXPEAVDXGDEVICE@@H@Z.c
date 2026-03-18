/*
 * XREFs of ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x14028F454
 * Callers:
 *     _lambda_d4bbb312c60d17faf4ca5c1aba8d94c2_::_lambda_invoker_cdecl_ @ 0x1401E4010 (_lambda_d4bbb312c60d17faf4ca5c1aba8d94c2_--_lambda_invoker_cdecl_.c)
 *     ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x14028F0B8 (-ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     _lambda_a196522e28cbefec8f1ebe5a826d98cf_::_lambda_invoker_cdecl_ @ 0x140306110 (_lambda_a196522e28cbefec8f1ebe5a826d98cf_--_lambda_invoker_cdecl_.c)
 *     ?CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1403356F4 (-CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1403B1388 (-ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT@@QEAAJU_LUID@@@Z @ 0x1403F1670 (-UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT@@QEAAJU_LUID@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z @ 0x140076E30 (--_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1401E44AC (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ @ 0x1403E4C7C (-GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ.c)
 */

void __fastcall OUTPUTDUPL_MGR::ProcessPendingDestroy(struct _KTHREAD **this, struct DXGDEVICE *a2, int a3)
{
  struct _KTHREAD *v4; // rcx
  __int64 v7; // rcx
  struct _KTHREAD *v8; // r14
  struct _KTHREAD *v9; // rdi
  struct _KTHREAD *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 i; // rsi
  __int64 v15; // rcx
  struct _KTHREAD **v16; // rax
  char v17[8]; // [rsp+50h] [rbp-38h] BYREF
  char *v18; // [rsp+58h] [rbp-30h]
  int v19; // [rsp+60h] [rbp-28h]

  v4 = *this;
  if ( v4 )
  {
    v7 = *((_QWORD *)v4 + 2);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v7 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v7 + 168)) )
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
  v18 = (char *)(this + 3);
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
  v8 = (struct _KTHREAD *)(this + 7);
  v19 = 2;
  v9 = this[7];
  while ( v9 != v8 )
  {
    v10 = v9;
    v9 = *(struct _KTHREAD **)v9;
    if ( a2 )
    {
      if ( a2 == OUTPUTDUPL_CONTEXT::GetProducerDevice(v10) )
      {
        for ( i = 0LL; (unsigned int)i < *((_DWORD *)v10 + 10); i = (unsigned int)(i + 1) )
          DXGDXGIKEYEDMUTEX::CloseFromDevice(*((DXGDXGIKEYEDMUTEX **)v10 + i + 6), v11, v12, v13);
      }
    }
    if ( a3 || !OUTPUTDUPL_CONTEXT::GetProducerDevice(v10) )
    {
      v15 = *(_QWORD *)v10;
      if ( *(struct _KTHREAD **)(*(_QWORD *)v10 + 8LL) != v10
        || (v16 = (struct _KTHREAD **)*((_QWORD *)v10 + 1), *v16 != v10) )
      {
        __fastfail(3u);
      }
      *v16 = (struct _KTHREAD *)v15;
      *(_QWORD *)(v15 + 8) = v16;
      OUTPUTDUPL_CONTEXT::`scalar deleting destructor'(v10);
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17);
}
