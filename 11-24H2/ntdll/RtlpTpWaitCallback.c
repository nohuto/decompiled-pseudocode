/*
 * XREFs of RtlpTpWaitCallback @ 0x18004CF30
 * Callers:
 *     TppExecuteWaitCallback @ 0x18004BE80 (TppExecuteWaitCallback.c)
 * Callees:
 *     TppCompleteThreadData @ 0x18004BE20 (TppCompleteThreadData.c)
 *     RtlpTpImpersonate @ 0x18008BBF0 (RtlpTpImpersonate.c)
 *     RtlpTpETWCallbackStop @ 0x18008BC7C (RtlpTpETWCallbackStop.c)
 *     RtlpTpETWCallbackStart @ 0x18008BD44 (RtlpTpETWCallbackStart.c)
 *     RtlpTpWaitCheckReset @ 0x1800E6C10 (RtlpTpWaitCheckReset.c)
 *     NtSetInformationThread @ 0x1801601F0 (NtSetInformationThread.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RtlpTpWaitCallback(PTP_CALLBACK_INSTANCE a1, _BYTE *a2, PTP_WAIT a3, unsigned int a4)
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
  __int64 v17; // r8
  _DWORD *v18; // rcx
  _BYTE *ThreadInformation; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v20; // [rsp+78h] [rbp+20h]

  v20 = a4;
  ThreadInformation = a2;
  if ( (a2[8] & 4) == 0 )
    RtlpTpWaitCheckReset(a2, a4, a3);
  if ( *(_QWORD *)a2 )
    RtlpTpImpersonate(*(_QWORD *)a2, a2, a3);
  if ( (a2[8] & 4) != 0 )
    *((_DWORD *)a2 + 22) = NtCurrentTeb()->ClientId.UniqueThread;
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
    RtlpTpETWCallbackStart(0, *((_QWORD *)a2 + 6), *((_QWORD *)a2 + 4), *((_QWORD *)a2 + 5), (__int64)v6->SubProcessTag);
  SubProcessTag = v6->SubProcessTag;
  v11 = *((_QWORD *)a2 + 5);
  v12 = *((_QWORD *)a2 + 4);
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
  (*((void (__fastcall **)(_QWORD, void *))a2 + 4))(*((_QWORD *)a2 + 5), SubProcessTag);
  if ( (a2[8] & 4) != 0 )
    *((_DWORD *)a2 + 22) = 0;
  if ( NtCurrentTeb()->IsImpersonating )
  {
    ThreadInformation = 0LL;
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
  }
  if ( (a2[8] & 4) != 0 )
    RtlpTpWaitCheckReset(a2, a4, v17);
  v18 = NtCurrentPeb()->SharedData;
  if ( v18 && *v18 )
    v8 = (__int64)NtCurrentPeb()->SharedData + 556;
  if ( *(_BYTE *)v8 )
    RtlpTpETWCallbackStop(0, *((_QWORD *)a2 + 6), *((_QWORD *)a2 + 4), *((_QWORD *)a2 + 5), (__int64)v6->SubProcessTag);
  TppCompleteThreadData((__int64)v16);
}
