/*
 * XREFs of _lambda_a196522e28cbefec8f1ebe5a826d98cf_::_lambda_invoker_cdecl_ @ 0x1402E51D0
 * Callers:
 *     OutputDuplCleanUpPendingList @ 0x1402E4F04 (OutputDuplCleanUpPendingList.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ??_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z @ 0x1400763F0 (--_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1401DF2AC (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x1402D925C (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z.c)
 *     ?GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ @ 0x1402DA4D8 (-GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1402E7568 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 */

__int64 __fastcall lambda_a196522e28cbefec8f1ebe5a826d98cf_::_lambda_invoker_cdecl_(
        struct _KTHREAD **a1,
        struct DXGDEVICE *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  _QWORD **v6; // r14
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
  struct _KTHREAD **v18; // [rsp+58h] [rbp-30h]
  int v19; // [rsp+60h] [rbp-28h]

  if ( *a1 )
  {
    v4 = *((_QWORD *)*a1 + 2);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v4 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v4 + 168)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1463;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"(m_pDisplayCore == NULL) || (m_pDisplayCore->IsCoreResourceSharedOwner())",
        1463LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  if ( *a1 )
  {
    v5 = *((_QWORD *)*a1 + 2);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v5 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v5 + 168)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2325;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"(m_pDisplayCore == NULL) || (m_pDisplayCore->IsCoreResourceSharedOwner())",
        2325LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  v18 = a1 + 3;
  if ( a1 != (struct _KTHREAD **)-24LL )
  {
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    if ( a1[4] == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1575;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
        1575LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(a1 + 3));
  v6 = (_QWORD **)(a1 + 7);
  v19 = 2;
  v7 = *v6;
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
