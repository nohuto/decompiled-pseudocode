/*
 * XREFs of MiFreePagesFromMdl @ 0x140218F60
 * Callers:
 *     MiFreePhysicalPageChain @ 0x140266C0C (MiFreePhysicalPageChain.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1402F613C (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     HalpDmaAllocateMapRegisters @ 0x14038829C (HalpDmaAllocateMapRegisters.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x1403962A4 (HalpAllocateCommonBufferDmaThin.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x140397478 (HalpAllocateCommonBufferDmarThin.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x1403976A0 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalFreeCommonBufferVector @ 0x140397BB0 (HalFreeCommonBufferVector.c)
 *     HalFreeCommonBufferDmarThin @ 0x140397CC0 (HalFreeCommonBufferDmarThin.c)
 *     HalFreeCommonBufferDmaThin @ 0x140397DB0 (HalFreeCommonBufferDmaThin.c)
 *     MmFreeSecureKernelPages @ 0x1404331CC (MmFreeSecureKernelPages.c)
 *     MmFreeNonChargedSecurePages @ 0x140433BCC (MmFreeNonChargedSecurePages.c)
 *     MiFreeSecureKernelPage @ 0x140433D48 (MiFreeSecureKernelPage.c)
 *     BgpFwFreeMemory @ 0x14045EC7C (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14045ED38 (BgpFwAllocateMemory.c)
 *     EtwpAllocateTraceBuffer @ 0x14047CE80 (EtwpAllocateTraceBuffer.c)
 *     EtwpAllocatePartitionMemory @ 0x14047CF3C (EtwpAllocatePartitionMemory.c)
 *     EtwpFreeTraceBuffer @ 0x14047E9DC (EtwpFreeTraceBuffer.c)
 *     EtwpFreePartitionMemory @ 0x14047EA6C (EtwpFreePartitionMemory.c)
 *     MmFreePagesFromMdl @ 0x14048E2C0 (MmFreePagesFromMdl.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x14048FB20 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     IopLiveDumpWriteDumpFile @ 0x1404957D4 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x140495C54 (IopLiveDumpFreeDumpBuffers.c)
 *     MmFreePagesFromMdlEx @ 0x1404AE730 (MmFreePagesFromMdlEx.c)
 *     HalpDmaFreeChildAdapter @ 0x14054CEA0 (HalpDmaFreeChildAdapter.c)
 *     HalFreeCommonBufferV3 @ 0x14054DAE0 (HalFreeCommonBufferV3.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x14054DC80 (HalpAllocateDomainCommonBufferInternal.c)
 *     HvlpWithdrawPages @ 0x140582CD0 (HvlpWithdrawPages.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x140596198 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x14059B7D0 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     DifMmFreePagesFromMdlWrapper @ 0x140631BE0 (DifMmFreePagesFromMdlWrapper.c)
 *     MiReturnMdlExcess @ 0x1406730E0 (MiReturnMdlExcess.c)
 *     MiFreeAwePagesFromMdl @ 0x140683324 (MiFreeAwePagesFromMdl.c)
 *     MiFreeZeroCalibrationBuffer @ 0x140694704 (MiFreeZeroCalibrationBuffer.c)
 *     NtFreeUserPhysicalPages @ 0x1407FA340 (NtFreeUserPhysicalPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1407FBE14 (MiAllocatePartitionPhysicalPages.c)
 *     KiComputeNumaCosts @ 0x140C29888 (KiComputeNumaCosts.c)
 *     PpmHeteroInitializeIntelWpsSupport @ 0x140C35D58 (PpmHeteroInitializeIntelWpsSupport.c)
 *     MiMeasureDemandCoalesceTimeBounds @ 0x140C5BC6C (MiMeasureDemandCoalesceTimeBounds.c)
 * Callees:
 *     MiSetPfnIdentity @ 0x140216B00 (MiSetPfnIdentity.c)
 *     MiZeroAndReleasePages @ 0x140217770 (MiZeroAndReleasePages.c)
 *     MiFreeMdlPageRun @ 0x1402189BC (MiFreeMdlPageRun.c)
 *     MiIsPfnEnclave @ 0x140219470 (MiIsPfnEnclave.c)
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiRetardMdl @ 0x140258D7C (MiRetardMdl.c)
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MiLogMdlRangeEvent @ 0x140672F78 (MiLogMdlRangeEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // edi
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // eax
  __int64 v23; // rcx
  ULONG_PTR v24; // rcx
  ULONG_PTR v25; // rcx
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  unsigned int v28; // r12d
  char v30; // [rsp+30h] [rbp-F8h]
  unsigned int v31; // [rsp+34h] [rbp-F4h]
  unsigned int v33; // [rsp+3Ch] [rbp-ECh]
  __int64 v34; // [rsp+48h] [rbp-E0h]
  __int64 v35; // [rsp+50h] [rbp-D8h]
  __int64 v36; // [rsp+58h] [rbp-D0h]
  unsigned __int64 v37; // [rsp+60h] [rbp-C8h]
  unsigned __int8 CurrentIrql; // [rsp+68h] [rbp-C0h]
  _BYTE v39[96]; // [rsp+70h] [rbp-B8h] BYREF

  v33 = a2;
  memset_0(v39, 0, sizeof(v39));
  v34 = 0LL;
  v7 = v39;
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
  v31 = 1;
  if ( _bittest16((const signed __int16 *)(BugCheckParameter2 + 10), 9u) )
  {
    v33 = a2 & 0xFFFFFFFE;
    MiRetardMdl(BugCheckParameter2);
  }
  if ( (*(_BYTE *)(BugCheckParameter2 + 10) & 1) != 0 )
    MmUnmapLockedPages(*(PVOID *)(BugCheckParameter2 + 24), (PMDL)BugCheckParameter2);
  v10 = *(__int16 *)(BugCheckParameter2 + 10);
  if ( (v10 & 1) != 0 )
    KeBugCheckEx(0x1Au, 0x1238uLL, BugCheckParameter2, v10, 0LL);
  v11 = (ULONG_PTR *)(BugCheckParameter2 + 48);
  v12 = 0LL;
  v35 = 0LL;
  v13 = (((*(_DWORD *)(BugCheckParameter2 + 32) + *(_DWORD *)(BugCheckParameter2 + 44)) & 0xFFF)
       + (unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 40)
       + 4095) >> 12;
  v37 = v13;
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
  {
    MiLogMdlRangeEvent(a4, BugCheckParameter2 + 48, 633, v13, 1LL);
    v13 = v37;
  }
  v14 = 1;
  CurrentIrql = KeGetCurrentIrql();
  v15 = 0LL;
  while ( v13 )
  {
    if ( *v11 > qword_140E2DD20 || ((*(_QWORD *)(48 * *v11 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
      KeBugCheckEx(0x1Au, 0x1237uLL, BugCheckParameter2, (ULONG_PTR)v11, *v11);
    v16 = 48 * *v11 - 0x220000000000LL;
    if ( (*(_QWORD *)(v16 + 40) & 0xFFFFFFFFFFLL) != 0x3FFFFFFFFELL )
      KeBugCheckEx(0x1Au, 0x1236uLL, BugCheckParameter2, (ULONG_PTR)v11, *v11);
    v36 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v16 + 40) >> 43) & 0x3FFLL));
    v19 = MiPageToNode(*v11);
    if ( ((*(_QWORD *)(v16 + 40) >> 60) & 7) == 3 )
    {
      if ( CurrentIrql == 2 )
      {
        v30 = 17;
        v28 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v28 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v18, v17, v20, v21) )
            {
              HvlNotifyLongSpinWait(v28);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v16 + 24) < 0 );
        }
        v12 = v35;
      }
      else
      {
        v30 = MiLockPageInline(v16);
      }
      MiSetPfnIdentity(v16, 0);
      LOBYTE(v27) = v30;
      MiUnlockPage(v16, v27);
      _InterlockedDecrement64(&qword_140E2DD28);
    }
    if ( v15 )
    {
      v22 = v14 & 0xFFFFFFFD;
      v14 = v14 & 0xFFFFFFFD | 2;
      if ( v34 == v36 )
        v14 = v22;
      if ( (v14 & 2) != 0
        || (unsigned int)MiIsPfnEnclave(v16, v17, v20, v21)
        || (unsigned __int8)BYTE2(*(_DWORD *)(v16 + 32)) >> 6 != v31
        || v19 != v9 )
      {
        goto LABEL_33;
      }
      v23 = *(v11 - 1);
      if ( *v11 == v23 + 1 )
      {
        if ( v15 == 1 || (v14 & 1) != 0 )
        {
          v14 |= 1u;
LABEL_27:
          ++v15;
          goto LABEL_28;
        }
LABEL_48:
        v24 = *(v11 - 1);
LABEL_35:
        MiFreeMdlPageRun(v24, v15, v33, a3, (__int64)v39);
        v12 += v15;
        v35 = v12;
        if ( (v14 & 2) != 0 )
        {
          MiZeroAndReleasePages((__int64)v39, v33, a3);
          if ( (a3 & 2) == 0 && (v14 & 4) == 0 )
            _InterlockedAdd64((volatile signed __int64 *)(v34 + 19648), -v12);
          v12 = 0LL;
          v35 = 0LL;
          v34 = v36;
        }
        v15 = 1LL;
        v31 = (unsigned __int8)BYTE2(*(_DWORD *)(v16 + 32)) >> 6;
        goto LABEL_31;
      }
      if ( *v11 == v23 - 1 )
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
      v24 = v11[-v15];
      goto LABEL_35;
    }
    v15 = 1LL;
    v34 = v36;
    v31 = (unsigned __int8)BYTE2(*(_DWORD *)(v16 + 32)) >> 6;
    v14 ^= ((unsigned __int8)v14 ^ (unsigned __int8)(4 * MiIsPfnEnclave(v16, v17, v20, v31))) & 4;
LABEL_31:
    v9 = v19;
LABEL_28:
    v13 = --v37;
    ++v11;
  }
  if ( (v14 & 1) != 0 )
    v25 = v11[-v15];
  else
    v25 = *(v11 - 1);
  MiFreeMdlPageRun(v25, v15, v33, a3, (__int64)v39);
  MiZeroAndReleasePages((__int64)v39, v33, a3);
  LOBYTE(v26) = (v14 & 4) == 0;
  if ( (((a3 & 2) == 0) & (unsigned __int8)v26) != 0 )
  {
    v26 = -(__int64)(v12 + v15);
    _InterlockedAdd64((volatile signed __int64 *)(v34 + 19648), v26);
  }
  *(_WORD *)(BugCheckParameter2 + 10) &= ~2u;
  return v26;
}
