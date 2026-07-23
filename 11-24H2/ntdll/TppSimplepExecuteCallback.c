/*
 * XREFs of TppSimplepExecuteCallback @ 0x180084DC0
 * Callers:
 *     TppWorkerThread @ 0x1800502D0 (TppWorkerThread.c)
 * Callees:
 *     TppCompleteThreadData @ 0x18004BE20 (TppCompleteThreadData.c)
 *     TppWorkCallbackPrologRelease @ 0x18004ECC0 (TppWorkCallbackPrologRelease.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     TppETWCallbackDequeue @ 0x180084FE4 (TppETWCallbackDequeue.c)
 *     TppETWCallbackStop @ 0x1800850AC (TppETWCallbackStop.c)
 *     TppETWCallbackStart @ 0x180085174 (TppETWCallbackStart.c)
 *     TpCallbackUnloadDllOnCompletion @ 0x180085240 (TpCallbackUnloadDllOnCompletion.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall TppSimplepExecuteCallback(PTP_CALLBACK_INSTANCE Instance, __int64 a2)
{
  int v2; // esi
  _QWORD *v3; // rbx
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
  v3 = (_QWORD *)(a2 - 200);
  v5 = 2147353478LL;
  if ( RtlGetCurrentServiceSessionId() )
    v6 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v6 = 2147353478LL;
  if ( *(_BYTE *)v6 )
    TppETWCallbackDequeue(v3[18], v2, v3[10], v3[11], v3[13]);
  if ( (unsigned int)TppWorkCallbackPrologRelease(Instance, v3, 1) )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v7 = 2147353478LL;
    if ( *(_BYTE *)v7 )
      TppETWCallbackStart(v3[18], v2, v3[10], v3[11], v3[13]);
    v8 = v3[13];
    v9 = v3[11];
    v10 = v3[10];
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
    v15 = (void (__fastcall *)(PTP_CALLBACK_INSTANCE, void *))v3[10];
    v16 = (void *)v3[11];
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
      TppETWCallbackStop(v3[18], v2, v3[10], v3[11], v3[13]);
    TppCompleteThreadData((__int64)v14);
  }
}
