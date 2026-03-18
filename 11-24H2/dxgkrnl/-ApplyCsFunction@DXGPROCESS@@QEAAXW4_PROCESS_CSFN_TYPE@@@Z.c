/*
 * XREFs of ?ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1402E5F68
 * Callers:
 *     ?IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1402E5C64 (-IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?CanEnumerateAdapter@DXGSESSIONDATA@@QEBA_NPEAVDXGADAPTER@@@Z @ 0x140040AE8 (-CanEnumerateAdapter@DXGSESSIONDATA@@QEBA_NPEAVDXGADAPTER@@@Z.c)
 *     ??0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z @ 0x140072E4C (--0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z.c)
 *     ??1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ @ 0x1400730D4 (--1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x1400732F4 (-AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1402E60FC (-ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 */

void __fastcall DXGPROCESS::ApplyCsFunction(__int64 a1, int a2)
{
  struct DXGGLOBAL *Global; // rbx
  int v5; // ebp
  __int64 v6; // rcx
  DXGGLOBAL *v7; // rax
  DXGSESSIONDATA *SessionData; // rsi
  _QWORD *v9; // r14
  _QWORD *v10; // rdi
  _QWORD *v11; // rbx
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  __int64 v14; // [rsp+50h] [rbp-28h] BYREF
  int v15; // [rsp+58h] [rbp-20h]
  int v16; // [rsp+5Ch] [rbp-1Ch]
  DXGADAPTERLISTLOCK *v17[2]; // [rsp+60h] [rbp-18h] BYREF

  if ( *(struct _KTHREAD **)(a1 + 128) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5567;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"IsMutexOwner()", 5567LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *(_DWORD *)(a1 + 40) == 1 )
  {
    v16 = 0;
    v14 = a1;
    v15 = a2;
    Global = DXGGLOBAL::GetGlobal();
    DXGAUTOADAPTERLISTLOCK::DXGAUTOADAPTERLISTLOCK(
      (DXGAUTOADAPTERLISTLOCK *)v17,
      (struct DXGGLOBAL *)((char *)Global + 672));
    v5 = 0;
    if ( (PEPROCESS)PsGetCurrentProcess(v6) == PsInitialSystemProcess )
    {
      SessionData = 0LL;
    }
    else
    {
      v7 = DXGGLOBAL::GetGlobal();
      SessionData = DXGGLOBAL::GetSessionData(v7);
    }
    DXGAUTOADAPTERLISTLOCK::AcquireShared(v17);
    v9 = (_QWORD *)((char *)Global + 800);
    v10 = (_QWORD *)*((_QWORD *)Global + 100);
LABEL_7:
    while ( v10 != v9 && v10 && !v5 )
    {
      v11 = v10;
      v10 = (_QWORD *)*v10;
      _m_prefetchw(v11 + 3);
      v12 = v11[3];
      while ( v12 )
      {
        v13 = v12;
        v12 = _InterlockedCompareExchange64(v11 + 3, v12 + 1, v12);
        if ( v13 == v12 )
        {
          if ( v11[391] && (!SessionData || DXGSESSIONDATA::CanEnumerateAdapter(SessionData, (struct DXGADAPTER *)v11)) )
            v5 = ApplyCsFunctionAdapterCallback((struct DXGADAPTER *)v11, &v14);
          DXGADAPTER::ReleaseReference((DXGADAPTER *)v11);
          goto LABEL_7;
        }
      }
    }
    DXGAUTOADAPTERLISTLOCK::~DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v17);
  }
}
