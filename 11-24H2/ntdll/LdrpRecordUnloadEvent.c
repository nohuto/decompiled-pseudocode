/*
 * XREFs of LdrpRecordUnloadEvent @ 0x1800E3290
 * Callers:
 *     LdrpProcessDetachNode @ 0x1800E3114 (LdrpProcessDetachNode.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x1800E349C (WerEscalationReadImageVersionInfoForModuleBaseSafe.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall LdrpRecordUnloadEvent(__int64 a1)
{
  int v1; // eax
  __int64 v2; // r14
  __int64 v4; // rbx
  unsigned __int16 v5; // bp
  unsigned __int64 v6; // rdi
  __int64 v7; // r8
  int v8; // r14d
  int v9; // r12d
  int v10; // eax
  int v11; // r13d
  int v12; // ecx
  __int64 v13; // rbx
  int v14; // ecx
  __int64 result; // rax
  __int64 v16; // rax
  __int128 v17; // [rsp+20h] [rbp-38h] BYREF
  __int64 v18; // [rsp+60h] [rbp+8h]

  v1 = LdrpUnloadIndex;
  v2 = LdrpUnloadIndex & 0xF;
  v4 = 52 * v2;
  v17 = 0LL;
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
  WerEscalationReadImageVersionInfoForModuleBaseSafe(*(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64), &v17);
  v7 = RtlpUnloadEventTraceEx;
  v8 = v17;
  v9 = DWORD1(v17);
  v10 = HIDWORD(v17);
  *(_DWORD *)&RtlpUnloadEventTrace[v4 + 10] = v17;
  *(_DWORD *)&RtlpUnloadEventTrace[v4 + 12] = v9;
  v11 = DWORD2(v17);
  *(_DWORD *)&RtlpUnloadEventTrace[v4 + 46] = DWORD2(v17);
  *(_DWORD *)&RtlpUnloadEventTrace[v4 + 48] = v10;
  if ( v7 )
    goto LABEL_6;
  v16 = (unsigned int)RtlpUnloadEventTraceExNumber;
  if ( (unsigned int)RtlpUnloadEventTraceExNumber > 0xFFFF )
  {
    v16 = 0xFFFFLL;
    RtlpUnloadEventTraceExNumber = 0xFFFF;
  }
  result = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 0x40000) | 8u, 104 * v16);
  RtlpUnloadEventTraceEx = result;
  v7 = result;
  if ( result )
  {
LABEL_6:
    v12 = LdrpUnloadIndexEx;
    v13 = 104LL * (unsigned __int16)(LdrpUnloadIndexEx % (unsigned int)RtlpUnloadEventTraceExNumber);
    v18 = (unsigned __int16)(LdrpUnloadIndexEx % (unsigned int)RtlpUnloadEventTraceExNumber);
    *(_DWORD *)(v13 + v7 + 16) = LdrpUnloadIndexEx;
    LdrpUnloadIndexEx = v12 + 1;
    *(_QWORD *)(v13 + RtlpUnloadEventTraceEx) = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(v13 + RtlpUnloadEventTraceEx + 8) = *(unsigned int *)(a1 + 64);
    memmove((void *)(v13 + RtlpUnloadEventTraceEx + 28), *(const void **)(a1 + 96), v5);
    if ( v5 < 0x40u )
      *(_WORD *)(RtlpUnloadEventTraceEx + 2 * (v6 + 52 * v18) + 28) = 0;
    v14 = HIDWORD(v17);
    *(_DWORD *)(v13 + RtlpUnloadEventTraceEx + 20) = v8;
    *(_DWORD *)(v13 + RtlpUnloadEventTraceEx + 24) = v9;
    *(_DWORD *)(v13 + RtlpUnloadEventTraceEx + 92) = v11;
    result = RtlpUnloadEventTraceEx;
    *(_DWORD *)(v13 + RtlpUnloadEventTraceEx + 96) = v14;
  }
  return result;
}
