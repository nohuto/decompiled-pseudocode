/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1402E6228
 * Callers:
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1402E6144 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL.c)
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
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x140288C10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x14028D460 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1402E7568 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 */

__int64 __fastcall OutputDuplThunks<_D3DKMT_OUTPUTDUPL_RELEASE_FRAME *>::RunForAdapter(
        struct DXGADAPTER *this,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 (__fastcall *a5)(struct OUTPUTDUPL_MGR *, __int64))
{
  __int64 v6; // r12
  __int64 v7; // rcx
  int IsRemoteSessionUsingXddmMonitors; // r13d
  struct DXGADAPTER *v9; // rbx
  DXGADAPTER *v10; // r14
  int PairingAdapters; // eax
  __int64 v12; // rsi
  char v13; // si
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rdi
  int v15; // ebx
  __int64 result; // rax
  DXGADAPTER *v17; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGADAPTER *v18; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v19; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v20; // [rsp+68h] [rbp-98h] BYREF
  __int64 v21; // [rsp+70h] [rbp-90h]
  __int64 (__fastcall *v22)(struct OUTPUTDUPL_MGR *, __int64); // [rsp+78h] [rbp-88h]
  _BYTE v23[8]; // [rsp+80h] [rbp-80h] BYREF
  struct DXGADAPTER *v24; // [rsp+88h] [rbp-78h]
  char v25; // [rsp+90h] [rbp-70h]
  _BYTE v26[144]; // [rsp+A0h] [rbp-60h] BYREF

  v22 = a5;
  v21 = a4;
  v6 = a3;
  IsRemoteSessionUsingXddmMonitors = DxgIsRemoteSessionUsingXddmMonitors((__int64)this);
  v17 = 0LL;
  v20 = -1LL;
  v9 = 0LL;
  v18 = 0LL;
  v10 = 0LL;
  v19 = -1LL;
  if ( !this || IsRemoteSessionUsingXddmMonitors )
  {
    if ( !(unsigned int)DxgIsRemoteSessionUsingXddmMonitors(v7) )
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
    PairingAdapters = DxgkpGetPairingAdapters(this, v6, &v17, &v20, &v18, &v19, 0);
    v12 = PairingAdapters;
    if ( PairingAdapters >= 0 )
    {
      v10 = v17;
      v13 = 1;
      v9 = v18;
      if ( !v17 || !v18 )
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
      RemoteOutputDuplMgr = *(struct OUTPUTDUPL_MGR **)(*((_QWORD *)v9 + 390) + 120LL);
      if ( v9 )
      {
LABEL_7:
        v24 = v9;
        v25 = 0;
        if ( v13 )
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v26, v9, 0LL);
        if ( this && !IsRemoteSessionUsingXddmMonitors )
        {
          DXGADAPTER::ReleaseReference(v10);
          DXGADAPTER::ReleaseReference(v9);
          v15 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v26, 0LL);
          if ( v15 < 0 )
          {
LABEL_17:
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
            return (unsigned int)v15;
          }
          v17 = 0LL;
          v18 = 0LL;
        }
        if ( (unsigned int)v6 >= *((_DWORD *)RemoteOutputDuplMgr + 19) )
        {
          WdLogSingleEntry1(2LL, v6);
          WdLogGlobalForLineNumber = 126;
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Invalid source ID 0x%I64x", v6, 0LL, 0LL, 0LL, 0LL);
          v15 = -1071774972;
        }
        else
        {
          v15 = v22(RemoteOutputDuplMgr, v21);
        }
        goto LABEL_17;
      }
LABEL_12:
      v13 = 0;
      goto LABEL_7;
    }
    WdLogSingleEntry3(2LL, this, v6, PairingAdapters);
    WdLogGlobalForLineNumber = 3177;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x (Status 0x%I64x)!",
      (__int64)this,
      v6,
      v12,
      0LL,
      0LL);
    WdLogSingleEntry2(3LL, this, v12);
    result = (unsigned int)v12;
    WdLogGlobalForLineNumber = 75;
  }
  return result;
}
