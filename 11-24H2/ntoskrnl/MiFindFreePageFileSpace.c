/*
 * XREFs of MiFindFreePageFileSpace @ 0x140367D88
 * Callers:
 *     MiTrimUnusedPageFileRegionsApc @ 0x140366180 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiGetKernelStackSwapSupport @ 0x1403679DC (MiGetKernelStackSwapSupport.c)
 *     MiFindPageFileWriteCluster @ 0x140367BDC (MiFindPageFileWriteCluster.c)
 *     MiReservePageFileSpace @ 0x140368314 (MiReservePageFileSpace.c)
 *     MiGatherPagefilePages @ 0x14039C8C8 (MiGatherPagefilePages.c)
 *     MiReserveWorkingSetSwapSpaceRuns @ 0x140A6C718 (MiReserveWorkingSetSwapSpaceRuns.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140210120 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleaseSpinLockShared @ 0x140244830 (MiReleaseSpinLockShared.c)
 *     RtlSetBits @ 0x14024BCC0 (RtlSetBits.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockShared @ 0x14031A1A0 (ExAcquireSpinLockShared.c)
 *     MiPageFileLargestBitmapsRun @ 0x1403664F0 (MiPageFileLargestBitmapsRun.c)
 *     MiRescanPagefileBitmaps @ 0x14036660C (MiRescanPagefileBitmaps.c)
 *     MiFindFreePageFileSpaceForward @ 0x1403666C4 (MiFindFreePageFileSpaceForward.c)
 *     RtlLengthCurrentClearRunForward @ 0x140366E90 (RtlLengthCurrentClearRunForward.c)
 *     MiSetPageFileAllocationBits @ 0x140367504 (MiSetPageFileAllocationBits.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x140367598 (MiInvalidatePageFileBitmapsCache.c)
 *     MiTransferSoftwarePte @ 0x14039F300 (MiTransferSoftwarePte.c)
 */

__int64 __fastcall MiFindFreePageFileSpace(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3, char a4)
{
  char v4; // r13
  unsigned __int64 v5; // r14
  unsigned __int64 v8; // rbx
  __int64 v9; // rsi
  unsigned int v10; // r15d
  unsigned int v11; // r14d
  __int64 *v12; // r12
  __int64 i; // r15
  __int64 v14; // rdi
  __int16 v15; // dx
  _BYTE *v16; // rcx
  unsigned __int64 v17; // rbx
  int v18; // eax
  volatile LONG *v19; // rcx
  int v20; // edx
  unsigned __int64 v21; // r15
  unsigned __int8 v22; // r12
  __int64 v23; // rcx
  unsigned int v24; // eax
  ULONG v25; // edi
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  unsigned int v30; // r14d
  unsigned __int8 CurrentIrql; // dl
  volatile signed __int32 *v32; // rcx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rcx
  unsigned int v35; // eax
  volatile signed __int32 *v36; // rcx
  KIRQL v37; // al
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rax
  ULONG FreePageFileSpaceForward; // eax
  unsigned int v42; // eax
  int v43; // [rsp+30h] [rbp-40h]
  unsigned __int64 v45; // [rsp+C0h] [rbp+50h] BYREF

  v45 = a3;
  v4 = a4;
  v5 = a3;
  if ( a3 >= 0xFFFFFFFF )
    return 0LL;
  LODWORD(v8) = -1;
  if ( (a4 & 0x10) == 0 )
  {
    v9 = *(_QWORD *)(a1 + 8LL * ((unsigned __int16)MI_READ_PTE_LOCK_FREE((unsigned __int64)a2) >> 12) + 18528);
    if ( (v4 & 0x65) == 1 && (unsigned int)MiPageFileLargestBitmapsRun(v9) < v5 )
    {
      v4 |= 0x10u;
    }
    else
    {
      v17 = *a2;
      if ( qword_140E2DB80 && (v17 & 0x10) == 0 )
        v17 &= ~qword_140E2DB80;
      v8 = HIDWORD(v17);
    }
    if ( (v4 & 0x10) == 0 )
      goto LABEL_18;
  }
  v9 = *(_QWORD *)(a1 + 18528);
  v10 = *(_DWORD *)(a1 + 18520);
  if ( (*(_BYTE *)(v9 + 172) & 0x40) != 0 )
    v11 = 0;
  else
    v11 = MiPageFileLargestBitmapsRun(*(_QWORD *)(a1 + 18528));
  if ( v10 > 1 )
  {
    v12 = (__int64 *)(a1 + 18536);
    for ( i = v10 - 1; i; --i )
    {
      v14 = *v12;
      v15 = *(_WORD *)(v9 + 172);
      v16 = (_BYTE *)(*v12 + 172);
      if ( (v15 & 0x10) != 0 && (*v16 & 0x10) == 0 || (v15 & 0x20) != 0 && (*v16 & 0x20) == 0 )
      {
        v9 = *v12;
        v42 = MiPageFileLargestBitmapsRun(*v12);
      }
      else
      {
        if ( (*v16 & 0x30) != 0 )
          goto LABEL_10;
        v42 = MiPageFileLargestBitmapsRun(*v12);
        if ( v42 <= v11 )
          goto LABEL_10;
        v9 = v14;
      }
      v11 = v42;
LABEL_10:
      ++v12;
    }
  }
  v5 = v45;
LABEL_18:
  v18 = 0;
  v19 = (volatile LONG *)(v9 + 200);
  v20 = v4 & 4;
  LODWORD(v45) = v20;
  while ( 1 )
  {
    v21 = 0LL;
    v43 = 0;
    if ( v20 )
    {
      v22 = 17;
      goto LABEL_21;
    }
    CurrentIrql = KeGetCurrentIrql();
    if ( (v4 & 3) != 0 || v18 )
    {
      if ( CurrentIrql == 2 )
      {
        v22 = 17;
        ExAcquireSpinLockExclusiveAtDpcLevel(v19);
        goto LABEL_21;
      }
      v37 = ExAcquireSpinLockExclusive(v19);
    }
    else
    {
      v43 = 1;
      if ( CurrentIrql == 2 )
      {
        v22 = 17;
        ExAcquireSpinLockSharedAtDpcLevel(v19);
        goto LABEL_21;
      }
      v37 = ExAcquireSpinLockShared(v19);
    }
    v22 = v37;
LABEL_21:
    if ( (*(_BYTE *)(v9 + 175) & 1) != 0 )
      goto LABEL_54;
    if ( (_DWORD)v8 != -1 )
    {
      v23 = *(_QWORD *)(v9 + 80);
      if ( (unsigned int)v8 >= *(_DWORD *)(v23 + 24) )
      {
        if ( (v4 & 0x48) != 0 )
          goto LABEL_54;
      }
      else
      {
        if ( _bittest64(*(const signed __int64 **)(v23 + 32), (unsigned int)v8)
          || _bittest64(*(const signed __int64 **)(v23 + 16), (unsigned int)v8)
          || (v24 = RtlLengthCurrentClearRunForward((int *)(v23 + 24), v8, v5), v24 != (_DWORD)v5) && (v4 & 0x40) == 0
          || (v25 = RtlLengthCurrentClearRunForward((int *)(*(_QWORD *)(v9 + 80) + 8LL), v8, v24), v25 != (_DWORD)v5)
          && (v4 & 0x40) == 0 )
        {
          v25 = 0;
        }
        if ( v25 == v5 || (v4 & 0x40) != 0 )
        {
          LODWORD(v45) = v8;
          goto LABEL_57;
        }
      }
    }
    if ( (v4 & 8) != 0 )
    {
      LODWORD(v45) = v8;
      FreePageFileSpaceForward = MiFindFreePageFileSpaceForward(v9, &v45, v5, v4);
      LODWORD(v8) = v45;
      v25 = FreePageFileSpaceForward;
      goto LABEL_57;
    }
LABEL_35:
    v26 = *(_QWORD *)(v9 + 112);
    if ( (*(_BYTE *)(v9 + 120) & 1) != 0 && v26 )
      v26 ^= v9 + 112;
    v21 = 0LL;
    while ( 1 )
    {
      if ( !v26 )
        goto LABEL_48;
      if ( (unsigned int)v5 >= *(_DWORD *)(v26 + 52) )
      {
        if ( (unsigned int)v5 > *(_DWORD *)(v26 + 52) )
        {
          v27 = *(_QWORD *)(v26 + 8);
          goto LABEL_41;
        }
        if ( !*(_DWORD *)(v26 + 48) )
          break;
      }
      v27 = *(_QWORD *)v26;
      v21 = v26;
LABEL_41:
      if ( (*(_BYTE *)(v9 + 120) & 1) != 0 && v27 )
        v26 ^= v27;
      else
        v26 = v27;
    }
    v38 = *(_QWORD *)v26;
    v21 = v26;
    if ( (*(_BYTE *)(v9 + 120) & 1) != 0 && v38 )
      v38 ^= v26;
    v39 = 0LL;
    if ( v38 )
    {
      while ( 1 )
      {
        if ( (unsigned int)v5 < *(_DWORD *)(v38 + 52) )
          goto LABEL_104;
        if ( (unsigned int)v5 <= *(_DWORD *)(v38 + 52) )
          break;
        v40 = *(_QWORD *)(v38 + 8);
LABEL_105:
        if ( (*(_BYTE *)(v9 + 120) & 1) != 0 && v40 )
          v38 ^= v40;
        else
          v38 = v40;
        if ( !v38 )
        {
          if ( v39 )
            v21 = v39;
          goto LABEL_48;
        }
      }
      if ( !*(_DWORD *)(v38 + 48) )
        v39 = v38;
LABEL_104:
      v40 = *(_QWORD *)v38;
      goto LABEL_105;
    }
LABEL_48:
    if ( *(_DWORD *)(v21 + 52) != -1 )
      goto LABEL_70;
    v28 = *(unsigned int *)(v9 + 108);
    if ( v28 < v5 || (unsigned int)v28 < 0x20 )
      break;
LABEL_51:
    if ( !v43 )
    {
      MiRescanPagefileBitmaps(v9);
      goto LABEL_35;
    }
    MiReleaseSpinLockShared((volatile signed __int32 *)(v9 + 200), v22);
    v20 = v45;
    v18 = 1;
    v19 = (volatile LONG *)(v9 + 200);
  }
  if ( v4 < 0 )
    goto LABEL_54;
  v33 = *(_QWORD *)v21;
  v34 = v21;
  if ( *(_QWORD *)v21 )
  {
    while ( 1 )
    {
      v21 = v33;
      if ( !*(_QWORD *)(v33 + 8) )
        break;
      v33 = *(_QWORD *)(v33 + 8);
    }
  }
  else
  {
    while ( 1 )
    {
      v21 = *(_QWORD *)(v21 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v21 || *(_QWORD *)(v21 + 8) == v34 )
        break;
      v34 = v21;
    }
  }
  v35 = *(_DWORD *)(v9 + 108);
  if ( !v21 )
  {
    if ( v35 < 0x20 )
      goto LABEL_54;
    goto LABEL_51;
  }
  if ( v35 >= 0x20 && v35 > *(_DWORD *)(v21 + 52) )
    goto LABEL_51;
  LODWORD(v5) = *(_DWORD *)(v21 + 52);
LABEL_70:
  LODWORD(v8) = *(_DWORD *)(v21 + 48);
  v25 = v5;
  LODWORD(v45) = v8;
LABEL_57:
  if ( !v25 )
  {
LABEL_54:
    if ( (v4 & 4) == 0 )
    {
      v36 = (volatile signed __int32 *)(v9 + 200);
      if ( v43 )
        MiReleaseSpinLockShared(v36, v22);
      else
        MiReleaseSpinLockExclusive(v36, v22);
    }
    return 0LL;
  }
  v30 = 0;
  if ( (v4 & 1) != 0 )
  {
    v30 = 2;
    RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(v9 + 80) + 24LL), v8, v25);
    LODWORD(v8) = v45;
    *(_DWORD *)(v9 + 20) -= v25;
  }
  if ( (v4 & 2) != 0 )
  {
    v30 |= 1u;
    MiSetPageFileAllocationBits(v9, v8, v25);
  }
  if ( v30 )
    MiInvalidatePageFileBitmapsCache(v9, v8, v25, v21);
  if ( (v4 & 4) == 0 )
  {
    v32 = (volatile signed __int32 *)(v9 + 200);
    if ( v43 )
      MiReleaseSpinLockShared(v32, v22);
    else
      MiReleaseSpinLockExclusive(v32, v22);
  }
  *a2 = MiTransferSoftwarePte(*a2, v9, (unsigned int)v8, v30);
  return v25;
}
