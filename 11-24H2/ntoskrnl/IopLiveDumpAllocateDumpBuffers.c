/*
 * XREFs of IopLiveDumpAllocateDumpBuffers @ 0x1404952D4
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x140595270 (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14029293C (IopLiveDumpDiscardVirtualAddressRange.c)
 *     IopLiveDumpIsUnderMemoryPressure @ 0x1404956A4 (IopLiveDumpIsUnderMemoryPressure.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x140495C54 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpTraceEstimatedAndAllocatedPageCount @ 0x140495EA4 (IopLiveDumpTraceEstimatedAndAllocatedPageCount.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x140495FD4 (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpAllocateFromIOSpace @ 0x140595CAC (IopLiveDumpAllocateFromIOSpace.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x140596198 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     IopLiveDumpTraceEstimatedPageCountNotAvailable @ 0x1405A00AC (IopLiveDumpTraceEstimatedPageCountNotAvailable.c)
 *     IopLiveDumpTraceEventGeneric @ 0x1405A0124 (IopLiveDumpTraceEventGeneric.c)
 *     MmAllocateIndependentPages @ 0x140A85350 (MmAllocateIndependentPages.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopLiveDumpAllocateDumpBuffers(__int64 a1)
{
  unsigned __int64 v1; // rdi
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // r13
  __int64 MillisecondCounter; // rax
  unsigned __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // r8
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r11
  unsigned __int64 v14; // rax
  int v15; // edx
  unsigned __int64 v16; // r11
  ULONG_PTR v17; // rsi
  __int64 Pool2; // rax
  __int64 v19; // rax
  int v20; // r15d
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rsi
  char *IndependentPages; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // r8
  __int64 v26; // rcx
  bool v27; // zf
  unsigned int v28; // esi
  __int64 v29; // rax
  int v30; // edx
  char v31; // r10
  char v32; // cl
  unsigned __int64 v34; // rax
  char *v35; // rax
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // r13
  char *v39; // r9
  __int64 v40; // rdx
  unsigned __int64 v41; // r8
  __int64 v42; // rcx
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  int v45; // r15d
  __int64 v46; // r14
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // r8
  __int64 v49; // rcx
  __int64 v50; // rax
  char *v51; // rdx
  char *v52; // rax
  unsigned __int64 v53; // r8
  __int64 v54; // rcx
  char v55; // [rsp+30h] [rbp-49h]
  unsigned __int64 v56; // [rsp+38h] [rbp-41h]
  char v57; // [rsp+40h] [rbp-39h]
  int v58; // [rsp+48h] [rbp-31h]
  unsigned __int64 v59; // [rsp+50h] [rbp-29h]
  int v60; // [rsp+58h] [rbp-21h]
  __int64 v61; // [rsp+60h] [rbp-19h]
  _QWORD v62[2]; // [rsp+68h] [rbp-11h] BYREF
  _QWORD v63[11]; // [rsp+78h] [rbp-1h] BYREF
  unsigned __int64 v64; // [rsp+E0h] [rbp+67h]
  unsigned __int64 v65; // [rsp+E0h] [rbp+67h]
  int v66; // [rsp+E8h] [rbp+6Fh]
  unsigned __int64 v67; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v68; // [rsp+F8h] [rbp+7Fh] BYREF

  v1 = 0LL;
  v58 = 0;
  v3 = 0LL;
  v66 = 0;
  v57 = 0;
  v4 = 0LL;
  v55 = 0;
  v5 = 0LL;
  MillisecondCounter = IopLiveDumpGetMillisecondCounter(0LL);
  v7 = (unsigned int)BufferChunkSizeInPages;
  v61 = MillisecondCounter;
  *(_QWORD *)(a1 + 712) = 0LL;
  *(_QWORD *)(a1 + 744) = 0LL;
  *(_QWORD *)(a1 + 680) = 0LL;
  v8 = ~(v7 - 1);
  v9 = *(_QWORD *)(a1 + 120);
  v10 = v8 & (v7 + *(_QWORD *)(a1 + 96) - 1LL);
  v11 = v8 & (v7 + *(_QWORD *)(a1 + 104) - 1LL);
  *(_QWORD *)(a1 + 96) = v10;
  *(_QWORD *)(a1 + 104) = v11;
  v12 = v8 & (v7 + v9 - 1);
  *(_QWORD *)(a1 + 120) = v12;
  v13 = v10 / v7;
  v64 = v10 / v7;
  v59 = v10 / v7;
  v14 = v8 & (v7 + *(_QWORD *)(a1 + 128) - 1LL);
  *(_QWORD *)(a1 + 128) = v14;
  v15 = *(_DWORD *)(a1 + 80);
  v16 = v12 / v7 + v14 / v7 + v13;
  v56 = v12 / v7 + v14 / v7;
  v60 = v16;
  if ( (v15 & 0x200) != 0 )
  {
    v34 = (*(_QWORD *)(a1 + 1144) >> 12) + ((*(_QWORD *)(a1 + 1144) & 0xFFFLL) != 0);
    if ( v16 * v7 > v34 )
    {
      *(_DWORD *)(a1 + 80) = v15 | 0x400;
      v16 = (v8 & v34) / v7;
      v60 = v16;
    }
  }
  v17 = (8 * v16 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  Pool2 = ExAllocatePool2(0x40uLL, v17, 0x706D644Cu);
  *(_QWORD *)(a1 + 752) = Pool2;
  if ( !Pool2 )
    goto LABEL_27;
  if ( (*(_DWORD *)(a1 + 80) & 0x40000) != 0 )
  {
    v35 = (char *)ExAllocatePool2(0x40uLL, v17, 0x706D644Cu);
    *(_QWORD *)(a1 + 880) = v35;
    if ( v35 )
    {
      IopLiveDumpDiscardVirtualAddressRange(a1, v35, v17);
    }
    else
    {
      v62[0] = 6880LL;
      v63[0] = L"LineNum";
      v62[1] = -1073741801LL;
      v63[1] = L"NTStatus";
      IopLiveDumpTraceEventGeneric(
        L"ChunkCRCList allocation failed, IoSpaceCorruptionDetection is disabled!",
        2LL,
        v63,
        v62);
    }
  }
  v19 = ExAllocatePool2(0x40uLL, v17, 0x706D644Cu);
  *(_QWORD *)(a1 + 760) = v19;
  if ( !v19 )
    goto LABEL_27;
  IopLiveDumpDiscardVirtualAddressRange(a1, *(char **)(a1 + 752), v17);
  IopLiveDumpDiscardVirtualAddressRange(a1, *(char **)(a1 + 760), v17);
  v67 = 0LL;
  v20 = 1;
LABEL_6:
  v21 = v64;
  while ( v3 < v21 )
  {
    v68 = 0LL;
    v22 = v3;
    switch ( v20 )
    {
      case 1:
        if ( (*(_DWORD *)(a1 + 80) & 0x800) != 0 )
        {
          IopLiveDumpAllocateFromIOSpace(a1, *(_QWORD *)(a1 + 1104), v59 - v3, &v67);
          v3 = v67;
          if ( v67 != v22 )
          {
            v58 += v67 - v22;
            v4 += (unsigned int)BufferChunkSizeInPages * (v67 - v22);
          }
        }
        v20 = 2;
        goto LABEL_6;
      case 2:
        if ( (*(_DWORD *)(a1 + 80) & 4) != 0
          || (v39 = (char *)IopLiveDumpAllocateFromVMMemoryPartition(a1, BufferChunkSizeInBytes, &v68)) == 0LL )
        {
          v20 = 3;
        }
        else
        {
          v40 = (unsigned int)BufferChunkSizeInPages;
          ++v66;
          v4 += (unsigned int)BufferChunkSizeInPages;
          v41 = BufferChunkSizeInBytes;
          *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8 * v3) = v39;
          v42 = *(_QWORD *)(a1 + 760);
          *(_QWORD *)(a1 + 680) += v40;
          v43 = v68;
          ++*(_QWORD *)(a1 + 744);
          *(_QWORD *)(v42 + 8 * v3++) = v43;
          v67 = v3;
          IopLiveDumpDiscardVirtualAddressRange(a1, v39, v41);
        }
        goto LABEL_6;
      case 3:
        if ( (*(_DWORD *)(a1 + 80) & 0x800) != 0 )
        {
          IopLiveDumpAllocateFromIOSpace(a1, 0LL, v59 - v3, &v67);
          v3 = v67;
          if ( v67 != v22 )
          {
            v57 += v67 - v22;
            v4 += (unsigned int)BufferChunkSizeInPages * (v67 - v22);
          }
        }
        v20 = 4;
        goto LABEL_6;
    }
    IndependentPages = (char *)MmAllocateIndependentPages(BufferChunkSizeInBytes, 0xFFFFFFFFLL);
    if ( !IndependentPages )
      break;
    v24 = (unsigned int)BufferChunkSizeInPages;
    v25 = BufferChunkSizeInBytes;
    v4 += (unsigned int)BufferChunkSizeInPages;
    ++v55;
    *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8 * v3) = IndependentPages;
    v26 = *(_QWORD *)(a1 + 760);
    *(_QWORD *)(a1 + 680) += v24;
    ++*(_QWORD *)(a1 + 744);
    *(_QWORD *)(v26 + 8 * v3++) = 0LL;
    v67 = v3;
    IopLiveDumpDiscardVirtualAddressRange(a1, IndependentPages, v25);
    v27 = (unsigned __int8)IopLiveDumpIsUnderMemoryPressure(a1) == 0;
    v21 = v64;
    if ( !v27 )
    {
LABEL_13:
      *(_DWORD *)(a1 + 80) |= 0x1000u;
      v28 = -1073741248;
      LODWORD(v3) = v66;
LABEL_14:
      IopLiveDumpFreeDumpBuffers(a1);
      *(_QWORD *)(a1 + 680) = 0LL;
      goto LABEL_15;
    }
  }
  v36 = *(_QWORD *)(a1 + 680);
  if ( v36 < *(_QWORD *)(a1 + 104) )
  {
    LODWORD(v3) = v66;
LABEL_27:
    v28 = -1073741670;
    goto LABEL_14;
  }
  v28 = 0;
  if ( v36 < *(_QWORD *)(a1 + 96) )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 560) + 4176LL) |= 0x8000u;
    IopLiveDumpTraceEstimatedPageCountNotAvailable(*(_QWORD *)(a1 + 680), *(_QWORD *)(a1 + 96), *(_QWORD *)(a1 + 104));
  }
  v44 = 0LL;
  *(_QWORD *)(a1 + 216) = v3;
  v65 = 0LL;
  v45 = 2;
  v46 = 8 * v3;
LABEL_48:
  v47 = v56;
  while ( v44 < v47 )
  {
    v68 = 0LL;
    if ( v45 == 2 )
    {
      if ( (*(_DWORD *)(a1 + 80) & 4) != 0 )
      {
        v45 = 4;
        goto LABEL_55;
      }
      v51 = (char *)IopLiveDumpAllocateFromVMMemoryPartition(a1, BufferChunkSizeInBytes, &v68);
      if ( !v51 )
      {
        v45 = 4;
        v44 = v65;
        goto LABEL_48;
      }
      ++v66;
      v48 = BufferChunkSizeInBytes;
      *(_QWORD *)(v46 + *(_QWORD *)(a1 + 752)) = v51;
      v49 = *(_QWORD *)(a1 + 760);
      *(_QWORD *)(a1 + 680) += (unsigned int)BufferChunkSizeInPages;
      v50 = v68;
      ++*(_QWORD *)(a1 + 744);
      *(_QWORD *)(v46 + v49) = v50;
      v46 += 8LL;
      IopLiveDumpDiscardVirtualAddressRange(a1, v51, v48);
    }
    else
    {
      v52 = (char *)MmAllocateIndependentPages(BufferChunkSizeInBytes, 0xFFFFFFFFLL);
      if ( !v52 )
        break;
      v53 = BufferChunkSizeInBytes;
      ++v55;
      *(_QWORD *)(v46 + *(_QWORD *)(a1 + 752)) = v52;
      *(_QWORD *)(a1 + 680) += (unsigned int)BufferChunkSizeInPages;
      v54 = *(_QWORD *)(a1 + 760);
      ++*(_QWORD *)(a1 + 744);
      *(_QWORD *)(v46 + v54) = 0LL;
      v46 += 8LL;
      IopLiveDumpDiscardVirtualAddressRange(a1, v52, v53);
      if ( (unsigned __int8)IopLiveDumpIsUnderMemoryPressure(a1) )
        goto LABEL_13;
    }
    v47 = v56;
    ++v65;
    v5 += (unsigned int)BufferChunkSizeInPages;
LABEL_55:
    v44 = v65;
  }
  LODWORD(v3) = v66;
LABEL_15:
  if ( v4 < *(_QWORD *)(a1 + 104) )
    v4 = 0LL;
  *(_QWORD *)(a1 + 688) = v4;
  if ( v5 )
  {
    v37 = v5;
    if ( v5 > *(_QWORD *)(a1 + 120) )
      v37 = *(_QWORD *)(a1 + 120);
    *(_QWORD *)(a1 + 696) = v37;
    v38 = v5 - v37;
    if ( v38 )
    {
      v1 = *(_QWORD *)(a1 + 128);
      if ( v38 <= v1 )
        v1 = v38;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 696) = 0LL;
  }
  *(_QWORD *)(a1 + 704) = v1;
  v29 = IopLiveDumpGetMillisecondCounter(0LL);
  v30 = BufferChunkSizeInPages;
  v31 = v55 * BufferChunkSizeInPages;
  v32 = BufferChunkSizeInPages;
  *(_QWORD *)(a1 + 768) = v29 - v61;
  IopLiveDumpTraceEstimatedAndAllocatedPageCount(a1, v60 * v30, v58 * v30, v3 * v30, v57 * v32, v31);
  return v28;
}
