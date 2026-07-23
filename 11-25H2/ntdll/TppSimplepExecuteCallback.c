/*
 * XREFs of TppSimplepExecuteCallback @ 0x1800D60D0
 * Callers:
 *     TppWorkerThread @ 0x18007DCB0 (TppWorkerThread.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     TppCompleteThreadData @ 0x1800406E0 (TppCompleteThreadData.c)
 *     TppWorkCallbackPrologRelease @ 0x180043350 (TppWorkCallbackPrologRelease.c)
 *     TppETWCallbackDequeue @ 0x1800D62F4 (TppETWCallbackDequeue.c)
 *     TppETWCallbackStop @ 0x1800D63BC (TppETWCallbackStop.c)
 *     TppETWCallbackStart @ 0x1800D6484 (TppETWCallbackStart.c)
 *     TpCallbackUnloadDllOnCompletion @ 0x1800D6550 (TpCallbackUnloadDllOnCompletion.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall TppSimplepExecuteCallback(PTP_CALLBACK_INSTANCE Instance, __int64 a2)
{
  int v2; // esi
  __int64 v3; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10
  _QWORD *ThreadPoolData; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // r14
  void (__fastcall *v15)(PTP_CALLBACK_INSTANCE, void *); // rax
  void *v16; // rdx

  v2 = a2;
  v3 = a2 - 200;
  v5 = 2147353478LL;
  if ( RtlGetCurrentServiceSessionId() )
    v6 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v6 = 2147353478LL;
  if ( *(_BYTE *)v6 )
    TppETWCallbackDequeue(*(_QWORD *)(v3 + 144), v2, *(_QWORD *)(v3 + 80), *(_QWORD *)(v3 + 88), *(_QWORD *)(v3 + 104));
  if ( (unsigned int)TppWorkCallbackPrologRelease(Instance, (char *)v3, 1) )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v7 = 2147353478LL;
    if ( *(_BYTE *)v7 )
      TppETWCallbackStart(*(_QWORD *)(v3 + 144), v2, *(_QWORD *)(v3 + 80), *(_QWORD *)(v3 + 88), *(_QWORD *)(v3 + 104));
    v8 = *(_QWORD *)(v3 + 104);
    v9 = *(_QWORD *)(v3 + 88);
    v10 = *(_QWORD *)(v3 + 80);
    ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
    if ( ThreadPoolData )
    {
      ++ThreadPoolData[2];
      v12 = ((unsigned __int8)*((_DWORD *)ThreadPoolData + 3) - 1) & 1;
      *((_DWORD *)ThreadPoolData + 3) = v12;
      v13 = (unsigned int)v12;
      v12 *= 32LL;
      v14 = (_QWORD *)((char *)ThreadPoolData + v12 + 32);
      *(_QWORD *)((char *)ThreadPoolData + v12 + 40) = v9;
      *v14 = v10;
      *(_QWORD *)((char *)ThreadPoolData + v12 + 48) = v8;
      ThreadPoolData[4 * v13 + 7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
    }
    else
    {
      v14 = 0LL;
    }
    v15 = *(void (__fastcall **)(PTP_CALLBACK_INSTANCE, void *))(v3 + 80);
    v16 = *(void **)(v3 + 88);
    if ( (char *)v15 == (char *)TpCallbackUnloadDllOnCompletion )
    {
      TpCallbackUnloadDllOnCompletion(Instance, v16);
    }
    else if ( (char *)v15 == (char *)RtlAcquireSRWLockExclusive )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Instance);
    }
    else
    {
      v15(Instance, v16);
    }
    if ( RtlGetCurrentServiceSessionId() )
      v5 = (__int64)NtCurrentPeb()->SharedData + 556;
    if ( *(_BYTE *)v5 )
      TppETWCallbackStop(*(_QWORD *)(v3 + 144), v2, *(_QWORD *)(v3 + 80), *(_QWORD *)(v3 + 88), *(_QWORD *)(v3 + 104));
    TppCompleteThreadData((__int64)v14);
  }
}
