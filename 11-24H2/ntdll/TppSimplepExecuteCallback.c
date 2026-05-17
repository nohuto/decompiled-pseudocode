/*
 * XREFs of TppSimplepExecuteCallback @ 0x180069230
 * Callers:
 *     TppWorkerThread @ 0x1800238D0 (TppWorkerThread.c)
 * Callees:
 *     TppCompleteThreadData @ 0x18001F420 (TppCompleteThreadData.c)
 *     TppWorkCallbackPrologRelease @ 0x1800222C0 (TppWorkCallbackPrologRelease.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     TppETWCallbackDequeue @ 0x180069454 (TppETWCallbackDequeue.c)
 *     TppETWCallbackStop @ 0x18006951C (TppETWCallbackStop.c)
 *     TppETWCallbackStart @ 0x1800695E4 (TppETWCallbackStart.c)
 *     TpCallbackUnloadDllOnCompletion @ 0x1800696B0 (TpCallbackUnloadDllOnCompletion.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall TppSimplepExecuteCallback(volatile signed __int32 *a1, __int64 a2)
{
  int v2; // esi
  _QWORD *v3; // rbx
  __int64 v5; // r9
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  _QWORD *ThreadPoolData; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // r14
  struct _TEB *(__fastcall *v16)(volatile signed __int32 *, volatile signed __int32 **, unsigned __int64); // rax
  volatile signed __int32 **v17; // rdx

  v2 = a2;
  v3 = (_QWORD *)(a2 - 200);
  v6 = 2147353478LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v7 = 2147353478LL;
  if ( *(_BYTE *)v7 )
    TppETWCallbackDequeue(v3[18], v2, v3[10], v3[11], v3[13]);
  if ( (unsigned int)TppWorkCallbackPrologRelease((__int64)a1, (__int64)v3, 1LL, v5) )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v8 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v8 = 2147353478LL;
    if ( *(_BYTE *)v8 )
      TppETWCallbackStart(v3[18], v2, v3[10], v3[11], v3[13]);
    v9 = v3[13];
    v10 = v3[11];
    v11 = v3[10];
    ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
    if ( ThreadPoolData )
    {
      ++ThreadPoolData[2];
      v13 = ((unsigned __int8)*((_DWORD *)ThreadPoolData + 3) - 1) & 1;
      *((_DWORD *)ThreadPoolData + 3) = v13;
      v14 = (unsigned int)v13;
      v13 *= 32LL;
      v15 = (_QWORD *)((char *)ThreadPoolData + v13 + 32);
      *(_QWORD *)((char *)ThreadPoolData + v13 + 40) = v10;
      *v15 = v11;
      *(_QWORD *)((char *)ThreadPoolData + v13 + 48) = v9;
      v9 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
      ThreadPoolData[4 * v14 + 7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
    }
    else
    {
      v15 = 0LL;
    }
    v16 = (struct _TEB *(__fastcall *)(volatile signed __int32 *, volatile signed __int32 **, unsigned __int64))v3[10];
    v17 = (volatile signed __int32 **)v3[11];
    if ( (char *)v16 == (char *)TpCallbackUnloadDllOnCompletion )
    {
      TpCallbackUnloadDllOnCompletion(a1, v17);
    }
    else if ( v16 == RtlAcquireSRWLockExclusive )
    {
      RtlAcquireSRWLockExclusive(a1, v17, v9);
    }
    else
    {
      ((void (__fastcall *)(volatile signed __int32 *, volatile signed __int32 **))v16)(a1, v17);
    }
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v6 = (__int64)NtCurrentPeb()->SharedData + 556;
    if ( *(_BYTE *)v6 )
      TppETWCallbackStop(v3[18], v2, v3[10], v3[11], v3[13]);
    TppCompleteThreadData((__int64)v15);
  }
}
