/*
 * XREFs of ?ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1402EC3C4
 * Callers:
 *     ?IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1402EC0C4 (-IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?CanEnumerateAdapter@DXGSESSIONDATA@@QEBA_NPEAVDXGADAPTER@@@Z @ 0x140041038 (-CanEnumerateAdapter@DXGSESSIONDATA@@QEBA_NPEAVDXGADAPTER@@@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1402EC610 (-ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 */

void __fastcall DXGPROCESS::ApplyCsFunction(__int64 a1, int a2)
{
  struct DXGGLOBAL *Global; // rbx
  char *v5; // rcx
  int v6; // ebp
  DXGGLOBAL *v7; // rax
  DXGSESSIONDATA *SessionData; // rsi
  _QWORD *v9; // r14
  _QWORD *v10; // rdi
  _QWORD *v11; // rbx
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  struct _KTHREAD **v14; // [rsp+50h] [rbp-38h] BYREF
  char v15; // [rsp+58h] [rbp-30h]
  __int64 v16; // [rsp+60h] [rbp-28h] BYREF
  int v17; // [rsp+68h] [rbp-20h]
  int v18; // [rsp+6Ch] [rbp-1Ch]

  if ( *(struct _KTHREAD **)(a1 + 128) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5474;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsMutexOwner()", 5474LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *(_DWORD *)(a1 + 40) == 1 )
  {
    v18 = 0;
    v16 = a1;
    v17 = a2;
    Global = DXGGLOBAL::GetGlobal();
    v15 = 0;
    v5 = (char *)Global + 672;
    v14 = (struct _KTHREAD **)((char *)Global + 672);
    if ( Global == (struct DXGGLOBAL *)-672LL )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 638;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pMutex != NULL", 638LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( v14[3] == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 645;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 645LL, 0LL, 0LL, 0LL, 0LL);
    }
    v6 = 0;
    if ( (PEPROCESS)PsGetCurrentProcess(v5) == PsInitialSystemProcess )
    {
      SessionData = 0LL;
    }
    else
    {
      v7 = DXGGLOBAL::GetGlobal();
      SessionData = DXGGLOBAL::GetSessionData(v7);
    }
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v14);
    v9 = (_QWORD *)((char *)Global + 768);
    v10 = (_QWORD *)*((_QWORD *)Global + 96);
LABEL_11:
    while ( v10 != v9 && v10 && !v6 )
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
            v6 = ApplyCsFunctionAdapterCallback((struct DXGADAPTER *)v11, &v16);
          DXGADAPTER::ReleaseReference((DXGADAPTER *)v11);
          goto LABEL_11;
        }
      }
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v14);
  }
}
