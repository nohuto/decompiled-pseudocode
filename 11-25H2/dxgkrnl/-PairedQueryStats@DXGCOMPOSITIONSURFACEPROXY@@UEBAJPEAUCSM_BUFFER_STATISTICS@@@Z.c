/*
 * XREFs of ?PairedQueryStats@DXGCOMPOSITIONSURFACEPROXY@@UEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x1401B41C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?VailSendQueryStats@DXGSESSIONDATA@@QEAAJIPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x140202448 (-VailSendQueryStats@DXGSESSIONDATA@@QEAAJIPEAUCSM_BUFFER_STATISTICS@@@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGCOMPOSITIONSURFACEPROXY::PairedQueryStats(
        DXGCOMPOSITIONSURFACEPROXY *this,
        struct CSM_BUFFER_STATISTICS *a2)
{
  unsigned int v4; // edi
  struct DXGPROCESS *Current; // rsi
  DXGGLOBAL *Global; // rax
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v9; // eax
  DXGGLOBAL *v10; // rax
  DXGSESSIONDATA *SessionData; // rax
  int Stats; // eax
  _BYTE v13[96]; // [rsp+50h] [rbp-68h] BYREF

  v4 = 0;
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    KeEnterCriticalRegion();
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (struct DXGPROCESS *)((char *)Current + 104), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
    if ( *((_DWORD *)Current + 122) && (*((_DWORD *)Current + 102) & 4) != 0 )
    {
      if ( *((_BYTE *)Current + 584) )
      {
        Global = DXGGLOBAL::GetGlobal();
        if ( DXGGLOBAL::GetSessionData(Global) )
        {
          if ( *((_DWORD *)this + 5) && *((_BYTE *)this + 40) && *((_BYTE *)this + 41) )
          {
            memset(&v13[16], 0, 0x50uLL);
            v10 = DXGGLOBAL::GetGlobal();
            SessionData = DXGGLOBAL::GetSessionData(v10);
            Stats = DXGSESSIONDATA::VailSendQueryStats(SessionData, *((_DWORD *)this + 5), a2);
            v4 = Stats;
            if ( Stats < 0 )
            {
              WdLogSingleEntry2(3LL, Stats, this);
              WdLogGlobalForLineNumber = 1749;
            }
          }
          else
          {
            WdLogSingleEntry4(
              3LL,
              *((unsigned int *)this + 5),
              *((unsigned __int8 *)this + 40),
              *((unsigned __int8 *)this + 41),
              this);
            WdLogGlobalForLineNumber = 1755;
          }
        }
        else
        {
          v4 = -1073741811;
          CurrentProcessSessionId = PsGetCurrentProcessSessionId();
          WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
          WdLogGlobalForLineNumber = 1734;
          v9 = PsGetCurrentProcessSessionId();
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
            v9,
            -1073741811LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else
      {
        v4 = -2147483611;
        WdLogSingleEntry1(3LL, -2147483611LL);
        WdLogGlobalForLineNumber = 1734;
      }
    }
    KeLeaveCriticalRegion();
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v13);
    return v4;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1734;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid process context. Returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
