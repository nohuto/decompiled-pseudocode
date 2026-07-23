/*
 * XREFs of TppWorkpExecuteCallback @ 0x18004F5B0
 * Callers:
 *     TppWorkerThread @ 0x1800502D0 (TppWorkerThread.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     LdrpProcessWork @ 0x18004E860 (LdrpProcessWork.c)
 *     LdrpThreadTokenSetImpersonationToken @ 0x18004EC5C (LdrpThreadTokenSetImpersonationToken.c)
 *     TppWorkCallbackPrologRelease @ 0x18004ECC0 (TppWorkCallbackPrologRelease.c)
 *     LdrpUpdateStatistics @ 0x18004F56C (LdrpUpdateStatistics.c)
 *     TpReleaseWork @ 0x180089580 (TpReleaseWork.c)
 *     NtTraceEvent @ 0x180160C00 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall TppWorkpExecuteCallback(PTP_CALLBACK_INSTANCE Instance, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v5; // rsi
  _DWORD *SharedData; // rcx
  __int64 v7; // rcx
  bool v8; // r15
  _DWORD *v9; // rcx
  __int64 v10; // rcx
  struct _PEB *v11; // rax
  _DWORD *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r10
  _QWORD *ThreadPoolData; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // r14
  void (__cdecl *v21)(PTP_WORK); // rax
  __int64 *v22; // rbx
  __int64 v23; // rax
  _DWORD *v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  _DWORD *v27; // rcx
  _DWORD *v28; // rcx
  __int64 v29; // rcx
  _DWORD Fields[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v32; // [rsp+28h] [rbp-D8h]
  __int128 v33; // [rsp+30h] [rbp-D0h]
  __int64 v34; // [rsp+40h] [rbp-C0h]
  __int64 v35; // [rsp+48h] [rbp-B8h]
  __int64 v36; // [rsp+50h] [rbp-B0h]
  __int64 v37; // [rsp+58h] [rbp-A8h]
  __int64 v38; // [rsp+60h] [rbp-A0h]
  _DWORD v39[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v40; // [rsp+78h] [rbp-88h]
  __int128 v41; // [rsp+80h] [rbp-80h]
  __int64 v42; // [rsp+90h] [rbp-70h]
  __int64 v43; // [rsp+98h] [rbp-68h]
  __int64 v44; // [rsp+A0h] [rbp-60h]
  __int64 v45; // [rsp+A8h] [rbp-58h]
  __int64 v46; // [rsp+B0h] [rbp-50h]
  _DWORD v47[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v48; // [rsp+C8h] [rbp-38h]
  __int128 v49; // [rsp+D0h] [rbp-30h]
  __int64 v50; // [rsp+E0h] [rbp-20h]
  __int64 v51; // [rsp+E8h] [rbp-18h]
  __int64 v52; // [rsp+F0h] [rbp-10h]
  __int64 v53; // [rsp+F8h] [rbp-8h]
  __int64 v54; // [rsp+100h] [rbp+0h]

  v2 = a2 - 200;
  v5 = 2147353478LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v7 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v7 = 2147353478LL;
  v8 = 0;
  if ( *(_BYTE *)v7 )
  {
    v34 = *(_QWORD *)(v2 + 144);
    v36 = *(_QWORD *)(v2 + 80);
    v37 = *(_QWORD *)(v2 + 88);
    v38 = *(_QWORD *)(v2 + 104);
    Fields[0] = 0;
    Fields[1] = 471924736;
    v32 = 0LL;
    v33 = 0LL;
    v35 = a2;
    v9 = NtCurrentPeb()->SharedData;
    if ( v9 && *v9 )
      v10 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v10 = 2147353478LL;
    NtTraceEvent((HANDLE)*(unsigned __int8 *)v10, 0x403u, 0x28u, Fields);
  }
  LODWORD(v11) = TppWorkCallbackPrologRelease(Instance, (_QWORD *)v2, 0);
  if ( (_DWORD)v11 )
  {
    v12 = NtCurrentPeb()->SharedData;
    if ( v12 && *v12 )
      v13 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v13 = 2147353478LL;
    if ( *(_BYTE *)v13 )
    {
      v42 = *(_QWORD *)(v2 + 144);
      v44 = *(_QWORD *)(v2 + 80);
      v45 = *(_QWORD *)(v2 + 88);
      v46 = *(_QWORD *)(v2 + 104);
      v39[0] = 0;
      v39[1] = 471990272;
      v40 = 0LL;
      v41 = 0LL;
      v43 = a2;
      v28 = NtCurrentPeb()->SharedData;
      if ( v28 && *v28 )
        v29 = (__int64)NtCurrentPeb()->SharedData + 556;
      else
        v29 = 2147353478LL;
      NtTraceEvent((HANDLE)*(unsigned __int8 *)v29, 0x402u, 0x28u, v39);
    }
    v14 = *(_QWORD *)(v2 + 104);
    v15 = *(_QWORD *)(v2 + 88);
    v16 = *(_QWORD *)(v2 + 80);
    ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
    if ( ThreadPoolData )
    {
      ++ThreadPoolData[2];
      v18 = ((unsigned __int8)*((_DWORD *)ThreadPoolData + 3) - 1) & 1;
      *((_DWORD *)ThreadPoolData + 3) = v18;
      v19 = (unsigned int)v18;
      v18 *= 32LL;
      v20 = (_QWORD *)((char *)ThreadPoolData + v18 + 32);
      *(_QWORD *)((char *)ThreadPoolData + v18 + 40) = v15;
      *v20 = v16;
      *(_QWORD *)((char *)ThreadPoolData + v18 + 48) = v14;
      ThreadPoolData[4 * v19 + 7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
    }
    else
    {
      v20 = 0LL;
    }
    Instance->Callback = *(void **)(v2 + 80);
    Instance->Context = *(void **)(v2 + 88);
    v21 = *(void (__cdecl **)(PTP_WORK))(v2 + 80);
    if ( (char *)v21 == (char *)LdrpWorkCallback )
    {
      while ( !LdrpDetourExist )
      {
        RtlEnterCriticalSection(&LdrpWorkQueueLock);
        v22 = (__int64 *)LdrpWorkQueue;
        if ( *(__int64 **)(LdrpWorkQueue + 8) != &LdrpWorkQueue
          || (v23 = *(_QWORD *)LdrpWorkQueue, *(_QWORD *)(*(_QWORD *)LdrpWorkQueue + 8LL) != LdrpWorkQueue) )
        {
          __fastfail(3u);
        }
        LdrpWorkQueue = *(_QWORD *)LdrpWorkQueue;
        *(_QWORD *)(v23 + 8) = &LdrpWorkQueue;
        if ( &LdrpWorkQueue != v22 )
        {
          ++LdrpWorkInProgress;
          LdrpUpdateStatistics();
        }
        RtlLeaveCriticalSection(&LdrpWorkQueueLock);
        if ( &LdrpWorkQueue == v22 )
          break;
        if ( !v8 && LdrpMainThreadToken )
          v8 = (int)LdrpThreadTokenSetImpersonationToken((__int64)LdrpMainThreadToken) >= 0;
        LdrpProcessWork((__int64)(v22 - 8), 0);
      }
      if ( v8 )
        LdrpThreadTokenSetImpersonationToken(0LL);
    }
    else if ( v21 == TpReleaseWork )
    {
      TpReleaseWork((PTP_WORK)Instance);
    }
    else
    {
      ((void (__fastcall *)(PTP_CALLBACK_INSTANCE, _QWORD, __int64))v21)(Instance, *(_QWORD *)(v2 + 88), v2);
    }
    v11 = NtCurrentPeb();
    v24 = v11->SharedData;
    if ( v24 && *v24 )
    {
      v11 = NtCurrentPeb();
      v25 = (__int64)v11->SharedData + 556;
    }
    else
    {
      v25 = 2147353478LL;
    }
    if ( *(_BYTE *)v25 )
    {
      v50 = *(_QWORD *)(v2 + 144);
      v52 = *(_QWORD *)(v2 + 80);
      v53 = *(_QWORD *)(v2 + 88);
      v54 = *(_QWORD *)(v2 + 104);
      v47[0] = 0;
      v47[1] = 472055808;
      v48 = 0LL;
      v49 = 0LL;
      v51 = a2;
      v27 = NtCurrentPeb()->SharedData;
      if ( v27 && *v27 )
        v5 = (__int64)NtCurrentPeb()->SharedData + 556;
      LODWORD(v11) = NtTraceEvent((HANDLE)*(unsigned __int8 *)v5, 0x403u, 0x28u, v47);
    }
    if ( v20 )
    {
      v26 = v20[3];
      v11 = (struct _PEB *)(MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0]);
      if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= v26 )
      {
        v11 = (struct _PEB *)((char *)v11 - v26);
        v20[3] = v11;
      }
    }
  }
  return (int)v11;
}
