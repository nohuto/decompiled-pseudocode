/*
 * XREFs of ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1402FACA0
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x14018E474 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x14018FAF8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1401CF2E0 (-IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z.c)
 *     ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1401E7064 (-MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ.c)
 *     ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1401FA6BC (-DestroySession@DXGSESSIONMGR@@QEAAXXZ.c)
 *     ?GetPairedRenderAdapterInRemoteSession@DXGSESSIONMGR@@QEAA?AU_LUID@@K@Z @ 0x1401FAE54 (-GetPairedRenderAdapterInRemoteSession@DXGSESSIONMGR@@QEAA-AU_LUID@@K@Z.c)
 *     ?SetPairedRenderAdapterInRemoteSession@DXGSESSIONMGR@@QEAAXKPEAVDXGADAPTER@@@Z @ 0x1401FC0CC (-SetPairedRenderAdapterInRemoteSession@DXGSESSIONMGR@@QEAAXKPEAVDXGADAPTER@@@Z.c)
 *     DxgkAcquireGdiViewIds @ 0x1401FCA8C (DxgkAcquireGdiViewIds.c)
 *     DxgkCommitGdiViewIds @ 0x1401FCC64 (DxgkCommitGdiViewIds.c)
 *     DxgkReleaseGdiViewId @ 0x1401FD0EC (DxgkReleaseGdiViewId.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 */

struct DXGSESSIONDATA *__fastcall DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
        DXGSESSIONMGR *this,
        unsigned int a2)
{
  __int64 v3; // rsi
  bool v4; // zf
  struct _KTHREAD **v5; // rcx
  struct _KTHREAD **v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r9d
  int *v10; // rbx
  __int64 v11; // rdi
  struct _KTHREAD **v13; // [rsp+50h] [rbp-18h] BYREF
  char v14; // [rsp+58h] [rbp-10h]

  v3 = a2;
  v4 = (DXGSESSIONMGR *)((char *)this + 88) == 0LL;
  v5 = (struct _KTHREAD **)((char *)this + 88);
  v14 = 0;
  v13 = v5;
  if ( v4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 637;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_pMutex != NULL", 637LL, 0LL, 0LL, 0LL, 0LL);
    v5 = v13;
  }
  if ( v5[3] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 644;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 644LL, 0LL, 0LL, 0LL, 0LL);
  }
  v6 = v13;
  KeEnterCriticalRegion();
  if ( v6[3] == KeGetCurrentThread() )
  {
    if ( *((int *)v6 + 8) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 519;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 519LL, 0LL, 0LL, 0LL, 0LL);
    }
    ++*((_DWORD *)v6 + 8);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v6 + 1, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v9 = *((_DWORD *)v6 + 9);
        if ( v9 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventBlockThread, v8, v9);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v6 + 2);
      ExAcquirePushLockExclusiveEx(v6 + 1, 0LL);
    }
    if ( v6[3] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 545;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"NULL == m_OwningThread", 545LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *((_DWORD *)v6 + 8) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 546;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"0 == m_OwnerAcquireCount", 546LL, 0LL, 0LL, 0LL, 0LL);
    }
    v6[3] = KeGetCurrentThread();
    *((_DWORD *)v6 + 8) = 1;
  }
  v14 = 1;
  if ( (unsigned int)v3 >= *((_DWORD *)this + 20) )
  {
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v13);
    return 0LL;
  }
  else
  {
    v10 = (int *)v13;
    v11 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v3);
    v14 = 0;
    if ( v13[3] != KeGetCurrentThread() )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v13, 0LL, 0LL);
      WdLogGlobalForLineNumber = 568;
    }
    if ( v10[8] <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 571;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 571LL, 0LL, 0LL, 0LL, 0LL);
    }
    v4 = v10[8]-- == 1;
    if ( v4 )
    {
      *((_QWORD *)v10 + 3) = 0LL;
      ExReleasePushLockExclusiveEx(v10 + 2, 0LL);
    }
    KeLeaveCriticalRegion();
    return (struct DXGSESSIONDATA *)v11;
  }
}
