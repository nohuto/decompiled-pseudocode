/*
 * XREFs of ?GetSessionData@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402E7614
 * Callers:
 *     ?Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z @ 0x1401B3904 (-Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     ?NotifyVailSessionCallback@DXGVAILOBJECT@@SAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x140200C70 (-NotifyVailSessionCallback@DXGVAILOBJECT@@SAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z.c)
 *     NtDxgkVailPromoteCompositionSurface @ 0x140203E90 (NtDxgkVailPromoteCompositionSurface.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1402E7568 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z @ 0x1402E7A04 (-_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z.c)
 *     DxgkNotifySessionStateChange @ 0x1403E1D40 (DxgkNotifySessionStateChange.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1403ED2BC (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 */

struct DXGSESSIONDATA *__fastcall DXGSESSIONMGR::GetSessionData(DXGSESSIONMGR *this)
{
  __int64 v2; // rbx
  __int64 CurrentProcessSessionId; // r15
  struct _KTHREAD **v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // r9d
  int *v8; // rdi
  __int64 v9; // rsi
  struct _KTHREAD **v12; // [rsp+50h] [rbp-10h] BYREF
  char v13; // [rsp+58h] [rbp-8h]

  v2 = 0LL;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId();
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
      _InterlockedAdd64((volatile signed __int64 *)v4 + 2, 1uLL);
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
  if ( (unsigned int)CurrentProcessSessionId >= *((_DWORD *)this + 20) )
  {
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v12);
  }
  else
  {
    v8 = (int *)v12;
    v9 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * CurrentProcessSessionId);
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
  return (struct DXGSESSIONDATA *)v2;
}
