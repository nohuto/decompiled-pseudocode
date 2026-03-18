/*
 * XREFs of HalpInitializeInterrupts @ 0x140BFCE18
 * Callers:
 *     HalpInterruptInitDiscard @ 0x140BFEAB4 (HalpInterruptInitDiscard.c)
 * Callees:
 *     HalpInterruptSetProblemEx @ 0x1404443B8 (HalpInterruptSetProblemEx.c)
 *     HalQueryMaximumProcessorCount @ 0x1404477E0 (HalQueryMaximumProcessorCount.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     HalpMmAllocateMemoryInternal @ 0x1405404A0 (HalpMmAllocateMemoryInternal.c)
 *     HalpInterruptInitializeIpis @ 0x140541DC0 (HalpInterruptInitializeIpis.c)
 *     HalpInterruptInitializeController @ 0x140553BD4 (HalpInterruptInitializeController.c)
 *     HalpInterruptParseAcpiTables @ 0x140554094 (HalpInterruptParseAcpiTables.c)
 *     HalpInterruptSelectController @ 0x140554A68 (HalpInterruptSelectController.c)
 *     HalpInterruptSetIdtEntry @ 0x140557B60 (HalpInterruptSetIdtEntry.c)
 *     HalpApicDiscover @ 0x140565A64 (HalpApicDiscover.c)
 *     HalpPicDiscover @ 0x1405667D4 (HalpPicDiscover.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall HalpInitializeInterrupts(__int64 a1)
{
  int v2; // ebx
  unsigned int v3; // ebx
  void *MemoryInternal; // rax
  unsigned int v5; // ebx
  void *v6; // rax
  unsigned int v7; // ebx
  void *v8; // rax
  void *v9; // rax
  unsigned int v10; // ebx
  void *v11; // rax
  unsigned int v12; // ebx
  void *v13; // rax
  __int64 v14; // r9
  __int64 v15; // r9
  __int64 v16; // r9
  __int64 v17; // r9
  __int64 v18; // r9
  __int64 v19; // r9
  __int64 v20; // r9
  __int64 v21; // r9
  ULONG_PTR *i; // rdi
  ULONG_PTR *v23; // rcx
  int v24; // eax
  _DWORD *v25; // rax
  unsigned int v26; // ecx
  int v27; // eax
  ULONG_PTR *v29; // [rsp+60h] [rbp+18h] BYREF

  v29 = 0LL;
  HalpInterruptOverridesLock = 0LL;
  HalpInterruptLocalUnitErrorLock = 0LL;
  HalpInterruptPhysicalTargets.Reserved = 0;
  qword_140F8F108 = (__int64)&HalpInterruptOverrides;
  HalpInterruptOverrides = (__int64)&HalpInterruptOverrides;
  *(_DWORD *)&HalpInterruptPhysicalTargets.Count = 2097153;
  memset_0(&HalpInterruptPhysicalTargets.8, 0, sizeof(HalpInterruptPhysicalTargets.8));
  v2 = HalpInterruptParseAcpiTables(a1, 0);
  if ( v2 < 0 )
    goto LABEL_4;
  HalpInterruptMaxProcessors = HalQueryMaximumProcessorCount();
  v3 = 24 * HalpInterruptMaxProcessors;
  MemoryInternal = (void *)HalpMmAllocateMemoryInternal(24 * HalpInterruptMaxProcessors, 1u);
  HalpInterruptTargets = (__int64)MemoryInternal;
  if ( !MemoryInternal )
    goto LABEL_3;
  memset_0(MemoryInternal, 0, v3);
  v5 = 4 * HalpInterruptMaxProcessors;
  v6 = (void *)HalpMmAllocateMemoryInternal(4 * HalpInterruptMaxProcessors, 1u);
  HalpInterruptLocalIds = (__int64)v6;
  if ( !v6 )
    goto LABEL_3;
  memset_0(v6, 0, v5);
  v7 = HalpInterruptMaxProcessors << 6;
  v8 = (void *)HalpMmAllocateMemoryInternal(HalpInterruptMaxProcessors << 6, 1u);
  HalpInterruptProcessorState = (ULONG_PTR)v8;
  if ( !v8 )
    goto LABEL_3;
  memset_0(v8, 0, v7);
  v9 = (void *)HalpMmAllocateMemoryInternal(v7, 1u);
  HalpInterruptDynamicProcessorState = (__int64)v9;
  if ( !v9 )
    goto LABEL_3;
  memset_0(v9, 0, v7);
  v10 = 8 * HalpInterruptMaxProcessors;
  v11 = (void *)HalpMmAllocateMemoryInternal(8 * HalpInterruptMaxProcessors, 1u);
  HalpInterruptProcessorStateByNtIndex = (__int64)v11;
  if ( !v11
    || (memset_0(v11, 0, v10),
        v12 = 8 * HalpInterruptMaxProcessors,
        v13 = (void *)HalpMmAllocateMemoryInternal(8 * HalpInterruptMaxProcessors, 1u),
        (HalpInterruptProcessorPcr = (__int64)v13) == 0) )
  {
LABEL_3:
    v2 = -1073741801;
    goto LABEL_4;
  }
  memset_0(v13, 0, v12);
  *(_QWORD *)HalpInterruptProcessorPcr = KeGetPcr();
  v2 = HalpApicDiscover();
  if ( v2 >= 0 )
    v2 = HalpPicDiscover();
  if ( v2 < 0 )
  {
    HalpInterruptSetProblemEx(0LL, 3, v2, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 0x299u);
    goto LABEL_4;
  }
  HalpInterruptSetIdtEntry(
    0x35u,
    (__int64 (__fastcall *)(struct _KINTERRUPT *, void *))HalpInterruptDeferredErrorService,
    5,
    v14,
    -1LL);
  HalpInterruptSetIdtEntry(
    0xE3u,
    (__int64 (__fastcall *)(struct _KINTERRUPT *, void *))HalpInterruptDeferredRecoveryService,
    14,
    v15,
    -1LL);
  HalpInterruptSetIdtEntry(
    0x36u,
    (__int64 (__fastcall *)(struct _KINTERRUPT *, void *))HalpInterruptDeferredErrorService,
    5,
    v16,
    -1LL);
  HalpInterruptSetIdtEntry(
    0xDFu,
    (__int64 (__fastcall *)(struct _KINTERRUPT *, void *))HalpInterruptSpuriousService,
    15,
    v17,
    -2LL);
  HalpInterruptSetIdtEntry(
    0xD8u,
    (__int64 (__fastcall *)(struct _KINTERRUPT *, void *))HalpInterruptStubService,
    15,
    v18,
    -1LL);
  HalpInterruptSetIdtEntry(
    0xE2u,
    (__int64 (__fastcall *)(struct _KINTERRUPT *, void *))HalpInterruptLocalErrorService,
    15,
    v19,
    -1LL);
  HalpInterruptSetIdtEntry(
    0xD7u,
    (__int64 (__fastcall *)(struct _KINTERRUPT *, void *))HalpInterruptRebootService,
    15,
    v20,
    -1LL);
  HalpInterruptSetIdtEntry(
    0xFEu,
    (__int64 (__fastcall *)(struct _KINTERRUPT *, void *))HalpPerfInterrupt,
    15,
    v21,
    -3LL);
  byte_1410078D2 = 17;
  byte_141007ADA = 15;
  dword_141007ADB = 2;
  byte_1410079AF = 17;
  byte_141007F2B = 15;
  dword_141007F2C = 223;
  v2 = HalpInterruptSelectController(&v29);
  if ( v2 < 0 )
    goto LABEL_4;
  for ( i = (ULONG_PTR *)HalpRegisteredInterruptControllers; i != &HalpRegisteredInterruptControllers; i = (ULONG_PTR *)*i )
  {
    v2 = HalpInterruptInitializeController((ULONG_PTR)i);
    if ( v2 < 0 )
      goto LABEL_4;
  }
  v2 = HalpInterruptParseAcpiTables(a1, 1u);
  if ( v2 < 0 )
    goto LABEL_4;
  v23 = v29;
  HalpHwToSwIrqlMap = (__int128)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  LOWORD(HalpHwToSwIrqlMap) = 256;
  v24 = *((_DWORD *)v29 + 61);
  *(_WORD *)((char *)&HalpHwToSwIrqlMap + 13) = 3597;
  BYTE12(HalpHwToSwIrqlMap) = 12;
  HIBYTE(HalpHwToSwIrqlMap) = 15;
  BYTE2(HalpHwToSwIrqlMap) = 2;
  if ( (v24 & 1) == 0 )
  {
    v25 = (_DWORD *)HalpInterruptTargets;
    LODWORD(HalpInterruptProcessorCount) = 1;
    *(_DWORD *)(HalpInterruptTargets + 8) = 0;
    *v25 = 4;
    v24 = *((_DWORD *)v23 + 61);
  }
  if ( !(_DWORD)HalpInterruptProcessorCount )
    LODWORD(HalpInterruptProcessorCount) = 1;
  if ( (v24 & 4) == 0 )
    HalpInterruptLogicalFlatLimit = 0;
  HalpInterruptController = (ULONG_PTR)v23;
  v2 = HalpInterruptInitializeIpis();
  if ( v2 < 0 )
LABEL_4:
    KeBugCheckEx(0x5Cu, 0x200uLL, 0x5250631uLL, HalpInterruptLastProblem, v2);
  if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x100) != 0 )
  {
    if ( KeGetCurrentPrcb()->CpuVendor == 1 )
    {
      v27 = 0x200000;
    }
    else
    {
      v26 = 240 * HalQueryMaximumProcessorCount();
      v27 = 0x10000;
      if ( v26 <= 0x10000 )
      {
        _BitScanReverse(&v26, 2 * v26 - 1);
        v27 = 1 << v26;
      }
    }
    HalpIrtTotalEntries = v27;
  }
  return (unsigned int)v2;
}
