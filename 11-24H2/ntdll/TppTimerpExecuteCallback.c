/*
 * XREFs of TppTimerpExecuteCallback @ 0x180020920
 * Callers:
 *     TppWorkerThread @ 0x1800238D0 (TppWorkerThread.c)
 * Callees:
 *     TppCompleteThreadData @ 0x18001F420 (TppCompleteThreadData.c)
 *     TppWorkCallbackPrologRelease @ 0x1800222C0 (TppWorkCallbackPrologRelease.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     TppETWCallbackDequeue @ 0x180069454 (TppETWCallbackDequeue.c)
 *     TppETWCallbackStop @ 0x18006951C (TppETWCallbackStop.c)
 *     RtlpTpTimerCallback @ 0x18006D350 (RtlpTpTimerCallback.c)
 *     NtTraceEvent @ 0x180162840 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall TppTimerpExecuteCallback(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v5; // rdi
  _DWORD *SharedData; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD *v11; // rcx
  __int64 v12; // rcx
  _QWORD *v13; // r14
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r10
  _QWORD *ThreadPoolData; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  void (__fastcall *v21)(__int64, __int64, _QWORD *, __int64); // rax
  __int64 v22; // rdx
  _DWORD *v23; // rcx
  _DWORD v24[2]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v25; // [rsp+38h] [rbp-70h]
  __int128 v26; // [rsp+40h] [rbp-68h]
  __int64 v27; // [rsp+50h] [rbp-58h]
  __int64 v28; // [rsp+58h] [rbp-50h]
  __int64 v29; // [rsp+60h] [rbp-48h]
  __int64 v30; // [rsp+68h] [rbp-40h]
  __int64 v31; // [rsp+70h] [rbp-38h]

  v2 = (_QWORD *)(a2 - 200);
  v5 = 2147353478LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v7 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v7 = 2147353478LL;
  if ( *(_BYTE *)v7 )
    TppETWCallbackDequeue(v2[18], a2, v2[10], v2[11], v2[13]);
  if ( (unsigned int)TppWorkCallbackPrologRelease(a1, v2, 0LL) )
  {
    v11 = NtCurrentPeb()->SharedData;
    if ( v11 && *v11 )
      v12 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v12 = 2147353478LL;
    v13 = 0LL;
    if ( *(_BYTE *)v12 )
    {
      v27 = v2[18];
      v29 = v2[10];
      v30 = v2[11];
      v31 = v2[13];
      v24[0] = 0;
      v24[1] = 471990272;
      v25 = 0LL;
      v26 = 0LL;
      v28 = a2;
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v12, v8, v9, v10) )
        v14 = (__int64)NtCurrentPeb()->SharedData + 556;
      else
        v14 = 2147353478LL;
      NtTraceEvent(*(unsigned __int8 *)v14, 1026LL, 40LL, v24);
    }
    v15 = v2[13];
    v16 = v2[11];
    v17 = v2[10];
    ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
    if ( ThreadPoolData )
    {
      ++ThreadPoolData[2];
      v19 = ((unsigned __int8)*((_DWORD *)ThreadPoolData + 3) - 1) & 1;
      *((_DWORD *)ThreadPoolData + 3) = v19;
      v20 = (unsigned int)v19;
      v19 *= 32LL;
      v13 = (_QWORD *)((char *)ThreadPoolData + v19 + 32);
      *(_QWORD *)((char *)ThreadPoolData + v19 + 40) = v16;
      *v13 = v17;
      *(_QWORD *)((char *)ThreadPoolData + v19 + 48) = v15;
      v16 = MEMORY[0x7FFE03B0];
      ThreadPoolData[4 * v20 + 7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
    }
    *(_QWORD *)(a1 + 88) = v2[10];
    *(_QWORD *)(a1 + 96) = v2[11];
    v21 = (void (__fastcall *)(__int64, __int64, _QWORD *, __int64))v2[10];
    v22 = v2[11];
    if ( (char *)v21 == (char *)RtlpTpTimerCallback )
      RtlpTpTimerCallback(a1, v22, v2, v16);
    else
      v21(a1, v22, v2, v16);
    v23 = NtCurrentPeb()->SharedData;
    if ( v23 && *v23 )
      v5 = (__int64)NtCurrentPeb()->SharedData + 556;
    if ( *(_BYTE *)v5 )
      TppETWCallbackStop(v2[18], a2, v2[10], v2[11], v2[13]);
    TppCompleteThreadData((__int64)v13);
  }
}
