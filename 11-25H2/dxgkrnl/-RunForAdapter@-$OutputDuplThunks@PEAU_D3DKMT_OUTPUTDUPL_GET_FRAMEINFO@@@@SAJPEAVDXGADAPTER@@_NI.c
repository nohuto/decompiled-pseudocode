/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x140301A0C
 * Callers:
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x140302B10 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14001E480 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x14028D460 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1402E7568 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x140301CE0 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 */

__int64 __fastcall OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO *>::RunForAdapter(
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
  char v14; // al
  int v15; // edi
  __int64 result; // rax
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // [rsp+50h] [rbp-B0h] BYREF
  DXGADAPTER *v18; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGADAPTER *v19; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v20; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v21; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v22[8]; // [rsp+78h] [rbp-88h] BYREF
  struct DXGADAPTER *v23; // [rsp+80h] [rbp-80h]
  char v24; // [rsp+88h] [rbp-78h]
  _BYTE v25[144]; // [rsp+90h] [rbp-70h] BYREF

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
    v13 = RemoteOutputDuplMgr;
    if ( RemoteOutputDuplMgr )
      goto LABEL_12;
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
    OutputDuplManager = FindOutputDuplManager(v7, v6, &v18, &v21, &v19, &v20, &RemoteOutputDuplMgr);
    v12 = OutputDuplManager;
    if ( OutputDuplManager >= 0 )
    {
      v10 = v19;
      v13 = RemoteOutputDuplMgr;
      if ( v19 )
      {
        v14 = 1;
        goto LABEL_6;
      }
LABEL_12:
      v14 = 0;
LABEL_6:
      v23 = v10;
      v24 = 0;
      if ( v14 )
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v22);
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v25, v10, 0LL);
      if ( v7 )
      {
        v7 = 0LL;
        if ( !IsRemoteSessionUsingXddmMonitors )
        {
          DXGADAPTER::ReleaseReference(v18);
          DXGADAPTER::ReleaseReference(v10);
          v15 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v25, 0LL);
          if ( v15 < 0 )
          {
LABEL_11:
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v25);
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
          0x40000,
          0xFFFFFFFFLL,
          L"Invalid source ID 0x%I64x",
          v6,
          (__int64)v7,
          (__int64)v7,
          (__int64)v7,
          (__int64)v7);
        v15 = -1071774972;
      }
      goto LABEL_11;
    }
    WdLogSingleEntry2(3LL, v7, OutputDuplManager);
    result = v12;
    WdLogGlobalForLineNumber = 75;
  }
  return result;
}
