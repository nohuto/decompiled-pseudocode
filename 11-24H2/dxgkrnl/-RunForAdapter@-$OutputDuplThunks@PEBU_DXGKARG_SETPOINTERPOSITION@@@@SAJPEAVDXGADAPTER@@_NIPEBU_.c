/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@PEBU_DXGKARG_SETPOINTERPOSITION@@@@SAJPEAVDXGADAPTER@@_NIPEBU_DXGKARG_SETPOINTERPOSITION@@P8OUTPUTDUPL_MGR@@EAAX2@Z@Z @ 0x1402D295C
 * Callers:
 *     ?SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x140297470 (-SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPO.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x140007CCC (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14000CAD0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14000E400 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14000FBB0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x1402A4390 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x1402B8DC8 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1402D3B30 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_b9a5656a752cedcbf1444dc35c6078d9_@@CA@PEAVOUTPUTDUPL_MGR@@P82@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z1@Z @ 0x1402D3C74 (-_lambda_invoker_cdecl_@_lambda_b9a5656a752cedcbf1444dc35c6078d9_@@CA@PEAVOUTPUTDUPL_MGR@@P82@EA.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1402D4830 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 */

__int64 __fastcall OutputDuplThunks<_DXGKARG_SETPOINTERPOSITION const *>::RunForAdapter(
        struct DXGADAPTER *this,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v4; // rbx
  int IsRemoteSessionUsingXddmMonitors; // eax
  DXGADAPTER *v7; // r14
  struct DXGADAPTER *v8; // r15
  __int64 v9; // rax
  char v10; // bl
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rdi
  __int64 v12; // r14
  __int64 v13; // rdi
  char v14; // al
  DXGADAPTER *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  char *v18; // rcx
  __int64 v20; // rbx
  struct DXGGLOBAL *Global; // rax
  int IndirectDisplayPairedAdapter; // eax
  DXGADAPTER *v23[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v24; // [rsp+60h] [rbp-A0h]
  int v25; // [rsp+64h] [rbp-9Ch]
  __int64 v26; // [rsp+70h] [rbp-90h] BYREF
  DXGADAPTER *v27; // [rsp+78h] [rbp-88h]
  char v28; // [rsp+80h] [rbp-80h]
  __int64 v29; // [rsp+88h] [rbp-78h]
  _BYTE v30[16]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v31[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v32[16]; // [rsp+A8h] [rbp-58h] BYREF
  DXGADAPTER *v33; // [rsp+B8h] [rbp-48h]
  _BYTE v34[16]; // [rsp+E8h] [rbp-18h] BYREF
  DXGADAPTER *v35; // [rsp+F8h] [rbp-8h]
  char v36; // [rsp+100h] [rbp+0h]
  __int64 v37; // [rsp+108h] [rbp+8h]

  v4 = a3;
  v24 = a3;
  v29 = a4;
  IsRemoteSessionUsingXddmMonitors = DxgIsRemoteSessionUsingXddmMonitors();
  v7 = 0LL;
  v25 = IsRemoteSessionUsingXddmMonitors;
  v8 = 0LL;
  if ( !this || IsRemoteSessionUsingXddmMonitors )
  {
    v10 = 0;
    if ( !(unsigned int)DxgIsRemoteSessionUsingXddmMonitors() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 82;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"DxgIsRemoteSessionUsingXddmMonitors()",
        82LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
    if ( !RemoteOutputDuplMgr )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 88;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to find remote output duplication manager",
        88LL,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v12) = -1073741275;
      return (unsigned int)v12;
    }
    goto LABEL_57;
  }
  v23[0] = 0LL;
  v9 = *((_QWORD *)this + 390);
  if ( v9 )
  {
    if ( (unsigned int)v4 >= *(_DWORD *)(v9 + 96) )
    {
      LODWORD(v12) = -1073741811;
      WdLogSingleEntry2(2LL, v4, -1073741811LL);
      WdLogGlobalForLineNumber = 8885;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Invalid VidPnSourceId (0x%I64x) specified, returning 0x%I64x",
        v4,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      _InterlockedIncrement64((volatile signed __int64 *)this + 3);
      v10 = 0;
      if ( *((_QWORD *)this + 391) )
      {
        v23[0] = this;
        _InterlockedIncrement64((volatile signed __int64 *)this + 3);
        v23[1] = (DXGADAPTER *)-1LL;
LABEL_7:
        v7 = v23[0];
        v8 = this;
        v23[0] = 0LL;
        if ( !v7 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3188;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"(!o_ppRenderAdapter || *o_ppRenderAdapter != NULL) && (!o_ppDisplayAdapter || *o_ppDisplayAdapter != NULL)",
            3188LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        RemoteOutputDuplMgr = *(struct OUTPUTDUPL_MGR **)(*((_QWORD *)this + 390) + 120LL);
        goto LABEL_17;
      }
      if ( (*((_DWORD *)this + 111) & 0x100) != 0 )
      {
        IndirectDisplayPairedAdapter = DxgkpGetIndirectDisplayPairedAdapter(this, 0, v23);
        v12 = IndirectDisplayPairedAdapter;
        if ( IndirectDisplayPairedAdapter >= 0 )
          goto LABEL_7;
        WdLogSingleEntry2(2LL, this, IndirectDisplayPairedAdapter);
        WdLogGlobalForLineNumber = 8927;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to get the paired render adapter for indirect display adapter 0x%I64x, (Status = 0x%I64x).",
          (__int64)this,
          v12,
          0LL,
          0LL,
          0LL);
        if ( v23[0] )
          DXGADAPTER::ReleaseReference(v23[0]);
        v23[0] = 0LL;
      }
      else
      {
        DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v30);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
        Global = DXGGLOBAL::GetGlobal();
        DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v23, *((struct DXGADAPTER **)Global + 125));
        if ( v23[0] )
        {
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v30);
          goto LABEL_7;
        }
        LODWORD(v12) = -1073741637;
        WdLogSingleEntry2(2LL, this, -1073741637LL);
        WdLogGlobalForLineNumber = 8941;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"WARP render only adapter is not ready to be used with display only adapter 0x%I64x, returning 0x%I64x.",
          (__int64)this,
          -1073741637LL,
          0LL,
          0LL,
          0LL);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v30);
        if ( v23[0] )
          DXGADAPTER::ReleaseReference(v23[0]);
        v23[0] = 0LL;
      }
      DXGADAPTER::ReleaseReference(this);
    }
  }
  else
  {
    LODWORD(v12) = -1073741637;
    WdLogSingleEntry2(4LL, this, -1073741637LL);
    WdLogGlobalForLineNumber = 8898;
  }
  v13 = v24;
  WdLogSingleEntry3(2LL, this, v24, (int)v12);
  WdLogGlobalForLineNumber = 3183;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x (Status 0x%I64x)!",
    (__int64)this,
    v13,
    (int)v12,
    0LL,
    0LL);
  v10 = 0;
  RemoteOutputDuplMgr = 0LL;
  if ( (int)v12 < 0 )
  {
    WdLogSingleEntry2(3LL, this, (int)v12);
    WdLogGlobalForLineNumber = 75;
    return (unsigned int)v12;
  }
  v7 = 0LL;
LABEL_17:
  if ( !v8 )
  {
LABEL_57:
    v14 = 0;
    goto LABEL_19;
  }
  v14 = 1;
LABEL_19:
  v27 = v8;
  v28 = 0;
  if ( v14 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)v8 + 3);
    v26 = -1LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v8 + 136, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)v8 + 38);
    v10 = 1;
    v28 = 1;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v31, v8, 0LL);
  if ( this )
  {
    this = 0LL;
    if ( !v25 )
    {
      DXGADAPTER::ReleaseReference(v7);
      DXGADAPTER::ReleaseReference(v8);
      if ( v36 )
      {
        WdLogSingleEntry5(0LL, 275LL, 4LL, v34, 0LL, 0LL);
        WdLogGlobalForLineNumber = 7628;
      }
      v15 = v35;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v35 + 23) )
      {
        if ( !KeReadStateEvent((PRKEVENT)v35 + 2) )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventBlockThread, v17, 72);
          KeWaitForSingleObject((char *)v35 + 48, Executive, 0, 0, 0LL);
        }
        DXGADAPTER::AcquireCoreResourceShared(v35, 0LL);
        v15 = v35;
      }
      v37 = 0LL;
      v36 = 1;
      if ( *((_DWORD *)v15 + 50) != 1 )
        goto LABEL_43;
      if ( v33 != v35 )
      {
        COREACCESS::AcquireShared((COREACCESS *)v32, 0LL);
        if ( *((_DWORD *)v33 + 50) != 1 )
        {
          COREACCESS::Release((COREACCESS *)v32);
LABEL_43:
          COREACCESS::Release((COREACCESS *)v34);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v31);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v26);
          LODWORD(v12) = -1073741130;
          return (unsigned int)v12;
        }
      }
      v10 = v28;
      v31[1] = 1;
    }
  }
  if ( v24 >= *((_DWORD *)RemoteOutputDuplMgr + 19) )
  {
    v20 = v24;
    WdLogSingleEntry1(2LL, v24);
    WdLogGlobalForLineNumber = 126;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid source ID 0x%I64x",
      v20,
      (__int64)this,
      (__int64)this,
      (__int64)this,
      (__int64)this);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v31);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v26);
    LODWORD(v12) = -1071774972;
  }
  else
  {
    LODWORD(v12) = _lambda_b9a5656a752cedcbf1444dc35c6078d9_::_lambda_invoker_cdecl_(
                     RemoteOutputDuplMgr,
                     OUTPUTDUPL_MGR::ProcessPointerPositionChange,
                     v29);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v31);
    if ( v10 )
    {
      v18 = (char *)v27 + 136;
      _InterlockedDecrement((volatile signed __int32 *)v27 + 38);
      ExReleasePushLockSharedEx(v18, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTER::ReleaseReference(v27);
    }
  }
  return (unsigned int)v12;
}
