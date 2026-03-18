/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXI@ZI@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXI@ZIP6AJPEAV3@2I@Z@Z @ 0x1403D23AC
 * Callers:
 *     DxgkDesktopSwitch @ 0x1403D22F0 (DxgkDesktopSwitch.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x14001F610 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x14028D460 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1402E7568 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x140301CE0 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 */

__int64 __fastcall OutputDuplThunks<void (OUTPUTDUPL_MGR::*)(unsigned int),unsigned int>::RunForAdapter(
        struct DXGADAPTER *this,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 (__fastcall *a6)(struct OUTPUTDUPL_MGR *, void (__fastcall *)(OUTPUTDUPL_MGR *this, __int64 a2), _QWORD))
{
  __int64 v7; // r15
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

  v7 = a3;
  IsRemoteSessionUsingXddmMonitors = DxgIsRemoteSessionUsingXddmMonitors((__int64)this);
  v18 = 0LL;
  v19 = 0LL;
  v10 = 0LL;
  v21 = -1LL;
  v20 = -1LL;
  RemoteOutputDuplMgr = 0LL;
  if ( !this || IsRemoteSessionUsingXddmMonitors )
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
      goto LABEL_14;
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
    OutputDuplManager = FindOutputDuplManager(this, v7, &v18, &v21, &v19, &v20, &RemoteOutputDuplMgr);
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
        if ( this && !IsRemoteSessionUsingXddmMonitors )
        {
          DXGADAPTER::ReleaseReference(v18);
          DXGADAPTER::ReleaseReference(v10);
          v15 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v23, 0LL);
          if ( v15 < 0 )
          {
LABEL_9:
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v23);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v22);
            return (unsigned int)v15;
          }
          v18 = 0LL;
          v19 = 0LL;
        }
        if ( (unsigned int)v7 < *((_DWORD *)v13 + 19) )
        {
          v15 = a6(v13, OUTPUTDUPL_MGR::ProcessDesktopSwitch, a5);
        }
        else
        {
          WdLogSingleEntry1(2LL, v7);
          WdLogGlobalForLineNumber = 126;
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Invalid source ID 0x%I64x", v7, 0LL, 0LL, 0LL, 0LL);
          v15 = -1071774972;
        }
        goto LABEL_9;
      }
LABEL_14:
      v14 = 0;
      goto LABEL_6;
    }
    WdLogSingleEntry2(3LL, this, OutputDuplManager);
    result = v12;
    WdLogGlobalForLineNumber = 75;
  }
  return result;
}
