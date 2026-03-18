/*
 * XREFs of ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1403DA7D8
 * Callers:
 *     DxgkNotifySessionStateChange @ 0x1403DA6C0 (DxgkNotifySessionStateChange.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?InitializeForSession@DXGVALIDATION@@QEAAJPEAVDXGSESSIONDATA@@@Z @ 0x140058E94 (-InitializeForSession@DXGVALIDATION@@QEAAJPEAVDXGSESSIONDATA@@@Z.c)
 *     ?StartPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z @ 0x1401FC480 (-StartPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z.c)
 *     ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1403DABE8 (--0DXGSESSIONDATA@@QEAA@K@Z.c)
 *     ?IncreaseNumSessions@DXGSESSIONMGR@@AEAAJK@Z @ 0x1403DB410 (-IncreaseNumSessions@DXGSESSIONMGR@@AEAAJK@Z.c)
 */

__int64 __fastcall DXGSESSIONMGR::CreateSession(DXGSESSIONMGR **this)
{
  __int64 CurrentProcessSessionId; // rsi
  int v3; // edi
  __int64 v5; // r8
  struct DXGGLOBAL *Global; // rax
  int v7; // ebp
  DXGSESSIONMGR *i; // rdi
  DXGSESSIONDATA *v9; // rax
  DXGSESSIONDATA *v10; // rcx
  __int64 v11; // rax
  _BYTE v12[16]; // [rsp+50h] [rbp-38h] BYREF
  _BYTE v13[16]; // [rsp+60h] [rbp-28h] BYREF

  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (struct DXGFASTMUTEX *const)this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (struct DXGFASTMUTEX *const)(this + 11), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  if ( (unsigned int)CurrentProcessSessionId >= *((_DWORD *)this + 20) )
  {
    v3 = DXGSESSIONMGR::IncreaseNumSessions((DXGSESSIONMGR *)this, CurrentProcessSessionId);
    if ( v3 < 0 )
    {
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v12);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v13);
      return (unsigned int)v3;
    }
  }
  if ( (unsigned int)CurrentProcessSessionId >= *((_DWORD *)this + 20) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5519;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"SessionId < m_SessionDataArraySize",
      5519LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_QWORD *)this[6] + CurrentProcessSessionId) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5520;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"m_pSessionData[SessionId] == NULL",
      5520LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v5 = *((_QWORD *)this[6] + CurrentProcessSessionId);
  if ( v5 )
  {
    WdLogSingleEntry2(3LL, CurrentProcessSessionId, v5);
    WdLogGlobalForLineNumber = 5524;
    goto LABEL_10;
  }
  v9 = (DXGSESSIONDATA *)operator new(0x4B60uLL, 0x4B677844u, 64LL);
  if ( v9 )
    v10 = DXGSESSIONDATA::DXGSESSIONDATA(v9, CurrentProcessSessionId);
  else
    v10 = 0LL;
  *((_QWORD *)this[6] + CurrentProcessSessionId) = v10;
  if ( *((_QWORD *)this[6] + CurrentProcessSessionId) )
  {
LABEL_10:
    Global = DXGGLOBAL::GetGlobal();
    v7 = DXGVALIDATION::InitializeForSession(
           (struct DXGGLOBAL *)((char *)Global + 1652),
           *((struct DXGSESSIONDATA **)this[6] + CurrentProcessSessionId));
    if ( v7 >= 0 )
    {
      for ( i = this[40]; i != (DXGSESSIONMGR *)(this + 40); i = *(DXGSESSIONMGR **)i )
      {
        v11 = *((_QWORD *)i + 4);
        if ( v11 == 0x100000000LL || v11 == CurrentProcessSessionId )
          DXGSESSIONDATA::StartPnPTransitionOnSession(
            *((DXGSESSIONDATA **)this[6] + CurrentProcessSessionId),
            (DXGSESSIONMGR *)((char *)i - 8));
      }
      WdLogSingleEntry3(
        4LL,
        CurrentProcessSessionId,
        *((_QWORD *)this[6] + CurrentProcessSessionId),
        *((unsigned int *)this + 20));
      WdLogGlobalForLineNumber = 5571;
    }
    goto LABEL_23;
  }
  *((_DWORD *)this + 37) |= 1u;
  WdLogSingleEntry1(6LL, CurrentProcessSessionId);
  WdLogGlobalForLineNumber = 5533;
  DxgkLogInternalTriageEvent(
    0LL,
    262145LL,
    0xFFFFFFFFLL,
    L"Unable to allocate dxg session data for session 0x%I64x",
    CurrentProcessSessionId,
    0LL,
    0LL,
    0LL,
    0LL);
  v7 = -1073741801;
LABEL_23:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v12);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v13);
  return (unsigned int)v7;
}
