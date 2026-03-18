/*
 * XREFs of MiCompletePrivateZeroFault @ 0x14024C030
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x1402420D0 (MiResolvePrivateZeroFault.c)
 * Callees:
 *     MiUserPdeOrAbove @ 0x14020F170 (MiUserPdeOrAbove.c)
 *     MiSwizzleInvalidPte @ 0x14021A0C0 (MiSwizzleInvalidPte.c)
 *     MiLockAndDecrementShareCount @ 0x140227554 (MiLockAndDecrementShareCount.c)
 *     MiSetPfnIdentity @ 0x1402293B0 (MiSetPfnIdentity.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402480C0 (MiPteInShadowRange.c)
 *     MiPteHasShadow @ 0x14024B550 (MiPteHasShadow.c)
 *     MiAllocateWsle @ 0x14024B590 (MiAllocateWsle.c)
 *     MiInitializePfn @ 0x14024CD40 (MiInitializePfn.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024DAC0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnlockVadTree @ 0x1402A8690 (MiUnlockVadTree.c)
 *     MiGetLeafVa @ 0x1402B5480 (MiGetLeafVa.c)
 *     MiLockVadTree @ 0x1402B54D0 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1402B57D0 (MiLocateAddress.c)
 *     MiWriteValidPteNewProtection @ 0x1402B83C0 (MiWriteValidPteNewProtection.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x1402BB160 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiIsAddressGlobal @ 0x1402C3B60 (MiIsAddressGlobal.c)
 *     MiClearPageFileReservation @ 0x1402CC084 (MiClearPageFileReservation.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiDecrementShareCountEx @ 0x1403427F0 (MiDecrementShareCountEx.c)
 *     MiReleaseFreshPage @ 0x1403432C0 (MiReleaseFreshPage.c)
 *     MiAdvanceFaultList @ 0x14037A740 (MiAdvanceFaultList.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 *     MiUpdatePageTableUseCount @ 0x1403DEED0 (MiUpdatePageTableUseCount.c)
 *     MiSanitizeShadowPxe @ 0x1403FDBDC (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1403FDC5C (MiWritePteShadow.c)
 */

__int64 __fastcall MiCompletePrivateZeroFault(__int64 a1, ULONG_PTR *a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rdx
  __int64 v6; // r14
  _QWORD *v7; // rcx
  unsigned __int64 v8; // r14
  ULONG_PTR v9; // r9
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // edi
  int v15; // r13d
  __int64 v16; // rbx
  unsigned int v17; // ebp
  unsigned __int64 v18; // rdi
  unsigned __int64 LeafVa; // rcx
  int IsAddressGlobal; // eax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // r10
  __int64 v28; // rbx
  ULONG_PTR v29; // rsi
  bool v30; // zf
  __int64 v31; // rbp
  int v32; // ecx
  __int64 v33; // r8
  unsigned int v34; // edx
  __int64 v35; // rbp
  __int64 v36; // rbp
  ULONG_PTR v37; // rdi
  __int64 v38; // r8
  __int64 v39; // rdx
  char v40; // cl
  __int64 v41; // rbx
  int v42; // eax
  __int16 v43; // ax
  unsigned int v44; // ecx
  int v45; // ebp
  __int64 v46; // rcx
  __int64 v47; // rdi
  unsigned int v48; // ebx
  __int64 v49; // rcx
  unsigned int v50; // ebx
  unsigned int v51; // edi
  ULONG_PTR *v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rax
  unsigned __int64 v55; // rdi
  __int64 v56; // rcx
  __int64 v57; // rdi
  int v58; // r9d
  int v59; // esi
  __int64 v60; // rcx
  unsigned int v61; // esi
  __int64 v63; // rdi
  int v64; // ebx
  __int64 v65; // rcx
  _KPROCESS *v66; // rax
  __int64 v67; // r11
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rcx
  char v73; // al
  __int64 v74; // rbx
  __int64 v75; // rax
  unsigned int v76; // edi
  __int64 Address; // rax
  __int64 v78; // rdx
  int v79; // eax
  int v80; // eax
  unsigned __int64 v81; // [rsp+40h] [rbp-A8h] BYREF
  BOOL v82; // [rsp+48h] [rbp-A0h]
  unsigned int v83; // [rsp+4Ch] [rbp-9Ch]
  int v84; // [rsp+50h] [rbp-98h]
  unsigned int v85; // [rsp+54h] [rbp-94h]
  unsigned __int64 v86; // [rsp+58h] [rbp-90h]
  _KPROCESS *Process; // [rsp+60h] [rbp-88h]
  __int64 DemandZeroPte; // [rsp+68h] [rbp-80h] BYREF
  __int64 v89; // [rsp+70h] [rbp-78h] BYREF
  __int64 v90; // [rsp+78h] [rbp-70h]
  unsigned __int64 v91; // [rsp+80h] [rbp-68h]
  __int64 v92; // [rsp+88h] [rbp-60h]
  __int64 v93; // [rsp+90h] [rbp-58h]
  __int64 v94; // [rsp+98h] [rbp-50h]
  char v95; // [rsp+F0h] [rbp+8h]
  unsigned __int64 v96; // [rsp+100h] [rbp+18h] BYREF
  int v97; // [rsp+108h] [rbp+20h]

  v96 = a3;
  v4 = *(_QWORD *)(a1 + 56);
  v6 = (*(_QWORD *)(a1 + 16) >> 9) & 0x7FFFFFFFF8LL;
  v91 = v4;
  v7 = *(_QWORD **)(a1 + 8);
  v8 = v6 - 0x98000000000LL;
  v9 = 0LL;
  v95 = 0;
  v82 = 0;
  v90 = v7[7];
  v10 = v7[2];
  if ( (v10 & 1) != 0 )
    v82 = *(_BYTE *)(v10 & 0xFFFFFFFFFFFFFFFEuLL) == 3;
  v11 = 0LL;
  if ( (*(_BYTE *)a1 & 0x20) != 0 )
    v11 = v4;
  v94 = v11;
  v12 = (*v7 >> 9) & 0x7FFFFFFFF8LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v84 = 0;
  v13 = *(_QWORD *)(a1 + 64);
  v14 = 8208;
  v92 = v12 - 0x98000000000LL;
  v93 = v13;
  v97 = 8208;
  if ( v13 )
  {
    v4 = *(unsigned int *)(v13 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 34) << 32);
    if ( v4 == 0x7FFFFFFFELL )
      v14 = 8272;
    v97 = v14;
  }
  v15 = *(_DWORD *)(a1 + 32);
  if ( (v15 & 2) == 0 || v8 > 0xFFFFF6BFFFFFFF78uLL || v8 < 0xFFFFF68000000000uLL )
    v15 |= 0x80000000;
  if ( !*(_DWORD *)(a1 + 36) )
    __incgsdword(0x2E9Cu);
  v83 = 0;
  v85 = 0;
  v16 = v15 & 0x1F;
  v17 = 0;
  v18 = MmProtectToPteMask[v16] & 0xFFF0000000000E5EuLL | 0x21;
  if ( v8 < 0xFFFFF68000000000uLL || v8 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v22 = MmProtectToPteMask[v16] & 0xFFF0000000000E5EuLL | 0x121;
  }
  else
  {
    if ( v8 >= 0xFFFFF6FB40000000uLL && v8 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      if ( v8 == 0xFFFFF6FB7DBEDF68uLL )
      {
        v18 = MmProtectToPteMask[v16] & 0x7FF0000000000E5ELL | 0x8000000000000021uLL;
      }
      else if ( (v15 & 0x4000000) == 0 )
      {
        v18 = MmProtectToPteMask[v16] & 0x7FF0000000000E5ELL | 0x21;
      }
      if ( (unsigned int)MiUserPdeOrAbove(v8) )
        v18 |= 4uLL;
      v9 = 0LL;
    }
    LeafVa = (__int64)(v8 << 25) >> 16;
    if ( (v15 & 0x4000000) != 0 )
      LeafVa = MiGetLeafVa(LeafVa, v4, a3, 0LL);
    if ( LeafVa <= 0x7FFFFFFEFFFFLL )
      v18 |= 4uLL;
    IsAddressGlobal = MiIsAddressGlobal(LeafVa, v18, a3, v9);
    a3 = v96;
    v22 = v18 | 0x100;
    if ( !IsAddressGlobal )
      v22 = v21;
  }
  if ( v15 < 0 && (v15 & 5) == 4 )
    v22 |= 0x42uLL;
  if ( (v15 & 0x40000000) != 0 )
    v22 &= ~4uLL;
  if ( (v15 & 0x20000000) != 0 )
    v22 = ((unsigned __int64)(unsigned __int8)word_140E2EB44 << 8) ^ (((unsigned __int64)(unsigned __int8)word_140E2EB44 << 8) ^ v22) & 0xFFFFFFFFFFFFFEFFuLL;
  v23 = v22 & 0xFFFFFFFFFFFFFEFFuLL;
  if ( (v15 & 0x8000000) == 0 )
    v23 = v22;
  v24 = v23 | 0x80;
  if ( (v15 & 0x4000000) == 0 )
    v24 = v23;
  v81 = v24 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  if ( a3 > 1 )
  {
    v72 = *(_QWORD *)(a1 + 8);
    v73 = *(_BYTE *)(v72 + 69);
    if ( (v73 & 8) == 0 )
    {
      v95 = 1;
      *(_BYTE *)(v72 + 69) = v73 | 8;
    }
  }
  v25 = v9;
  while ( 1 )
  {
    v26 = 0xFFFFDE0000000000uLL;
    v27 = 0xAAAAAAAAAAAAAAABuLL;
    v86 = v25;
    if ( v25 >= a3 )
    {
      v51 = 273;
      goto LABEL_119;
    }
    v28 = *(_QWORD *)v8;
    if ( v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= 0xFFFFF6FB7DBED7F8uLL && (v28 & 1) != 0 )
    {
      if ( (v28 & 0x42) == 0 || (v28 & 0x20) == 0 )
      {
        v66 = MiPteHasShadow();
        if ( v66 )
        {
          KernelWaitTime = v66[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v69 = *(_QWORD *)(KernelWaitTime + 8 * (v67 & (v8 >> 3)));
            if ( (v69 & 0x20) != 0 )
              v28 |= 0x20uLL;
            v70 = v28;
            v28 |= 0x42uLL;
            if ( (v69 & 0x42) == 0 )
              v28 = v70;
          }
        }
      }
      v25 = v86;
    }
    if ( *(_DWORD *)(a1 + 36) )
    {
      if ( (v28 & 0x400) == 0 && (v28 & 0x4000000) != 0 && !v25 )
      {
        MI_READ_PTE_LOCK_FREE((unsigned __int64)&v81);
        MiWriteValidPteNewProtection((ULONG_PTR)&v81);
LABEL_101:
        v9 = 0LL;
        v26 = 0xFFFFDE0000000000uLL;
        v27 = 0xAAAAAAAAAAAAAAABuLL;
      }
    }
    else if ( !v28 )
    {
      v56 = *(unsigned int *)(a1 + 32);
      v83 = v17 + 1;
      DemandZeroPte = MiMakeDemandZeroPte(v56);
      v28 = DemandZeroPte;
      v57 = DemandZeroPte;
      v59 = v58;
      if ( MiPteInShadowRange(v8) )
      {
        v79 = MiSanitizeShadowPxe(v60, &DemandZeroPte);
        v57 = DemandZeroPte;
        v59 = v79;
      }
      *(_QWORD *)v8 = v57;
      if ( v59 )
        MiWritePteShadow(v8, v57);
      goto LABEL_101;
    }
    v29 = *a2;
    if ( *a2 )
    {
      v30 = a2[2]-- == 1;
      *a2 = *(_QWORD *)v29;
      if ( v30 )
        a2[1] = v9;
    }
    v31 = v27 * ((__int64)(v29 - v26) >> 4);
    if ( *(_DWORD *)(a1 + 36) && !*(_QWORD *)(a1 + 72) && (v28 & 0x400) != 0 )
    {
      v53 = qword_140E2D940;
      v54 = v28;
      if ( qword_140E2D940 && (v28 & 0x10) == 0 )
        v54 = v28 & ~qword_140E2D940;
      if ( v54 >> 16 )
      {
        v76 = v9;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v76 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v53) )
            {
              HvlNotifyLongSpinWait(v76);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v29 + 24) < 0 );
        }
        MiSetPfnIdentity(v29, 4u);
        _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        v28 = (v28 & 0x3E0) != 0 ? v28 & 0xFFFFFFFFFFFFFBFFuLL : v9;
      }
      v55 = MiMapPageInHyperSpaceWorker(v31, 0LL, 0x80000000LL);
      memset64((void *)v55, v28 & 0xFFFFFFFFFFFFFFFDuLL, 0x200uLL);
      v32 = v97 | 8;
      *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
      *(_QWORD *)(((v55 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
    }
    else
    {
      v32 = v97;
    }
    v33 = *(unsigned int *)(a1 + 32);
    v34 = v32 | 0x20;
    if ( (*(_BYTE *)a1 & 2) == 0 )
      v34 = v32;
    v97 = v34;
    MiInitializePfn(v29, v8, v33, v34);
    if ( v91
      && (__int64)(v8 << 25) >> 16 == *(_QWORD *)(*(_QWORD *)(v91 + 8) + 16LL * *(_QWORD *)(v91 + 24))
                                    + (*(_QWORD *)(v91 + 32) << 12)
      && *(_BYTE *)v91 != 5 )
    {
      MiAdvanceFaultList(v91);
    }
    v35 = v31 & 0xFFFFFFFFFFLL;
    if ( (*(_DWORD *)a1 & 0x10) == 0 )
      break;
    v89 = MiSwizzleInvalidPte(32 * ((v35 << 7) | *(_DWORD *)(a1 + 32) & 0x1F | 0x40));
    v63 = v89;
    v64 = 0;
    if ( MiPteInShadowRange(v8) )
    {
      v80 = MiSanitizeShadowPxe(v65, &v89);
      v63 = v89;
      v64 = v80;
    }
    *(_QWORD *)v8 = v63;
    if ( v64 )
      MiWritePteShadow(v8, v63);
    if ( (*(_DWORD *)a1 & 0x100) != 0 )
      _InterlockedIncrement64((volatile signed __int64 *)Process[1].Padding);
    MiLockAndDecrementShareCount(v29, 2);
LABEL_65:
    v8 += 8LL;
    a3 = v96;
    v25 = v86 + 1;
    v17 = v83;
    v9 = 0LL;
  }
  v36 = v35 << 12;
  v37 = v36 & 0xFFFFFFFFFFFFFFDFuLL | v81 & 0xFFF0000000000FDFuLL;
  if ( (*(_DWORD *)a1 & 2) == 0 )
    v37 = v36 | v81 & 0xFFF0000000000FFFuLL | 0x20;
  v81 = v37;
  v38 = 0x3FFFFFFF78LL;
  if ( v8 > 0xFFFFF6BFFFFFFF78uLL || v8 < 0xFFFFF68000000000uLL )
    v37 = v81;
  if ( *(_QWORD *)(a1 + 72) )
  {
    if ( _bittest64(&MiFlags, 0x24u) && (v37 & 0x20) == 0 && v8 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit(v8, v37);
    *(_QWORD *)v8 = v37;
    goto LABEL_65;
  }
  if ( v8 != v92 && (*(_DWORD *)a1 & 0x200) != 0 )
  {
    v37 &= ~0x20uLL;
    v81 = v37;
    if ( v15 < 0
      && v8 <= 0xFFFFF6BFFFFFFF78uLL
      && v8 >= 0xFFFFF68000000000uLL
      && (Process[1].DirectoryTableBase & 0x800000000000LL) != 0 )
    {
      if ( v84 )
      {
        if ( v84 == 2 )
        {
LABEL_205:
          v37 &= 0xFFFFFFFFFFFFFFBDuLL;
          v81 = v37;
        }
      }
      else
      {
        if ( v93 )
        {
          v74 = v93;
        }
        else
        {
          MiLockVadTree(1LL);
          Address = MiLocateAddress(*(_QWORD *)(a1 + 16));
          LOBYTE(v78) = 17;
          v74 = Address;
          MiUnlockVadTree(1LL, v78);
          v37 = v81;
        }
        if ( (*(_DWORD *)(v74 + 48) & 0x600000) == 0x600000 )
        {
          v84 = 2;
          goto LABEL_205;
        }
        v84 = 1;
      }
    }
  }
  v39 = *(_QWORD *)(a1 + 8);
  v40 = *(_BYTE *)(v39 + 69);
  v41 = v39 + 56;
  if ( (v40 & 9) != 8 || (v40 & 4) != 0 )
  {
    v44 = v82 & 0xFFFFFFFB;
  }
  else
  {
    v42 = *(unsigned __int16 *)(v39 + 66);
    if ( (_WORD)v42 )
    {
      if ( v42 + *(unsigned __int16 *)(v39 + 64) != (((unsigned int)v8 >> 3) & 0x1FF) )
        goto LABEL_56;
      if ( *(__int64 *)(v29 + 40) < 0 )
      {
        if ( (*(_BYTE *)(v39 + 69) & 2) != 0 )
LABEL_56:
          MiEmptyDeferredWorkingSetEntries(v39 + 56, v39, v38);
      }
      else if ( (*(_BYTE *)(v39 + 69) & 2) == 0 )
      {
        goto LABEL_56;
      }
    }
    v43 = *(_WORD *)(v41 + 10);
    if ( v43 )
    {
      *(_WORD *)(v41 + 10) = v43 + 1;
    }
    else
    {
      *(_WORD *)(v41 + 10) = 1;
      *(_WORD *)(v41 + 8) = ((unsigned int)v8 >> 3) & 0x1FF;
      if ( *(__int64 *)(v29 + 40) >= 0 )
        *(_BYTE *)(v41 + 13) |= 2u;
      else
        *(_BYTE *)(v41 + 13) &= ~2u;
    }
    v39 = *(_QWORD *)(a1 + 8);
    v44 = v82 | 4;
    if ( (*(_BYTE *)(v39 + 69) & 0x10) == 0
      || (v75 = *(_QWORD *)(v39 + 16), (v75 & 1) != 0) && *(_BYTE *)(v75 & 0xFFFFFFFFFFFFFFFEuLL) == 2 )
    {
      v37 = v81;
    }
    else
    {
      v37 = v81 & 0xFFFFFFFFFFFFFFDFuLL;
      v81 &= ~0x20uLL;
    }
  }
  v45 = v44 | 0x10;
  if ( (*(_BYTE *)(v39 + 69) & 1) == 0 )
    v45 = v44;
  v82 = v45;
  if ( (unsigned int)MiAllocateWsle(v90, v8, v29, 0, v37, v45, v94) )
  {
    ++v85;
    goto LABEL_65;
  }
  v46 = 0xFFFFFFFFFFLL;
  v47 = 48 * (*(_QWORD *)(v29 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v48 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v48 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v46) )
      {
        HvlNotifyLongSpinWait(v48);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v29 + 24) < 0 );
  }
  v96 = *(_QWORD *)(v29 + 16);
  if ( (v96 & 4) != 0 )
  {
    *(_QWORD *)(v29 + 16) &= ~4uLL;
    MiClearPageFileReservation(&v96);
  }
  else
  {
    v96 = 0LL;
  }
  *(_QWORD *)(v29 + 16) &= ~2uLL;
  *(_QWORD *)(v29 + 24) |= 0x4000000000000000uLL;
  MiDecrementShareCountEx(v29, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v50 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v47 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v50 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v49) )
      {
        HvlNotifyLongSpinWait(v50);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v47 + 24) < 0 );
  }
  MiDecrementShareCountEx(v47, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v51 = -1073741801;
  while ( 1 )
  {
    v52 = (ULONG_PTR *)*a2;
    if ( !*a2 )
      break;
    v30 = a2[2]-- == 1;
    *a2 = *v52;
    if ( v30 )
      a2[1] = 0LL;
    MiReleaseFreshPage(v52);
  }
  v30 = (v45 & 4) == 0;
  v17 = v83;
  if ( !v30 )
    --*(_WORD *)(*(_QWORD *)(a1 + 8) + 66LL);
LABEL_119:
  if ( v95 )
  {
    v71 = *(_QWORD *)(a1 + 8);
    if ( (*(_BYTE *)(v71 + 69) & 8) != 0 && *(_WORD *)(v71 + 66) )
      MiEmptyDeferredWorkingSetEntries(v71 + 56, v26, a3);
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 69LL) &= ~8u;
  }
  if ( !*(_DWORD *)(a1 + 36) && v17 )
    MiUpdatePageTableUseCount(*(_QWORD *)(a1 + 16), v17);
  v61 = v85;
  if ( v85 )
  {
    if ( (*(_DWORD *)a1 & 0x100) != 0 )
      _InterlockedAdd64((volatile signed __int64 *)Process[1].Padding, v85);
    __addgsdword(0x2E9Cu, v61);
  }
  return v51;
}
