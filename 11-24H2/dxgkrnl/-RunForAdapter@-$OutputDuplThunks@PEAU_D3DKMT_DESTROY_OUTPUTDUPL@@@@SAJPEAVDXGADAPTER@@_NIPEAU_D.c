/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_DESTROY_OUTPUTDUPL@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_DESTROY_OUTPUTDUPL@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1403B8E14
 * Callers:
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_DESTROY_OUTPUTDUPL@@@@SAJIIPEAU_D3DKMT_DESTROY_OUTPUTDUPL@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1403B8D30 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_DESTROY_OUTPUTDUPL@@@@SAJIIPEAU_D3DKMT_DESTROY_OUTPUTDU.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140010030 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1402B8964 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1402D3B30 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1402D4830 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 */

__int64 __fastcall OutputDuplThunks<_D3DKMT_DESTROY_OUTPUTDUPL *>::RunForAdapter(
        struct DXGADAPTER *this,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 (__fastcall *a5)(struct OUTPUTDUPL_MGR *, __int64))
{
  __int64 v6; // r15
  struct DXGADAPTER *v7; // rsi
  __int64 v8; // rcx
  int IsRemoteSessionUsingXddmMonitors; // r14d
  struct DXGADAPTER *v10; // rdi
  int OutputDuplManager; // eax
  unsigned int v12; // ebx
  struct OUTPUTDUPL_MGR *v13; // rbx
  char v14; // r8
  int v15; // edi
  __int64 result; // rax
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // [rsp+50h] [rbp-B0h] BYREF
  DXGADAPTER *v18; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGADAPTER *v19; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v20; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v21; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v22[24]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v23[144]; // [rsp+90h] [rbp-70h] BYREF

  v6 = a3;
  v7 = this;
  IsRemoteSessionUsingXddmMonitors = DxgIsRemoteSessionUsingXddmMonitors((__int64)this);
  v18 = 0LL;
  v19 = 0LL;
  v10 = 0LL;
  v21 = -1LL;
  v20 = -1LL;
  RemoteOutputDuplMgr = 0LL;
  if ( !v7 || IsRemoteSessionUsingXddmMonitors )
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
    v13 = RemoteOutputDuplMgr;
    if ( RemoteOutputDuplMgr )
      goto LABEL_15;
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
    OutputDuplManager = FindOutputDuplManager(v7, v6, &v18, &v21, &v19, &v20, &RemoteOutputDuplMgr);
    v12 = OutputDuplManager;
    if ( OutputDuplManager >= 0 )
    {
      v10 = v19;
      v13 = RemoteOutputDuplMgr;
      if ( v19 )
      {
        v14 = 1;
LABEL_6:
        DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v22, v10, v14);
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v23, v10, 0LL);
        if ( v7 )
        {
          v7 = 0LL;
          if ( !IsRemoteSessionUsingXddmMonitors )
          {
            DXGADAPTER::ReleaseReference(v18);
            DXGADAPTER::ReleaseReference(v10);
            v15 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v23, 0LL);
            if ( v15 < 0 )
            {
LABEL_12:
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v23);
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v22);
              return (unsigned int)v15;
            }
            v18 = 0LL;
            v19 = 0LL;
          }
        }
        if ( (unsigned int)v6 < *((_DWORD *)v13 + 19) )
        {
          v15 = a5(v13, a4);
        }
        else
        {
          WdLogSingleEntry1(2LL, v6);
          WdLogGlobalForLineNumber = 126;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Invalid source ID 0x%I64x",
            v6,
            (__int64)v7,
            (__int64)v7,
            (__int64)v7,
            (__int64)v7);
          v15 = -1071774972;
        }
        goto LABEL_12;
      }
LABEL_15:
      v14 = 0;
      goto LABEL_6;
    }
    WdLogSingleEntry2(3LL, v7, OutputDuplManager);
    result = v12;
    WdLogGlobalForLineNumber = 75;
  }
  return result;
}
