/*
 * XREFs of EtwpInitLoggerContext @ 0x1409CFDB8
 * Callers:
 *     EtwpStartLogger @ 0x1409D017C (EtwpStartLogger.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x14027D604 (EtwpQueryUsedProcessorCount.c)
 *     KeQueryMaximumProcessorCountEx @ 0x14031D920 (KeQueryMaximumProcessorCountEx.c)
 *     KeQuerySystemTimePrecise @ 0x14036D140 (KeQuerySystemTimePrecise.c)
 *     HalQueryMaximumProcessorCount @ 0x140375540 (HalQueryMaximumProcessorCount.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     KeInitializeTimerEx @ 0x1404449F0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x14044A220 (KeInitializeDpc.c)
 *     MmGetNumberOfPhysicalPages @ 0x140454120 (MmGetNumberOfPhysicalPages.c)
 *     EtwpInitializeApcPool @ 0x140454140 (EtwpInitializeApcPool.c)
 *     KeInitializeMutex @ 0x140473080 (KeInitializeMutex.c)
 *     EtwpInitializeCompression @ 0x1404B1064 (EtwpInitializeCompression.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpInitLoggerContext(const void **a1, int a2, int a3)
{
  int v3; // ebx
  unsigned int v6; // ebp
  unsigned int v7; // r14d
  unsigned int MaximumProcessorCount; // eax
  _QWORD *Pool2; // rax
  __int64 v10; // rbx
  char *v11; // rdi
  void *v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  int UsedProcessorCount; // edi
  unsigned int v16; // r8d
  int v17; // r9d
  unsigned int v18; // edi
  int v20; // eax
  char *v21; // rdi

  v3 = *(unsigned __int16 *)a1;
  v6 = 0;
  v7 = 0;
  if ( (a2 & 0x10000000) == 0 )
  {
    if ( a3 < 0 )
      MaximumProcessorCount = HalQueryMaximumProcessorCount();
    else
      MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
    v6 = 8 * MaximumProcessorCount;
    if ( MaximumProcessorCount <= 0x20 )
      v6 = 0;
    if ( (a2 & 0x400) != 0 )
      v7 = 8 * MaximumProcessorCount;
  }
  Pool2 = (_QWORD *)ExAllocatePool2(0x48uLL, v6 + v3 + 1618 + 2 * v7, 0x4C777445u);
  v10 = (__int64)Pool2;
  if ( !Pool2 )
    return 0LL;
  v11 = (char *)(Pool2 + 202);
  if ( v6 )
  {
    Pool2[165] = v11;
    v11 += v6;
  }
  if ( v7 )
  {
    Pool2[195] = v11;
    v21 = &v11[v7];
    Pool2[196] = v21;
    v11 = &v21[v7];
  }
  memmove(v11, a1[1], *(unsigned __int16 *)a1);
  RtlInitUnicodeString((PUNICODE_STRING)(v10 + 136), (PCWSTR)v11);
  *(_DWORD *)(v10 + 12) = a2;
  *(_DWORD *)(v10 + 300) = (a2 & 0x1000000) != 0 ? 1 : 512;
  if ( a2 < 0 && (a2 & 0x1000000) != 0 )
    *(_DWORD *)(v10 + 12) = a2 & 0x7FFFFFFF;
  if ( (unsigned __int8)EtwpBootPhase > 3u )
    _InterlockedOr((volatile signed __int32 *)(v10 + 816), 4u);
  if ( (a2 & 0x8000) != 0 )
  {
    v12 = (void *)(v10 + 272);
LABEL_18:
    *(_QWORD *)(v10 + 264) = v12;
    goto LABEL_19;
  }
  if ( (a2 & 0x4000) != 0 )
  {
    v12 = &EtwpGlobalSequence;
    goto LABEL_18;
  }
LABEL_19:
  *(_QWORD *)(v10 + 1576) = -1LL;
  *(_DWORD *)(v10 + 320) = 1;
  v14 = (unsigned __int64)(MmGetNumberOfPhysicalPages(0) << 12) >> 20;
  if ( (unsigned int)v14 > 0x200 )
  {
    v20 = 0x10000;
    if ( (unsigned int)v14 <= 0x400 )
      v20 = 0x4000;
    *(_DWORD *)(v10 + 4) = v20;
  }
  else
  {
    *(_DWORD *)(v10 + 4) = 0x2000;
  }
  UsedProcessorCount = EtwpQueryUsedProcessorCount(v10, v13);
  *(_DWORD *)(v10 + 224) = 2 * UsedProcessorCount;
  if ( (a2 & 0x4000000) == 0 )
    goto LABEL_22;
  if ( (int)EtwpInitializeCompression(v10) < 0 )
  {
    ExFreePoolWithTag((PVOID)v10, 0);
    return 0LL;
  }
  if ( (a2 & 0x400) != 0 )
    *(_DWORD *)(v10 + 224) += 4;
LABEL_22:
  *(_DWORD *)(v10 + 236) = *(_DWORD *)(v10 + 224) + 22;
  KeQuerySystemTimePrecise((_QWORD *)(v10 + 792));
  KeInitializeMutex((PRKMUTEX)(v10 + 632), 0);
  *(_QWORD *)(v10 + 688) = 0LL;
  v16 = 4 * UsedProcessorCount;
  v17 = 16;
  v18 = 16 * UsedProcessorCount;
  *(_QWORD *)(v10 + 336) = v10 + 328;
  *(_QWORD *)(v10 + 328) = v10 + 328;
  if ( v16 < 0x10 )
    v16 = 16;
  *(_QWORD *)(v10 + 48) = v10 + 56;
  *(_QWORD *)(v10 + 56) = 0LL;
  if ( v18 >= 0x10 )
    v17 = v18;
  *(_QWORD *)(v10 + 64) = v10 + 72;
  *(_QWORD *)(v10 + 72) = 0LL;
  *(_QWORD *)(v10 + 88) = v10 + 80;
  *(_QWORD *)(v10 + 80) = v10 + 80;
  *(_QWORD *)(v10 + 104) = v10 + 96;
  *(_QWORD *)(v10 + 96) = v10 + 96;
  *(_QWORD *)(v10 + 1312) = v10 + 1304;
  *(_QWORD *)(v10 + 1304) = v10 + 1304;
  *(_WORD *)(v10 + 1328) = 0;
  *(_QWORD *)(v10 + 1336) = 0LL;
  *(_QWORD *)(v10 + 696) = 0LL;
  EtwpInitializeApcPool(v10 + 832, v10, v16, v17);
  KeInitializeEvent((PRKEVENT)(v10 + 456), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(v10 + 480), SynchronizationEvent, 0);
  KeInitializeTimerEx((PKTIMER)(v10 + 504), SynchronizationTimer);
  KeInitializeDpc((PRKDPC)(v10 + 568), (PKDEFERRED_ROUTINE)EtwpLoggerDpc, (PVOID)v10);
  return v10;
}
