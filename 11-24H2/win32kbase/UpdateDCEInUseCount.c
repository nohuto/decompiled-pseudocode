/*
 * XREFs of UpdateDCEInUseCount @ 0x1400C2468
 * Callers:
 *     _GetDCEx @ 0x140099850 (_GetDCEx.c)
 *     GetMonitorDC @ 0x14009B3A0 (GetMonitorDC.c)
 * Callees:
 *     ?TraceLoggingProcessDCsInUse@@YAXKK@Z @ 0x1400C26C8 (-TraceLoggingProcessDCsInUse@@YAXKK@Z.c)
 *     ?TraceLoggingGlobalDCsInUse@@YAXK@Z @ 0x1400C2748 (-TraceLoggingGlobalDCsInUse@@YAXK@Z.c)
 */

__int64 __fastcall UpdateDCEInUseCount(__int64 a1, unsigned int *a2)
{
  int v3; // esi
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned int v7; // eax
  __int64 v8; // rax
  LARGE_INTEGER PerformanceCounter; // rsi
  __int64 v10; // rcx
  LONGLONG v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 UserSessionState; // rax
  __int64 v16; // rcx
  unsigned int v17; // eax
  unsigned int v18; // ebx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // rcx
  LONGLONG v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx

  v3 = a1;
  result = W32GetUserSessionState(a1);
  if ( !*(_DWORD *)(result + 19712) )
  {
    if ( !*(_QWORD *)(W32GetUserSessionState(v5) + 19688) )
    {
      v23 = gliQpcFreq.QuadPart * *(_QWORD *)(W32GetUserSessionState(v6) + 19696);
      *(_QWORD *)(W32GetUserSessionState(v23) + 19688) = 60 * v23;
    }
    v7 = a2[272];
    if ( v3 )
    {
      a2[272] = v7 + 1;
      UserSessionState = W32GetUserSessionState(v6);
      ++*(_DWORD *)(UserSessionState + 19720);
      v17 = a2[272];
      if ( a2[273] < v17 )
        a2[273] = v17;
      v18 = *(_DWORD *)(W32GetUserSessionState(v16) + 19680);
      if ( v18 < *(_DWORD *)(W32GetUserSessionState(v19) + 19720) )
      {
        v21 = *(_DWORD *)(W32GetUserSessionState(v20) + 19720);
        *(_DWORD *)(W32GetUserSessionState(v22) + 19680) = v21;
      }
    }
    else
    {
      a2[272] = v7 - 1;
      v8 = W32GetUserSessionState(v6);
      --*(_DWORD *)(v8 + 19720);
    }
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v11 = *(unsigned int *)(W32GetUserSessionState(v10) + 19708);
    if ( !(a2[273] % (unsigned int)v11) )
    {
      v24 = *(_QWORD *)(W32GetUserSessionState(v11) + 19664);
      v26 = W32GetUserSessionState(v25);
      v11 = PerformanceCounter.QuadPart - v24;
      if ( PerformanceCounter.QuadPart - v24 >= *(_QWORD *)(v26 + 19688) )
      {
        TraceLoggingProcessDCsInUse(a2[273], a2[14]);
        *(LARGE_INTEGER *)(W32GetUserSessionState(v27) + 19664) = PerformanceCounter;
      }
    }
    v12 = *(_DWORD *)(W32GetUserSessionState(v11) + 19680);
    v14 = W32GetUserSessionState(v13);
    result = v12 / *(_DWORD *)(v14 + 19704);
    if ( !(v12 % *(_DWORD *)(v14 + 19704)) )
    {
      v28 = *(_QWORD *)(W32GetUserSessionState(v14) + 19672);
      result = W32GetUserSessionState(v29);
      if ( PerformanceCounter.QuadPart - v28 >= *(_QWORD *)(result + 19688) )
      {
        v30 = W32GetUserSessionState(PerformanceCounter.QuadPart - v28);
        TraceLoggingGlobalDCsInUse(*(_DWORD *)(v30 + 19680));
        result = W32GetUserSessionState(v31);
        *(LARGE_INTEGER *)(result + 19672) = PerformanceCounter;
      }
    }
  }
  return result;
}
