/*
 * XREFs of MiDecommitSharedPageTail @ 0x140340E30
 * Callers:
 *     MiDecommitFreePagesTail @ 0x1404EDBB0 (MiDecommitFreePagesTail.c)
 * Callees:
 *     MiCreateDecayPfn @ 0x14021C248 (MiCreateDecayPfn.c)
 *     MiDecrementCloneBlockReference @ 0x140224F2C (MiDecrementCloneBlockReference.c)
 *     MiChargeCommit @ 0x14022E7B0 (MiChargeCommit.c)
 *     MiCaptureDirtyBitToPfn @ 0x14022F970 (MiCaptureDirtyBitToPfn.c)
 *     MiGetPfnPriority @ 0x140230FB0 (MiGetPfnPriority.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiFreeCombineBlock @ 0x14023A47C (MiFreeCombineBlock.c)
 *     MiGetLeafVa @ 0x1402B5480 (MiGetLeafVa.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiDeleteMergedPte @ 0x14033FD38 (MiDeleteMergedPte.c)
 *     MiReturnCloneCharges @ 0x14033FDD4 (MiReturnCloneCharges.c)
 *     MiLockCloneBlockAtDpc @ 0x14033FE5C (MiLockCloneBlockAtDpc.c)
 *     MiBadShareCount @ 0x140340DD8 (MiBadShareCount.c)
 *     MiDecrementShareCountEx @ 0x1403427F0 (MiDecrementShareCountEx.c)
 *     MiPageChargedCommit @ 0x14044EAE0 (MiPageChargedCommit.c)
 *     MiLogCombinedPteDelete @ 0x140679DBC (MiLogCombinedPteDelete.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void __fastcall MiDecommitSharedPageTail(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rsi
  int v6; // r13d
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rsi
  bool v10; // zf
  ULONG_PTR v11; // rcx
  unsigned __int64 v12; // rbx
  _QWORD *v13; // r12
  _QWORD *v14; // rcx
  int v15; // r12d
  unsigned __int64 v16; // rbx
  int v17; // r14d
  unsigned __int64 v18; // r14
  __int64 v19; // r12
  int v20; // eax
  int v21; // r9d
  int v22; // r10d
  unsigned __int64 v23; // r14
  BOOL v24; // eax
  int v25; // edi
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rsi
  char v29; // r14
  __int64 v30; // rdi
  __int64 v31; // rax
  unsigned __int64 LeafVa; // rax
  unsigned __int64 v33; // r9
  __int64 v34; // [rsp+20h] [rbp-D8h]
  ULONG_PTR v35; // [rsp+30h] [rbp-C8h]
  char v36[24]; // [rsp+40h] [rbp-B8h] BYREF
  unsigned __int64 v37; // [rsp+58h] [rbp-A0h]
  unsigned __int64 v38; // [rsp+60h] [rbp-98h]
  ULONG_PTR BugCheckParameter2; // [rsp+100h] [rbp+8h]
  __int64 v41; // [rsp+108h] [rbp+10h]
  int v42; // [rsp+108h] [rbp+10h]
  unsigned __int64 BugCheckParameter3; // [rsp+110h] [rbp+18h]
  unsigned __int64 v44; // [rsp+118h] [rbp+20h]

  v34 = *(_QWORD *)(a1 + 32);
  v5 = 48 * ((a3 >> 12) & 0xFFFFFFFFFFLL);
  v6 = 0;
  v7 = 0xFFFFF68000000000uLL;
  BugCheckParameter3 = 0LL;
  v8 = 0LL;
  BugCheckParameter2 = 0LL;
  v9 = v5 - 0x220000000000LL;
  v10 = *(_DWORD *)(a1 + 40) == 0;
  v44 = (__int64)(a2 << 25) >> 16;
  v11 = v34 - 1024;
  if ( !v10 )
    v11 = 0LL;
  v12 = *(_QWORD *)(v9 + 8) | 0x8000000000000000uLL;
  v35 = v11;
  if ( (*(_QWORD *)(v9 + 40) & 0x10000000000LL) != 0 || *(__int64 *)(v9 + 8) <= 0 )
  {
    if ( !*(_DWORD *)(a1 + 40) && a2 <= 0xFFFFF6BFFFFFFF78uLL && a2 >= 0xFFFFF68000000000uLL )
    {
      v13 = *(_QWORD **)(v11 + 640);
      if ( v13 )
      {
        BugCheckParameter3 = *(_QWORD *)(v9 + 8) | 0x8000000000000000uLL;
        memset_0(v36, 0, 0x70uLL);
        v14 = v13;
        v37 = v12;
        v38 = v12;
        do
        {
          if ( v12 > v14[4] )
          {
            v14 = (_QWORD *)v14[1];
          }
          else
          {
            if ( v12 >= v14[3] )
              break;
            v14 = (_QWORD *)*v14;
          }
        }
        while ( v14 );
        BugCheckParameter2 = (ULONG_PTR)v14;
        if ( !v14 || !v14[6] )
          BugCheckParameter2 = 0LL;
      }
    }
  }
  else
  {
    v8 = *(_QWORD *)(v9 + 8) | 0x8000000000000000uLL;
  }
  v15 = *(_DWORD *)(a1 + 160);
  if ( (v15 & 4) != 0
    && !*(_QWORD *)(a1 + 120)
    && (a3 & 0x42) == 0
    && (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
    && *(__int64 *)(v9 + 40) < 0
    && (*(_BYTE *)(v9 + 34) & 0x10) == 0
    && (unsigned int)MiGetPfnPriority(v9) < 5 )
  {
    *(_QWORD *)(a1 + 120) = MiCreateDecayPfn();
  }
  *(_DWORD *)(a1 + 128) = 0;
  v16 = 0LL;
  v17 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v17 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait();
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v9 + 24) < 0 );
  }
  v18 = a2;
  if ( (v15 & 0x91) == 0x81
    && (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
    && (unsigned int)MiGetPfnPriority(v9) - 3 <= 2 )
  {
    v42 = *(_DWORD *)(v9 + 32);
    HIBYTE(v42) = HIBYTE(v42) & 0xF8 | 2;
    *(_DWORD *)(v9 + 32) = v42;
  }
  v19 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL));
  if ( (a3 & 0x42) != 0 )
    v16 = MiCaptureDirtyBitToPfn(v9);
  if ( (*(_DWORD *)(a1 + 156) & 0x20) != 0 )
  {
    if ( (*(_BYTE *)(v9 + 34) & 7) != 6 )
      goto LABEL_24;
    if ( v44 < 0xFFFFF68000000000uLL || v44 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      if ( *(_DWORD *)(a1 + 40) == 3 )
      {
        ++*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
        if ( (*(_DWORD *)(v9 + 32) & 0x8000000) != 0 )
          *(_BYTE *)(v9 + 35) = HIBYTE(*(_DWORD *)(v9 + 32)) & 0xF7;
      }
    }
    else if ( !*(_DWORD *)(a1 + 40) )
    {
      LeafVa = MiGetLeafVa(v44);
      if ( LeafVa <= v33 && (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 0x10000 )
        *(_DWORD *)(a1 + 128) = 1;
    }
  }
  else
  {
    v20 = *(_DWORD *)(a1 + 40);
    if ( v20 )
    {
      if ( v20 == 3 || (unsigned int)MiPageChargedCommit(v9, a3, v7, 0x7FFFFFFEFFFFLL) )
        ++*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
      if ( (*(_DWORD *)(v9 + 32) & 0x8000000) != 0 )
        *(_BYTE *)(v9 + 35) = HIBYTE(*(_DWORD *)(v9 + 32)) & 0xF7;
    }
  }
  if ( (*(_BYTE *)(v9 + 34) & 7) != 6 )
LABEL_24:
    MiBadShareCount(v9);
  v21 = MiDecrementShareCountEx(v9, *(_QWORD *)(a1 + 120));
  v22 = 4;
  if ( (*(_DWORD *)(a1 + 156) & 0x20) != 0 )
  {
    v23 = (__int64)(v18 << 25) >> 16;
    v24 = v23 >= 0xFFFFF68000000000uLL && v23 <= 0xFFFFF6FFFFFFFFFFuLL;
    if ( v21 == 2 )
    {
      if ( v24 )
        *(_QWORD *)v9 &= ~1uLL;
    }
    else if ( v21 == 3 )
    {
      if ( !*(_DWORD *)(a1 + 128) && v24 && !*(_DWORD *)(a1 + 40) && MiGetLeafVa(v23) <= 0x7FFFFFFEFFFFLL )
        *(_DWORD *)(a1 + 128) = 1;
      if ( *(__int64 *)(v9 + 40) < 0 )
        v21 = v22;
    }
  }
  v25 = v21;
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v8 )
  {
    v27 = *(_QWORD *)(((v8 - 32) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
    v28 = *(_QWORD *)v27;
    _InterlockedDecrement((volatile signed __int32 *)(v27 + 392));
    if ( v34 )
    {
      v29 = 0;
      v30 = *((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(v34 + 174));
      MiLockCloneBlockAtDpc(v8);
      v41 = v30;
      if ( v30 != v28 )
      {
        v10 = (*(_QWORD *)(v8 + 8))-- == 1LL;
        v41 = v30;
        if ( v10 )
        {
          v29 = 5;
          v41 = v30;
        }
      }
    }
    else
    {
      v41 = v28;
      MiLockCloneBlockAtDpc(v8);
      v29 = 0;
    }
    v31 = *(_QWORD *)(v8 + 24) - 1LL;
    *(_QWORD *)(v8 + 24) = v31;
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 16), 0x7FFFFFFFFFFFFFFFuLL);
    v25 = 4;
    if ( v31 || (v6 = 1, v25 = MiDeleteMergedPte(v28, (unsigned __int64 *)v8), v25 != 3) || v41 == v28 )
    {
      MiReturnCloneCharges(v28, v29);
      if ( !v6 )
      {
LABEL_54:
        LOBYTE(v22) = 4;
        goto LABEL_42;
      }
    }
    else
    {
      v25 = 4;
      MiReturnCloneCharges(v28, v29 & 0xFE);
    }
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogCombinedPteDelete(v8);
    MiFreeCombineBlock(v8 - 32, 1);
    goto LABEL_54;
  }
  if ( BugCheckParameter2 )
  {
    v25 = MiDecrementCloneBlockReference(BugCheckParameter2, BugCheckParameter3, v35);
    LOBYTE(v22) = 4;
  }
  else
  {
    v26 = *(_DWORD *)(a1 + 40);
    if ( v26 && (v26 == 3 || (*(_DWORD *)(a1 + 156) & 0x20) == 0) && v21 == 3 )
      v25 = v22;
  }
LABEL_42:
  if ( *(_DWORD *)(a1 + 128) )
  {
    MiChargeCommit(v19, 1uLL, v22);
  }
  else if ( v25 == 3 )
  {
    ++*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
  }
  if ( v16 )
    MiReleasePageFileInfo(v19, v16, 1);
  if ( v25 == 5 )
    ++*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
}
