/*
 * XREFs of RtlpTpIoCallback @ 0x1800ECBC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlpTpETWCallbackStart @ 0x18003DC80 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x18003DD48 (RtlpTpETWCallbackStop.c)
 *     RtlSetThreadSubProcessTag @ 0x180043C00 (RtlSetThreadSubProcessTag.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RtlpTpIoCallback(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  void *v4; // rcx
  __int64 v8; // rdi
  __int64 v9; // rcx
  void *SubProcessTag; // rdx
  __int64 v11; // r8
  _DWORD *ThreadPoolData; // rcx
  int v13; // eax
  unsigned int v14; // eax
  __int64 v15; // r9
  _QWORD *v16; // r14

  v4 = *(void **)(a2 + 152);
  if ( v4 )
    RtlSetThreadSubProcessTag(v4);
  NtCurrentTeb()->ActivityId = *(_GUID *)(a2 + 160);
  v8 = 2147353478LL;
  if ( RtlGetCurrentServiceSessionId() )
    v9 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v9 = 2147353478LL;
  if ( *(_BYTE *)v9 )
    RtlpTpETWCallbackStart(*(_QWORD *)(a2 + 72), a2, *(_QWORD *)(a2 - 8), a3, *(_QWORD *)(a2 + 152));
  SubProcessTag = NtCurrentTeb()->SubProcessTag;
  v11 = *(_QWORD *)(a2 - 8);
  ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v13 = ThreadPoolData[3];
    ++*((_QWORD *)ThreadPoolData + 2);
    v14 = ((_BYTE)v13 - 1) & 1;
    ThreadPoolData[3] = v14;
    v15 = 8LL * v14;
    v16 = &ThreadPoolData[v15 + 8];
    *(_QWORD *)&ThreadPoolData[v15 + 10] = a3;
    *v16 = v11;
    *(_QWORD *)&ThreadPoolData[v15 + 12] = SubProcessTag;
    *(_QWORD *)&ThreadPoolData[v15 + 14] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
  }
  else
  {
    v16 = 0LL;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(a2 - 8))(*a4, *((_QWORD *)a4 + 1), a3);
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 556;
  if ( *(_BYTE *)v8 )
    RtlpTpETWCallbackStop(*(_QWORD *)(a2 + 72), a2, *(_QWORD *)(a2 - 8), a3, *(_QWORD *)(a2 + 152));
  if ( *(_QWORD *)(a2 + 152) )
  {
    RtlSetThreadSubProcessTag(0LL);
    *(_QWORD *)(a2 + 152) = 0LL;
  }
  TppCompleteThreadData((__int64)v16);
}
