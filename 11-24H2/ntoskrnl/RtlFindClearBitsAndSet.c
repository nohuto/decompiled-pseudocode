/*
 * XREFs of RtlFindClearBitsAndSet @ 0x14027BEE0
 * Callers:
 *     HalpDmaAllocateMapRegisters @ 0x14038829C (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolV2 @ 0x14038AD70 (HalpDmaAllocateContiguousPagesFromContiguousPoolV2.c)
 *     BgpFwReserveAllocate @ 0x14045ED90 (BgpFwReserveAllocate.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV3 @ 0x1404D2668 (HalpDmaAllocateScatterPagesFromContiguousPoolV3.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV3 @ 0x140539A60 (HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV3.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolV3 @ 0x140539AF8 (HalpDmaAllocateContiguousPagesFromContiguousPoolV3.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3 @ 0x140539C14 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3.c)
 *     HalpIommuGetDomainId @ 0x14054FCE4 (HalpIommuGetDomainId.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV2 @ 0x1405502E4 (HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV2.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2 @ 0x140550370 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2.c)
 *     MiReserveFaultPte @ 0x140679910 (MiReserveFaultPte.c)
 *     MiZeroHugeRangeWorker @ 0x1406871C0 (MiZeroHugeRangeWorker.c)
 *     MiCreateSlabIdentity @ 0x140687B34 (MiCreateSlabIdentity.c)
 *     RtlHotPatchSynchronizationRequired @ 0x1406A44F8 (RtlHotPatchSynchronizationRequired.c)
 *     HalpIrtAllocateIndex @ 0x1406FEE94 (HalpIrtAllocateIndex.c)
 *     TtmiCreateTerminal @ 0x14076F708 (TtmiCreateTerminal.c)
 *     PspGetNewSessionId @ 0x14077BADC (PspGetNewSessionId.c)
 *     PspStorageAllocSlot @ 0x14077C298 (PspStorageAllocSlot.c)
 *     MiAllocatePartitionId @ 0x1407EC980 (MiAllocatePartitionId.c)
 *     PspSchedulerSharedDataRegionSlotAllocate @ 0x1408EAED0 (PspSchedulerSharedDataRegionSlotAllocate.c)
 *     SepAddLuidToIndexEntry @ 0x140A270DC (SepAddLuidToIndexEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x140A42C4C (SepGetLowBoxNumberEntry.c)
 *     RtlApplyHotPatch @ 0x140B65BA0 (RtlApplyHotPatch.c)
 *     ViAllocateFromContiguousMemory @ 0x140B89E10 (ViAllocateFromContiguousMemory.c)
 *     MiAssignHalEntropy @ 0x140C5679C (MiAssignHalEntropy.c)
 *     MiAssignSystemVa @ 0x140C568C8 (MiAssignSystemVa.c)
 * Callees:
 *     RtlSetBits @ 0x14027C2D0 (RtlSetBits.c)
 */

ULONG __stdcall RtlFindClearBitsAndSet(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  unsigned int SizeOfBitMap; // r13d
  unsigned int *Buffer; // rdi
  ULONG v7; // ebx
  unsigned int v8; // r9d
  __int64 v9; // rcx
  ULONG v10; // eax
  int v11; // r15d
  ULONG v12; // edx
  unsigned int v13; // r10d
  char *v14; // r14
  char v15; // cl
  ULONG v16; // ebp
  unsigned __int64 v17; // rsi
  unsigned __int64 *v18; // rdx
  __int64 v19; // r8
  unsigned __int64 v20; // rax
  ULONG v21; // ebx
  bool v22; // cc
  bool v24; // zf
  __int64 v25; // rax
  int v26; // r8d
  ULONG v27; // r9d
  int v28; // ebx
  unsigned __int64 *v29; // rdi
  __int64 v30; // rax
  ULONG v31; // r10d
  unsigned __int64 v32; // r9
  __int64 v33; // rbx
  unsigned __int64 v34; // r9
  __int64 v35; // rax
  int v36; // ecx
  char v37; // r8
  unsigned __int64 *v38; // rcx
  unsigned __int64 *v39; // rax
  __int64 v40; // r8
  unsigned int v41; // ecx
  __int64 v42; // rax
  unsigned int v43; // r8d
  __int64 v44; // rcx
  __int64 v45; // rax
  unsigned int *v46; // [rsp+20h] [rbp-58h]
  ULONG v47; // [rsp+88h] [rbp+10h]
  ULONG v48; // [rsp+90h] [rbp+18h]
  __int64 v49; // [rsp+98h] [rbp+20h]

  v48 = HintIndex;
  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  Buffer = BitMapHeader->Buffer;
  v46 = Buffer;
  v7 = HintIndex < BitMapHeader->SizeOfBitMap ? HintIndex : 0;
  v8 = BitMapHeader->SizeOfBitMap - 1;
  if ( NumberToFind )
  {
    v9 = (unsigned __int8)Buffer & 4;
    v49 = v9;
    v10 = v7;
    v11 = v9 != 0 ? 0x20 : 0;
    while ( 1 )
    {
      v12 = v11 + v10;
      v47 = v10;
      v13 = v11 + v8;
      v14 = (char *)Buffer - (v9 != 0 ? 4 : 0);
      if ( v8 - v10 + 1 >= NumberToFind )
        break;
      v21 = -1;
LABEL_22:
      if ( !v47 )
        goto LABEL_14;
      v9 = v49;
      v27 = NumberToFind + HintIndex;
      Buffer = v46;
      if ( NumberToFind + HintIndex > SizeOfBitMap )
        v27 = SizeOfBitMap;
      v8 = v27 - 1;
      v10 = 0;
    }
    v15 = v12 & 0x3F;
    v16 = v13 - NumberToFind + 1;
    v17 = (unsigned __int64)&v14[8 * ((unsigned __int64)v16 >> 6)];
    v18 = (unsigned __int64 *)&v14[8 * ((unsigned __int64)v12 >> 6)];
    v19 = *v18 | ((1LL << v15) - 1);
    if ( NumberToFind > 0x7F )
    {
      v34 = v17 + 8;
      if ( (v16 & 0x3F) == 0 )
        v34 = (unsigned __int64)&v14[8 * ((unsigned __int64)(v13 - NumberToFind + 1) >> 6)];
      if ( !v19 )
      {
        v36 = 0;
        goto LABEL_49;
      }
      if ( *++v18 )
        goto LABEL_53;
      v24 = !_BitScanReverse64((unsigned __int64 *)&v35, v19);
      if ( !v24 )
      {
        v36 = 63 - v35;
        goto LABEL_49;
      }
LABEL_73:
      v36 = 64;
LABEL_49:
      while ( 1 )
      {
        v21 = ((unsigned int)(((char *)v18 - v14) >> 3) << 6) - v36;
        if ( v21 > v16 )
          goto LABEL_20;
        v37 = NumberToFind - v36;
        v38 = &v18[(unsigned __int64)(NumberToFind - v36) >> 6];
        while ( ++v18 != v38 )
        {
          if ( *v18 )
            goto LABEL_53;
        }
        v43 = v37 & 0x3F;
        if ( !v43 )
          goto LABEL_12;
        v24 = !_BitScanForward64((unsigned __int64 *)&v44, *v18);
        if ( v24 )
          LODWORD(v44) = 64;
        if ( (unsigned int)v44 >= v43 )
          goto LABEL_12;
        do
        {
LABEL_53:
          v39 = v18;
          if ( (unsigned __int64)v18 > v34 )
            goto LABEL_20;
          ++v18;
        }
        while ( *v18 );
        v24 = !_BitScanReverse64((unsigned __int64 *)&v40, *v39);
        if ( v24 )
          goto LABEL_73;
        v36 = 63 - v40;
      }
    }
    if ( NumberToFind < 0x40 )
    {
      if ( NumberToFind > 1 )
      {
        v28 = 0;
        v29 = (unsigned __int64 *)&v14[8 * ((unsigned __int64)v13 >> 6)];
        while ( v19 != -1 )
        {
LABEL_28:
          v24 = !_BitScanForward64((unsigned __int64 *)&v30, v19);
          if ( v24 )
            LODWORD(v30) = 64;
          if ( v28 + (int)v30 >= NumberToFind )
          {
            LODWORD(v33) = -v28;
LABEL_35:
            v21 = ((unsigned int)(((char *)v18 - v14) >> 3) << 6) + v33;
            v22 = v21 <= v16;
            goto LABEL_11;
          }
          v31 = NumberToFind;
          v32 = ~v19;
          while ( 1 )
          {
            v32 &= v32 >> (v31 >> 1);
            if ( !v32 )
              break;
            v31 -= v31 >> 1;
            if ( v31 <= 1 )
            {
              _BitScanForward64((unsigned __int64 *)&v33, v32);
              goto LABEL_35;
            }
          }
          if ( v18 == v29 )
            goto LABEL_20;
          v24 = !_BitScanReverse64((unsigned __int64 *)&v45, v19);
          if ( v24 )
            v28 = 64;
          else
            v28 = 63 - v45;
          v19 = *++v18;
        }
        while ( (unsigned __int64)++v18 <= v17 )
        {
          v19 = *v18;
          if ( *v18 != -1LL )
          {
            v28 = 0;
            goto LABEL_28;
          }
        }
      }
      else
      {
        while ( v19 == -1 )
        {
          if ( (unsigned __int64)++v18 > v17 )
            goto LABEL_20;
          v19 = *v18;
        }
        _BitScanForward64(&v20, ~v19);
        v21 = v20 + ((unsigned int)(((char *)v18 - v14) >> 3) << 6);
        v22 = v21 <= v16;
LABEL_11:
        if ( v22 )
        {
LABEL_12:
          if ( v21 != -1 )
          {
            v21 -= v11;
            goto LABEL_14;
          }
          goto LABEL_21;
        }
      }
LABEL_20:
      v21 = -1;
LABEL_21:
      HintIndex = v48;
      goto LABEL_22;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v19 < 0 )
        {
          if ( (unsigned __int64)++v18 > v17 )
            goto LABEL_20;
          v19 = *v18;
        }
        v24 = !_BitScanReverse64((unsigned __int64 *)&v25, v19);
        if ( v24 )
          v26 = 64;
        else
          v26 = 63 - v25;
        v21 = (((unsigned int)(((char *)v18 - v14) >> 3) + 1) << 6) - v26;
        if ( v21 > v16 )
          goto LABEL_20;
        v41 = NumberToFind - v26;
        if ( NumberToFind == v26 )
          goto LABEL_12;
        v19 = *++v18;
        if ( v41 >= 0x40 )
          break;
LABEL_62:
        v24 = !_BitScanForward64((unsigned __int64 *)&v42, v19);
        if ( v24 )
          LODWORD(v42) = 64;
        if ( (unsigned int)v42 >= v41 )
          goto LABEL_12;
      }
      if ( !*v18 )
      {
        v41 -= 64;
        if ( !v41 )
          goto LABEL_12;
        v19 = *++v18;
        goto LABEL_62;
      }
    }
  }
  v21 = v7 & 0xFFFFFFF8;
LABEL_14:
  if ( v21 != -1 )
    RtlSetBits(BitMapHeader, v21, NumberToFind);
  return v21;
}
