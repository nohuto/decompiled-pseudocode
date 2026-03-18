/*
 * XREFs of DxgkModifyVSyncWaiterInternal @ 0x1401ADA80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000C81C (--1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x14000C948 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z @ 0x14000E780 (--0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x140011930 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1400119E0 (-IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x140023980 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?VidSchControlVSyncAdapter@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_VSYNC_REASON_ADAPTER@@EI@Z @ 0x14005271C (-VidSchControlVSyncAdapter@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_VSYNC_REASON_ADAPTE.c)
 *     Feature_VSyncWaiterUnderflow__private_IsEnabledDeviceUsageNoInline @ 0x14006B558 (Feature_VSyncWaiterUnderflow__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?EnableVSyncEventSignaling@REMOTE_VSYNC@@QEAAJXZ @ 0x1401F3A9C (-EnableVSyncEventSignaling@REMOTE_VSYNC@@QEAAJXZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402951D0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1402D3B30 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x14030C710 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x14030D2BC (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 */

__int64 __fastcall DxgkModifyVSyncWaiterInternal(unsigned int a1, unsigned int a2, char a3)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  struct _KTHREAD **Current; // rax
  struct _KTHREAD **v7; // r15
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
  __int64 v20; // r13
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rdx
  ADAPTER_DISPLAY *v26; // rcx
  struct DXGADAPTER *v29; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGADAPTER *v30; // [rsp+60h] [rbp-A0h] BYREF
  struct DXGADAPTER *v31; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v32; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v33; // [rsp+78h] [rbp-88h] BYREF
  DXGADAPTER *v34[2]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v35[64]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v36[144]; // [rsp+D0h] [rbp-30h] BYREF

  v4 = a2;
  v5 = a1;
  if ( !KeAreApcsDisabled() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8026;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"KeAreApcsDisabled()", 8026LL, 0LL, 0LL, 0LL, 0LL);
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v7 = Current;
  if ( Current )
  {
    v31 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v34, v5, Current, &v31, 1);
    v9 = v31;
    if ( !v31 )
    {
      v10 = v5;
      v8 = -1073741811;
      WdLogSingleEntry2(3LL, v10, -1073741811LL);
      WdLogGlobalForLineNumber = 8042;
LABEL_51:
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v34, v11);
      return v8;
    }
    if ( !(unsigned int)Feature_VSyncWaiterUnderflow__private_IsEnabledDeviceUsageNoInline()
      && (unsigned int)DxgIsRemoteSessionUsingXddmMonitors() )
    {
      if ( a3 )
      {
        if ( *((_BYTE *)v9 + 209)
          && (Global = DXGGLOBAL::GetGlobal(), *((_DWORD *)DXGGLOBAL::GetSessionData(Global) + 4742)) )
        {
          v13 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal() + 1080);
        }
        else
        {
          v13 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal() + 1024);
        }
        v8 = REMOTE_VSYNC::EnableVSyncEventSignaling(v13);
      }
      else
      {
        v8 = 0;
      }
      goto LABEL_51;
    }
    v30 = 0LL;
    v29 = 0LL;
    v33 = 0LL;
    v32 = 0LL;
    PairingAdapters = DxgkpGetPairingAdapters(v9, v4, &v30, &v33, &v29, &v32, 0);
    v15 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      WdLogSingleEntry3(2LL, v9, v4, PairingAdapters);
      WdLogGlobalForLineNumber = 8085;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x (Status 0x%I64x)!",
        (__int64)v9,
        v4,
        v15,
        0LL,
        0LL);
      v8 = v15;
      goto LABEL_51;
    }
    v16 = v30;
    v17 = v29;
    if ( !v30 || !v29 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 8089;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"(pRenderAdapter != nullptr) && (pDisplayAdapter != nullptr)",
        8089LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v36, v16, v17);
    DXGADAPTER::ReleaseReference(v16);
    DXGADAPTER::ReleaseReference(v17);
    if ( *((_DWORD *)v17 + 40) == 1 )
    {
      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::DXGPAIREDADAPTERSTOPRESETLOCKSHARED(
        (DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v35,
        v16,
        v17);
      if ( *((_DWORD *)v16 + 50) != 1 || *((_DWORD *)v29 + 50) != 1 )
      {
        DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v35);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v36);
        v8 = -1073741130;
        goto LABEL_51;
      }
      v17 = v29;
      if ( (unsigned int)v4 >= *(_DWORD *)(*((_QWORD *)v29 + 390) + 96LL) )
      {
        v8 = -1073741811;
        WdLogSingleEntry2(3LL, v4, -1073741811LL);
        WdLogGlobalForLineNumber = 8112;
        DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v35);
LABEL_26:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v36);
        goto LABEL_51;
      }
      if ( !DXGADAPTER::IsVSyncAvailable(v29, v4) )
      {
        DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v35);
LABEL_29:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v36);
        v8 = -1071775738;
        goto LABEL_51;
      }
      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v35);
      v16 = v30;
    }
    v18 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v36, 0LL);
    if ( v18 >= 0 )
    {
      if ( !*((_QWORD *)v16 + 391) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 8128;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"pRenderAdapter->IsRenderAdapter()",
          8128LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( !*((_QWORD *)v17 + 390) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 8129;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"pDisplayAdapter->IsDisplayAdapter()",
          8129LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( !DXGADAPTER::IsVSyncAvailable(v17, v4) )
        goto LABEL_29;
      if ( (unsigned int)Feature_VSyncWaiterUnderflow__private_IsEnabledDeviceUsageNoInline()
        && (unsigned int)v4 >= *(_DWORD *)(*((_QWORD *)v17 + 390) + 96LL) )
      {
        v8 = -1073741811;
        WdLogSingleEntry2(3LL, v4, -1073741811LL);
        WdLogGlobalForLineNumber = 8143;
        goto LABEL_26;
      }
      if ( *((_QWORD *)v17 + 391) )
      {
        if ( v17 != v16 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 8150;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"pDisplayAdapter == pRenderAdapter",
            8150LL,
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
          WdLogGlobalForLineNumber = 8157;
          if ( (int)VIDSCH_EXPORT::VidSchControlVSyncAdapter(v21, v22, 1LL, 1, v4) < 0 )
          {
            DXGADAPTER::DecrementVSyncWaiter(v16, v4, v23);
            goto LABEL_29;
          }
        }
        else
        {
          DXGADAPTER::DecrementVSyncWaiter(v16, v4, v19);
          WdLogSingleEntry2(4LL, v17, v7);
          v24 = *(_QWORD *)(v20 + 736);
          v25 = *(_QWORD *)(v20 + 744);
          WdLogGlobalForLineNumber = 8172;
          v18 = VIDSCH_EXPORT::VidSchControlVSyncAdapter(v24, v25, 1LL, 0, v4);
        }
      }
      else if ( a3 )
      {
        WdLogSingleEntry2(4LL, v17, v7);
        v26 = (ADAPTER_DISPLAY *)*((_QWORD *)v17 + 390);
        WdLogGlobalForLineNumber = 8185;
        ADAPTER_DISPLAY::ControlVSyncAdapter(v26, v4);
      }
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v36);
    v8 = v18;
    goto LABEL_51;
  }
  v8 = -1073741811;
  WdLogSingleEntry1(2LL, -1073741811LL);
  WdLogGlobalForLineNumber = 8031;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Invalid process context, returning 0x%I64x",
    -1073741811LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return v8;
}
