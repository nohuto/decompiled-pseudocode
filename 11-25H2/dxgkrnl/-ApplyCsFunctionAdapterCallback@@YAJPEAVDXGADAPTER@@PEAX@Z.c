/*
 * XREFs of ?ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1402EC610
 * Callers:
 *     ?ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1402EC3C4 (-ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?SetCsStartRunningTime@DXGPROCESS@@QEAAXI_K@Z @ 0x14004F1E0 (-SetCsStartRunningTime@DXGPROCESS@@QEAAXI_K@Z.c)
 *     ?GetCsStartRunningTime@DXGPROCESS@@QEBA_KI@Z @ 0x14005107C (-GetCsStartRunningTime@DXGPROCESS@@QEBA_KI@Z.c)
 *     ?CollectRunningTime@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@PEA_K@Z @ 0x1402EC82C (-CollectRunningTime@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@PEA_K@Z.c)
 *     ?EnableCoreDripsBlockerAccountingForProcess@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1402ECA28 (-EnableCoreDripsBlockerAccountingForProcess@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z.c)
 *     ?AddGPUTimeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@0@Z @ 0x140406F70 (-AddGPUTimeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@0@Z.c)
 */

__int64 __fastcall ApplyCsFunctionAdapterCallback(struct DXGADAPTER *this, int *a2)
{
  struct _EPROCESS **v2; // rbx
  __int64 v4; // rbp
  volatile signed __int32 *v5; // r14
  int v6; // eax
  unsigned int v7; // esi
  struct ADAPTER_RENDER *v8; // rdx
  int v9; // eax
  unsigned __int64 CsStartRunningTime; // rax
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // r14
  DXGGLOBAL *Global; // rax
  bool v15; // r9
  DXGGLOBAL *v16; // rax
  _QWORD v17[2]; // [rsp+50h] [rbp-38h] BYREF
  char v18; // [rsp+60h] [rbp-28h]
  unsigned __int64 v19; // [rsp+90h] [rbp+8h] BYREF

  v2 = *(struct _EPROCESS ***)a2;
  v4 = a2[2];
  v17[1] = this;
  _InterlockedIncrement64((volatile signed __int64 *)this + 3);
  v17[0] = -1LL;
  v5 = (volatile signed __int32 *)((char *)this + 136);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v5, 0LL);
  _InterlockedIncrement(v5 + 4);
  v6 = *((_DWORD *)this + 50);
  v18 = 1;
  if ( v6 != 1 )
    goto LABEL_11;
  v7 = *((_DWORD *)this + 60);
  if ( v7 >= 6 )
    goto LABEL_11;
  v8 = (struct ADAPTER_RENDER *)*((_QWORD *)this + 391);
  v19 = 0LL;
  v9 = DXGPROCESS::CollectRunningTime((DXGPROCESS *)v2, v8, &v19);
  if ( v9 >= 0 )
  {
    if ( (_DWORD)v4 == 1 )
    {
      DXGPROCESS::SetCsStartRunningTime((DXGPROCESS *)v2, v7, v19);
      *((_DWORD *)v2 + 20) = 1;
      Global = DXGGLOBAL::GetGlobal();
      v15 = 1;
    }
    else
    {
      if ( (_DWORD)v4 != 2 )
      {
        WdLogSingleEntry1(2LL, v4);
        WdLogGlobalForLineNumber = 5457;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"ApplyCsFunctionAdapterCallback:: Unsupported fn Type: %d",
          v4,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_11;
      }
      CsStartRunningTime = DXGPROCESS::GetCsStartRunningTime((DXGPROCESS *)v2, v7);
      v12 = v19;
      v13 = CsStartRunningTime;
      if ( v19 > CsStartRunningTime && *((_DWORD *)v2 + 20) )
      {
        v16 = DXGGLOBAL::GetGlobal();
        DXGGLOBAL::AddGPUTimeCoreDripsBlockerTracking(v16, *((_QWORD *)this + 29), v2[7], v12 - v13);
      }
      DXGPROCESS::SetCsStartRunningTime((DXGPROCESS *)v2, v7, 0LL);
      *((_DWORD *)v2 + 20) = 0;
      Global = DXGGLOBAL::GetGlobal();
      v15 = 0;
    }
    DXGGLOBAL::EnableCoreDripsBlockerAccountingForProcess(Global, *((_QWORD *)this + 29), v2[7], v15);
LABEL_11:
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v17);
    return 0LL;
  }
  WdLogSingleEntry4(3LL, v4, v2, this, v9);
  WdLogGlobalForLineNumber = 5430;
  _InterlockedDecrement(v5 + 4);
  ExReleasePushLockSharedEx(v5, 0LL);
  KeLeaveCriticalRegion();
  DXGADAPTER::ReleaseReference(this);
  return 0LL;
}
