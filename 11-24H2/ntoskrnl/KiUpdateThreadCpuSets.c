/*
 * XREFs of KiUpdateThreadCpuSets @ 0x14048B9CC
 * Callers:
 *     KeSetSelectedCpuSetsThread @ 0x14048B570 (KeSetSelectedCpuSetsThread.c)
 *     KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x14048B954 (KiUpdateThreadCpuSetAffinitiesFromDpcLevel.c)
 * Callees:
 *     KiComputeThreadAffinity @ 0x1402A9724 (KiComputeThreadAffinity.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403A0670 (KiAcquireThreadStateLockForWrite.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1403A09F0 (KiRescheduleThreadAfterAffinityChange.c)
 *     EtwTraceThreadAffinity @ 0x1403A2658 (EtwTraceThreadAffinity.c)
 *     EtwTraceIdealProcessor @ 0x1404AC65C (EtwTraceIdealProcessor.c)
 */

void __fastcall KiUpdateThreadCpuSets(__int64 a1, struct _SINGLE_LIST_ENTRY *a2)
{
  char v2; // r15
  int v4; // eax
  int v6; // esi
  int v7; // r14d
  char v8; // bl
  __int64 v9; // r8
  __int64 v10[2]; // [rsp+50h] [rbp-10h] BYREF
  __int64 v11; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v12; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v13; // [rsp+B8h] [rbp+58h] BYREF

  v11 = 0LL;
  v2 = 0;
  v13 = 0LL;
  v12 = 0LL;
  v4 = *(_DWORD *)(a1 + 116);
  v6 = *(_DWORD *)(a1 + 588);
  v7 = v6;
  *(_OWORD *)v10 = 0LL;
  if ( (v4 & 8) != 0 )
  {
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  else
  {
    v8 = KiAcquireThreadStateLockForWrite(a1, &v13, &v12, (volatile __int64 **)&v11, (volatile signed __int64 **)v10);
    v2 = KiComputeThreadAffinity(a1);
    v7 = *(_DWORD *)(a1 + 588);
    KiRescheduleThreadAfterAffinityChange(
      a1,
      *(unsigned __int16 **)(a1 + 576),
      v9,
      v8,
      (struct _KPRCB *)v13,
      &v12,
      (volatile signed __int64 *)v11,
      (volatile signed __int64 **)v10,
      a2);
  }
  if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 && v2 )
    EtwTraceThreadAffinity(
      a1,
      *(_WORD *)(a1 + 584),
      (*(_DWORD *)(a1 + 116) & 8) != 0,
      0,
      *(unsigned __int16 **)(a1 + 576),
      1334);
  if ( v6 != v7 && (xmmword_140FC6B50 & 0x8000000) != 0 )
    EtwTraceIdealProcessor(a1, 1350LL);
}
