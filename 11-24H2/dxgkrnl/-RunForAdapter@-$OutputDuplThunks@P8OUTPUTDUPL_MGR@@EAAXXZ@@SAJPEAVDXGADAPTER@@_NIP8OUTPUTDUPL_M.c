/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXXZ@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXXZP6AJPEAV3@2@Z@Z @ 0x1403D4374
 * Callers:
 *     ?ProcessLockScreenAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1403D4350 (-ProcessLockScreenAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
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

__int64 __fastcall OutputDuplThunks<void (OUTPUTDUPL_MGR::*)(void)>::RunForAdapter(
        struct DXGADAPTER *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 (__fastcall *a5)(struct OUTPUTDUPL_MGR *, void (__fastcall *)(OUTPUTDUPL_MGR *this)))
{
  __int64 v6; // rcx
  int IsRemoteSessionUsingXddmMonitors; // r14d
  struct DXGADAPTER *v8; // rdi
  int OutputDuplManager; // eax
  unsigned int v10; // ebx
  struct OUTPUTDUPL_MGR *v11; // rbx
  char v12; // r8
  int v13; // edi
  __int64 result; // rax
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // [rsp+50h] [rbp-B0h] BYREF
  DXGADAPTER *v16; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGADAPTER *v17; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v18; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v19; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v20[24]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v21[144]; // [rsp+90h] [rbp-70h] BYREF

  IsRemoteSessionUsingXddmMonitors = DxgIsRemoteSessionUsingXddmMonitors((__int64)this);
  v16 = 0LL;
  v17 = 0LL;
  v8 = 0LL;
  v19 = -1LL;
  v18 = -1LL;
  RemoteOutputDuplMgr = 0LL;
  if ( !this || IsRemoteSessionUsingXddmMonitors )
  {
    if ( !(unsigned int)DxgIsRemoteSessionUsingXddmMonitors(v6) )
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
    v11 = RemoteOutputDuplMgr;
    if ( RemoteOutputDuplMgr )
      goto LABEL_10;
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
    OutputDuplManager = FindOutputDuplManager(this, 0, &v16, &v19, &v17, &v18, &RemoteOutputDuplMgr);
    v10 = OutputDuplManager;
    if ( OutputDuplManager >= 0 )
    {
      v8 = v17;
      v11 = RemoteOutputDuplMgr;
      if ( v17 )
      {
        v12 = 1;
LABEL_6:
        DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v20, v8, v12);
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v21, v8, 0LL);
        if ( this && !IsRemoteSessionUsingXddmMonitors )
        {
          DXGADAPTER::ReleaseReference(v16);
          DXGADAPTER::ReleaseReference(v8);
          v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v21, 0LL);
          if ( v13 < 0 )
          {
LABEL_9:
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v21);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v20);
            return (unsigned int)v13;
          }
          v16 = 0LL;
          v17 = 0LL;
        }
        if ( *((_DWORD *)v11 + 19) )
        {
          v13 = a5(v11, OUTPUTDUPL_MGR::ProcessLockScreenActive);
        }
        else
        {
          WdLogSingleEntry1(2LL, 0LL);
          WdLogGlobalForLineNumber = 126;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Invalid source ID 0x%I64x",
            0LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v13 = -1071774972;
        }
        goto LABEL_9;
      }
LABEL_10:
      v12 = 0;
      goto LABEL_6;
    }
    WdLogSingleEntry2(3LL, this, OutputDuplManager);
    result = v10;
    WdLogGlobalForLineNumber = 75;
  }
  return result;
}
