/*
 * XREFs of ?DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAVCompositionSurfaceObject@@PEAPEAUIPairedSurfaceObject@@PEAPEAX@Z @ 0x1401B3220
 * Callers:
 *     NtDxgkVailPromoteCompositionSurface @ 0x140203E90 (NtDxgkVailPromoteCompositionSurface.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1401B3724 (-Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ.c)
 *     ?Release@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1401B4DF8 (-Release@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ.c)
 *     ?VailSendCreateCompositionSurface@DXGSESSIONDATA@@QEAAJPEAIPEAPEAX@Z @ 0x140201D40 (-VailSendCreateCompositionSurface@DXGSESSIONDATA@@QEAAJPEAIPEAPEAX@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCreateRemoteCompositionSurfaceObjectForPairing(
        struct CompositionSurfaceObject *a1,
        struct IPairedSurfaceObject **a2,
        void **a3,
        __int64 a4)
{
  void *v7; // r14
  __int64 v8; // rbx
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rsi
  struct DXGPROCESS *Current; // rbp
  DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionData; // rax
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v17; // eax
  int v18; // eax
  void *v19; // [rsp+50h] [rbp-48h] BYREF
  _BYTE v20[24]; // [rsp+58h] [rbp-40h] BYREF
  unsigned int v21; // [rsp+B8h] [rbp+20h] BYREF

  v21 = 0;
  v19 = 0LL;
  v7 = 0LL;
  v8 = operator new(0x40uLL, 0x4B677844u, 256LL, a4);
  if ( !v8 )
  {
    v10 = -1073741801;
    WdLogSingleEntry1(3LL, -1073741801LL);
    WdLogGlobalForLineNumber = 1833;
    *a3 = 0LL;
    return v10;
  }
  *(_DWORD *)(v8 + 8) = 1;
  *(_QWORD *)v8 = &DXGCOMPOSITIONSURFACEPROXY::`vftable';
  *(_WORD *)(v8 + 12) = 0;
  *(_QWORD *)(v8 + 16) = 0LL;
  *(_QWORD *)(v8 + 24) = 0LL;
  *(_QWORD *)(v8 + 32) = 0LL;
  *(_WORD *)(v8 + 40) = 0;
  *(_QWORD *)(v8 + 48) = 0LL;
  *(_DWORD *)(v8 + 56) = 0;
  v9 = DXGCOMPOSITIONSURFACEPROXY::Initialize((DXGCOMPOSITIONSURFACEPROXY *)v8);
  v10 = v9;
  if ( v9 < 0 )
  {
    WdLogSingleEntry1(3LL, v9);
    *a3 = 0LL;
    v11 = v8;
    WdLogGlobalForLineNumber = 1842;
LABEL_18:
    DXGCOMPOSITIONSURFACEPROXY::Release((DXGCOMPOSITIONSURFACEPROXY *)v11);
    return v10;
  }
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1848;
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
  KeEnterCriticalRegion();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, (struct DXGPROCESS *)((char *)Current + 104), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
  v11 = v8;
  if ( *((_DWORD *)Current + 122) && (*((_DWORD *)Current + 102) & 4) != 0 )
  {
    if ( *((_BYTE *)Current + 584) )
    {
      Global = DXGGLOBAL::GetGlobal();
      SessionData = DXGGLOBAL::GetSessionData(Global);
      if ( SessionData )
      {
        v18 = DXGSESSIONDATA::VailSendCreateCompositionSurface(SessionData, &v21, &v19);
        v10 = v18;
        if ( v18 < 0 )
        {
          WdLogSingleEntry1(3LL, v18);
          WdLogGlobalForLineNumber = 1854;
        }
        v7 = v19;
      }
      else
      {
        v10 = -1073741811;
        CurrentProcessSessionId = PsGetCurrentProcessSessionId();
        WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
        WdLogGlobalForLineNumber = 1848;
        v17 = PsGetCurrentProcessSessionId();
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
          v17,
          -1073741811LL,
          0LL,
          0LL,
          0LL);
        v11 = v8;
      }
    }
    else
    {
      v10 = -2147483611;
      WdLogSingleEntry1(3LL, -2147483611LL);
      WdLogGlobalForLineNumber = 1848;
    }
  }
  KeLeaveCriticalRegion();
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v20);
  if ( (v10 & 0x80000000) != 0 )
  {
    *a3 = 0LL;
    goto LABEL_18;
  }
  *(_DWORD *)(v11 + 20) = v21;
  *(_QWORD *)(v11 + 32) = v7;
  *(_QWORD *)(v11 + 24) = a1;
  *a2 = (struct IPairedSurfaceObject *)v11;
  *a3 = v7;
  return v10;
}
