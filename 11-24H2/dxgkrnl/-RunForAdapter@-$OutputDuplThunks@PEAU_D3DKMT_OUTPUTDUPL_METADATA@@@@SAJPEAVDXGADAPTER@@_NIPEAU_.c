/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPL_METADATA@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1402D4CD0
 * Callers:
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_METADATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1403A4B50 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_META.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x140007CCC (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14000CAD0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x1402B8DC8 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1402D3B30 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1402D4830 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 */

__int64 __fastcall OutputDuplThunks<_D3DKMT_OUTPUTDUPL_METADATA *>::RunForAdapter(
        struct DXGADAPTER *this,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 (__fastcall *a5)(struct OUTPUTDUPL_MGR *, __int64))
{
  __int64 v6; // rbx
  int IsRemoteSessionUsingXddmMonitors; // eax
  __int64 v8; // rcx
  struct DXGADAPTER *v9; // r14
  __int64 v10; // rax
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rdi
  __int64 v12; // r15
  __int64 v13; // rdi
  char v14; // al
  char v15; // r15
  int v16; // r8d
  unsigned int v17; // ebx
  __int64 result; // rax
  struct DXGGLOBAL *Global; // rax
  int v20; // esi
  __int64 v21; // rbx
  int IndirectDisplayPairedAdapter; // eax
  DXGADAPTER *v23[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v24; // [rsp+60h] [rbp-A0h]
  DXGADAPTER *v25; // [rsp+68h] [rbp-98h]
  int v26; // [rsp+70h] [rbp-90h]
  __int64 v27; // [rsp+78h] [rbp-88h]
  __int64 (__fastcall *v28)(struct OUTPUTDUPL_MGR *, __int64); // [rsp+80h] [rbp-80h]
  _BYTE v29[24]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v30[144]; // [rsp+A0h] [rbp-60h] BYREF

  v6 = a3;
  v24 = a3;
  v28 = a5;
  v27 = a4;
  IsRemoteSessionUsingXddmMonitors = DxgIsRemoteSessionUsingXddmMonitors((__int64)this);
  v25 = 0LL;
  v9 = 0LL;
  v26 = IsRemoteSessionUsingXddmMonitors;
  if ( !this || IsRemoteSessionUsingXddmMonitors )
  {
    if ( !(unsigned int)DxgIsRemoteSessionUsingXddmMonitors(v8) )
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
      return 3221226021LL;
    }
    goto LABEL_25;
  }
  v23[0] = 0LL;
  v10 = *((_QWORD *)this + 390);
  if ( v10 )
  {
    if ( (unsigned int)v6 >= *(_DWORD *)(v10 + 96) )
    {
      LODWORD(v12) = -1073741811;
      WdLogSingleEntry2(2LL, v6, -1073741811LL);
      WdLogGlobalForLineNumber = 8885;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Invalid VidPnSourceId (0x%I64x) specified, returning 0x%I64x",
        v6,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      _InterlockedIncrement64((volatile signed __int64 *)this + 3);
      if ( *((_QWORD *)this + 391) )
      {
        v23[0] = this;
        _InterlockedIncrement64((volatile signed __int64 *)this + 3);
        v23[1] = (DXGADAPTER *)-1LL;
LABEL_7:
        v9 = this;
        v25 = v23[0];
        v23[0] = 0LL;
        if ( !v25 )
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
        goto LABEL_16;
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
        DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v29);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
        Global = DXGGLOBAL::GetGlobal();
        DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v23, *((struct DXGADAPTER **)Global + 125));
        if ( v23[0] )
        {
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v29);
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
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v29);
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
  RemoteOutputDuplMgr = 0LL;
  if ( (int)v12 < 0 )
  {
    WdLogSingleEntry2(3LL, this, (int)v12);
    result = (unsigned int)v12;
    WdLogGlobalForLineNumber = 75;
    return result;
  }
LABEL_16:
  if ( !v9 )
  {
LABEL_25:
    v14 = 0;
    goto LABEL_18;
  }
  v14 = 1;
LABEL_18:
  v15 = 0;
  if ( v14 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)v9 + 3);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v9 + 136, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)v9 + 38);
    v15 = 1;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v30, v9, 0LL);
  if ( this
    && v26 == v16
    && (DXGADAPTER::ReleaseReference(v25),
        DXGADAPTER::ReleaseReference(v9),
        v20 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v30, 0LL),
        v20 < 0) )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30);
    if ( v15 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v9 + 38);
      ExReleasePushLockSharedEx((char *)v9 + 136, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTER::ReleaseReference(v9);
    }
    return (unsigned int)v20;
  }
  else if ( v24 >= *((_DWORD *)RemoteOutputDuplMgr + 19) )
  {
    v21 = v24;
    WdLogSingleEntry1(2LL, v24);
    WdLogGlobalForLineNumber = 126;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Invalid source ID 0x%I64x", v21, 0LL, 0LL, 0LL, 0LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30);
    if ( v15 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v9 + 38);
      ExReleasePushLockSharedEx((char *)v9 + 136, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTER::ReleaseReference(v9);
    }
    return 3223192324LL;
  }
  else
  {
    v17 = v28(RemoteOutputDuplMgr, v27);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30);
    if ( v15 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v9 + 38);
      ExReleasePushLockSharedEx((char *)v9 + 136, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTER::ReleaseReference(v9);
    }
    return v17;
  }
}
