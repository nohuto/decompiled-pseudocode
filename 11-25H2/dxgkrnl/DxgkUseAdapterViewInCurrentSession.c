/*
 * XREFs of DxgkUseAdapterViewInCurrentSession @ 0x1402DB730
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x14042A600 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14001EE2C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14003EC00 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x140283874 (DxgkReleaseSessionModeChangeLock.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x140287094 (DxgkAcquireSessionModeChangeLock.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?AddDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z @ 0x1402DA62C (-AddDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1402DCA28 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z @ 0x1402DCFA0 (-RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z.c)
 *     ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAVDXGADAPTER@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1403EBBE0 (-AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAVDXGADAPTER@@PEAPEAVSESSION_ADAPTER@@@Z.c)
 *     ?RemoveDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z @ 0x1403FE0C4 (-RemoveDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z.c)
 */

__int64 __fastcall DxgkUseAdapterViewInCurrentSession(struct _LUID *a1, unsigned int a2, char a3)
{
  __int64 v5; // r13
  DXGGLOBAL *Global; // rax
  int v7; // eax
  __int64 v8; // rdi
  bool v9; // r12
  struct SESSION_ADAPTER *v10; // rbx
  struct DXGADAPTER *v11; // r15
  unsigned int v12; // r8d
  int v13; // eax
  __int64 v14; // rcx
  struct DISPLAY_SOURCE *v15; // rdx
  int v16; // eax
  bool v17; // al
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v20; // eax
  const wchar_t *v21; // r9
  int v22; // eax
  __int64 HighPart; // [rsp+20h] [rbp-E0h]
  __int64 v24; // [rsp+20h] [rbp-E0h]
  __int64 v25; // [rsp+20h] [rbp-E0h]
  __int64 LowPart; // [rsp+28h] [rbp-D8h]
  __int64 v27; // [rsp+28h] [rbp-D8h]
  __int64 v28; // [rsp+28h] [rbp-D8h]
  __int64 v29; // [rsp+38h] [rbp-C8h]
  char v30; // [rsp+50h] [rbp-B0h]
  bool v31; // [rsp+51h] [rbp-AFh] BYREF
  char v32; // [rsp+52h] [rbp-AEh]
  struct SESSION_ADAPTER *SessionAdapterFromLuid; // [rsp+58h] [rbp-A8h] BYREF
  DXGSESSIONDATA *SessionData; // [rsp+60h] [rbp-A0h]
  _BYTE v35[144]; // [rsp+70h] [rbp-90h] BYREF

  SessionAdapterFromLuid = 0LL;
  v32 = a3;
  v5 = a2;
  v30 = 0;
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( SessionData )
  {
    v7 = DxgkAcquireSessionModeChangeLock(1);
    v8 = v7;
    v9 = v7 >= 0;
    v31 = v7 >= 0;
    if ( v7 < 0 )
    {
      WdLogSingleEntry1(2LL, v7);
      WdLogGlobalForLineNumber = 546;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to acquire session mode change lock exclusively (Status = 0x%I64x)",
        v8,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else if ( a3 )
    {
      LODWORD(v8) = DXGSESSIONDATA::AddAdapterToSession(SessionData, a1, 0LL, &SessionAdapterFromLuid);
      if ( (int)v8 >= 0 )
      {
        v10 = SessionAdapterFromLuid;
        v30 = 1;
LABEL_5:
        if ( (_DWORD)v5 == -1 )
        {
LABEL_15:
          v17 = v32 == 0;
LABEL_16:
          if ( v17 )
            DXGSESSIONDATA::RemoveAdapterFromSession(SessionData, a1);
          if ( v9 )
            DxgkReleaseSessionModeChangeLock();
          return (unsigned int)v8;
        }
        v11 = (struct DXGADAPTER *)*((_QWORD *)v10 + 2);
        if ( v11 )
        {
          if ( !*((_QWORD *)v11 + 390) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 601;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              0xFFFFFFFFLL,
              L"pDisplayAdapter->IsDisplayAdapter()",
              601LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v35, v11, 0LL);
          v13 = COREADAPTERACCESS::AcquireExclusive((__int64)v35, v12 + 1, v12);
          v8 = v13;
          if ( v13 < 0 )
          {
            WdLogSingleEntry3(2LL, a1->HighPart, a1->LowPart, v13);
            LowPart = a1->LowPart;
            HighPart = a1->HighPart;
            WdLogGlobalForLineNumber = 613;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"Failed to acquire the lock shared on DXGADAPTER 0x%I64x%08I64x, returning 0x%I64x.",
              HighPart,
              LowPart,
              v8,
              0LL,
              0LL);
          }
          else
          {
            v14 = *((_QWORD *)v11 + 390);
            if ( (unsigned int)v5 >= *(_DWORD *)(v14 + 96) )
            {
              LODWORD(v8) = -1073741811;
              WdLogSingleEntry4(2LL, v5, a1->HighPart, a1->LowPart, -1073741811LL);
              v21 = L"The VidPnSourceId 0x%I64x caller specified does not exit on DXGADAPTER 0x%I64x%08I64x, returning 0x%I64x.";
              v29 = -1073741811LL;
              WdLogGlobalForLineNumber = 627;
            }
            else
            {
              v15 = (struct DISPLAY_SOURCE *)(*(_QWORD *)(v14 + 128) + 3984 * v5);
              if ( v32 )
              {
                v16 = SESSION_ADAPTER::AddDisplaySource(v10, v15);
                v8 = v16;
                if ( v16 >= 0 )
                {
                  KeSetEvent(*(PRKEVENT *)(*((_QWORD *)v11 + 390) + 664LL), 0, 0);
LABEL_14:
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v35);
                  goto LABEL_15;
                }
                WdLogSingleEntry4(2LL, v5, a1->HighPart, a1->LowPart, v16);
                v21 = L"Failed to take owner on VidPnSourceId 0x%I64x from DXGADAPTER 0x%I64x%08I64x, returning 0x%I64x.";
                v29 = v8;
                WdLogGlobalForLineNumber = 646;
              }
              else
              {
                v22 = SESSION_ADAPTER::RemoveDisplaySource(v10, v15);
                v8 = v22;
                if ( v22 >= 0 )
                  goto LABEL_14;
                WdLogSingleEntry4(2LL, v5, a1->HighPart, a1->LowPart, v22);
                v21 = L"Failed to remove the session ownership on VidPnSourceId 0x%I64x from DXGADAPTER 0x%I64x%08I64x, re"
                       "turning 0x%I64x.";
                v29 = v8;
                WdLogGlobalForLineNumber = 664;
              }
            }
            DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v21, v5, a1->HighPart, a1->LowPart, v29, 0LL);
          }
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v35);
        }
        else
        {
          LODWORD(v8) = -1073741811;
          WdLogSingleEntry4(2LL, a1->HighPart, a1->LowPart, v5, -1073741811LL);
          v28 = a1->LowPart;
          v25 = a1->HighPart;
          WdLogGlobalForLineNumber = 597;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Failed to take the adapter view ownership since adapter 0x%I64x%08I64x does not have the caller specified Vi"
             "dPn Source ID 0x%I64x, returning 0x%I64x.",
            v25,
            v28,
            v5,
            -1073741811LL,
            0LL);
        }
        v17 = v30;
        goto LABEL_16;
      }
    }
    else
    {
      SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(SessionData, a1);
      v10 = SessionAdapterFromLuid;
      if ( SessionAdapterFromLuid )
        goto LABEL_5;
      WdLogSingleEntry3(2LL, a1->HighPart, a1->LowPart, -1073741811LL);
      v27 = a1->LowPart;
      v24 = a1->HighPart;
      WdLogGlobalForLineNumber = 577;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Cannot find the caller specified session adapter 0x%I64x%08I64x, returning 0x%I64x.",
        v24,
        v27,
        -1073741811LL,
        0LL,
        0LL);
      LODWORD(v8) = -1073741811;
    }
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v31);
    return (unsigned int)v8;
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
  WdLogGlobalForLineNumber = 532;
  v20 = PsGetCurrentProcessSessionId();
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
    v20,
    -1073741811LL,
    0LL,
    0LL,
    0LL);
  return 3221225485LL;
}
