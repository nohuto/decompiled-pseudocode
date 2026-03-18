/*
 * XREFs of ?PairedUnBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_N@Z @ 0x1401B69D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?VailSendUnbindCompositionSurface@DXGSESSIONDATA@@QEAAJIH@Z @ 0x140209294 (-VailSendUnbindCompositionSurface@DXGSESSIONDATA@@QEAAJIH@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGCOMPOSITIONSURFACEPROXY::PairedUnBind(DXGCOMPOSITIONSURFACEPROXY *this, unsigned __int8 a2)
{
  __int64 v2; // r14
  int v4; // edi
  struct DXGPROCESS *Current; // rsi
  DXGGLOBAL *Global; // rax
  __int64 v8; // rdx
  DXGSESSIONDATA *SessionData; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v13; // eax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  unsigned int v16; // edx
  int v17; // eax
  _BYTE v18[16]; // [rsp+50h] [rbp-18h] BYREF

  v2 = a2;
  v4 = 0;
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1650;
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
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, (struct DXGPROCESS *)((char *)Current + 104), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
  if ( *((_DWORD *)Current + 122) && (*((_DWORD *)Current + 102) & 4) != 0 )
  {
    if ( !*((_BYTE *)Current + 584) )
    {
      v4 = -2147483611;
      WdLogSingleEntry1(3LL, -2147483611LL);
      WdLogGlobalForLineNumber = 1650;
LABEL_9:
      KeLeaveCriticalRegion();
LABEL_19:
      WdLogSingleEntry2(3LL, v4, this);
      WdLogGlobalForLineNumber = 1681;
      goto LABEL_20;
    }
    Global = DXGGLOBAL::GetGlobal();
    SessionData = DXGGLOBAL::GetSessionData(Global);
    if ( !SessionData )
    {
      v4 = -1073741811;
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
      WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
      WdLogGlobalForLineNumber = 1650;
      v13 = PsGetCurrentProcessSessionId();
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
        v13,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_9;
    }
    v14 = *((unsigned int *)this + 5);
    if ( !(_DWORD)v14 || !*((_BYTE *)this + 41) )
    {
      WdLogSingleEntry4(
        3LL,
        *((unsigned int *)this + 5),
        this,
        *((unsigned __int8 *)this + 40),
        *((unsigned __int8 *)this + 41));
      WdLogGlobalForLineNumber = 1674;
      goto LABEL_17;
    }
    v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v8, v10, v11);
    v15[3] = *((unsigned int *)this + 5);
    v15[4] = this;
    v15[5] = v2;
    v16 = *((_DWORD *)this + 5);
    WdLogGlobalForLineNumber = 1659;
    v17 = DXGSESSIONDATA::VailSendUnbindCompositionSurface(SessionData, v16, v2);
    v4 = v17;
    if ( v17 < 0 )
    {
      WdLogSingleEntry4(3LL, *((unsigned int *)this + 5), this, v2, v17);
      WdLogGlobalForLineNumber = 1664;
      goto LABEL_9;
    }
    if ( !(_BYTE)v2 )
    {
      *((_BYTE *)this + 41) = 0;
LABEL_17:
      KeLeaveCriticalRegion();
      goto LABEL_20;
    }
  }
  KeLeaveCriticalRegion();
  if ( v4 < 0 )
    goto LABEL_19;
LABEL_20:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v18);
  return (unsigned int)v4;
}
