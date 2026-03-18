/*
 * XREFs of MiDecommitSharedPageTail @ 0x14023E140
 * Callers:
 *     MiDecommitFreePagesTail @ 0x1404F1D60 (MiDecommitFreePagesTail.c)
 * Callees:
 *     MiChargeCommit @ 0x140211450 (MiChargeCommit.c)
 *     MiGetPfnPriority @ 0x1402141E0 (MiGetPfnPriority.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiCreateDecayPfn @ 0x14022AFD8 (MiCreateDecayPfn.c)
 *     MiDeleteMergedPte @ 0x14023E00C (MiDeleteMergedPte.c)
 *     MiDecommitFreePage @ 0x14023E790 (MiDecommitFreePage.c)
 *     MiCaptureDirtyBitToPfn @ 0x14023ED00 (MiCaptureDirtyBitToPfn.c)
 *     MiBadShareCount @ 0x14023EE28 (MiBadShareCount.c)
 *     MiReturnCloneCharges @ 0x14023EE80 (MiReturnCloneCharges.c)
 *     MiLockCloneBlockAtDpc @ 0x14023EF08 (MiLockCloneBlockAtDpc.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetLeafVa @ 0x1402DEE20 (MiGetLeafVa.c)
 *     MiDecrementCloneBlockReference @ 0x1402F90A4 (MiDecrementCloneBlockReference.c)
 *     MiFreeCombineBlock @ 0x1402FA048 (MiFreeCombineBlock.c)
 *     MiPageChargedCommit @ 0x14044E06C (MiPageChargedCommit.c)
 *     MiLogCombinedPteDelete @ 0x14068564C (MiLogCombinedPteDelete.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void __fastcall MiDecommitSharedPageTail(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  int v5; // r12d
  _QWORD *v6; // rsi
  __int64 v7; // rbp
  bool v8; // zf
  __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  _QWORD *v11; // r15
  int v12; // r15d
  __int64 v13; // rcx
  unsigned __int64 v14; // rbx
  unsigned int v15; // r13d
  __int64 v16; // r13
  int v17; // eax
  int v18; // eax
  int v19; // edi
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rsi
  unsigned int v23; // r15d
  __int64 v24; // rdi
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // [rsp+20h] [rbp-D8h]
  __int64 v28; // [rsp+28h] [rbp-D0h]
  char v29[24]; // [rsp+40h] [rbp-B8h] BYREF
  unsigned __int64 v30; // [rsp+58h] [rbp-A0h]
  unsigned __int64 v31; // [rsp+60h] [rbp-98h]
  int v32; // [rsp+100h] [rbp+8h]
  __int64 v34; // [rsp+108h] [rbp+10h]
  unsigned __int64 v35; // [rsp+110h] [rbp+18h]
  unsigned __int64 BugCheckParameter3; // [rsp+118h] [rbp+20h]

  v28 = *(_QWORD *)(a1 + 32);
  v5 = 0;
  v35 = 0LL;
  BugCheckParameter3 = 0LL;
  v6 = 0LL;
  v7 = 48 * ((a3 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v8 = *(_DWORD *)(a1 + 40) == 0;
  v27 = (__int64)(a2 << 25) >> 16;
  v9 = v28 - 1024;
  if ( !v8 )
    v9 = 0LL;
  v10 = *(_QWORD *)(v7 + 8) | 0x8000000000000000uLL;
  if ( (*(_QWORD *)(v7 + 40) & 0x10000000000LL) != 0 || *(__int64 *)(v7 + 8) <= 0 )
  {
    if ( !*(_DWORD *)(a1 + 40) && a2 <= 0xFFFFF6BFFFFFFF78uLL && a2 >= 0xFFFFF68000000000uLL )
    {
      v11 = *(_QWORD **)(v9 + 640);
      if ( v11 )
      {
        BugCheckParameter3 = *(_QWORD *)(v7 + 8) | 0x8000000000000000uLL;
        memset_0(v29, 0, 0x70uLL);
        v30 = v10;
        v6 = v11;
        v31 = v10;
        do
        {
          if ( v10 > v6[4] )
          {
            v6 = (_QWORD *)v6[1];
          }
          else
          {
            if ( v10 >= v6[3] )
              break;
            v6 = (_QWORD *)*v6;
          }
        }
        while ( v6 );
        if ( !v6 || !v6[6] )
          v6 = 0LL;
      }
    }
  }
  else
  {
    v35 = *(_QWORD *)(v7 + 8) | 0x8000000000000000uLL;
  }
  v12 = *(_DWORD *)(a1 + 160);
  v13 = 0x3FFFFFFFFFFFFFFFLL;
  if ( (v12 & 4) != 0
    && !*(_QWORD *)(a1 + 120)
    && (a3 & 0x42) == 0
    && (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
    && *(__int64 *)(v7 + 40) < 0
    && (*(_BYTE *)(v7 + 34) & 0x10) == 0
    && (unsigned int)MiGetPfnPriority(48 * ((a3 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) < 5 )
  {
    *(_QWORD *)(a1 + 120) = MiCreateDecayPfn();
  }
  *(_DWORD *)(a1 + 128) = 0;
  v14 = 0LL;
  v15 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v15 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v13) )
      {
        HvlNotifyLongSpinWait(v15);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v7 + 24) < 0 );
  }
  if ( (v12 & 0x91) == 0x81
    && (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
    && (unsigned int)MiGetPfnPriority(48 * ((a3 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) - 3 <= 2 )
  {
    v32 = *(_DWORD *)(v7 + 32);
    HIBYTE(v32) = HIBYTE(v32) & 0xF8 | 2;
    *(_DWORD *)(v7 + 32) = v32;
  }
  v16 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL));
  if ( (a3 & 0x42) != 0 )
    v14 = MiCaptureDirtyBitToPfn(48 * ((a3 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
  if ( (*(_DWORD *)(a1 + 156) & 0x20) != 0 )
  {
    if ( (*(_BYTE *)(v7 + 34) & 7) != 6 )
      goto LABEL_24;
    if ( v27 >= 0xFFFFF68000000000uLL && v27 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      if ( !*(_DWORD *)(a1 + 40)
        && (unsigned __int64)MiGetLeafVa(v27) <= 0x7FFFFFFEFFFFLL
        && (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 0x10000 )
      {
        *(_DWORD *)(a1 + 128) = 1;
      }
      goto LABEL_36;
    }
    if ( *(_DWORD *)(a1 + 40) != 3 )
      goto LABEL_36;
    ++*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
    v18 = HIBYTE(*(_DWORD *)(v7 + 32));
    if ( (*(_DWORD *)(v7 + 32) & 0x8000000) == 0 )
      goto LABEL_36;
LABEL_33:
    *(_BYTE *)(v7 + 35) = v18 & 0xF7;
    goto LABEL_36;
  }
  v17 = *(_DWORD *)(a1 + 40);
  if ( v17 )
  {
    if ( v17 == 3 || (unsigned int)MiPageChargedCommit(48 * ((a3 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, a3) )
      ++*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
    v18 = HIBYTE(*(_DWORD *)(v7 + 32));
    if ( (*(_DWORD *)(v7 + 32) & 0x8000000) != 0 )
      goto LABEL_33;
  }
LABEL_36:
  if ( (*(_BYTE *)(v7 + 34) & 7) != 6 )
LABEL_24:
    MiBadShareCount(48 * ((a3 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
  v19 = MiDecommitFreePage(a1, a2, 48 * ((a3 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v35 )
  {
    v21 = *(_QWORD *)(((v35 - 32) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
    v22 = *(_QWORD *)v21;
    _InterlockedDecrement((volatile signed __int32 *)(v21 + 392));
    if ( v28 )
    {
      v23 = 0;
      v24 = *((_QWORD *)qword_140E2FF88 + *(unsigned __int16 *)(v28 + 174));
      MiLockCloneBlockAtDpc(v35);
      v25 = v35;
      v34 = v24;
      if ( v24 != v22 )
      {
        v8 = (*(_QWORD *)(v35 + 8))-- == 1LL;
        v34 = v24;
        if ( v8 )
        {
          v23 = 5;
          v34 = v24;
        }
      }
    }
    else
    {
      v34 = v22;
      MiLockCloneBlockAtDpc(v35);
      v25 = v35;
      v23 = 0;
    }
    v26 = *(_QWORD *)(v25 + 24) - 1LL;
    *(_QWORD *)(v25 + 24) = v26;
    _InterlockedAnd64((volatile signed __int64 *)(v25 + 16), 0x7FFFFFFFFFFFFFFFuLL);
    v19 = 4;
    if ( v26 || (v5 = 1, v19 = MiDeleteMergedPte(v22, (unsigned __int64 *)v25), v19 != 3) || v34 == v22 )
    {
      MiReturnCloneCharges(v22, v23);
      if ( !v5 )
        goto LABEL_40;
    }
    else
    {
      v19 = 4;
      MiReturnCloneCharges(v22, v23 & 0xFFFFFFFE);
    }
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogCombinedPteDelete(v35);
    MiFreeCombineBlock(v35 - 32, 1LL);
  }
  else if ( v6 )
  {
    v19 = MiDecrementCloneBlockReference((ULONG_PTR)v6, BugCheckParameter3);
  }
  else
  {
    v20 = *(_DWORD *)(a1 + 40);
    if ( v20 && (v20 == 3 || (*(_DWORD *)(a1 + 156) & 0x20) == 0) && v19 == 3 )
      v19 = 4;
  }
LABEL_40:
  if ( *(_DWORD *)(a1 + 128) )
  {
    MiChargeCommit(v16, 1uLL, 4);
  }
  else if ( v19 == 3 )
  {
    ++*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
  }
  if ( v14 )
    MiReleasePageFileInfo(v16, v14, 1LL);
  if ( v19 == 5 )
    ++*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
}
