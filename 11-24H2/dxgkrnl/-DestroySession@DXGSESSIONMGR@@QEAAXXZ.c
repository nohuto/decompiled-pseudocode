/*
 * XREFs of ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1401FA6BC
 * Callers:
 *     DxgkNotifySessionStateChange @ 0x1403DA6C0 (DxgkNotifySessionStateChange.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??_GDXGSESSIONDATA@@QEAAPEAXI@Z @ 0x140079254 (--_GDXGSESSIONDATA@@QEAAPEAXI@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14029AE64 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1402FACA0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1403E6C8C (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 */

void __fastcall DXGSESSIONMGR::DestroySession(DXGSESSIONMGR *this)
{
  unsigned int CurrentProcessSessionId; // eax
  __int64 v3; // rsi
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  struct DXGSESSIONDATA *v5; // rdi
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v7; // rax
  __int64 v8; // r9
  __int64 v9; // r8
  DXGSESSIONDATA *v10; // rcx
  _BYTE v11[16]; // [rsp+50h] [rbp-28h] BYREF
  _BYTE v12[16]; // [rsp+60h] [rbp-18h] BYREF

  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  v3 = CurrentProcessSessionId;
  SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(this, CurrentProcessSessionId);
  v5 = SessionDataForSpecifiedSession;
  if ( SessionDataForSpecifiedSession )
  {
    if ( SessionDataForSpecifiedSession == *((struct DXGSESSIONDATA **)this + 17) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5603;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"m_pConsoleSessionData != pSessionData",
        5603LL,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( v5 == *((struct DXGSESSIONDATA **)this + 17) )
      {
        Global = DXGGLOBAL::GetGlobal();
        DXGSESSIONMGR::SetConsoleSession(*((DXGSESSIONMGR **)Global + 122), 0);
      }
    }
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  v7 = DXGGLOBAL::GetGlobal();
  DXGGLOBAL::IterateAdaptersWithCallback(
    v7,
    DXGPRESENTHISTORYTOKENQUEUE::CleanupPresentHistoryTokenQueueAdapter,
    0LL,
    2LL);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (DXGSESSIONMGR *)((char *)this + 88), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  v8 = *((unsigned int *)this + 20);
  if ( (unsigned int)v3 >= (unsigned int)v8 )
    v9 = 0LL;
  else
    v9 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v3);
  WdLogSingleEntry3(4LL, v3, v9, v8);
  WdLogGlobalForLineNumber = 5626;
  if ( (unsigned int)v3 < *((_DWORD *)this + 20) )
  {
    v10 = *(DXGSESSIONDATA **)(*((_QWORD *)this + 6) + 8 * v3);
    if ( v10 )
    {
      DXGSESSIONDATA::`scalar deleting destructor'(v10);
      *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v3) = 0LL;
    }
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v11);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v12);
}
