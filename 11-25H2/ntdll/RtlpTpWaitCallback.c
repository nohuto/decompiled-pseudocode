/*
 * XREFs of RtlpTpWaitCallback @ 0x180041F40
 * Callers:
 *     TppExecuteWaitCallback @ 0x180040740 (TppExecuteWaitCallback.c)
 * Callees:
 *     RtlpTpETWCallbackStart @ 0x18003DC80 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x18003DD48 (RtlpTpETWCallbackStop.c)
 *     RtlpTpImpersonate @ 0x18003DE10 (RtlpTpImpersonate.c)
 *     TppCompleteThreadData @ 0x1800406E0 (TppCompleteThreadData.c)
 *     RtlpTpWaitCheckReset @ 0x1800EC620 (RtlpTpWaitCheckReset.c)
 *     NtSetInformationThread @ 0x1801633C0 (NtSetInformationThread.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RtlpTpWaitCallback(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  struct _TEB *v6; // r13
  _DWORD *SharedData; // rcx
  __int64 v8; // r14
  __int64 v9; // rcx
  void *SubProcessTag; // rdx
  __int64 v11; // r9
  __int64 v12; // r10
  _QWORD *ThreadPoolData; // rcx
  __int64 v14; // rax
  __int64 v15; // r8
  _QWORD *v16; // r15
  _DWORD *v17; // rcx
  __int64 v18; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v19; // [rsp+78h] [rbp+20h]

  v19 = a4;
  v18 = a2;
  if ( (*(_BYTE *)(a2 + 8) & 4) == 0 )
    RtlpTpWaitCheckReset(a2, a4);
  if ( *(_QWORD *)a2 )
    RtlpTpImpersonate(*(_QWORD *)a2);
  if ( (*(_BYTE *)(a2 + 8) & 4) != 0 )
    *(_DWORD *)(a2 + 88) = NtCurrentTeb()->ClientId.UniqueThread;
  v6 = NtCurrentTeb();
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
  {
    v9 = (__int64)NtCurrentPeb()->SharedData + 556;
    v8 = 2147353478LL;
  }
  else
  {
    v8 = 2147353478LL;
    v9 = 2147353478LL;
  }
  if ( *(_BYTE *)v9 )
    RtlpTpETWCallbackStart(
      0LL,
      *(_QWORD *)(a2 + 48),
      *(_QWORD *)(a2 + 32),
      *(_QWORD *)(a2 + 40),
      (__int64)v6->SubProcessTag);
  SubProcessTag = v6->SubProcessTag;
  v11 = *(_QWORD *)(a2 + 40);
  v12 = *(_QWORD *)(a2 + 32);
  ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    ++ThreadPoolData[2];
    v14 = ((unsigned __int8)*((_DWORD *)ThreadPoolData + 3) - 1) & 1;
    *((_DWORD *)ThreadPoolData + 3) = v14;
    v15 = (unsigned int)v14;
    v14 *= 32LL;
    v16 = (_QWORD *)((char *)ThreadPoolData + v14 + 32);
    *v16 = v12;
    *(_QWORD *)((char *)ThreadPoolData + v14 + 40) = v11;
    *(_QWORD *)((char *)ThreadPoolData + v14 + 48) = SubProcessTag;
    SubProcessTag = (void *)(MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0]);
    ThreadPoolData[4 * v15 + 7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
  }
  else
  {
    v16 = 0LL;
  }
  LOBYTE(SubProcessTag) = a4 == 258;
  (*(void (__fastcall **)(_QWORD, void *))(a2 + 32))(*(_QWORD *)(a2 + 40), SubProcessTag);
  if ( (*(_BYTE *)(a2 + 8) & 4) != 0 )
    *(_DWORD *)(a2 + 88) = 0;
  if ( NtCurrentTeb()->IsImpersonating )
  {
    v18 = 0LL;
    NtSetInformationThread(-2LL, 5LL, &v18);
  }
  if ( (*(_BYTE *)(a2 + 8) & 4) != 0 )
    RtlpTpWaitCheckReset(a2, a4);
  v17 = NtCurrentPeb()->SharedData;
  if ( v17 && *v17 )
    v8 = (__int64)NtCurrentPeb()->SharedData + 556;
  if ( *(_BYTE *)v8 )
    RtlpTpETWCallbackStop(
      0LL,
      *(_QWORD *)(a2 + 48),
      *(_QWORD *)(a2 + 32),
      *(_QWORD *)(a2 + 40),
      (__int64)v6->SubProcessTag);
  TppCompleteThreadData((__int64)v16);
}
