/*
 * XREFs of ?DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAVCompositionSurfaceObject@@PEAPEAUIPairedSurfaceObject@@PEAPEAX@Z @ 0x1401B57D0
 * Callers:
 *     NtDxgkVailPromoteCompositionSurface @ 0x14020A5B0 (NtDxgkVailPromoteCompositionSurface.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1401B5CD4 (-Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ.c)
 *     ?Release@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1401B73A8 (-Release@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ.c)
 *     ?VailSendCreateCompositionSurface@DXGSESSIONDATA@@QEAAJPEAIPEAPEAX@Z @ 0x140208450 (-VailSendCreateCompositionSurface@DXGSESSIONDATA@@QEAAJPEAIPEAPEAX@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCreateRemoteCompositionSurfaceObjectForPairing(
        struct CompositionSurfaceObject *a1,
        struct IPairedSurfaceObject **a2,
        void **a3)
{
  void *v6; // r14
  __int64 v7; // rbx
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rsi
  struct DXGPROCESS *Current; // rbp
  DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionData; // rax
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v16; // eax
  int v17; // eax
  void *v18; // [rsp+50h] [rbp-48h] BYREF
  _BYTE v19[24]; // [rsp+58h] [rbp-40h] BYREF
  unsigned int v20; // [rsp+B8h] [rbp+20h] BYREF

  v20 = 0;
  v18 = 0LL;
  v6 = 0LL;
  v7 = operator new(0x40uLL, 0x4B677844u, 256LL);
  if ( !v7 )
  {
    v9 = -1073741801;
    WdLogSingleEntry1(3LL, -1073741801LL);
    WdLogGlobalForLineNumber = 1833;
    *a3 = 0LL;
    return v9;
  }
  *(_DWORD *)(v7 + 8) = 1;
  *(_QWORD *)v7 = &DXGCOMPOSITIONSURFACEPROXY::`vftable';
  *(_WORD *)(v7 + 12) = 0;
  *(_QWORD *)(v7 + 16) = 0LL;
  *(_QWORD *)(v7 + 24) = 0LL;
  *(_QWORD *)(v7 + 32) = 0LL;
  *(_WORD *)(v7 + 40) = 0;
  *(_QWORD *)(v7 + 48) = 0LL;
  *(_DWORD *)(v7 + 56) = 0;
  v8 = DXGCOMPOSITIONSURFACEPROXY::Initialize((DXGCOMPOSITIONSURFACEPROXY *)v7);
  v9 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry1(3LL, v8);
    *a3 = 0LL;
    v10 = v7;
    WdLogGlobalForLineNumber = 1842;
LABEL_18:
    DXGCOMPOSITIONSURFACEPROXY::Release((DXGCOMPOSITIONSURFACEPROXY *)v10);
    return v9;
  }
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1848;
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
  KeEnterCriticalRegion();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, (struct DXGPROCESS *)((char *)Current + 104), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
  v10 = v7;
  if ( *((_DWORD *)Current + 122) && (*((_DWORD *)Current + 102) & 4) != 0 )
  {
    if ( *((_BYTE *)Current + 584) )
    {
      Global = DXGGLOBAL::GetGlobal();
      SessionData = DXGGLOBAL::GetSessionData(Global);
      if ( SessionData )
      {
        v17 = DXGSESSIONDATA::VailSendCreateCompositionSurface(SessionData, &v20, &v18);
        v9 = v17;
        if ( v17 < 0 )
        {
          WdLogSingleEntry1(3LL, v17);
          WdLogGlobalForLineNumber = 1854;
        }
        v6 = v18;
      }
      else
      {
        v9 = -1073741811;
        CurrentProcessSessionId = PsGetCurrentProcessSessionId();
        WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
        WdLogGlobalForLineNumber = 1848;
        v16 = PsGetCurrentProcessSessionId();
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
          v16,
          -1073741811LL,
          0LL,
          0LL,
          0LL);
        v10 = v7;
      }
    }
    else
    {
      v9 = -2147483611;
      WdLogSingleEntry1(3LL, -2147483611LL);
      WdLogGlobalForLineNumber = 1848;
    }
  }
  KeLeaveCriticalRegion();
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v19);
  if ( (v9 & 0x80000000) != 0 )
  {
    *a3 = 0LL;
    goto LABEL_18;
  }
  *(_DWORD *)(v10 + 20) = v20;
  *(_QWORD *)(v10 + 32) = v6;
  *(_QWORD *)(v10 + 24) = a1;
  *a2 = (struct IPairedSurfaceObject *)v10;
  *a3 = v6;
  return v9;
}
