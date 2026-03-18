/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@ZPEBU2@PEBU3@II@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z23IIP6AJPEAV3@423II@Z@Z @ 0x1402D2354
 * Callers:
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1402929F8 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
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
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14000EEA0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x1402B8DC8 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1402D3B30 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1402D4830 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 */

__int64 __fastcall OutputDuplThunks<long (OUTPUTDUPL_MGR::*)(_DXGKARG_SETPOINTERPOSITION const *,_DXGKARG_SETPOINTERSHAPE const *,unsigned int,unsigned int),_DXGKARG_SETPOINTERPOSITION const *,_DXGKARG_SETPOINTERSHAPE const *,unsigned int,unsigned int>::RunForAdapter(
        struct DXGADAPTER *this,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 (__fastcall *a9)(struct OUTPUTDUPL_MGR *, __int64 (__usercall *)@<rax>(OUTPUTDUPL_MGR *__hidden this@<rcx>, const struct _DXGKARG_SETPOINTERPOSITION *@<rdx>, const struct _DXGKARG_SETPOINTERSHAPE *@<r8>, unsigned int@<r9d>, unsigned int), __int64, __int64, int, int))
{
  __int64 v10; // rbx
  int IsRemoteSessionUsingXddmMonitors; // eax
  DXGADAPTER *v12; // r13
  char v13; // r12
  __int64 v14; // rax
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rdi
  __int64 v16; // r14
  __int64 v17; // rdi
  DXGADAPTER *v18; // r14
  int v19; // ebx
  __int64 result; // rax
  __int64 v21; // rbx
  struct DXGGLOBAL *Global; // rax
  int IndirectDisplayPairedAdapter; // eax
  DXGADAPTER *v24[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v25; // [rsp+60h] [rbp-A0h]
  DXGADAPTER *v26; // [rsp+68h] [rbp-98h]
  int v27; // [rsp+70h] [rbp-90h]
  _BYTE v28[8]; // [rsp+78h] [rbp-88h] BYREF
  DXGADAPTER *v29; // [rsp+80h] [rbp-80h]
  char v30; // [rsp+88h] [rbp-78h]
  __int64 v31; // [rsp+90h] [rbp-70h]
  __int64 v32; // [rsp+98h] [rbp-68h]
  __int64 (__fastcall *v33)(struct OUTPUTDUPL_MGR *, __int64 (__usercall *)@<rax>(OUTPUTDUPL_MGR *__hidden@<rcx>, const struct _DXGKARG_SETPOINTERPOSITION *@<rdx>, const struct _DXGKARG_SETPOINTERSHAPE *@<r8>, unsigned int@<r9d>, unsigned int), __int64, __int64, int, int); // [rsp+A0h] [rbp-60h]
  _BYTE v34[24]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v35[144]; // [rsp+C0h] [rbp-40h] BYREF

  v32 = a5;
  v31 = a6;
  v10 = a3;
  v33 = a9;
  v25 = a3;
  IsRemoteSessionUsingXddmMonitors = DxgIsRemoteSessionUsingXddmMonitors();
  v26 = 0LL;
  v12 = 0LL;
  v27 = IsRemoteSessionUsingXddmMonitors;
  if ( !this || IsRemoteSessionUsingXddmMonitors )
  {
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
    if ( RemoteOutputDuplMgr )
    {
LABEL_42:
      v13 = 0;
LABEL_17:
      v29 = v12;
      v18 = v12;
      v30 = 0;
      if ( v13 )
      {
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v28);
        v18 = v29;
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v35, v12, 0LL);
      if ( !this
        || v27
        || (DXGADAPTER::ReleaseReference(v26),
            DXGADAPTER::ReleaseReference(v12),
            v19 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v35, 0LL),
            v19 >= 0) )
      {
        if ( v25 < *((_DWORD *)RemoteOutputDuplMgr + 19) )
        {
          v19 = v33(RemoteOutputDuplMgr, OUTPUTDUPL_MGR::ProcessPointerShapeChange, v32, v31, a7, a8);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v35);
          if ( v30 )
          {
            _InterlockedDecrement((volatile signed __int32 *)v18 + 38);
            ExReleasePushLockSharedEx((char *)v18 + 136, 0LL);
            KeLeaveCriticalRegion();
            DXGADAPTER::ReleaseReference(v29);
          }
          return (unsigned int)v19;
        }
        v21 = v25;
        WdLogSingleEntry1(2LL, v25);
        WdLogGlobalForLineNumber = 126;
        DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Invalid source ID 0x%I64x", v21, 0LL, 0LL, 0LL, 0LL);
        v19 = -1071774972;
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v35);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v28);
      return (unsigned int)v19;
    }
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
  else
  {
    v24[0] = 0LL;
    v13 = 1;
    v14 = *((_QWORD *)this + 390);
    if ( v14 )
    {
      if ( (unsigned int)v10 >= *(_DWORD *)(v14 + 96) )
      {
        LODWORD(v16) = -1073741811;
        WdLogSingleEntry2(2LL, v10, -1073741811LL);
        WdLogGlobalForLineNumber = 8885;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Invalid VidPnSourceId (0x%I64x) specified, returning 0x%I64x",
          v10,
          -1073741811LL,
          0LL,
          0LL,
          0LL);
      }
      else
      {
        _InterlockedAdd64((volatile signed __int64 *)this + 3, 1uLL);
        if ( *((_QWORD *)this + 391) )
        {
          v24[0] = this;
          _InterlockedAdd64((volatile signed __int64 *)this + 3, 1uLL);
          v24[1] = (DXGADAPTER *)-1LL;
LABEL_7:
          v12 = this;
          v26 = v24[0];
          v24[0] = 0LL;
          if ( !v26 )
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
LABEL_16:
          if ( v12 )
            goto LABEL_17;
          goto LABEL_42;
        }
        if ( (*((_DWORD *)this + 111) & 0x100) != 0 )
        {
          IndirectDisplayPairedAdapter = DxgkpGetIndirectDisplayPairedAdapter(this, 0, v24);
          v16 = IndirectDisplayPairedAdapter;
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
            v16,
            0LL,
            0LL,
            0LL);
          if ( v24[0] )
            DXGADAPTER::ReleaseReference(v24[0]);
          v24[0] = 0LL;
        }
        else
        {
          DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v34);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v34);
          Global = DXGGLOBAL::GetGlobal();
          DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v24, *((struct DXGADAPTER **)Global + 125));
          if ( v24[0] )
          {
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v34);
            goto LABEL_7;
          }
          LODWORD(v16) = -1073741637;
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
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v34);
          if ( v24[0] )
            DXGADAPTER::ReleaseReference(v24[0]);
          v24[0] = 0LL;
        }
        DXGADAPTER::ReleaseReference(this);
      }
    }
    else
    {
      LODWORD(v16) = -1073741637;
      WdLogSingleEntry2(4LL, this, -1073741637LL);
      WdLogGlobalForLineNumber = 8898;
    }
    v17 = v25;
    WdLogSingleEntry3(2LL, this, v25, (int)v16);
    WdLogGlobalForLineNumber = 3183;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x (Status 0x%I64x)!",
      (__int64)this,
      v17,
      (int)v16,
      0LL,
      0LL);
    RemoteOutputDuplMgr = 0LL;
    if ( (int)v16 >= 0 )
      goto LABEL_16;
    WdLogSingleEntry2(3LL, this, (int)v16);
    result = (unsigned int)v16;
    WdLogGlobalForLineNumber = 75;
  }
  return result;
}
