/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1403ED260
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x140383210 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140010030 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1402B8964 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1402D3B30 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1402D4830 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 */

__int64 __fastcall OutputDuplThunks<_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT *>::RunForAdapter(
        struct DXGADAPTER *this,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 (__fastcall *a5)(struct OUTPUTDUPL_MGR *, __int64))
{
  __int64 v6; // rsi
  __int64 v8; // rcx
  int IsRemoteSessionUsingXddmMonitors; // r14d
  struct DXGADAPTER *v10; // rbx
  int OutputDuplManager; // eax
  unsigned int v12; // ebx
  char v13; // r8
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // [rsp+50h] [rbp-B0h] BYREF
  DXGADAPTER *v16; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGADAPTER *v17; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v18; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v19; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v20[24]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v21[144]; // [rsp+90h] [rbp-70h] BYREF

  v6 = a3;
  IsRemoteSessionUsingXddmMonitors = DxgIsRemoteSessionUsingXddmMonitors((__int64)this);
  v16 = 0LL;
  v19 = -1LL;
  v10 = 0LL;
  v17 = 0LL;
  v18 = -1LL;
  RemoteOutputDuplMgr = 0LL;
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
    goto LABEL_11;
  }
  OutputDuplManager = FindOutputDuplManager(this, v6, &v16, &v19, &v17, &v18, &RemoteOutputDuplMgr);
  v12 = OutputDuplManager;
  if ( OutputDuplManager >= 0 )
  {
    v10 = v17;
    if ( v17 )
    {
      v13 = 1;
LABEL_12:
      DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v20, v10, v13);
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v21, v10, 0LL);
      if ( this && !IsRemoteSessionUsingXddmMonitors )
      {
        DXGADAPTER::ReleaseReference(v16);
        DXGADAPTER::ReleaseReference(v10);
        if ( *((_DWORD *)v10 + 50) != 1 )
        {
          v12 = -1073741130;
LABEL_20:
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v21);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v20);
          return v12;
        }
        v16 = 0LL;
        v17 = 0LL;
      }
      if ( (unsigned int)v6 < *((_DWORD *)RemoteOutputDuplMgr + 19) )
      {
        v12 = a5(RemoteOutputDuplMgr, a4);
      }
      else
      {
        WdLogSingleEntry1(2LL, v6);
        WdLogGlobalForLineNumber = 126;
        DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Invalid source ID 0x%I64x", v6, 0LL, 0LL, 0LL, 0LL);
        v12 = -1071774972;
      }
      goto LABEL_20;
    }
LABEL_11:
    v13 = 0;
    goto LABEL_12;
  }
  WdLogSingleEntry2(3LL, this, OutputDuplManager);
  WdLogGlobalForLineNumber = 75;
  return v12;
}
