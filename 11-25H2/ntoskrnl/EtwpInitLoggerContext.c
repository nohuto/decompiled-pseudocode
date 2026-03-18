/*
 * XREFs of EtwpInitLoggerContext @ 0x140A388E4
 * Callers:
 *     EtwpStartLogger @ 0x140A374DC (EtwpStartLogger.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1402BD630 (KeQueryMaximumProcessorCountEx.c)
 *     KeQuerySystemTimePrecise @ 0x14031ABA0 (KeQuerySystemTimePrecise.c)
 *     EtwpQueryUsedProcessorCount @ 0x1403E4578 (EtwpQueryUsedProcessorCount.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     HalQueryMaximumProcessorCount @ 0x1404477E0 (HalQueryMaximumProcessorCount.c)
 *     KeInitializeTimerEx @ 0x14044DC30 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x140454E30 (KeInitializeDpc.c)
 *     EtwpInitializeApcPool @ 0x14046029C (EtwpInitializeApcPool.c)
 *     KeInitializeMutex @ 0x140476A80 (KeInitializeMutex.c)
 *     EtwpInitializeCompression @ 0x1404B6DB4 (EtwpInitializeCompression.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpInitLoggerContext(const void **a1, int a2, int a3)
{
  unsigned int v5; // ebp
  unsigned int v6; // r14d
  unsigned int MaximumProcessorCount; // eax
  _QWORD *Pool2; // rax
  __int64 v9; // rbx
  char *v10; // rdi
  void *v11; // rax
  __int64 v12; // rdx
  int UsedProcessorCount; // edi
  unsigned int v14; // r8d
  int v15; // r9d
  unsigned int v16; // edi
  int v18; // eax
  char *v19; // rdi

  v5 = 0;
  v6 = 0;
  if ( (a2 & 0x10000000) == 0 )
  {
    if ( a3 < 0 )
      MaximumProcessorCount = HalQueryMaximumProcessorCount();
    else
      MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
    v5 = 8 * MaximumProcessorCount;
    if ( MaximumProcessorCount <= 0x20 )
      v5 = 0;
    if ( (a2 & 0x400) != 0 )
      v6 = 8 * MaximumProcessorCount;
  }
  Pool2 = (_QWORD *)ExAllocatePool2(0x48uLL);
  v9 = (__int64)Pool2;
  if ( !Pool2 )
    return 0LL;
  v10 = (char *)(Pool2 + 202);
  if ( v5 )
  {
    Pool2[165] = v10;
    v10 += v5;
  }
  if ( v6 )
  {
    Pool2[195] = v10;
    v19 = &v10[v6];
    Pool2[196] = v19;
    v10 = &v19[v6];
  }
  memmove(v10, a1[1], *(unsigned __int16 *)a1);
  RtlInitUnicodeString((PUNICODE_STRING)(v9 + 136), (PCWSTR)v10);
  *(_DWORD *)(v9 + 12) = a2;
  *(_DWORD *)(v9 + 300) = (a2 & 0x1000000) != 0 ? 1 : 512;
  if ( a2 < 0 && (a2 & 0x1000000) != 0 )
    *(_DWORD *)(v9 + 12) = a2 & 0x7FFFFFFF;
  if ( (unsigned __int8)EtwpBootPhase > 3u )
    _InterlockedOr((volatile signed __int32 *)(v9 + 816), 4u);
  if ( (a2 & 0x8000) != 0 )
  {
    v11 = (void *)(v9 + 272);
LABEL_18:
    *(_QWORD *)(v9 + 264) = v11;
    goto LABEL_19;
  }
  if ( (a2 & 0x4000) != 0 )
  {
    v11 = &EtwpGlobalSequence;
    goto LABEL_18;
  }
LABEL_19:
  *(_QWORD *)(v9 + 1576) = -1LL;
  *(_DWORD *)(v9 + 320) = 1;
  v12 = *(_QWORD *)(*(_QWORD *)qword_140E2FD48 + 18512LL) << 12 >> 20;
  if ( (unsigned int)v12 > 0x200 )
  {
    v18 = 0x10000;
    if ( (unsigned int)v12 <= 0x400 )
      v18 = 0x4000;
    *(_DWORD *)(v9 + 4) = v18;
  }
  else
  {
    *(_DWORD *)(v9 + 4) = 0x2000;
  }
  UsedProcessorCount = EtwpQueryUsedProcessorCount(v9);
  *(_DWORD *)(v9 + 224) = 2 * UsedProcessorCount;
  if ( (a2 & 0x4000000) == 0 )
    goto LABEL_22;
  if ( (int)EtwpInitializeCompression(v9) < 0 )
  {
    ExFreePoolWithTag((PVOID)v9, 0);
    return 0LL;
  }
  if ( (a2 & 0x400) != 0 )
    *(_DWORD *)(v9 + 224) += 4;
LABEL_22:
  *(_DWORD *)(v9 + 236) = *(_DWORD *)(v9 + 224) + 22;
  KeQuerySystemTimePrecise((_QWORD *)(v9 + 792));
  KeInitializeMutex((PRKMUTEX)(v9 + 632), 0);
  *(_QWORD *)(v9 + 688) = 0LL;
  v14 = 4 * UsedProcessorCount;
  v15 = 16;
  v16 = 16 * UsedProcessorCount;
  *(_QWORD *)(v9 + 336) = v9 + 328;
  *(_QWORD *)(v9 + 328) = v9 + 328;
  if ( v14 < 0x10 )
    v14 = 16;
  *(_QWORD *)(v9 + 48) = v9 + 56;
  *(_QWORD *)(v9 + 56) = 0LL;
  if ( v16 >= 0x10 )
    v15 = v16;
  *(_QWORD *)(v9 + 64) = v9 + 72;
  *(_QWORD *)(v9 + 72) = 0LL;
  *(_QWORD *)(v9 + 88) = v9 + 80;
  *(_QWORD *)(v9 + 80) = v9 + 80;
  *(_QWORD *)(v9 + 104) = v9 + 96;
  *(_QWORD *)(v9 + 96) = v9 + 96;
  *(_QWORD *)(v9 + 1312) = v9 + 1304;
  *(_QWORD *)(v9 + 1304) = v9 + 1304;
  *(_WORD *)(v9 + 1328) = 0;
  *(_QWORD *)(v9 + 1336) = 0LL;
  *(_QWORD *)(v9 + 696) = 0LL;
  EtwpInitializeApcPool(v9 + 832, v9, v14, v15);
  KeInitializeEvent((PRKEVENT)(v9 + 456), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(v9 + 480), SynchronizationEvent, 0);
  KeInitializeTimerEx((PKTIMER)(v9 + 504), SynchronizationTimer);
  KeInitializeDpc((PRKDPC)(v9 + 568), (PKDEFERRED_ROUTINE)EtwpLoggerDpc, (PVOID)v9);
  return v9;
}
