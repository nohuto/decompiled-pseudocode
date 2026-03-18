/*
 * XREFs of ?SetPairedRenderAdapterInRemoteSession@DXGSESSIONMGR@@QEAAXKPEAVDXGADAPTER@@@Z @ 0x1401FC0CC
 * Callers:
 *     ?SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z @ 0x14019B038 (-SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     Feature_SetPairedRenderNoSessionLock__private_IsEnabledDeviceUsageNoInline @ 0x14006CB44 (Feature_SetPairedRenderNoSessionLock__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1402FACA0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

void __fastcall DXGSESSIONMGR::SetPairedRenderAdapterInRemoteSession(
        DXGSESSIONMGR *this,
        unsigned int a2,
        struct DXGADAPTER *a3)
{
  __int64 v4; // rbp
  __int64 v6; // rdi
  __int64 v7; // rcx
  DXGPROCESSCOPYPROTECTIONMUTEX *v8; // rcx
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // r14
  _BYTE v10[16]; // [rsp+50h] [rbp-28h] BYREF
  _BYTE v11[16]; // [rsp+60h] [rbp-18h] BYREF

  v4 = a2;
  v6 = 0LL;
  if ( (unsigned int)Feature_SetPairedRenderNoSessionLock__private_IsEnabledDeviceUsageNoInline() )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (DXGSESSIONMGR *)((char *)this + 88), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
    if ( (unsigned int)v4 < *((_DWORD *)this + 20) && (v7 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v4)) != 0 )
    {
      if ( a3 )
        v6 = *(_QWORD *)((char *)a3 + 412);
      *(_QWORD *)(v7 + 18520) = v6;
    }
    else
    {
      WdLogSingleEntry1(2LL, v4);
      WdLogGlobalForLineNumber = 5466;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Session 0x%I64x does not have session data, unable to set render adapter.",
        v4,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v8 = (DXGPROCESSCOPYPROTECTIONMUTEX *)v10;
  }
  else
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, this, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(this, v4);
    if ( !SessionDataForSpecifiedSession )
    {
      WdLogSingleEntry1(2LL, v4);
      WdLogGlobalForLineNumber = 5480;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Session 0x%I64x does not have session data, unable to set render adapter.",
        v4,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( a3 )
      v6 = *(_QWORD *)((char *)a3 + 412);
    *((_QWORD *)SessionDataForSpecifiedSession + 2315) = v6;
    v8 = (DXGPROCESSCOPYPROTECTIONMUTEX *)v11;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX(v8);
}
