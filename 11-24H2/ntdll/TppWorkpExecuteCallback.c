/*
 * XREFs of TppWorkpExecuteCallback @ 0x180022BB0
 * Callers:
 *     TppWorkerThread @ 0x1800238D0 (TppWorkerThread.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     LdrpProcessWork @ 0x180021E60 (LdrpProcessWork.c)
 *     LdrpThreadTokenSetImpersonationToken @ 0x18002225C (LdrpThreadTokenSetImpersonationToken.c)
 *     TppWorkCallbackPrologRelease @ 0x1800222C0 (TppWorkCallbackPrologRelease.c)
 *     LdrpUpdateStatistics @ 0x180022B6C (LdrpUpdateStatistics.c)
 *     TpReleaseWork @ 0x18006CCA0 (TpReleaseWork.c)
 *     NtTraceEvent @ 0x180162840 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct _PEB *__fastcall TppWorkpExecuteCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdi
  __int64 v7; // rsi
  _DWORD *SharedData; // rcx
  __int64 v9; // rcx
  bool v10; // r15
  _DWORD *v11; // rcx
  __int64 v12; // rcx
  struct _PEB *result; // rax
  _DWORD *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r10
  _QWORD *ThreadPoolData; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // r14
  __int64 (__fastcall *v23)(); // rax
  __int64 *v24; // rbx
  __int64 v25; // rax
  _DWORD *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  _DWORD *v29; // rcx
  _DWORD *v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rdx
  _DWORD v33[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v34; // [rsp+28h] [rbp-D8h]
  __int128 v35; // [rsp+30h] [rbp-D0h]
  __int64 v36; // [rsp+40h] [rbp-C0h]
  __int64 v37; // [rsp+48h] [rbp-B8h]
  __int64 v38; // [rsp+50h] [rbp-B0h]
  __int64 v39; // [rsp+58h] [rbp-A8h]
  __int64 v40; // [rsp+60h] [rbp-A0h]
  _DWORD v41[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v42; // [rsp+78h] [rbp-88h]
  __int128 v43; // [rsp+80h] [rbp-80h]
  __int64 v44; // [rsp+90h] [rbp-70h]
  __int64 v45; // [rsp+98h] [rbp-68h]
  __int64 v46; // [rsp+A0h] [rbp-60h]
  __int64 v47; // [rsp+A8h] [rbp-58h]
  __int64 v48; // [rsp+B0h] [rbp-50h]
  _DWORD v49[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v50; // [rsp+C8h] [rbp-38h]
  __int128 v51; // [rsp+D0h] [rbp-30h]
  __int64 v52; // [rsp+E0h] [rbp-20h]
  __int64 v53; // [rsp+E8h] [rbp-18h]
  __int64 v54; // [rsp+F0h] [rbp-10h]
  __int64 v55; // [rsp+F8h] [rbp-8h]
  __int64 v56; // [rsp+100h] [rbp+0h]

  v4 = (_QWORD *)(a2 - 200);
  v7 = 2147353478LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v9 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v9 = 2147353478LL;
  v10 = 0;
  if ( *(_BYTE *)v9 )
  {
    v36 = v4[18];
    v38 = v4[10];
    v39 = v4[11];
    v40 = v4[13];
    v33[0] = 0;
    v33[1] = 471924736;
    v34 = 0LL;
    v35 = 0LL;
    v37 = a2;
    v11 = NtCurrentPeb()->SharedData;
    if ( v11 && *v11 )
      v12 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v12 = 2147353478LL;
    NtTraceEvent(*(unsigned __int8 *)v12, 1027LL, 40LL, v33);
  }
  result = (struct _PEB *)TppWorkCallbackPrologRelease(a1, (__int64)v4, 0LL, a4);
  if ( (_DWORD)result )
  {
    v14 = NtCurrentPeb()->SharedData;
    if ( v14 && *v14 )
      v15 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v15 = 2147353478LL;
    if ( *(_BYTE *)v15 )
    {
      v44 = v4[18];
      v46 = v4[10];
      v47 = v4[11];
      v48 = v4[13];
      v41[0] = 0;
      v41[1] = 471990272;
      v42 = 0LL;
      v43 = 0LL;
      v45 = a2;
      v30 = NtCurrentPeb()->SharedData;
      if ( v30 && *v30 )
        v31 = (__int64)NtCurrentPeb()->SharedData + 556;
      else
        v31 = 2147353478LL;
      NtTraceEvent(*(unsigned __int8 *)v31, 1026LL, 40LL, v41);
    }
    v16 = v4[13];
    v17 = v4[11];
    v18 = v4[10];
    ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
    if ( ThreadPoolData )
    {
      ++ThreadPoolData[2];
      v20 = ((unsigned __int8)*((_DWORD *)ThreadPoolData + 3) - 1) & 1;
      *((_DWORD *)ThreadPoolData + 3) = v20;
      v21 = (unsigned int)v20;
      v20 *= 32LL;
      v22 = (_QWORD *)((char *)ThreadPoolData + v20 + 32);
      *(_QWORD *)((char *)ThreadPoolData + v20 + 40) = v17;
      *v22 = v18;
      *(_QWORD *)((char *)ThreadPoolData + v20 + 48) = v16;
      ThreadPoolData[4 * v21 + 7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
    }
    else
    {
      v22 = 0LL;
    }
    *(_QWORD *)(a1 + 88) = v4[10];
    *(_QWORD *)(a1 + 96) = v4[11];
    v23 = (__int64 (__fastcall *)())v4[10];
    if ( v23 == LdrpWorkCallback )
    {
      while ( !LdrpDetourExist )
      {
        RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
        v24 = (__int64 *)LdrpWorkQueue;
        if ( *(__int64 **)(LdrpWorkQueue + 8) != &LdrpWorkQueue
          || (v25 = *(_QWORD *)LdrpWorkQueue, *(_QWORD *)(*(_QWORD *)LdrpWorkQueue + 8LL) != LdrpWorkQueue) )
        {
          __fastfail(3u);
        }
        LdrpWorkQueue = *(_QWORD *)LdrpWorkQueue;
        *(_QWORD *)(v25 + 8) = &LdrpWorkQueue;
        if ( &LdrpWorkQueue != v24 )
        {
          ++LdrpWorkInProgress;
          LdrpUpdateStatistics();
        }
        RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock);
        if ( &LdrpWorkQueue == v24 )
          break;
        if ( !v10 && LdrpMainThreadToken )
          v10 = (int)LdrpThreadTokenSetImpersonationToken((__int64)LdrpMainThreadToken) >= 0;
        LdrpProcessWork((__int64)(v24 - 8), 0);
      }
      if ( v10 )
        LdrpThreadTokenSetImpersonationToken(0LL);
    }
    else
    {
      v32 = v4[11];
      if ( (char *)v23 == (char *)TpReleaseWork )
        TpReleaseWork(a1, v32, v4);
      else
        ((void (__fastcall *)(__int64, __int64, _QWORD *))v23)(a1, v32, v4);
    }
    result = NtCurrentPeb();
    v26 = result->SharedData;
    if ( v26 && *v26 )
    {
      result = NtCurrentPeb();
      v27 = (__int64)result->SharedData + 556;
    }
    else
    {
      v27 = 2147353478LL;
    }
    if ( *(_BYTE *)v27 )
    {
      v52 = v4[18];
      v54 = v4[10];
      v55 = v4[11];
      v56 = v4[13];
      v49[0] = 0;
      v49[1] = 472055808;
      v50 = 0LL;
      v51 = 0LL;
      v53 = a2;
      v29 = NtCurrentPeb()->SharedData;
      if ( v29 && *v29 )
        v7 = (__int64)NtCurrentPeb()->SharedData + 556;
      result = (struct _PEB *)NtTraceEvent(*(unsigned __int8 *)v7, 1027LL, 40LL, v49);
    }
    if ( v22 )
    {
      v28 = v22[3];
      result = (struct _PEB *)(MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0]);
      if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= v28 )
      {
        result = (struct _PEB *)((char *)result - v28);
        v22[3] = result;
      }
    }
  }
  return result;
}
