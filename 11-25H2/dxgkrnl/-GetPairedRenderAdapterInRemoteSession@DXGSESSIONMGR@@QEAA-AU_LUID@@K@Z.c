/*
 * XREFs of ?GetPairedRenderAdapterInRemoteSession@DXGSESSIONMGR@@QEAA?AU_LUID@@K@Z @ 0x1401F460C
 * Callers:
 *     ?IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1401CA050 (-IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1403037B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

struct _LUID __fastcall DXGSESSIONMGR::GetPairedRenderAdapterInRemoteSession(
        DXGSESSIONMGR *this,
        __int64 a2,
        unsigned int a3)
{
  __int64 v4; // rsi
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  _BYTE v8[24]; // [rsp+50h] [rbp-18h] BYREF

  v4 = a3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(this, v4);
  if ( SessionDataForSpecifiedSession )
  {
    *(_QWORD *)a2 = *((_QWORD *)SessionDataForSpecifiedSession + 2315);
  }
  else
  {
    WdLogSingleEntry1(2LL, (unsigned int)v4);
    WdLogGlobalForLineNumber = 5414;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Session 0x%I64x does not have session data, unable to get render adapter.",
      v4,
      0LL,
      0LL,
      0LL,
      0LL);
    *(_DWORD *)a2 = 0;
    *(_DWORD *)(a2 + 4) = 0;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v8);
  return (struct _LUID)a2;
}
