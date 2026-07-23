/*
 * XREFs of TppTimerpExecuteCallback @ 0x180042330
 * Callers:
 *     TppWorkerThread @ 0x18007DCB0 (TppWorkerThread.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlpTpTimerCallback @ 0x18003E090 (RtlpTpTimerCallback.c)
 *     TppCompleteThreadData @ 0x1800406E0 (TppCompleteThreadData.c)
 *     TppWorkCallbackPrologRelease @ 0x180043350 (TppWorkCallbackPrologRelease.c)
 *     TppETWCallbackDequeue @ 0x1800D62F4 (TppETWCallbackDequeue.c)
 *     TppETWCallbackStop @ 0x1800D63BC (TppETWCallbackStop.c)
 *     NtTraceEvent @ 0x180163DD0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall TppTimerpExecuteCallback(PTP_CALLBACK_INSTANCE a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rdi
  _DWORD *SharedData; // rcx
  __int64 v7; // rcx
  _DWORD *v8; // rcx
  __int64 v9; // rcx
  _QWORD *v10; // r14
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r10
  _QWORD *ThreadPoolData; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  void (__fastcall *v18)(PTP_CALLBACK_INSTANCE, PVOID, PTP_TIMER); // rax
  void *v19; // rdx
  _DWORD *v20; // rcx
  _DWORD Fields[2]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v22; // [rsp+38h] [rbp-70h]
  __int128 v23; // [rsp+40h] [rbp-68h]
  __int64 v24; // [rsp+50h] [rbp-58h]
  __int64 v25; // [rsp+58h] [rbp-50h]
  __int64 v26; // [rsp+60h] [rbp-48h]
  __int64 v27; // [rsp+68h] [rbp-40h]
  __int64 v28; // [rsp+70h] [rbp-38h]

  v2 = a2 - 200;
  v5 = 2147353478LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v7 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v7 = 2147353478LL;
  if ( *(_BYTE *)v7 )
    TppETWCallbackDequeue(*(_QWORD *)(v2 + 144), a2, *(_QWORD *)(v2 + 80), *(_QWORD *)(v2 + 88), *(_QWORD *)(v2 + 104));
  if ( (unsigned int)TppWorkCallbackPrologRelease(a1, (PVOID)v2) )
  {
    v8 = NtCurrentPeb()->SharedData;
    if ( v8 && *v8 )
      v9 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v9 = 2147353478LL;
    v10 = 0LL;
    if ( *(_BYTE *)v9 )
    {
      v24 = *(_QWORD *)(v2 + 144);
      v26 = *(_QWORD *)(v2 + 80);
      v27 = *(_QWORD *)(v2 + 88);
      v28 = *(_QWORD *)(v2 + 104);
      Fields[0] = 0;
      Fields[1] = 471990272;
      v22 = 0LL;
      v23 = 0LL;
      v25 = a2;
      if ( RtlGetCurrentServiceSessionId() )
        v11 = (__int64)NtCurrentPeb()->SharedData + 556;
      else
        v11 = 2147353478LL;
      NtTraceEvent((HANDLE)*(unsigned __int8 *)v11, 0x402u, 0x28u, Fields);
    }
    v12 = *(_QWORD *)(v2 + 104);
    v13 = *(_QWORD *)(v2 + 88);
    v14 = *(_QWORD *)(v2 + 80);
    ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
    if ( ThreadPoolData )
    {
      ++ThreadPoolData[2];
      v16 = ((unsigned __int8)*((_DWORD *)ThreadPoolData + 3) - 1) & 1;
      *((_DWORD *)ThreadPoolData + 3) = v16;
      v17 = (unsigned int)v16;
      v16 *= 32LL;
      v10 = (_QWORD *)((char *)ThreadPoolData + v16 + 32);
      *(_QWORD *)((char *)ThreadPoolData + v16 + 40) = v13;
      *v10 = v14;
      *(_QWORD *)((char *)ThreadPoolData + v16 + 48) = v12;
      v13 = MEMORY[0x7FFE03B0];
      ThreadPoolData[4 * v17 + 7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
    }
    a1->Callback = *(void **)(v2 + 80);
    a1->Context = *(void **)(v2 + 88);
    v18 = *(void (__fastcall **)(PTP_CALLBACK_INSTANCE, PVOID, PTP_TIMER))(v2 + 80);
    v19 = *(void **)(v2 + 88);
    if ( v18 == RtlpTpTimerCallback )
      RtlpTpTimerCallback(a1, v19, (PTP_TIMER)v2);
    else
      ((void (__fastcall *)(PTP_CALLBACK_INSTANCE, void *, __int64, __int64))v18)(a1, v19, v2, v13);
    v20 = NtCurrentPeb()->SharedData;
    if ( v20 && *v20 )
      v5 = (__int64)NtCurrentPeb()->SharedData + 556;
    if ( *(_BYTE *)v5 )
      TppETWCallbackStop(*(_QWORD *)(v2 + 144), a2, *(_QWORD *)(v2 + 80), *(_QWORD *)(v2 + 88), *(_QWORD *)(v2 + 104));
    TppCompleteThreadData((__int64)v10);
  }
}
