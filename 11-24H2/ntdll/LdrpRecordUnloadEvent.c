/*
 * XREFs of LdrpRecordUnloadEvent @ 0x1800DE860
 * Callers:
 *     LdrpProcessDetachNode @ 0x1800DE6E4 (LdrpProcessDetachNode.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x1800DEA6C (WerEscalationReadImageVersionInfoForModuleBaseSafe.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

PVOID __fastcall LdrpRecordUnloadEvent(__int64 a1)
{
  int v1; // eax
  __int64 v2; // r14
  __int64 v4; // rbx
  unsigned __int16 v5; // bp
  unsigned __int64 v6; // rdi
  __int64 v7; // r8
  int v8; // ecx
  __int64 v9; // rbx
  PVOID result; // rax
  __int64 v11; // rax
  __int64 v12; // [rsp+60h] [rbp+8h]

  v1 = LdrpUnloadIndex;
  v2 = LdrpUnloadIndex & 0xF;
  v4 = 52 * v2;
  *(_DWORD *)&RtlpUnloadEventTrace[v4 + 8] = LdrpUnloadIndex;
  LdrpUnloadIndex = v1 + 1;
  *(_QWORD *)&RtlpUnloadEventTrace[v4] = *(_QWORD *)(a1 + 48);
  *(_QWORD *)&RtlpUnloadEventTrace[v4 + 4] = *(unsigned int *)(a1 + 64);
  v5 = *(_WORD *)(a1 + 88);
  if ( v5 > 0x40u )
    v5 = 64;
  memmove(&RtlpUnloadEventTrace[v4 + 14], *(const void **)(a1 + 96), v5);
  v6 = (unsigned __int64)v5 >> 1;
  if ( v5 < 0x40u )
    RtlpUnloadEventTrace[52 * v2 + 14 + v6] = 0;
  WerEscalationReadImageVersionInfoForModuleBaseSafe(*(PVOID *)(a1 + 48));
  v7 = RtlpUnloadEventTraceEx;
  *(_QWORD *)&RtlpUnloadEventTrace[v4 + 10] = 0LL;
  *(_QWORD *)&RtlpUnloadEventTrace[v4 + 46] = 0LL;
  if ( v7 )
    goto LABEL_6;
  v11 = (unsigned int)RtlpUnloadEventTraceExNumber;
  if ( (unsigned int)RtlpUnloadEventTraceExNumber > 0xFFFF )
  {
    v11 = 0xFFFFLL;
    RtlpUnloadEventTraceExNumber = 0xFFFF;
  }
  result = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 0x40000) | 8, 104 * v11);
  RtlpUnloadEventTraceEx = (__int64)result;
  v7 = (__int64)result;
  if ( result )
  {
LABEL_6:
    v8 = LdrpUnloadIndexEx;
    v9 = 104LL * (unsigned __int16)(LdrpUnloadIndexEx % (unsigned int)RtlpUnloadEventTraceExNumber);
    v12 = (unsigned __int16)(LdrpUnloadIndexEx % (unsigned int)RtlpUnloadEventTraceExNumber);
    *(_DWORD *)(v9 + v7 + 16) = LdrpUnloadIndexEx;
    LdrpUnloadIndexEx = v8 + 1;
    *(_QWORD *)(v9 + RtlpUnloadEventTraceEx) = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(v9 + RtlpUnloadEventTraceEx + 8) = *(unsigned int *)(a1 + 64);
    memmove((void *)(v9 + RtlpUnloadEventTraceEx + 28), *(const void **)(a1 + 96), v5);
    if ( v5 < 0x40u )
      *(_WORD *)(RtlpUnloadEventTraceEx + 2 * (v6 + 52 * v12) + 28) = 0;
    *(_QWORD *)(v9 + RtlpUnloadEventTraceEx + 20) = 0LL;
    *(_DWORD *)(v9 + RtlpUnloadEventTraceEx + 92) = 0;
    result = (PVOID)RtlpUnloadEventTraceEx;
    *(_DWORD *)(v9 + RtlpUnloadEventTraceEx + 96) = 0;
  }
  return result;
}
