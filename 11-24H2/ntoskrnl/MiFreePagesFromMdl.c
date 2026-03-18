/*
 * XREFs of MiFreePagesFromMdl @ 0x1403A2330
 * Callers:
 *     BgpFwFreeMemory @ 0x14037DE10 (BgpFwFreeMemory.c)
 *     HalpDmaAllocateMapRegisters @ 0x14038E95C (HalpDmaAllocateMapRegisters.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1403978C4 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     MmFreePagesFromMdl @ 0x1403A37F0 (MmFreePagesFromMdl.c)
 *     HalFreeCommonBufferVector @ 0x1403A8F20 (HalFreeCommonBufferVector.c)
 *     HalFreeCommonBufferDmarThin @ 0x1403A9030 (HalFreeCommonBufferDmarThin.c)
 *     HalFreeCommonBufferDmaThin @ 0x1403A9120 (HalFreeCommonBufferDmaThin.c)
 *     MiFreePhysicalPageChain @ 0x1403CCA3C (MiFreePhysicalPageChain.c)
 *     MmFreeSecureKernelPages @ 0x14040F5A8 (MmFreeSecureKernelPages.c)
 *     EtwpAllocateTraceBuffer @ 0x14040FF9C (EtwpAllocateTraceBuffer.c)
 *     EtwpAllocatePartitionMemory @ 0x140410058 (EtwpAllocatePartitionMemory.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x14041011C (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x140410764 (HalpAllocateCommonBufferDmarThin.c)
 *     MmFreeNonChargedSecurePages @ 0x14041098C (MmFreeNonChargedSecurePages.c)
 *     MiFreeSecureKernelPage @ 0x140410B08 (MiFreeSecureKernelPage.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x140410E18 (HalpAllocateCommonBufferDmaThin.c)
 *     BgpFwAllocateMemory @ 0x140467320 (BgpFwAllocateMemory.c)
 *     EtwpFreeTraceBuffer @ 0x140483510 (EtwpFreeTraceBuffer.c)
 *     EtwpFreePartitionMemory @ 0x1404835A0 (EtwpFreePartitionMemory.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x140495260 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     IopLiveDumpWriteDumpFile @ 0x14049ADE4 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x14049B264 (IopLiveDumpFreeDumpBuffers.c)
 *     MmFreePagesFromMdlEx @ 0x1404B3F20 (MmFreePagesFromMdlEx.c)
 *     HalpDmaFreeChildAdapter @ 0x14054F560 (HalpDmaFreeChildAdapter.c)
 *     HalFreeCommonBufferV3 @ 0x1405501A0 (HalFreeCommonBufferV3.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x140550340 (HalpAllocateDomainCommonBufferInternal.c)
 *     HvlpWithdrawPages @ 0x140585950 (HvlpWithdrawPages.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x140599218 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x14059E850 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     DifMmFreePagesFromMdlWrapper @ 0x140633620 (DifMmFreePagesFromMdlWrapper.c)
 *     MiReturnMdlExcess @ 0x140671F10 (MiReturnMdlExcess.c)
 *     MiFreeAwePagesFromMdl @ 0x140682134 (MiFreeAwePagesFromMdl.c)
 *     MiFreeZeroCalibrationBuffer @ 0x140693634 (MiFreeZeroCalibrationBuffer.c)
 *     NtFreeUserPhysicalPages @ 0x1407F9BD0 (NtFreeUserPhysicalPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1407FB6A4 (MiAllocatePartitionPhysicalPages.c)
 *     KiComputeNumaCosts @ 0x140C278AC (KiComputeNumaCosts.c)
 *     PpmHeteroInitializeIntelWpsSupport @ 0x140C33C18 (PpmHeteroInitializeIntelWpsSupport.c)
 *     MiMeasureDemandCoalesceTimeBounds @ 0x140C59ADC (MiMeasureDemandCoalesceTimeBounds.c)
 * Callees:
 *     MiPageToNode @ 0x14026C1E0 (MiPageToNode.c)
 *     MmUnmapLockedPages @ 0x14028D9C0 (MmUnmapLockedPages.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiRetardMdl @ 0x1402F323C (MiRetardMdl.c)
 *     MiSetPfnIdentity @ 0x1403A00D0 (MiSetPfnIdentity.c)
 *     MiZeroAndReleasePages @ 0x1403A0C10 (MiZeroAndReleasePages.c)
 *     MiFreeMdlPageRun @ 0x1403A1D8C (MiFreeMdlPageRun.c)
 *     MiIsPfnEnclave @ 0x1403A2840 (MiIsPfnEnclave.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     MiLogMdlRangeEvent @ 0x140671DA8 (MiLogMdlRangeEvent.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

char __fastcall MiFreePagesFromMdl(ULONG_PTR BugCheckParameter2, unsigned int a2, char a3, int a4)
{
  _QWORD *v7; // rax
  __int64 v8; // rcx
  int v9; // esi
  ULONG_PTR v10; // rax
  ULONG_PTR *v11; // r14
  __int64 v12; // r12
  unsigned __int64 v13; // rcx
  unsigned int v14; // ebx
  unsigned __int64 v15; // r15
  __int64 v16; // r13
  int v17; // edi
  unsigned int v18; // eax
  __int64 v19; // rcx
  ULONG_PTR v20; // rcx
  ULONG_PTR v21; // rcx
  unsigned __int64 v22; // rax
  unsigned int v23; // r12d
  unsigned __int8 v25; // [rsp+30h] [rbp-F8h]
  int v26; // [rsp+34h] [rbp-F4h]
  unsigned int v28; // [rsp+3Ch] [rbp-ECh]
  __int64 v29; // [rsp+48h] [rbp-E0h]
  __int64 v30; // [rsp+50h] [rbp-D8h]
  __int64 v31; // [rsp+58h] [rbp-D0h]
  unsigned __int64 v32; // [rsp+60h] [rbp-C8h]
  unsigned __int8 CurrentIrql; // [rsp+68h] [rbp-C0h]
  _BYTE v34[96]; // [rsp+70h] [rbp-B8h] BYREF

  v28 = a2;
  memset_0(v34, 0, sizeof(v34));
  v29 = 0LL;
  v7 = v34;
  v8 = 4LL;
  do
  {
    v7[2] = 0LL;
    v7[1] = v7;
    *v7 = v7;
    v7 += 3;
    --v8;
  }
  while ( v8 );
  v9 = 0;
  v26 = 1;
  if ( _bittest16((const signed __int16 *)(BugCheckParameter2 + 10), 9u) )
  {
    v28 = a2 & 0xFFFFFFFE;
    MiRetardMdl(BugCheckParameter2);
  }
  if ( (*(_BYTE *)(BugCheckParameter2 + 10) & 1) != 0 )
    MmUnmapLockedPages(*(PVOID *)(BugCheckParameter2 + 24), (PMDL)BugCheckParameter2);
  v10 = *(__int16 *)(BugCheckParameter2 + 10);
  if ( (v10 & 1) != 0 )
    KeBugCheckEx(0x1Au, 0x1238uLL, BugCheckParameter2, v10, 0LL);
  v11 = (ULONG_PTR *)(BugCheckParameter2 + 48);
  v12 = 0LL;
  v30 = 0LL;
  v13 = (((*(_DWORD *)(BugCheckParameter2 + 32) + *(_DWORD *)(BugCheckParameter2 + 44)) & 0xFFF)
       + (unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 40)
       + 4095) >> 12;
  v32 = v13;
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
  {
    MiLogMdlRangeEvent(a4, BugCheckParameter2 + 48, 633, v13, 1LL);
    v13 = v32;
  }
  v14 = 1;
  CurrentIrql = KeGetCurrentIrql();
  v15 = 0LL;
  while ( v13 )
  {
    if ( *v11 > qword_140E2DBE0 || ((*(_QWORD *)(48 * *v11 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
      KeBugCheckEx(0x1Au, 0x1237uLL, BugCheckParameter2, (ULONG_PTR)v11, *v11);
    v16 = 48 * *v11 - 0x220000000000LL;
    if ( (*(_QWORD *)(v16 + 40) & 0xFFFFFFFFFFLL) != 0x3FFFFFFFFELL )
      KeBugCheckEx(0x1Au, 0x1236uLL, BugCheckParameter2, (ULONG_PTR)v11, *v11);
    v31 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v16 + 40) >> 43) & 0x3FFLL));
    v17 = MiPageToNode(*v11);
    if ( ((*(_QWORD *)(v16 + 40) >> 60) & 7) == 3 )
    {
      if ( CurrentIrql == 2 )
      {
        v25 = 17;
        v23 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v23 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v23);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v16 + 24) < 0 );
        }
        v12 = v30;
      }
      else
      {
        v25 = MiLockPageInline(v16);
      }
      MiSetPfnIdentity(v16, 0);
      MiUnlockPage(v16, v25);
      _InterlockedDecrement64(&qword_140E2DBE8);
    }
    if ( v15 )
    {
      v18 = v14 & 0xFFFFFFFD;
      v14 = v14 & 0xFFFFFFFD | 2;
      if ( v29 == v31 )
        v14 = v18;
      if ( (v14 & 2) != 0
        || (unsigned int)MiIsPfnEnclave(v16)
        || (unsigned __int8)BYTE2(*(_DWORD *)(v16 + 32)) >> 6 != v26
        || v17 != v9 )
      {
        goto LABEL_33;
      }
      v19 = *(v11 - 1);
      if ( *v11 == v19 + 1 )
      {
        if ( v15 == 1 || (v14 & 1) != 0 )
        {
          v14 |= 1u;
LABEL_27:
          ++v15;
          goto LABEL_28;
        }
LABEL_48:
        v20 = *(v11 - 1);
LABEL_35:
        MiFreeMdlPageRun(v20, v15, v28, a3, (__int64)v34);
        v12 += v15;
        v30 = v12;
        if ( (v14 & 2) != 0 )
        {
          MiZeroAndReleasePages((__int64)v34, v28, a3);
          if ( (a3 & 2) == 0 && (v14 & 4) == 0 )
            _InterlockedAdd64((volatile signed __int64 *)(v29 + 19648), -v12);
          v12 = 0LL;
          v30 = 0LL;
          v29 = v31;
        }
        v15 = 1LL;
        v26 = (unsigned __int8)BYTE2(*(_DWORD *)(v16 + 32)) >> 6;
        goto LABEL_31;
      }
      if ( *v11 == v19 - 1 )
      {
        if ( v15 == 1 || (v14 & 1) == 0 )
        {
          v14 &= ~1u;
          goto LABEL_27;
        }
      }
      else
      {
LABEL_33:
        if ( (v14 & 1) == 0 )
          goto LABEL_48;
      }
      v20 = v11[-v15];
      goto LABEL_35;
    }
    v15 = 1LL;
    v29 = v31;
    v26 = (unsigned __int8)BYTE2(*(_DWORD *)(v16 + 32)) >> 6;
    v14 ^= ((unsigned __int8)v14 ^ (unsigned __int8)(4 * MiIsPfnEnclave(v16))) & 4;
LABEL_31:
    v9 = v17;
LABEL_28:
    v13 = --v32;
    ++v11;
  }
  if ( (v14 & 1) != 0 )
    v21 = v11[-v15];
  else
    v21 = *(v11 - 1);
  MiFreeMdlPageRun(v21, v15, v28, a3, (__int64)v34);
  MiZeroAndReleasePages((__int64)v34, v28, a3);
  LOBYTE(v22) = (v14 & 4) == 0;
  if ( (((a3 & 2) == 0) & (unsigned __int8)v22) != 0 )
  {
    v22 = -(__int64)(v12 + v15);
    _InterlockedAdd64((volatile signed __int64 *)(v29 + 19648), v22);
  }
  *(_WORD *)(BugCheckParameter2 + 10) &= ~2u;
  return v22;
}
