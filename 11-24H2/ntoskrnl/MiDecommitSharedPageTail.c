/*
 * XREFs of MiDecommitSharedPageTail @ 0x140206290
 * Callers:
 *     MiDecommitFreePagesTail @ 0x1404EF800 (MiDecommitFreePagesTail.c)
 * Callees:
 *     MiDeleteMergedPte @ 0x140205D9C (MiDeleteMergedPte.c)
 *     MiDecommitFreePage @ 0x1402068E0 (MiDecommitFreePage.c)
 *     MiCaptureDirtyBitToPfn @ 0x140206E50 (MiCaptureDirtyBitToPfn.c)
 *     MiBadShareCount @ 0x140206F78 (MiBadShareCount.c)
 *     MiReturnCloneCharges @ 0x140206FD0 (MiReturnCloneCharges.c)
 *     MiLockCloneBlockAtDpc @ 0x140207058 (MiLockCloneBlockAtDpc.c)
 *     MiGetLeafVa @ 0x140240700 (MiGetLeafVa.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiDecrementCloneBlockReference @ 0x140294D58 (MiDecrementCloneBlockReference.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCreateDecayPfn @ 0x1402FE8EC (MiCreateDecayPfn.c)
 *     MiGetPfnPriority @ 0x140335630 (MiGetPfnPriority.c)
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MiFreeCombineBlock @ 0x1403427B8 (MiFreeCombineBlock.c)
 *     MiPageChargedCommit @ 0x140444F6C (MiPageChargedCommit.c)
 *     MiLogCombinedPteDelete @ 0x14068677C (MiLogCombinedPteDelete.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiDecommitSharedPageTail(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // r8
  int v6; // r12d
  unsigned __int64 v7; // r9
  _QWORD *v8; // rsi
  __int64 v9; // rbp
  bool v10; // zf
  __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  _QWORD *v13; // r15
  int v14; // r15d
  __int64 v15; // rcx
  __int64 v16; // rbx
  unsigned int v17; // r13d
  __int64 v18; // r13
  int v19; // eax
  int v20; // eax
  int v21; // edi
  __int64 v22; // r9
  int v23; // eax
  __int64 result; // rax
  __int64 v25; // rcx
  __int64 v26; // rsi
  unsigned int v27; // r15d
  __int64 v28; // rdi
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  unsigned __int64 v31; // [rsp+20h] [rbp-D8h]
  __int64 v32; // [rsp+28h] [rbp-D0h]
  char v33[24]; // [rsp+40h] [rbp-B8h] BYREF
  unsigned __int64 v34; // [rsp+58h] [rbp-A0h]
  unsigned __int64 v35; // [rsp+60h] [rbp-98h]
  int v36; // [rsp+100h] [rbp+8h]
  __int64 v38; // [rsp+108h] [rbp+10h]
  unsigned __int64 v39; // [rsp+110h] [rbp+18h]
  unsigned __int64 BugCheckParameter3; // [rsp+118h] [rbp+20h]

  v5 = *(_QWORD *)(a1 + 32);
  v32 = v5;
  v6 = 0;
  v7 = 0xFFFFF68000000000uLL;
  v39 = 0LL;
  BugCheckParameter3 = 0LL;
  v8 = 0LL;
  v9 = 48 * ((a3 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v10 = *(_DWORD *)(a1 + 40) == 0;
  v31 = (__int64)(a2 << 25) >> 16;
  v11 = v5 - 1024;
  if ( !v10 )
    v11 = 0LL;
  v12 = *(_QWORD *)(v9 + 8) | 0x8000000000000000uLL;
  if ( (*(_QWORD *)(v9 + 40) & 0x10000000000LL) != 0 || *(__int64 *)(v9 + 8) <= 0 )
  {
    if ( !*(_DWORD *)(a1 + 40) )
    {
      v5 = 0x3FFFFFFF78LL;
      if ( a2 <= 0xFFFFF6BFFFFFFF78uLL && a2 >= 0xFFFFF68000000000uLL )
      {
        v13 = *(_QWORD **)(v11 + 640);
        if ( v13 )
        {
          BugCheckParameter3 = *(_QWORD *)(v9 + 8) | 0x8000000000000000uLL;
          memset_0(v33, 0, 0x70uLL);
          v34 = v12;
          v8 = v13;
          v35 = v12;
          do
          {
            if ( v12 > v8[4] )
            {
              v8 = (_QWORD *)v8[1];
            }
            else
            {
              if ( v12 >= v8[3] )
                break;
              v8 = (_QWORD *)*v8;
            }
          }
          while ( v8 );
          if ( !v8 || !v8[6] )
            v8 = 0LL;
        }
      }
    }
  }
  else
  {
    v39 = *(_QWORD *)(v9 + 8) | 0x8000000000000000uLL;
  }
  v14 = *(_DWORD *)(a1 + 160);
  v15 = 0x3FFFFFFFFFFFFFFFLL;
  if ( (v14 & 4) != 0
    && !*(_QWORD *)(a1 + 120)
    && (a3 & 0x42) == 0
    && (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
    && *(__int64 *)(v9 + 40) < 0
    && (*(_BYTE *)(v9 + 34) & 0x10) == 0
    && (unsigned int)MiGetPfnPriority(48 * ((a3 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) < 5 )
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
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v15, a2, v5, v7) )
      {
        HvlNotifyLongSpinWait(v17);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v9 + 24) < 0 );
  }
  if ( (v14 & 0x91) == 0x81
    && (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
    && (unsigned int)MiGetPfnPriority(48 * ((a3 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) - 3 <= 2 )
  {
    v36 = *(_DWORD *)(v9 + 32);
    HIBYTE(v36) = HIBYTE(v36) & 0xF8 | 2;
    *(_DWORD *)(v9 + 32) = v36;
  }
  v18 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL));
  if ( (a3 & 0x42) != 0 )
    v16 = MiCaptureDirtyBitToPfn(48 * ((a3 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
  if ( (*(_DWORD *)(a1 + 156) & 0x20) != 0 )
  {
    if ( (*(_BYTE *)(v9 + 34) & 7) != 6 )
      goto LABEL_24;
    if ( v31 >= 0xFFFFF68000000000uLL && v31 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      if ( !*(_DWORD *)(a1 + 40)
        && (unsigned __int64)MiGetLeafVa() <= 0x7FFFFFFEFFFFLL
        && (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 0x10000 )
      {
        *(_DWORD *)(a1 + 128) = 1;
      }
      goto LABEL_36;
    }
    if ( *(_DWORD *)(a1 + 40) != 3 )
      goto LABEL_36;
    ++*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
    v20 = HIBYTE(*(_DWORD *)(v9 + 32));
    if ( (*(_DWORD *)(v9 + 32) & 0x8000000) == 0 )
      goto LABEL_36;
LABEL_33:
    *(_BYTE *)(v9 + 35) = v20 & 0xF7;
    goto LABEL_36;
  }
  v19 = *(_DWORD *)(a1 + 40);
  if ( v19 )
  {
    if ( v19 == 3 || (unsigned int)MiPageChargedCommit(48 * ((a3 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, a3) )
      ++*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
    v20 = HIBYTE(*(_DWORD *)(v9 + 32));
    if ( (*(_DWORD *)(v9 + 32) & 0x8000000) != 0 )
      goto LABEL_33;
  }
LABEL_36:
  if ( (*(_BYTE *)(v9 + 34) & 7) != 6 )
LABEL_24:
    MiBadShareCount(48 * ((a3 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
  v21 = MiDecommitFreePage(a1, a2, 48 * ((a3 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v39 )
  {
    v25 = *(_QWORD *)(((v39 - 32) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
    v26 = *(_QWORD *)v25;
    _InterlockedDecrement((volatile signed __int32 *)(v25 + 392));
    if ( v32 )
    {
      v27 = 0;
      v28 = *((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(v32 + 174));
      MiLockCloneBlockAtDpc(v39);
      v29 = v39;
      v38 = v28;
      if ( v28 != v26 )
      {
        v10 = (*(_QWORD *)(v39 + 8))-- == 1LL;
        v38 = v28;
        if ( v10 )
        {
          v27 = 5;
          v38 = v28;
        }
      }
    }
    else
    {
      v38 = v26;
      MiLockCloneBlockAtDpc(v39);
      v29 = v39;
      v27 = 0;
    }
    v30 = *(_QWORD *)(v29 + 24) - 1LL;
    *(_QWORD *)(v29 + 24) = v30;
    _InterlockedAnd64((volatile signed __int64 *)(v29 + 16), 0x7FFFFFFFFFFFFFFFuLL);
    v21 = 4;
    if ( v30 || (v6 = 1, v21 = MiDeleteMergedPte(v26, (__int64 *)v29), v21 != 3) || v38 == v26 )
    {
      MiReturnCloneCharges(v26, v27);
      if ( !v6 )
        goto LABEL_40;
    }
    else
    {
      v21 = 4;
      MiReturnCloneCharges(v26, v27 & 0xFFFFFFFE);
    }
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogCombinedPteDelete(v39);
    MiFreeCombineBlock(v39 - 32, 1LL);
  }
  else if ( v8 )
  {
    v21 = MiDecrementCloneBlockReference((ULONG_PTR)v8, BugCheckParameter3);
  }
  else
  {
    v23 = *(_DWORD *)(a1 + 40);
    if ( v23 && (v23 == 3 || (*(_DWORD *)(a1 + 156) & 0x20) == 0) && v21 == 3 )
      v21 = 4;
  }
LABEL_40:
  result = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(a1 + 128) )
  {
    result = MiChargeCommit(v18, 1LL, 4LL, v22);
  }
  else if ( v21 == 3 )
  {
    ++*(_QWORD *)(result + 8);
  }
  if ( v16 )
    result = MiReleasePageFileInfo(v18, v16, 1LL);
  if ( v21 == 5 )
  {
    result = *(_QWORD *)(a1 + 24);
    ++*(_QWORD *)(result + 16);
  }
  return result;
}
