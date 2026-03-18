/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1402D3FA8
 * Callers:
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1402D5848 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x140007CCC (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14000CAD0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14000E400 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14000FBB0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x14004FB80 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x1402A4390 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x1402B8DC8 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1402D3B30 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1402D4830 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 */

__int64 __fastcall OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *>::RunForAdapter(
        struct DXGADAPTER *this,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 (__fastcall *a5)(struct OUTPUTDUPL_MGR *, __int64))
{
  __int64 v6; // r12
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v9; // rdi
  __int64 v10; // rcx
  struct DXGPROCESS *v11; // rax
  __int64 v12; // rax
  int v13; // r13d
  struct DXGADAPTER *v14; // r14
  __int64 v15; // rax
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // r12
  __int64 v17; // r15
  char v18; // al
  char v19; // di
  __int64 v20; // rbx
  __int64 result; // rax
  struct DXGGLOBAL *v22; // rax
  DXGADAPTER *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned int v26; // ebx
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  int IndirectDisplayPairedAdapter; // eax
  DXGADAPTER *v31[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v32; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v33; // [rsp+64h] [rbp-9Ch]
  DXGADAPTER *v34; // [rsp+68h] [rbp-98h]
  __int64 v35; // [rsp+70h] [rbp-90h]
  __int64 (__fastcall *v36)(struct OUTPUTDUPL_MGR *, __int64); // [rsp+78h] [rbp-88h]
  _BYTE v37[16]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v38[8]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v39[16]; // [rsp+98h] [rbp-68h] BYREF
  DXGADAPTER *v40; // [rsp+A8h] [rbp-58h]
  _BYTE v41[16]; // [rsp+D8h] [rbp-28h] BYREF
  DXGADAPTER *v42; // [rsp+E8h] [rbp-18h]
  char v43; // [rsp+F0h] [rbp-10h]
  __int64 v44; // [rsp+F8h] [rbp-8h]

  v6 = a3;
  v33 = a3;
  v36 = a5;
  v35 = a4;
  CurrentProcess = PsGetCurrentProcess(this);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v9 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess
    || (v10 = *(_DWORD *)(ProcessDxgProcess + 408) >> 7, (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) != 0) )
  {
    Current = DXGTHREAD::GetCurrent();
    if ( Current )
    {
      v11 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
      if ( v11 )
        goto LABEL_4;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v11 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
      if ( v11 )
        goto LABEL_4;
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 2926;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2926LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v11 = v9;
  if ( !v9 )
  {
LABEL_6:
    v13 = 0;
    goto LABEL_7;
  }
LABEL_4:
  v12 = *((_QWORD *)v11 + 11);
  if ( !v12 )
    goto LABEL_6;
  v32 = 0;
  if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, int *))(v12 + 240))(0LL, 0LL, &v32) )
    goto LABEL_6;
  v13 = 1;
  if ( v32 )
    goto LABEL_6;
LABEL_7:
  v34 = 0LL;
  v14 = 0LL;
  if ( !this || v13 )
  {
    if ( !(unsigned int)DxgIsRemoteSessionUsingXddmMonitors(v10) )
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
    goto LABEL_32;
  }
  v15 = *((_QWORD *)this + 390);
  v31[0] = 0LL;
  if ( v15 )
  {
    if ( (unsigned int)v6 >= *(_DWORD *)(v15 + 96) )
    {
      LODWORD(v17) = -1073741811;
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
        v31[0] = this;
        _InterlockedIncrement64((volatile signed __int64 *)this + 3);
        v31[1] = (DXGADAPTER *)-1LL;
LABEL_13:
        v14 = this;
        v34 = v31[0];
        v31[0] = 0LL;
        if ( !v34 )
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
        goto LABEL_22;
      }
      if ( (*((_DWORD *)this + 111) & 0x100) != 0 )
      {
        IndirectDisplayPairedAdapter = DxgkpGetIndirectDisplayPairedAdapter(this, 0, v31);
        v17 = IndirectDisplayPairedAdapter;
        if ( IndirectDisplayPairedAdapter >= 0 )
          goto LABEL_13;
        WdLogSingleEntry2(2LL, this, IndirectDisplayPairedAdapter);
        WdLogGlobalForLineNumber = 8927;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to get the paired render adapter for indirect display adapter 0x%I64x, (Status = 0x%I64x).",
          (__int64)this,
          v17,
          0LL,
          0LL,
          0LL);
        if ( v31[0] )
          DXGADAPTER::ReleaseReference(v31[0]);
        v31[0] = 0LL;
      }
      else
      {
        DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v37);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v37);
        v22 = DXGGLOBAL::GetGlobal();
        DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v31, *((struct DXGADAPTER **)v22 + 125));
        if ( v31[0] )
        {
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v37);
          goto LABEL_13;
        }
        LODWORD(v17) = -1073741637;
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
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v37);
        if ( v31[0] )
          DXGADAPTER::ReleaseReference(v31[0]);
        v31[0] = 0LL;
      }
      DXGADAPTER::ReleaseReference(this);
    }
  }
  else
  {
    LODWORD(v17) = -1073741637;
    WdLogSingleEntry2(4LL, this, -1073741637LL);
    WdLogGlobalForLineNumber = 8898;
  }
  v34 = 0LL;
  WdLogSingleEntry3(2LL, this, v6, (int)v17);
  WdLogGlobalForLineNumber = 3183;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x (Status 0x%I64x)!",
    (__int64)this,
    v6,
    (int)v17,
    0LL,
    0LL);
  RemoteOutputDuplMgr = 0LL;
  if ( (int)v17 < 0 )
  {
    WdLogSingleEntry2(3LL, this, (int)v17);
    result = (unsigned int)v17;
    WdLogGlobalForLineNumber = 75;
    return result;
  }
LABEL_22:
  if ( v14 )
  {
    v18 = 1;
    goto LABEL_24;
  }
LABEL_32:
  v18 = 0;
LABEL_24:
  v19 = 0;
  if ( v18 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)v14 + 3);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v14 + 136, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)v14 + 38);
    v19 = 1;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v38, v14, 0LL);
  if ( this && !v13 )
  {
    DXGADAPTER::ReleaseReference(v34);
    DXGADAPTER::ReleaseReference(v14);
    if ( v43 )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v41, 0LL, 0LL);
      WdLogGlobalForLineNumber = 7628;
    }
    v23 = v42;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v42 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v42 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventBlockThread, v25, 72);
        KeWaitForSingleObject((char *)v42 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v42, 0LL);
      v23 = v42;
    }
    v44 = 0LL;
    v43 = 1;
    if ( *((_DWORD *)v23 + 50) != 1 )
      goto LABEL_55;
    if ( v40 != v42 )
    {
      COREACCESS::AcquireShared((COREACCESS *)v39, 0LL);
      if ( *((_DWORD *)v40 + 50) != 1 )
      {
        COREACCESS::Release((COREACCESS *)v39);
LABEL_55:
        COREACCESS::Release((COREACCESS *)v41);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v38);
        if ( v19 )
        {
          _InterlockedDecrement((volatile signed __int32 *)v14 + 38);
          ExReleasePushLockSharedEx((char *)v14 + 136, 0LL);
          KeLeaveCriticalRegion();
          DXGADAPTER::ReleaseReference(v14);
        }
        return 3221226166LL;
      }
    }
    v38[1] = 1;
  }
  if ( v33 < *((_DWORD *)RemoteOutputDuplMgr + 19) )
  {
    v26 = v36(RemoteOutputDuplMgr, v35);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v38);
    if ( v19 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v14 + 38);
      ExReleasePushLockSharedEx((char *)v14 + 136, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTER::ReleaseReference(v14);
    }
    return v26;
  }
  else
  {
    v20 = v33;
    WdLogSingleEntry1(2LL, v33);
    WdLogGlobalForLineNumber = 126;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Invalid source ID 0x%I64x", v20, 0LL, 0LL, 0LL, 0LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v38);
    if ( v19 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v14 + 38);
      ExReleasePushLockSharedEx((char *)v14 + 136, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTER::ReleaseReference(v14);
    }
    return 3223192324LL;
  }
}
