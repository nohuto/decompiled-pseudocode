/*
 * XREFs of ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1403037B0
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x14018C23C (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x14018D7A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1401CA050 (-IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z.c)
 *     ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1401E1E34 (-MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ.c)
 *     ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1401F3E70 (-DestroySession@DXGSESSIONMGR@@QEAAXXZ.c)
 *     ?GetPairedRenderAdapterInRemoteSession@DXGSESSIONMGR@@QEAA?AU_LUID@@K@Z @ 0x1401F460C (-GetPairedRenderAdapterInRemoteSession@DXGSESSIONMGR@@QEAA-AU_LUID@@K@Z.c)
 *     ?SetPairedRenderAdapterInRemoteSession@DXGSESSIONMGR@@QEAAXKPEAVDXGADAPTER@@@Z @ 0x1401F586C (-SetPairedRenderAdapterInRemoteSession@DXGSESSIONMGR@@QEAAXKPEAVDXGADAPTER@@@Z.c)
 *     DxgkAcquireGdiViewIds @ 0x1401F617C (DxgkAcquireGdiViewIds.c)
 *     DxgkCommitGdiViewIds @ 0x1401F6354 (DxgkCommitGdiViewIds.c)
 *     DxgkReleaseGdiViewId @ 0x1401F67DC (DxgkReleaseGdiViewId.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 */

struct DXGSESSIONDATA *__fastcall DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
        DXGSESSIONMGR *this,
        unsigned int a2)
{
  __int64 v2; // rsi
  struct _KTHREAD **v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // r9d
  int *v8; // rbx
  __int64 v9; // rdi
  struct _KTHREAD **v12; // [rsp+50h] [rbp-18h] BYREF
  char v13; // [rsp+58h] [rbp-10h]

  v2 = a2;
  v12 = (struct _KTHREAD **)((char *)this + 88);
  v13 = 0;
  if ( this == (DXGSESSIONMGR *)-88LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 638;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pMutex != NULL", 638LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( v12[3] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 645;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 645LL, 0LL, 0LL, 0LL, 0LL);
  }
  v4 = v12;
  KeEnterCriticalRegion();
  if ( v4[3] == KeGetCurrentThread() )
  {
    if ( *((int *)v4 + 8) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 521;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 521LL, 0LL, 0LL, 0LL, 0LL);
    }
    ++*((_DWORD *)v4 + 8);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v4 + 1, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v7 = *((_DWORD *)v4 + 9);
        if ( v7 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v5, (__int64)&EventBlockThread, v6, v7);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v4 + 2);
      ExAcquirePushLockExclusiveEx(v4 + 1, 0LL);
    }
    if ( v4[3] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 547;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NULL == m_OwningThread", 547LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *((_DWORD *)v4 + 8) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 548;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"0 == m_OwnerAcquireCount", 548LL, 0LL, 0LL, 0LL, 0LL);
    }
    v4[3] = KeGetCurrentThread();
    *((_DWORD *)v4 + 8) = 1;
  }
  v13 = 1;
  if ( (unsigned int)v2 >= *((_DWORD *)this + 20) )
  {
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v12);
    return 0LL;
  }
  else
  {
    v8 = (int *)v12;
    v9 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v2);
    v13 = 0;
    if ( v12[3] != KeGetCurrentThread() )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v12, 0LL, 0LL);
      WdLogGlobalForLineNumber = 570;
    }
    if ( v8[8] <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 573;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 573LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( v8[8]-- == 1 )
    {
      *((_QWORD *)v8 + 3) = 0LL;
      ExReleasePushLockExclusiveEx(v8 + 2, 0LL);
    }
    KeLeaveCriticalRegion();
    return (struct DXGSESSIONDATA *)v9;
  }
}
