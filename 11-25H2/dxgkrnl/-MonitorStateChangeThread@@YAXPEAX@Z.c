/*
 * XREFs of ?MonitorStateChangeThread@@YAXPEAX@Z @ 0x14031FF30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?DxgkpCanEnumerateAdapter@@YA_NPEAVDXGSESSIONDATA@@PEAVDXGADAPTER@@@Z @ 0x14031E4F8 (-DxgkpCanEnumerateAdapter@@YA_NPEAVDXGSESSIONDATA@@PEAVDXGADAPTER@@@Z.c)
 *     ?MonitorStateChangeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1403200A4 (-MonitorStateChangeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 */

void __fastcall MonitorStateChangeThread(_QWORD *P)
{
  __int64 v1; // rbx
  int v3; // esi
  __int64 v4; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // r15
  _QWORD *v7; // r14
  _QWORD *v8; // rdi
  _QWORD *v9; // rbx
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  _BYTE v12[16]; // [rsp+50h] [rbp-28h] BYREF

  v1 = P[4];
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (struct DXGFASTMUTEX *const)(v1 + 672), 0);
  v3 = 0;
  if ( (PEPROCESS)PsGetCurrentProcess(v4) == PsInitialSystemProcess )
  {
    SessionData = 0LL;
  }
  else
  {
    Global = DXGGLOBAL::GetGlobal();
    SessionData = DXGGLOBAL::GetSessionData(Global);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  v7 = (_QWORD *)(v1 + 768);
  v8 = *(_QWORD **)(v1 + 768);
LABEL_5:
  while ( v8 != v7 && v8 && !v3 )
  {
    v9 = v8;
    v8 = (_QWORD *)*v8;
    _m_prefetchw(v9 + 3);
    v10 = v9[3];
    while ( v10 )
    {
      v11 = v10;
      v10 = _InterlockedCompareExchange64(v9 + 3, v10 + 1, v10);
      if ( v11 == v10 )
      {
        if ( v9[391] )
        {
          if ( DxgkpCanEnumerateAdapter(SessionData, (struct DXGADAPTER *)v9) )
            v3 = MonitorStateChangeCallback((struct DXGADAPTER *)v9, P);
        }
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v9);
        goto LABEL_5;
      }
    }
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v12);
  if ( v3 < 0 )
  {
    WdLogSingleEntry1(2LL, v3);
    WdLogGlobalForLineNumber = 1427;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to iterate adapters: 0x%I64x",
      v3,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  ExFreePoolWithTag(P, 0x4B677844u);
}
