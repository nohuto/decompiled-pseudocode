/*
 * XREFs of DxgkModifyVSyncWaiterInternal @ 0x1401AB5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x140014B30 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x140014BE0 (-IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001BDFC (--1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x14001BF28 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z @ 0x14001DD60 (--0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x140023190 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?VidSchControlVSyncAdapter@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_VSYNC_REASON_ADAPTER@@EI@Z @ 0x140052A6C (-VidSchControlVSyncAdapter@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_VSYNC_REASON_ADAPTE.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?EnableVSyncEventSignaling@REMOTE_VSYNC@@QEAAJXZ @ 0x1401EE0F8 (-EnableVSyncEventSignaling@REMOTE_VSYNC@@QEAAJXZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x140288C10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x14028D460 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x14032A060 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x14032AC0C (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 */

__int64 __fastcall DxgkModifyVSyncWaiterInternal(unsigned int a1, unsigned int a2, char a3)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v7; // r15
  unsigned int v8; // ebx
  struct DXGADAPTER *v9; // r14
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  DXGGLOBAL *Global; // rax
  REMOTE_VSYNC *v13; // rcx
  int PairingAdapters; // eax
  __int64 v15; // r12
  struct DXGADAPTER *v16; // rdi
  struct DXGADAPTER *v17; // rbx
  int v18; // r14d
  __int64 v19; // r8
  __int64 v20; // r12
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rdx
  ADAPTER_DISPLAY *v26; // rcx
  struct DXGADAPTER *v28; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGADAPTER *v29; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGADAPTER *v30; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v31; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v32; // [rsp+70h] [rbp-90h] BYREF
  DXGADAPTER *v33[2]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v34[56]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v35[144]; // [rsp+C0h] [rbp-40h] BYREF

  v4 = a2;
  v5 = a1;
  if ( !KeAreApcsDisabled() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7981;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"KeAreApcsDisabled()", 7981LL, 0LL, 0LL, 0LL, 0LL);
  }
  Current = DXGPROCESS::GetCurrent();
  v7 = Current;
  if ( Current )
  {
    v30 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v33, v5, Current, &v30, 1);
    v9 = v30;
    if ( !v30 )
    {
      v10 = v5;
      v8 = -1073741811;
      WdLogSingleEntry2(3LL, v10, -1073741811LL);
      WdLogGlobalForLineNumber = 7997;
LABEL_46:
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v33, v11);
      return v8;
    }
    if ( (unsigned int)DxgIsRemoteSessionUsingXddmMonitors() )
    {
      if ( a3 )
      {
        if ( *((_BYTE *)v9 + 209)
          && (Global = DXGGLOBAL::GetGlobal(), *((_DWORD *)DXGGLOBAL::GetSessionData(Global) + 4742)) )
        {
          v13 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal() + 1048);
        }
        else
        {
          v13 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal() + 992);
        }
        v8 = REMOTE_VSYNC::EnableVSyncEventSignaling(v13);
      }
      else
      {
        v8 = 0;
      }
      goto LABEL_46;
    }
    v29 = 0LL;
    v28 = 0LL;
    v32 = 0LL;
    v31 = 0LL;
    PairingAdapters = DxgkpGetPairingAdapters(v9, v4, &v29, &v32, &v28, &v31, 0);
    v15 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      WdLogSingleEntry3(2LL, v9, v4, PairingAdapters);
      WdLogGlobalForLineNumber = 8036;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x (Status 0x%I64x)!",
        (__int64)v9,
        v4,
        v15,
        0LL,
        0LL);
      v8 = v15;
      goto LABEL_46;
    }
    v16 = v29;
    v17 = v28;
    if ( !v29 || !v28 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 8040;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"(pRenderAdapter != nullptr) && (pDisplayAdapter != nullptr)",
        8040LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v35, v16, v17);
    DXGADAPTER::ReleaseReference(v16);
    DXGADAPTER::ReleaseReference(v17);
    if ( *((_DWORD *)v17 + 40) == 1 )
    {
      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::DXGPAIREDADAPTERSTOPRESETLOCKSHARED(
        (DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v34,
        v16,
        v17);
      if ( *((_DWORD *)v16 + 50) != 1 || *((_DWORD *)v28 + 50) != 1 )
      {
        DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v34);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v35);
        v8 = -1073741130;
        goto LABEL_46;
      }
      v17 = v28;
      if ( (unsigned int)v4 >= *(_DWORD *)(*((_QWORD *)v28 + 390) + 96LL) )
      {
        v8 = -1073741811;
        WdLogSingleEntry2(3LL, v4, -1073741811LL);
        WdLogGlobalForLineNumber = 8063;
        DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v34);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v35);
        goto LABEL_46;
      }
      if ( !DXGADAPTER::IsVSyncAvailable(v28, v4) )
      {
        DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v34);
LABEL_27:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v35);
        v8 = -1071775738;
        goto LABEL_46;
      }
      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v34);
      v16 = v29;
    }
    v18 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v35, 0LL);
    if ( v18 >= 0 )
    {
      if ( !*((_QWORD *)v16 + 391) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 8079;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"pRenderAdapter->IsRenderAdapter()",
          8079LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( !*((_QWORD *)v17 + 390) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 8080;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"pDisplayAdapter->IsDisplayAdapter()",
          8080LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( !DXGADAPTER::IsVSyncAvailable(v17, v4) )
        goto LABEL_27;
      if ( *((_QWORD *)v17 + 391) )
      {
        if ( v17 != v16 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 8089;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"pDisplayAdapter == pRenderAdapter",
            8089LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v20 = *((_QWORD *)v16 + 391);
        if ( a3 )
        {
          DXGADAPTER::IncrementVSyncWaiter(v16, v4);
          WdLogSingleEntry2(4LL, v17, v7);
          v21 = *(_QWORD *)(v20 + 736);
          v22 = *(_QWORD *)(v20 + 744);
          WdLogGlobalForLineNumber = 8096;
          if ( (int)VIDSCH_EXPORT::VidSchControlVSyncAdapter(v21, v22, 1LL, 1, v4) < 0 )
          {
            DXGADAPTER::DecrementVSyncWaiter(v16, v4, v23);
            goto LABEL_27;
          }
        }
        else
        {
          DXGADAPTER::DecrementVSyncWaiter(v16, v4, v19);
          WdLogSingleEntry2(4LL, v17, v7);
          v24 = *(_QWORD *)(v20 + 736);
          v25 = *(_QWORD *)(v20 + 744);
          WdLogGlobalForLineNumber = 8111;
          v18 = VIDSCH_EXPORT::VidSchControlVSyncAdapter(v24, v25, 1LL, 0, v4);
        }
      }
      else if ( a3 )
      {
        WdLogSingleEntry2(4LL, v17, v7);
        v26 = (ADAPTER_DISPLAY *)*((_QWORD *)v17 + 390);
        WdLogGlobalForLineNumber = 8124;
        ADAPTER_DISPLAY::ControlVSyncAdapter(v26, v4);
      }
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v35);
    v8 = v18;
    goto LABEL_46;
  }
  v8 = -1073741811;
  WdLogSingleEntry1(2LL, -1073741811LL);
  WdLogGlobalForLineNumber = 7986;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"Invalid process context, returning 0x%I64x",
    -1073741811LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return v8;
}
