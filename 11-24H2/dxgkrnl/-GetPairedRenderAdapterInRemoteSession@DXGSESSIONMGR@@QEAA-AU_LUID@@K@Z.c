/*
 * XREFs of ?GetPairedRenderAdapterInRemoteSession@DXGSESSIONMGR@@QEAA?AU_LUID@@K@Z @ 0x1401FAE54
 * Callers:
 *     ?IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1401CF2E0 (-IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     Feature_SetPairedRenderNoSessionLock__private_IsEnabledDeviceUsageNoInline @ 0x14006CB44 (Feature_SetPairedRenderNoSessionLock__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1402FACA0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

struct _LUID __fastcall DXGSESSIONMGR::GetPairedRenderAdapterInRemoteSession(
        DXGSESSIONMGR *this,
        _QWORD *a2,
        unsigned int a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  _BYTE v9[16]; // [rsp+50h] [rbp-18h] BYREF

  v3 = a3;
  if ( (unsigned int)Feature_SetPairedRenderNoSessionLock__private_IsEnabledDeviceUsageNoInline() )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (DXGSESSIONMGR *)((char *)this + 88), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
    if ( (unsigned int)v3 < *((_DWORD *)this + 20) && *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v3) )
    {
      _mm_lfence();
      v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8 * v3) + 18520LL);
LABEL_10:
      *a2 = v6;
      goto LABEL_11;
    }
    WdLogSingleEntry1(2LL, v3);
    WdLogGlobalForLineNumber = 5435;
  }
  else
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, this, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(this, v3);
    if ( SessionDataForSpecifiedSession )
    {
      v6 = *((_QWORD *)SessionDataForSpecifiedSession + 2315);
      goto LABEL_10;
    }
    WdLogSingleEntry1(2LL, v3);
    WdLogGlobalForLineNumber = 5449;
  }
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Session 0x%I64x does not have session data, unable to get render adapter.",
    v3,
    0LL,
    0LL,
    0LL,
    0LL);
  *a2 = 0LL;
LABEL_11:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v9);
  return (struct _LUID)a2;
}
