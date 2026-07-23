/*
 * XREFs of MiCopyDataPageToImagePage @ 0x1403F1624
 * Callers:
 *     MiResolveMappedFileFault @ 0x140214824 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiStartingOffset @ 0x14020C7B0 (MiStartingOffset.c)
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFinalizePageAttribute @ 0x14024C240 (MiFinalizePageAttribute.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140302160 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiAllocateHyperSpace @ 0x140335ED0 (MiAllocateHyperSpace.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14033EECC (MiTryLockProtoPoolPageAtDpc.c)
 *     MiAdvanceFaultList @ 0x140342110 (MiAdvanceFaultList.c)
 *     MiObtainProtoReference @ 0x14034594C (MiObtainProtoReference.c)
 *     MiTryLockLeafPage @ 0x1403460BC (MiTryLockLeafPage.c)
 *     MiGetSessionIdForVa @ 0x14034E860 (MiGetSessionIdForVa.c)
 *     MiMapSinglePage @ 0x1403F14B0 (MiMapSinglePage.c)
 *     MiUnlockDataCopyPages @ 0x1403F1C20 (MiUnlockDataCopyPages.c)
 *     MiStandbyPageContentsIntact @ 0x1403F1E24 (MiStandbyPageContentsIntact.c)
 *     MiEndingOffset @ 0x1403F2438 (MiEndingOffset.c)
 *     MiInitializeTransitionPfn @ 0x1403F2C1C (MiInitializeTransitionPfn.c)
 *     KeCopyPage @ 0x1406B43B0 (KeCopyPage.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  __int64 *v21; // r14
  char v22; // r9
  __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 HyperSpace; // rsi
  int v28; // ebx
  char *v29; // r14
  __int64 v30; // rdx
  __int64 v31; // rbx
  const void *v32; // rdx
  __int64 v33; // r15
  _QWORD *v34; // rsi
  unsigned int v35; // ebx
  unsigned int v37; // r11d
  unsigned __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  int v41; // r11d
  unsigned int v42; // r14d
  unsigned int v43; // [rsp+28h] [rbp-69h]
  unsigned int v44; // [rsp+2Ch] [rbp-65h]
  unsigned int v45; // [rsp+2Ch] [rbp-65h]
  __int64 v46; // [rsp+30h] [rbp-61h]
  unsigned __int64 v47; // [rsp+38h] [rbp-59h]
  unsigned __int64 v48; // [rsp+40h] [rbp-51h]
  __int64 v49; // [rsp+48h] [rbp-49h] BYREF
  __int64 v50; // [rsp+50h] [rbp-41h]
  unsigned __int64 v51; // [rsp+58h] [rbp-39h]
  __int64 v52; // [rsp+60h] [rbp-31h]
  _OWORD v53[3]; // [rsp+68h] [rbp-29h] BYREF
  char v54; // [rsp+98h] [rbp+7h] BYREF
  int v59; // [rsp+108h] [rbp+77h]
  int v60; // [rsp+108h] [rbp+77h]
  int v61; // [rsp+108h] [rbp+77h]

  memset(v53, 0, sizeof(v53));
  v52 = 48 * a5 - 0x220000000000LL;
  MiFinalizePageAttribute(v52, 1LL, 16LL);
  v9 = *a2;
  v10 = *(_QWORD *)(a1 + 224);
  v49 = 0LL;
  v46 = v9;
  SessionIdForVa = MiGetSessionIdForVa(v10);
  v47 = MiStartingOffset(a2, a3, SessionIdForVa);
  v12 = v47;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
  v13 = *(_QWORD *)(v9 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2CD40);
  v14 = **(_QWORD **)(v13 + 40);
  if ( !v14
    || (v15 = (volatile LONG *)(v14 + 72),
        !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v14 + 72))) )
  {
    v15 = &dword_140E2CD40;
LABEL_3:
    ExReleaseSpinLockExclusiveFromDpcLevel(v15);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
    MiUnlockDataCopyPages(v53);
    return 0LL;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2CD40);
  if ( !*(_QWORD *)(v14 + 32) || (*(_DWORD *)(v14 + 56) & 3) != 0 )
    goto LABEL_3;
  v51 = MiEndingOffset(a2);
  v18 = v47 >> 12;
  if ( (unsigned int)(v47 >> 12) != (unsigned int)((v51 - 1) >> 12) )
    v17 -= 2;
  v19 = v14 + 128;
  v44 = v17;
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
  v21 = (__int64 *)v53;
  v43 = 2;
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
    if ( v25 == ((a3 >> 9) & 0x7FFFFFFFF8LL)
      || v21 != (__int64 *)v53 && v25 == (((unsigned __int64)*(v21 - 1) >> 9) & 0x7FFFFFFFF8LL) )
    {
      MiTryLockLeafPage((unsigned __int64 *)v24, v22, v21);
    }
    else
    {
      if ( (int)MiTryLockProtoPoolPageAtDpc(v24, v25, &v49, (__int64)v21) < 0 )
        goto LABEL_44;
      v21[1] = v49;
    }
    v26 = *v21;
    if ( !*v21 || (*(_DWORD *)(v26 + 32) & 0x40000000) != 0 || !(unsigned int)MiStandbyPageContentsIntact(v26) )
    {
LABEL_44:
      v9 = v46;
      goto LABEL_3;
    }
    if ( v21 != (__int64 *)v53 || (v47 & 0xFFF) == 0 )
      break;
    if ( v44 >= 2 )
    {
      v12 = v47;
      break;
    }
    v12 = v47;
    ++v43;
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
  v50 = v43;
  HyperSpace = MiAllocateHyperSpace(v43);
  v48 = HyperSpace + 4096;
  MiMapSinglePage(HyperSpace, a5, 0x40000000, 0);
  v28 = 1;
  v29 = (char *)v53;
  do
  {
    v30 = *(_QWORD *)v29;
    if ( !*(_QWORD *)v29 )
      break;
    if ( (HIWORD(*(_DWORD *)(v30 + 32)) & 0xC0) != 0x40 )
      v28 = -1;
    MiMapSinglePage(v48, 0xAAAAAAAAAAAAAAABuLL * ((v30 + 0x220000000000LL) >> 4), -1073741824, 0);
    v48 += 4096LL;
    v29 += 24;
  }
  while ( v29 != &v54 );
  v45 = v28;
  v31 = v50;
  v32 = (const void *)(HyperSpace + (v12 & 0xFFFu) + 4096);
  if ( v47 + 4096 > v51 )
  {
    v42 = (v51 - v12) & 0xFFF;
    memmove((void *)HyperSpace, v32, v42);
    memset_0((void *)(v42 + HyperSpace), 0, 4096 - v42);
  }
  else
  {
    KeCopyPage(HyperSpace, v32, v45);
  }
  v33 = v52;
  v34 = (_QWORD *)(((HyperSpace >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( v43 )
  {
    do
    {
      *v34++ = CLFS_LSN_NULL_EXT;
      --v31;
    }
    while ( v31 );
  }
  *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
  ExReleaseSpinLockExclusiveFromDpcLevel(v15);
  ++*(_QWORD *)(v46 + 32);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v46 + 72));
  MiUnlockDataCopyPages(v53);
  v35 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v35 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v35);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v33 + 24) < 0 );
  }
  MiInitializeTransitionPfn(a5, a3, -1LL);
  v59 = *(_DWORD *)(v33 + 32);
  BYTE2(v59) = BYTE2(v59) & 0xF8 | 2;
  *(_DWORD *)(v33 + 32) = v59;
  HIWORD(v59) = HIWORD(*(_DWORD *)(v33 + 32));
  LOWORD(v59) = 1;
  *(_DWORD *)(v33 + 32) = v59;
  v60 = *(_DWORD *)(v33 + 32);
  BYTE2(v60) |= 0x20u;
  *(_DWORD *)(v33 + 32) = v60;
  *(_QWORD *)v33 = a1 + 32;
  v37 = *(_DWORD *)(a1 + 192);
  if ( (a4 & 1) != 0 && *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    MiAdvanceFaultList((_QWORD *)(a4 & 0xFFFFFFFFFFFFFFFEuLL));
    v37 = v41 | 0x20;
    *(_DWORD *)(a1 + 192) = v37;
  }
  v61 = *(_DWORD *)(v33 + 32);
  HIBYTE(v61) ^= (HIBYTE(v61) ^ (v37 >> 11)) & 7;
  *(_DWORD *)(v33 + 32) = v61;
  _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_QWORD *)(a1 + 168) = MI_READ_PTE_LOCK_FREE(a3);
  *(_QWORD *)(a1 + 232) = a3;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_DWORD *)(a1 + 280) = 4325432;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)(a1 + 312) = 4096LL;
  *(_QWORD *)(a1 + 320) = a5;
  *(_QWORD *)(a1 + 240) = a3;
  *(_QWORD *)(a1 + 96) = v47;
  *(_QWORD *)(a1 + 208) = a2;
  *(_QWORD *)(a1 + 248) = v33;
  *(_QWORD *)(a1 + 200) = 0LL;
  MiObtainProtoReference(a6, 0);
  LOBYTE(v38) = 17;
  *(_QWORD *)(a1 + 160) = a6;
  *(_DWORD *)(a1 + 80) = 0;
  MiUnlockProtoPoolPage(a6, v38, v39, v40);
  *(_QWORD *)(a1 + 88) = 4096LL;
  KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
  __incgsdword(0x2E98u);
  return 1LL;
}
