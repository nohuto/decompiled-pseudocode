/*
 * XREFs of MiCopyDataPageToImagePage @ 0x1403142D8
 * Callers:
 *     MiResolveMappedFileFault @ 0x140239490 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiAllocateHyperSpace @ 0x14020CB70 (MiAllocateHyperSpace.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFinalizePageAttribute @ 0x14021F4F0 (MiFinalizePageAttribute.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14022E850 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiObtainProtoReference @ 0x14023BBE8 (MiObtainProtoReference.c)
 *     MiStartingOffset @ 0x140244020 (MiStartingOffset.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiAdvanceFaultList @ 0x1402E5FE0 (MiAdvanceFaultList.c)
 *     MiGetSessionIdForVa @ 0x1402ED220 (MiGetSessionIdForVa.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x1402F6DBC (MiTryLockProtoPoolPageAtDpc.c)
 *     MiTryLockLeafPage @ 0x14030245C (MiTryLockLeafPage.c)
 *     MiInitializeTransitionPfn @ 0x14031359C (MiInitializeTransitionPfn.c)
 *     MiMapSinglePage @ 0x140314164 (MiMapSinglePage.c)
 *     MiUnlockDataCopyPages @ 0x1403148D4 (MiUnlockDataCopyPages.c)
 *     MiStandbyPageContentsIntact @ 0x140314AD4 (MiStandbyPageContentsIntact.c)
 *     MiEndingOffset @ 0x140314E58 (MiEndingOffset.c)
 *     KeCopyPage @ 0x1406B3410 (KeCopyPage.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiCopyDataPageToImagePage(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        ULONG_PTR a6)
{
  __int64 v9; // r14
  unsigned __int64 v10; // rcx
  unsigned int SessionIdForVa; // eax
  int v12; // r12d
  unsigned __int64 v13; // rbx
  __int64 v14; // rsi
  volatile LONG *v15; // rdi
  unsigned int v17; // r8d
  unsigned __int64 v18; // rbx
  __int64 v19; // rsi
  unsigned int v20; // eax
  ULONG_PTR *v21; // r14
  char v22; // r9
  __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned __int64 HyperSpace; // rsi
  int v27; // ebx
  char *v28; // r14
  __int64 v29; // rdx
  __int64 v30; // rbx
  const void *v31; // rdx
  __int64 v32; // r15
  _QWORD *v33; // rsi
  unsigned int v34; // ebx
  unsigned int v36; // r11d
  unsigned __int64 v37; // rdx
  __int64 v38; // r8
  int v39; // r11d
  unsigned int v40; // r14d
  unsigned int v41; // [rsp+28h] [rbp-69h]
  unsigned int v42; // [rsp+2Ch] [rbp-65h]
  unsigned int v43; // [rsp+2Ch] [rbp-65h]
  __int64 v44; // [rsp+30h] [rbp-61h]
  unsigned __int64 v45; // [rsp+38h] [rbp-59h]
  unsigned __int64 v46; // [rsp+40h] [rbp-51h]
  ULONG_PTR v47; // [rsp+48h] [rbp-49h] BYREF
  __int64 v48; // [rsp+50h] [rbp-41h]
  unsigned __int64 v49; // [rsp+58h] [rbp-39h]
  __int64 v50; // [rsp+60h] [rbp-31h]
  _OWORD v51[3]; // [rsp+68h] [rbp-29h] BYREF
  char v52; // [rsp+98h] [rbp+7h] BYREF
  int v57; // [rsp+108h] [rbp+77h]
  int v58; // [rsp+108h] [rbp+77h]
  int v59; // [rsp+108h] [rbp+77h]

  memset(v51, 0, sizeof(v51));
  v50 = 48 * a5 - 0x220000000000LL;
  MiFinalizePageAttribute(v50, 1LL, 16LL);
  v9 = *a2;
  v10 = *(_QWORD *)(a1 + 224);
  v47 = 0LL;
  v44 = v9;
  SessionIdForVa = MiGetSessionIdForVa(v10);
  v45 = MiStartingOffset(a2, a3, SessionIdForVa);
  v12 = v45;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
  v13 = *(_QWORD *)(v9 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2CC00);
  v14 = **(_QWORD **)(v13 + 40);
  if ( !v14 || (v15 = (volatile LONG *)(v14 + 72), !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel()) )
  {
    v15 = &dword_140E2CC00;
LABEL_3:
    ExReleaseSpinLockExclusiveFromDpcLevel(v15);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
    MiUnlockDataCopyPages(v51);
    return 0LL;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2CC00);
  if ( !*(_QWORD *)(v14 + 32) || (*(_DWORD *)(v14 + 56) & 3) != 0 )
    goto LABEL_3;
  v49 = MiEndingOffset(a2);
  v18 = v45 >> 12;
  if ( (unsigned int)(v45 >> 12) != (unsigned int)((v49 - 1) >> 12) )
    v17 -= 2;
  v19 = v14 + 128;
  v42 = v17;
  while ( 1 )
  {
    v20 = *(_DWORD *)(v19 + 44);
    if ( (unsigned int)v18 < v20 )
      break;
    v19 = *(_QWORD *)(v19 + 16);
    LODWORD(v18) = v18 - v20;
    if ( !v19 )
      goto LABEL_3;
  }
  v21 = (ULONG_PTR *)v51;
  v41 = 2;
  v22 = 0;
  while ( 1 )
  {
    if ( !*(_DWORD *)(v19 + 104) )
      goto LABEL_44;
    v23 = *(_QWORD *)(v19 + 8);
    if ( !v23 )
      goto LABEL_44;
    v24 = v23 + 8LL * (unsigned int)v18;
    if ( !v24 )
      goto LABEL_44;
    v25 = (v24 >> 9) & 0x7FFFFFFFF8LL;
    v21[2] = v24;
    if ( v25 == ((a3 >> 9) & 0x7FFFFFFFF8LL) || v21 != (ULONG_PTR *)v51 && v25 == ((*(v21 - 1) >> 9) & 0x7FFFFFFFF8LL) )
    {
      MiTryLockLeafPage((unsigned __int64 *)v24, v22, v21);
    }
    else
    {
      if ( (int)MiTryLockProtoPoolPageAtDpc(v24, v25, (__int64 *)&v47, (__int64)v21) < 0 )
        goto LABEL_44;
      v21[1] = v47;
    }
    if ( !*v21 || (*(_DWORD *)(*v21 + 32) & 0x40000000) != 0 || !(unsigned int)MiStandbyPageContentsIntact() )
    {
LABEL_44:
      v9 = v44;
      goto LABEL_3;
    }
    if ( v21 != (ULONG_PTR *)v51 || (v45 & 0xFFF) == 0 )
      break;
    if ( v42 >= 2 )
    {
      v12 = v45;
      break;
    }
    v12 = v45;
    ++v41;
    LODWORD(v18) = v18 + 1;
    v21 += 3;
    v22 = 1;
    if ( (unsigned int)v18 >= *(_DWORD *)(v19 + 44) )
    {
      v19 = *(_QWORD *)(v19 + 16);
      LODWORD(v18) = 0;
      if ( !v19 )
        goto LABEL_44;
    }
  }
  v48 = v41;
  HyperSpace = MiAllocateHyperSpace(v41);
  v46 = HyperSpace + 4096;
  MiMapSinglePage(HyperSpace, a5, 0x40000000, 0);
  v27 = 1;
  v28 = (char *)v51;
  do
  {
    v29 = *(_QWORD *)v28;
    if ( !*(_QWORD *)v28 )
      break;
    if ( (HIWORD(*(_DWORD *)(v29 + 32)) & 0xC0) != 0x40 )
      v27 = -1;
    MiMapSinglePage(v46, 0xAAAAAAAAAAAAAAABuLL * ((v29 + 0x220000000000LL) >> 4), -1073741824, 0);
    v46 += 4096LL;
    v28 += 24;
  }
  while ( v28 != &v52 );
  v43 = v27;
  v30 = v48;
  v31 = (const void *)(HyperSpace + (v12 & 0xFFFu) + 4096);
  if ( v45 + 4096 > v49 )
  {
    v40 = (v49 - v12) & 0xFFF;
    memmove((void *)HyperSpace, v31, v40);
    memset_0((void *)(v40 + HyperSpace), 0, 4096 - v40);
  }
  else
  {
    KeCopyPage(HyperSpace, v31, v43);
  }
  v32 = v50;
  v33 = (_QWORD *)(((HyperSpace >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( v41 )
  {
    do
    {
      *v33++ = CLFS_LSN_NULL_EXT;
      --v30;
    }
    while ( v30 );
  }
  *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
  ExReleaseSpinLockExclusiveFromDpcLevel(v15);
  ++*(_QWORD *)(v44 + 32);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v44 + 72));
  MiUnlockDataCopyPages(v51);
  v34 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v34 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v34);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v32 + 24) < 0 );
  }
  MiInitializeTransitionPfn(a5, (__int64 *)a3, -1LL);
  v57 = *(_DWORD *)(v32 + 32);
  BYTE2(v57) = BYTE2(v57) & 0xF8 | 2;
  *(_DWORD *)(v32 + 32) = v57;
  HIWORD(v57) = HIWORD(*(_DWORD *)(v32 + 32));
  LOWORD(v57) = 1;
  *(_DWORD *)(v32 + 32) = v57;
  v58 = *(_DWORD *)(v32 + 32);
  BYTE2(v58) |= 0x20u;
  *(_DWORD *)(v32 + 32) = v58;
  *(_QWORD *)v32 = a1 + 32;
  v36 = *(_DWORD *)(a1 + 192);
  if ( (a4 & 1) != 0 && *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    MiAdvanceFaultList((_QWORD *)(a4 & 0xFFFFFFFFFFFFFFFEuLL));
    v36 = v39 | 0x20;
    *(_DWORD *)(a1 + 192) = v36;
  }
  v59 = *(_DWORD *)(v32 + 32);
  HIBYTE(v59) ^= (HIBYTE(v59) ^ (v36 >> 11)) & 7;
  *(_DWORD *)(v32 + 32) = v59;
  _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_QWORD *)(a1 + 168) = MI_READ_PTE_LOCK_FREE(a3);
  *(_QWORD *)(a1 + 232) = a3;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_DWORD *)(a1 + 280) = 4325432;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)(a1 + 312) = 4096LL;
  *(_QWORD *)(a1 + 320) = a5;
  *(_QWORD *)(a1 + 240) = a3;
  *(_QWORD *)(a1 + 96) = v45;
  *(_QWORD *)(a1 + 208) = a2;
  *(_QWORD *)(a1 + 248) = v32;
  *(_QWORD *)(a1 + 200) = 0LL;
  MiObtainProtoReference(a6, 0);
  LOBYTE(v37) = 17;
  *(_QWORD *)(a1 + 160) = a6;
  *(_DWORD *)(a1 + 80) = 0;
  MiUnlockProtoPoolPage(a6, v37, v38);
  *(_QWORD *)(a1 + 88) = 4096LL;
  KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
  __incgsdword(0x2E98u);
  return 1LL;
}
