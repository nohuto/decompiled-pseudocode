/*
 * XREFs of ?MonitorStateChangeThread@@YAXPEAX@Z @ 0x140397C60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z @ 0x140072E4C (--0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z.c)
 *     ??1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ @ 0x1400730D4 (--1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x1400732F4 (-AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?MonitorStateChangeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x140397DD0 (-MonitorStateChangeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DxgkpCanEnumerateAdapter@@YA_NPEAVDXGSESSIONDATA@@PEAVDXGADAPTER@@@Z @ 0x140398884 (-DxgkpCanEnumerateAdapter@@YA_NPEAVDXGSESSIONDATA@@PEAVDXGADAPTER@@@Z.c)
 */

void __fastcall MonitorStateChangeThread(_QWORD *a1)
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
  DXGADAPTERLISTLOCK *v12[2]; // [rsp+50h] [rbp-28h] BYREF

  v1 = a1[4];
  DXGAUTOADAPTERLISTLOCK::DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v12, (struct DXGADAPTERLISTLOCK *)(v1 + 672));
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
  DXGAUTOADAPTERLISTLOCK::AcquireShared(v12);
  v7 = (_QWORD *)(v1 + 800);
  v8 = *(_QWORD **)(v1 + 800);
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
            v3 = MonitorStateChangeCallback((struct DXGADAPTER *)v9, a1);
        }
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v9);
        goto LABEL_5;
      }
    }
  }
  DXGAUTOADAPTERLISTLOCK::~DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v12);
  if ( v3 < 0 )
  {
    WdLogSingleEntry1(2LL, v3);
    WdLogGlobalForLineNumber = 1427;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to iterate adapters: 0x%I64x",
      v3,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  ExFreePoolWithTag(a1, 0x4B677844u);
}
