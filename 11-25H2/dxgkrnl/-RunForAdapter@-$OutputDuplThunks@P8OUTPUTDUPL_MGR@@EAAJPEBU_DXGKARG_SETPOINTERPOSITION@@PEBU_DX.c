/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@ZPEBU2@PEBU3@II@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z23IIP6AJPEAV3@423II@Z@Z @ 0x1402CD924
 * Callers:
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1402CC238 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1400172A0 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14001C0B0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14001E480 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x14028D460 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1402E7568 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x140302664 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 */

__int64 __fastcall OutputDuplThunks<long (OUTPUTDUPL_MGR::*)(_DXGKARG_SETPOINTERPOSITION const *,_DXGKARG_SETPOINTERSHAPE const *,unsigned int,unsigned int),_DXGKARG_SETPOINTERPOSITION const *,_DXGKARG_SETPOINTERSHAPE const *,unsigned int,unsigned int>::RunForAdapter(
        DXGADAPTER *this,
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
  __int64 v12; // rcx
  DXGADAPTER *v13; // r13
  char v14; // r12
  __int64 v15; // rax
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rdi
  __int64 v17; // r14
  __int64 v18; // rdi
  DXGADAPTER *v19; // r14
  int v20; // ebx
  __int64 result; // rax
  __int64 v22; // rbx
  struct DXGGLOBAL *Global; // rax
  int IndirectDisplayPairedAdapter; // eax
  DXGADAPTER *v25[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v26; // [rsp+60h] [rbp-A0h]
  DXGADAPTER *v27; // [rsp+68h] [rbp-98h]
  int v28; // [rsp+70h] [rbp-90h]
  _BYTE v29[8]; // [rsp+78h] [rbp-88h] BYREF
  DXGADAPTER *v30; // [rsp+80h] [rbp-80h]
  char v31; // [rsp+88h] [rbp-78h]
  __int64 v32; // [rsp+90h] [rbp-70h]
  __int64 v33; // [rsp+98h] [rbp-68h]
  __int64 (__fastcall *v34)(struct OUTPUTDUPL_MGR *, __int64 (__usercall *)@<rax>(OUTPUTDUPL_MGR *__hidden@<rcx>, const struct _DXGKARG_SETPOINTERPOSITION *@<rdx>, const struct _DXGKARG_SETPOINTERSHAPE *@<r8>, unsigned int@<r9d>, unsigned int), __int64, __int64, int, int); // [rsp+A0h] [rbp-60h]
  _BYTE v35[24]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v36[144]; // [rsp+C0h] [rbp-40h] BYREF

  v33 = a5;
  v32 = a6;
  v10 = a3;
  v34 = a9;
  v26 = a3;
  IsRemoteSessionUsingXddmMonitors = DxgIsRemoteSessionUsingXddmMonitors((__int64)this);
  v27 = 0LL;
  v13 = 0LL;
  v28 = IsRemoteSessionUsingXddmMonitors;
  if ( !this || IsRemoteSessionUsingXddmMonitors )
  {
    if ( !(unsigned int)DxgIsRemoteSessionUsingXddmMonitors(v12) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 82;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
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
      v14 = 0;
LABEL_17:
      v30 = v13;
      v19 = v13;
      v31 = 0;
      if ( v14 )
      {
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
        v19 = v30;
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v36, v13, 0LL);
      if ( !this
        || v28
        || (DXGADAPTER::ReleaseReference(v27),
            DXGADAPTER::ReleaseReference(v13),
            v20 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v36, 0LL),
            v20 >= 0) )
      {
        if ( v26 < *((_DWORD *)RemoteOutputDuplMgr + 19) )
        {
          v20 = v34(RemoteOutputDuplMgr, OUTPUTDUPL_MGR::ProcessPointerShapeChange, v33, v32, a7, a8);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v36);
          if ( v31 )
          {
            _InterlockedDecrement((volatile signed __int32 *)v19 + 38);
            ExReleasePushLockSharedEx((char *)v19 + 136, 0LL);
            KeLeaveCriticalRegion();
            DXGADAPTER::ReleaseReference(v30);
          }
          return (unsigned int)v20;
        }
        v22 = v26;
        WdLogSingleEntry1(2LL, v26);
        WdLogGlobalForLineNumber = 126;
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Invalid source ID 0x%I64x", v22, 0LL, 0LL, 0LL, 0LL);
        v20 = -1071774972;
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v36);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
      return (unsigned int)v20;
    }
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 88;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
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
    v25[0] = 0LL;
    v14 = 1;
    v15 = *((_QWORD *)this + 390);
    if ( v15 )
    {
      if ( (unsigned int)v10 >= *(_DWORD *)(v15 + 96) )
      {
        LODWORD(v17) = -1073741811;
        WdLogSingleEntry2(2LL, v10, -1073741811LL);
        WdLogGlobalForLineNumber = 8824;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
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
          v25[0] = this;
          _InterlockedAdd64((volatile signed __int64 *)this + 3, 1uLL);
          v25[1] = (DXGADAPTER *)-1LL;
LABEL_7:
          v13 = this;
          v27 = v25[0];
          v25[0] = 0LL;
          if ( !v27 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 3182;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              0xFFFFFFFFLL,
              L"(!o_ppRenderAdapter || *o_ppRenderAdapter != NULL) && (!o_ppDisplayAdapter || *o_ppDisplayAdapter != NULL)",
              3182LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          RemoteOutputDuplMgr = *(struct OUTPUTDUPL_MGR **)(*((_QWORD *)this + 390) + 120LL);
LABEL_16:
          if ( v13 )
            goto LABEL_17;
          goto LABEL_42;
        }
        if ( (*((_DWORD *)this + 111) & 0x100) != 0 )
        {
          IndirectDisplayPairedAdapter = DxgkpGetIndirectDisplayPairedAdapter(
                                           this,
                                           0,
                                           (struct DXGADAPTER_REFERENCE *)v25);
          v17 = IndirectDisplayPairedAdapter;
          if ( IndirectDisplayPairedAdapter >= 0 )
            goto LABEL_7;
          WdLogSingleEntry2(2LL, this, IndirectDisplayPairedAdapter);
          WdLogGlobalForLineNumber = 8866;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Failed to get the paired render adapter for indirect display adapter 0x%I64x, (Status = 0x%I64x).",
            (__int64)this,
            v17,
            0LL,
            0LL,
            0LL);
          if ( v25[0] )
            DXGADAPTER::ReleaseReference(v25[0]);
          v25[0] = 0LL;
        }
        else
        {
          DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v35);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v35);
          Global = DXGGLOBAL::GetGlobal();
          DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v25, *((struct DXGADAPTER **)Global + 121));
          if ( v25[0] )
          {
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v35);
            goto LABEL_7;
          }
          LODWORD(v17) = -1073741637;
          WdLogSingleEntry2(2LL, this, -1073741637LL);
          WdLogGlobalForLineNumber = 8880;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"WARP render only adapter is not ready to be used with display only adapter 0x%I64x, returning 0x%I64x.",
            (__int64)this,
            -1073741637LL,
            0LL,
            0LL,
            0LL);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v35);
          if ( v25[0] )
            DXGADAPTER::ReleaseReference(v25[0]);
          v25[0] = 0LL;
        }
        DXGADAPTER::ReleaseReference(this);
      }
    }
    else
    {
      LODWORD(v17) = -1073741637;
      WdLogSingleEntry2(4LL, this, -1073741637LL);
      WdLogGlobalForLineNumber = 8837;
    }
    v18 = v26;
    WdLogSingleEntry3(2LL, this, v26, (int)v17);
    WdLogGlobalForLineNumber = 3177;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x (Status 0x%I64x)!",
      (__int64)this,
      v18,
      (int)v17,
      0LL,
      0LL);
    RemoteOutputDuplMgr = 0LL;
    if ( (int)v17 >= 0 )
      goto LABEL_16;
    WdLogSingleEntry2(3LL, this, (int)v17);
    result = (unsigned int)v17;
    WdLogGlobalForLineNumber = 75;
  }
  return result;
}
