/*
 * XREFs of RtlpTpTimerCallback @ 0x18003E090
 * Callers:
 *     TppTimerpExecuteCallback @ 0x180042330 (TppTimerpExecuteCallback.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlpTpETWCallbackStart @ 0x18003DC80 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x18003DD48 (RtlpTpETWCallbackStop.c)
 *     RtlpTpImpersonate @ 0x18003DE10 (RtlpTpImpersonate.c)
 *     TppCompleteThreadData @ 0x1800406E0 (TppCompleteThreadData.c)
 *     NtSetInformationThread @ 0x1801633C0 (NtSetInformationThread.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpTpTimerCallback(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  struct _TEB *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rcx
  void *SubProcessTag; // rdx
  __int64 v8; // r9
  __int64 v9; // r10
  _QWORD *ThreadPoolData; // rcx
  __int64 v11; // rax
  __int64 v12; // r8
  _QWORD *v13; // r14
  __int64 result; // rax
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF

  if ( *(_BYTE *)(a2 + 88)
    || (result = (unsigned int)_InterlockedExchange((volatile __int32 *)(a2 + 92), 1), !(_DWORD)result) )
  {
    v3 = *(_QWORD *)(a2 + 16);
    if ( v3 )
      RtlpTpImpersonate(v3);
    v4 = NtCurrentTeb();
    v5 = 2147353478LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v6 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v6 = 2147353478LL;
    if ( *(_BYTE *)v6 )
      RtlpTpETWCallbackStart(
        0LL,
        *(_QWORD *)(a2 + 64),
        *(_QWORD *)(a2 + 32),
        *(_QWORD *)(a2 + 40),
        (__int64)v4->SubProcessTag);
    SubProcessTag = v4->SubProcessTag;
    v8 = *(_QWORD *)(a2 + 40);
    v9 = *(_QWORD *)(a2 + 32);
    ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
    if ( ThreadPoolData )
    {
      ++ThreadPoolData[2];
      v11 = ((unsigned __int8)*((_DWORD *)ThreadPoolData + 3) - 1) & 1;
      *((_DWORD *)ThreadPoolData + 3) = v11;
      v12 = (unsigned int)v11;
      v11 *= 32LL;
      v13 = (_QWORD *)((char *)ThreadPoolData + v11 + 32);
      *v13 = v9;
      *(_QWORD *)((char *)ThreadPoolData + v11 + 40) = v8;
      *(_QWORD *)((char *)ThreadPoolData + v11 + 48) = SubProcessTag;
      SubProcessTag = (void *)(MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0]);
      ThreadPoolData[4 * v12 + 7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
    }
    else
    {
      v13 = 0LL;
    }
    LOBYTE(SubProcessTag) = 1;
    (*(void (__fastcall **)(_QWORD, void *))(a2 + 32))(*(_QWORD *)(a2 + 40), SubProcessTag);
    if ( NtCurrentTeb()->IsImpersonating )
    {
      v15 = 0LL;
      NtSetInformationThread(-2LL, 5LL, &v15);
    }
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v5 = (__int64)NtCurrentPeb()->SharedData + 556;
    if ( *(_BYTE *)v5 )
      RtlpTpETWCallbackStop(
        0LL,
        *(_QWORD *)(a2 + 64),
        *(_QWORD *)(a2 + 32),
        *(_QWORD *)(a2 + 40),
        (__int64)v4->SubProcessTag);
    return TppCompleteThreadData(v13);
  }
  return result;
}
