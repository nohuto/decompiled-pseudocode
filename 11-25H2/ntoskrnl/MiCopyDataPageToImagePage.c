/*
 * XREFs of MiCopyDataPageToImagePage @ 0x14020754C
 * Callers:
 *     MiResolveMappedFileFault @ 0x1402276BC (MiResolveMappedFileFault.c)
 * Callees:
 *     MiGetSessionIdForVa @ 0x140208E10 (MiGetSessionIdForVa.c)
 *     MiAllocateHyperSpace @ 0x140211930 (MiAllocateHyperSpace.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140217CD0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiMapSinglePage @ 0x140225164 (MiMapSinglePage.c)
 *     MiStandbyPageContentsIntact @ 0x140225484 (MiStandbyPageContentsIntact.c)
 *     MiTryLockLeafPage @ 0x14022A6FC (MiTryLockLeafPage.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14022B5E4 (MiTryLockProtoPoolPageAtDpc.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiFinalizePageAttribute @ 0x14024DDE0 (MiFinalizePageAttribute.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiStartingOffset @ 0x1403236B0 (MiStartingOffset.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiObtainProtoReference @ 0x14033DEAC (MiObtainProtoReference.c)
 *     MiEndingOffset @ 0x14034EDF8 (MiEndingOffset.c)
 *     MiAdvanceFaultList @ 0x14037A740 (MiAdvanceFaultList.c)
 *     MiInitializeTransitionPfn @ 0x140453E64 (MiInitializeTransitionPfn.c)
 *     MiUnlockDataCopyPages @ 0x1404568CC (MiUnlockDataCopyPages.c)
 *     KeCopyPage @ 0x1406A8140 (KeCopyPage.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiCopyDataPageToImagePage(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v9; // r14
  __int64 v10; // rcx
  unsigned int SessionIdForVa; // eax
  int v12; // r12d
  unsigned __int64 v13; // rbx
  __int64 v14; // rsi
  volatile LONG *v15; // rdi
  unsigned int v17; // r8d
  unsigned __int64 v18; // rbx
  __int64 v19; // rsi
  unsigned int v20; // eax
  _OWORD *v21; // r14
  unsigned int v22; // r9d
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
  __int64 v37; // rdx
  int v38; // r11d
  unsigned int v39; // r14d
  unsigned int v40; // [rsp+28h] [rbp-69h]
  unsigned int v41; // [rsp+2Ch] [rbp-65h]
  unsigned int v42; // [rsp+2Ch] [rbp-65h]
  __int64 v43; // [rsp+30h] [rbp-61h]
  unsigned __int64 v44; // [rsp+38h] [rbp-59h]
  unsigned __int64 v45; // [rsp+40h] [rbp-51h]
  __int64 v46; // [rsp+48h] [rbp-49h] BYREF
  __int64 v47; // [rsp+50h] [rbp-41h]
  unsigned __int64 v48; // [rsp+58h] [rbp-39h]
  __int64 v49; // [rsp+60h] [rbp-31h]
  _OWORD v50[3]; // [rsp+68h] [rbp-29h] BYREF
  char v51; // [rsp+98h] [rbp+7h] BYREF
  int v56; // [rsp+108h] [rbp+77h]
  int v57; // [rsp+108h] [rbp+77h]
  int v58; // [rsp+108h] [rbp+77h]

  memset(v50, 0, sizeof(v50));
  v49 = 48 * a5 - 0x220000000000LL;
  MiFinalizePageAttribute(v49, 1LL, 16LL);
  v9 = *a2;
  v10 = *(_QWORD *)(a1 + 224);
  v46 = 0LL;
  v43 = v9;
  SessionIdForVa = MiGetSessionIdForVa(v10);
  v44 = MiStartingOffset(a2, a3, SessionIdForVa);
  v12 = v44;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
  v13 = *(_QWORD *)(v9 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  ExAcquireSpinLockExclusiveAtDpcLevel(&SpinLock);
  v14 = **(_QWORD **)(v13 + 40);
  if ( !v14 || (v15 = (volatile LONG *)(v14 + 72), !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v14 + 72)) )
  {
    v15 = &SpinLock;
LABEL_3:
    ExReleaseSpinLockExclusiveFromDpcLevel(v15);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
    MiUnlockDataCopyPages(v50);
    return 0LL;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&SpinLock);
  if ( !*(_QWORD *)(v14 + 32) || (*(_DWORD *)(v14 + 56) & 3) != 0 )
    goto LABEL_3;
  v48 = MiEndingOffset(a2);
  v18 = v44 >> 12;
  if ( (unsigned int)(v44 >> 12) != (unsigned int)((v48 - 1) >> 12) )
    v17 -= 2;
  v19 = v14 + 128;
  v41 = v17;
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
  v21 = v50;
  v40 = 2;
  v22 = 0;
  while ( 1 )
  {
    if ( !*(_DWORD *)(v19 + 104) )
      goto LABEL_40;
    v23 = *(_QWORD *)(v19 + 8);
    if ( !v23 )
      goto LABEL_40;
    v24 = v23 + 8LL * (unsigned int)v18;
    if ( !v24 )
      goto LABEL_40;
    v25 = (v24 >> 9) & 0x7FFFFFFFF8LL;
    *((_QWORD *)v21 + 2) = v24;
    if ( v25 == ((a3 >> 9) & 0x7FFFFFFFF8LL) || v21 != v50 && v25 == ((*((_QWORD *)v21 - 1) >> 9) & 0x7FFFFFFFF8LL) )
    {
      MiTryLockLeafPage(v24, v22, v21);
    }
    else
    {
      if ( (int)MiTryLockProtoPoolPageAtDpc(v24, v25, &v46, v21) < 0 )
        goto LABEL_40;
      *((_QWORD *)v21 + 1) = v46;
    }
    if ( !*(_QWORD *)v21
      || (*(_DWORD *)(*(_QWORD *)v21 + 32LL) & 0x40000000) != 0
      || !(unsigned int)MiStandbyPageContentsIntact() )
    {
LABEL_40:
      v9 = v43;
      goto LABEL_3;
    }
    if ( v21 != v50 || (v44 & 0xFFF) == 0 )
      break;
    if ( v41 >= 2 )
    {
      v12 = v44;
      break;
    }
    v12 = v44;
    ++v40;
    LODWORD(v18) = v18 + 1;
    v21 = (_OWORD *)((char *)v21 + 24);
    v22 = 1;
    if ( (unsigned int)v18 >= *(_DWORD *)(v19 + 44) )
    {
      v19 = *(_QWORD *)(v19 + 16);
      LODWORD(v18) = 0;
      if ( !v19 )
        goto LABEL_40;
    }
  }
  v47 = v40;
  HyperSpace = MiAllocateHyperSpace(v40);
  v45 = HyperSpace + 4096;
  MiMapSinglePage(HyperSpace, a5, 0x40000000LL, 0LL);
  v27 = 1;
  v28 = (char *)v50;
  do
  {
    v29 = *(_QWORD *)v28;
    if ( !*(_QWORD *)v28 )
      break;
    if ( (HIWORD(*(_DWORD *)(v29 + 32)) & 0xC0) != 0x40 )
      v27 = -1;
    MiMapSinglePage(v45, 0xAAAAAAAAAAAAAAABuLL * ((v29 + 0x220000000000LL) >> 4), 3221225472LL, 0LL);
    v45 += 4096LL;
    v28 += 24;
  }
  while ( v28 != &v51 );
  v42 = v27;
  v30 = v47;
  v31 = (const void *)(HyperSpace + (v12 & 0xFFFu) + 4096);
  if ( v44 + 4096 > v48 )
  {
    v39 = (v48 - v12) & 0xFFF;
    memmove((void *)HyperSpace, v31, v39);
    memset_0((void *)(v39 + HyperSpace), 0, 4096 - v39);
  }
  else
  {
    KeCopyPage(HyperSpace, v31, v42);
  }
  v32 = v49;
  v33 = (_QWORD *)(((HyperSpace >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( v40 )
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
  ++*(_QWORD *)(v43 + 32);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v43 + 72));
  MiUnlockDataCopyPages(v50);
  v34 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v34 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall() )
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
  MiInitializeTransitionPfn(a5, a3, -1LL);
  v56 = *(_DWORD *)(v32 + 32);
  BYTE2(v56) = BYTE2(v56) & 0xF8 | 2;
  *(_DWORD *)(v32 + 32) = v56;
  HIWORD(v56) = HIWORD(*(_DWORD *)(v32 + 32));
  LOWORD(v56) = 1;
  *(_DWORD *)(v32 + 32) = v56;
  v57 = *(_DWORD *)(v32 + 32);
  BYTE2(v57) |= 0x20u;
  *(_DWORD *)(v32 + 32) = v57;
  *(_QWORD *)v32 = a1 + 32;
  v36 = *(_DWORD *)(a1 + 192);
  if ( (a4 & 1) != 0 && *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    MiAdvanceFaultList(a4 & 0xFFFFFFFFFFFFFFFEuLL);
    v36 = v38 | 0x20;
    *(_DWORD *)(a1 + 192) = v36;
  }
  v58 = *(_DWORD *)(v32 + 32);
  HIBYTE(v58) ^= (HIBYTE(v58) ^ (v36 >> 11)) & 7;
  *(_DWORD *)(v32 + 32) = v58;
  _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_QWORD *)(a1 + 168) = MI_READ_PTE_LOCK_FREE(a3);
  *(_QWORD *)(a1 + 232) = a3;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_DWORD *)(a1 + 280) = 4325432;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)(a1 + 312) = 4096LL;
  *(_QWORD *)(a1 + 320) = a5;
  *(_QWORD *)(a1 + 240) = a3;
  *(_QWORD *)(a1 + 96) = v44;
  *(_QWORD *)(a1 + 208) = a2;
  *(_QWORD *)(a1 + 248) = v32;
  *(_QWORD *)(a1 + 200) = 0LL;
  MiObtainProtoReference(a6, 0LL);
  LOBYTE(v37) = 17;
  *(_QWORD *)(a1 + 160) = a6;
  *(_DWORD *)(a1 + 80) = 0;
  MiUnlockProtoPoolPage(a6, v37);
  *(_QWORD *)(a1 + 88) = 4096LL;
  KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
  __incgsdword(0x2E98u);
  return 1LL;
}
