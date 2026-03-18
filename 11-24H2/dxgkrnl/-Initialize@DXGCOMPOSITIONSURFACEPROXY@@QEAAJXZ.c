/*
 * XREFs of ?Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1401B5CD4
 * Callers:
 *     ?DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAVCompositionSurfaceObject@@PEAPEAUIPairedSurfaceObject@@PEAPEAX@Z @ 0x1401B57D0 (-DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAVCompositionSurfaceObject@@PEAPEAUIPa.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?VailRegisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z @ 0x140207AA4 (-VailRegisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGCOMPOSITIONSURFACEPROXY::Initialize(DXGCOMPOSITIONSURFACEPROXY *this)
{
  unsigned int v2; // ebx
  struct DXGPROCESS *Current; // rdi
  DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionData; // rax
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v8; // eax
  int v9; // eax
  _BYTE v10[24]; // [rsp+50h] [rbp-18h] BYREF

  v2 = 0;
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    KeEnterCriticalRegion();
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (struct DXGPROCESS *)((char *)Current + 104), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
    if ( *((_DWORD *)Current + 122) && (*((_DWORD *)Current + 102) & 4) != 0 )
    {
      if ( *((_BYTE *)Current + 584) )
      {
        Global = DXGGLOBAL::GetGlobal();
        SessionData = DXGGLOBAL::GetSessionData(Global);
        if ( SessionData )
        {
          v9 = DXGSESSIONDATA::VailRegisterCompositionSurfaceProxy(SessionData, this);
          v2 = v9;
          if ( v9 < 0 )
          {
            WdLogSingleEntry2(3LL, v9, this);
            WdLogGlobalForLineNumber = 1778;
          }
        }
        else
        {
          v2 = -1073741811;
          CurrentProcessSessionId = PsGetCurrentProcessSessionId();
          WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
          WdLogGlobalForLineNumber = 1772;
          v8 = PsGetCurrentProcessSessionId();
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
            v8,
            -1073741811LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else
      {
        v2 = -2147483611;
        WdLogSingleEntry1(3LL, -2147483611LL);
        WdLogGlobalForLineNumber = 1772;
      }
    }
    KeLeaveCriticalRegion();
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v10);
    return v2;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1772;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
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
