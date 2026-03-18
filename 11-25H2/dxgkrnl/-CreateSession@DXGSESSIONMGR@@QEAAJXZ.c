/*
 * XREFs of ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1403E1E58
 * Callers:
 *     DxgkNotifySessionStateChange @ 0x1403E1D40 (DxgkNotifySessionStateChange.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?InitializeForSession@DXGVALIDATION@@QEAAJPEAVDXGSESSIONDATA@@@Z @ 0x1400593D4 (-InitializeForSession@DXGVALIDATION@@QEAAJPEAVDXGSESSIONDATA@@@Z.c)
 *     ?StartPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z @ 0x1401F5B7C (-StartPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z.c)
 *     ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1403E21A8 (--0DXGSESSIONDATA@@QEAA@K@Z.c)
 *     ?IncreaseNumSessions@DXGSESSIONMGR@@AEAAJK@Z @ 0x1403E29D0 (-IncreaseNumSessions@DXGSESSIONMGR@@AEAAJK@Z.c)
 */

__int64 __fastcall DXGSESSIONMGR::CreateSession(DXGSESSIONMGR **this)
{
  __int64 CurrentProcessSessionId; // rsi
  __int64 v3; // r9
  int v4; // edi
  __int64 v6; // r8
  struct DXGGLOBAL *Global; // rax
  int v8; // ebp
  DXGSESSIONMGR *i; // rdi
  DXGSESSIONDATA *v10; // rax
  DXGSESSIONDATA *v11; // rcx
  __int64 v12; // rax
  _BYTE v13[16]; // [rsp+50h] [rbp-38h] BYREF
  _BYTE v14[16]; // [rsp+60h] [rbp-28h] BYREF

  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (struct DXGFASTMUTEX *const)this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (struct DXGFASTMUTEX *const)(this + 11), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  if ( (unsigned int)CurrentProcessSessionId >= *((_DWORD *)this + 20) )
  {
    v4 = DXGSESSIONMGR::IncreaseNumSessions((DXGSESSIONMGR *)this, CurrentProcessSessionId);
    if ( v4 < 0 )
    {
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v13);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v14);
      return (unsigned int)v4;
    }
  }
  if ( (unsigned int)CurrentProcessSessionId >= *((_DWORD *)this + 20) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5467;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"SessionId < m_SessionDataArraySize",
      5467LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_QWORD *)this[6] + CurrentProcessSessionId) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5468;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"m_pSessionData[SessionId] == NULL",
      5468LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v6 = *((_QWORD *)this[6] + CurrentProcessSessionId);
  if ( v6 )
  {
    WdLogSingleEntry2(3LL, CurrentProcessSessionId, v6);
    WdLogGlobalForLineNumber = 5472;
    goto LABEL_10;
  }
  v10 = (DXGSESSIONDATA *)operator new(0x4B60uLL, 0x4B677844u, 64LL, v3);
  if ( v10 )
    v11 = DXGSESSIONDATA::DXGSESSIONDATA(v10, CurrentProcessSessionId);
  else
    v11 = 0LL;
  *((_QWORD *)this[6] + CurrentProcessSessionId) = v11;
  if ( *((_QWORD *)this[6] + CurrentProcessSessionId) )
  {
LABEL_10:
    Global = DXGGLOBAL::GetGlobal();
    v8 = DXGVALIDATION::InitializeForSession(
           (struct DXGGLOBAL *)((char *)Global + 1620),
           *((struct DXGSESSIONDATA **)this[6] + CurrentProcessSessionId));
    if ( v8 >= 0 )
    {
      for ( i = this[40]; i != (DXGSESSIONMGR *)(this + 40); i = *(DXGSESSIONMGR **)i )
      {
        v12 = *((_QWORD *)i + 4);
        if ( v12 == 0x100000000LL || v12 == CurrentProcessSessionId )
          DXGSESSIONDATA::StartPnPTransitionOnSession(
            *((DXGSESSIONDATA **)this[6] + CurrentProcessSessionId),
            (DXGSESSIONMGR *)((char *)i - 8));
      }
      WdLogSingleEntry3(
        4LL,
        CurrentProcessSessionId,
        *((_QWORD *)this[6] + CurrentProcessSessionId),
        *((unsigned int *)this + 20));
      WdLogGlobalForLineNumber = 5519;
    }
    goto LABEL_23;
  }
  *((_DWORD *)this + 37) |= 1u;
  WdLogSingleEntry1(6LL, CurrentProcessSessionId);
  WdLogGlobalForLineNumber = 5481;
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    0xFFFFFFFFLL,
    L"Unable to allocate dxg session data for session 0x%I64x",
    CurrentProcessSessionId,
    0LL,
    0LL,
    0LL,
    0LL);
  v8 = -1073741801;
LABEL_23:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v13);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v14);
  return (unsigned int)v8;
}
