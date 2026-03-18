/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1402B8690
 * Callers:
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1402BA3A0 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14000EEA0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1402B8964 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1402D3B30 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1402D4830 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 */

__int64 __fastcall OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO *>::RunForAdapter(
        struct DXGADAPTER *this,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 (__fastcall *a5)(struct OUTPUTDUPL_MGR *, __int64))
{
  __int64 v6; // r15
  int IsRemoteSessionUsingXddmMonitors; // r14d
  struct DXGADAPTER *v9; // rdi
  int OutputDuplManager; // eax
  unsigned int v11; // ebx
  struct OUTPUTDUPL_MGR *v12; // rbx
  char v13; // al
  int v14; // edi
  __int64 result; // rax
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // [rsp+50h] [rbp-B0h] BYREF
  DXGADAPTER *v17; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGADAPTER *v18; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v19; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v20; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v21[8]; // [rsp+78h] [rbp-88h] BYREF
  struct DXGADAPTER *v22; // [rsp+80h] [rbp-80h]
  char v23; // [rsp+88h] [rbp-78h]
  _BYTE v24[144]; // [rsp+90h] [rbp-70h] BYREF

  v6 = a3;
  IsRemoteSessionUsingXddmMonitors = DxgIsRemoteSessionUsingXddmMonitors();
  v17 = 0LL;
  v18 = 0LL;
  v9 = 0LL;
  v20 = -1LL;
  v19 = -1LL;
  RemoteOutputDuplMgr = 0LL;
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
    v12 = RemoteOutputDuplMgr;
    if ( RemoteOutputDuplMgr )
      goto LABEL_12;
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
    OutputDuplManager = FindOutputDuplManager(this, v6, &v17, &v20, &v18, &v19, &RemoteOutputDuplMgr);
    v11 = OutputDuplManager;
    if ( OutputDuplManager >= 0 )
    {
      v9 = v18;
      v12 = RemoteOutputDuplMgr;
      if ( v18 )
      {
        v13 = 1;
        goto LABEL_6;
      }
LABEL_12:
      v13 = 0;
LABEL_6:
      v22 = v9;
      v23 = 0;
      if ( v13 )
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v21);
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v24, v9, 0LL);
      if ( this )
      {
        this = 0LL;
        if ( !IsRemoteSessionUsingXddmMonitors )
        {
          DXGADAPTER::ReleaseReference(v17);
          DXGADAPTER::ReleaseReference(v9);
          v14 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v24, 0LL);
          if ( v14 < 0 )
          {
LABEL_11:
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v24);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v21);
            return (unsigned int)v14;
          }
          v17 = 0LL;
          v18 = 0LL;
        }
      }
      if ( (unsigned int)v6 < *((_DWORD *)v12 + 19) )
      {
        v14 = a5(v12, a4);
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
          (__int64)this,
          (__int64)this,
          (__int64)this,
          (__int64)this);
        v14 = -1071774972;
      }
      goto LABEL_11;
    }
    WdLogSingleEntry2(3LL, this, OutputDuplManager);
    result = v11;
    WdLogGlobalForLineNumber = 75;
  }
  return result;
}
