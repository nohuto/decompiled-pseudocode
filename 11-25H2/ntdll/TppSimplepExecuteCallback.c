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

void __fastcall TppSimplepExecuteCallback(volatile signed __int32 *a1, __int64 a2)
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
  struct _TEB *(__fastcall *v15)(volatile signed __int32 *); // rax
  __int64 v16; // rdx

  v2 = a2;
  v3 = (_QWORD *)(a2 - 200);
  v5 = 2147353478LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v6 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v6 = 2147353478LL;
  if ( *(_BYTE *)v6 )
    TppETWCallbackDequeue(v3[18], v2, v3[10], v3[11], v3[13]);
  if ( (unsigned int)TppWorkCallbackPrologRelease((__int64)a1, (__int64)v3, 1LL) )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
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
    v15 = (struct _TEB *(__fastcall *)(volatile signed __int32 *))v3[10];
    v16 = v3[11];
    if ( (char *)v15 == (char *)TpCallbackUnloadDllOnCompletion )
    {
      TpCallbackUnloadDllOnCompletion(a1, v16);
    }
    else if ( v15 == RtlAcquireSRWLockExclusive )
    {
      RtlAcquireSRWLockExclusive(a1);
    }
    else
    {
      ((void (__fastcall *)(volatile signed __int32 *, __int64))v15)(a1, v16);
    }
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v5 = (__int64)NtCurrentPeb()->SharedData + 556;
    if ( *(_BYTE *)v5 )
      TppETWCallbackStop(v3[18], v2, v3[10], v3[11], v3[13]);
    TppCompleteThreadData((__int64)v14);
  }
}
