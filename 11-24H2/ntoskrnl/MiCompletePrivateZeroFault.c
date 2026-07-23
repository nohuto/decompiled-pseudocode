/*
 * XREFs of MiCompletePrivateZeroFault @ 0x14024A090
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x1403087F0 (MiResolvePrivateZeroFault.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140202630 (MiPteInShadowRange.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140203820 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1402038A0 (MiWritePteShadow.c)
 *     MiBadShareCount @ 0x140206F78 (MiBadShareCount.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x14020C4A0 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiUserPdeOrAbove @ 0x1402127C8 (MiUserPdeOrAbove.c)
 *     MiSetPfnIdentity @ 0x140216B00 (MiSetPfnIdentity.c)
 *     MiLockVadTree @ 0x140240750 (MiLockVadTree.c)
 *     MiAddWorkingSetEntries @ 0x140242260 (MiAddWorkingSetEntries.c)
 *     MiWriteValidPteNewProtection @ 0x140245FB0 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiInitializePfn @ 0x14024B260 (MiInitializePfn.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     MiAllocateWsle @ 0x14024C6D0 (MiAllocateWsle.c)
 *     MiDecrementShareCountEx @ 0x14024D2E0 (MiDecrementShareCountEx.c)
 *     MiReleaseFreshPage @ 0x14024ED10 (MiReleaseFreshPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlockVadTree @ 0x140291980 (MiUnlockVadTree.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiSwizzleInvalidPte @ 0x1402FD620 (MiSwizzleInvalidPte.c)
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     MiClearPageFileReservation @ 0x14030714C (MiClearPageFileReservation.c)
 *     MiGetPagingFileOffset @ 0x140341C00 (MiGetPagingFileOffset.c)
 *     MiAdvanceFaultList @ 0x140342110 (MiAdvanceFaultList.c)
 *     MiLocateAddress @ 0x140344F70 (MiLocateAddress.c)
 *     MiIsAddressGlobal @ 0x14034E540 (MiIsAddressGlobal.c)
 *     MiUpdatePageTableUseCount @ 0x1403D1B50 (MiUpdatePageTableUseCount.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiCompletePrivateZeroFault(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // r9
  __int64 *v5; // r13
  __int64 v6; // r15
  _QWORD *v8; // rcx
  unsigned __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // esi
  int v15; // esi
  __int64 v16; // rbx
  int v17; // r11d
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rcx
  int IsAddressGlobal; // eax
  unsigned __int64 v21; // rdx
  int v22; // r8d
  unsigned __int64 v23; // rdi
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // r8
  unsigned __int64 v29; // rcx
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v31; // rsi
  __int64 v32; // r14
  bool v33; // zf
  unsigned __int64 v34; // rbx
  int v35; // ecx
  unsigned int v36; // esi
  _QWORD *v37; // rdx
  __int64 v38; // r9
  __int64 v39; // rbx
  ULONG_PTR v40; // rax
  ULONG_PTR v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rdx
  char v44; // cl
  __int64 v45; // rdi
  int v46; // eax
  __int64 v47; // rcx
  unsigned __int64 v48; // rdx
  __int64 v49; // r9
  __int16 v50; // ax
  unsigned int v51; // ecx
  int v52; // esi
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdi
  int v58; // ebx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // rbx
  unsigned int v62; // edi
  __int64 v63; // r9
  __int64 v64; // rdx
  unsigned __int64 v65; // rcx
  __int64 v66; // r13
  __int64 v67; // rdi
  unsigned __int64 v68; // r8
  ULONG_PTR BugCheckParameter4; // rax
  __int64 *v70; // r9
  __int64 v71; // rdi
  __int64 v72; // rax
  __int64 v73; // rcx
  unsigned int v74; // edi
  unsigned int v75; // edi
  __int64 *v76; // rcx
  __int64 v77; // rcx
  __int64 v78; // rax
  unsigned __int64 v79; // rdi
  _KPROCESS *v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rcx
  __int64 v84; // rax
  int v85; // eax
  unsigned int v86; // r14d
  int v88; // ebx
  __int64 v89; // rdi
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  unsigned int v94; // edi
  __int64 v95; // rcx
  char v96; // al
  __int64 v97; // rcx
  char v98; // al
  __int64 v99; // rax
  __int64 v100; // r8
  __int64 v101; // rax
  __int64 v102; // rdi
  unsigned int v103; // edi
  int v104; // eax
  int v105; // eax
  __int64 Address; // rax
  __int64 v107; // rdx
  BOOL v108; // [rsp+40h] [rbp-69h]
  int v109; // [rsp+44h] [rbp-65h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-61h] BYREF
  int v111; // [rsp+50h] [rbp-59h]
  unsigned int v112; // [rsp+54h] [rbp-55h]
  unsigned __int64 v113; // [rsp+58h] [rbp-51h]
  int v114; // [rsp+60h] [rbp-49h]
  int v115[2]; // [rsp+68h] [rbp-41h] BYREF
  _KPROCESS *Process; // [rsp+70h] [rbp-39h]
  __int64 v117; // [rsp+78h] [rbp-31h] BYREF
  unsigned __int64 v118; // [rsp+80h] [rbp-29h]
  __int64 v119; // [rsp+88h] [rbp-21h] BYREF
  __int64 v120; // [rsp+90h] [rbp-19h]
  __int64 v121; // [rsp+98h] [rbp-11h]
  __int64 v122; // [rsp+A0h] [rbp-9h]
  char v123; // [rsp+110h] [rbp+67h]
  int v126; // [rsp+120h] [rbp+77h]
  int v127; // [rsp+128h] [rbp+7Fh]

  v3 = *(_QWORD *)(a1 + 56);
  v4 = a3;
  v5 = a2;
  v6 = (*(_QWORD *)(a1 + 16) >> 9) & 0x7FFFFFFFF8LL;
  v118 = v3;
  v8 = *(_QWORD **)(a1 + 8);
  v9 = v6 - 0x98000000000LL;
  v123 = 0;
  v108 = 0;
  *(_QWORD *)v115 = v8[7];
  v10 = v8[2];
  if ( (v10 & 1) != 0 )
    v108 = *(_BYTE *)(v10 & 0xFFFFFFFFFFFFFFFEuLL) == 3;
  v11 = 0LL;
  if ( (*(_BYTE *)a1 & 0x20) != 0 )
    v11 = v3;
  v122 = v11;
  v12 = (*v8 >> 9) & 0x7FFFFFFFF8LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v111 = 0;
  v13 = *(_QWORD *)(a1 + 64);
  v14 = 8208;
  v120 = v12 - 0x98000000000LL;
  v121 = v13;
  v127 = 8208;
  if ( v13 )
  {
    if ( (*(unsigned int *)(v13 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 34) << 32)) == 0x7FFFFFFFELL )
      v14 = 8272;
    v127 = v14;
  }
  v15 = *(_DWORD *)(a1 + 32);
  v114 = v15;
  if ( (v15 & 2) == 0 || v9 > 0xFFFFF6BFFFFFFF78uLL || v9 < 0xFFFFF68000000000uLL )
  {
    v15 |= 0x80000000;
    v114 = v15;
  }
  if ( !*(_DWORD *)(a1 + 36) )
    __incgsdword(0x2E9Cu);
  v109 = 0;
  v112 = 0;
  v16 = v15 & 0x1F;
  v17 = 0;
  v18 = MmProtectToPteMask[v16] & 0xFFF0000000000E5EuLL | 0x21;
  if ( v9 < 0xFFFFF68000000000uLL || v9 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v23 = MmProtectToPteMask[v16] & 0xFFF0000000000E5EuLL | 0x121;
    v22 = v15 & 0x4000000;
  }
  else
  {
    if ( v9 >= 0xFFFFF6FB40000000uLL && v9 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      if ( v9 == 0xFFFFF6FB7DBEDF68uLL )
      {
        v18 = MmProtectToPteMask[v16] & 0x7FF0000000000E5ELL | 0x8000000000000021uLL;
      }
      else if ( (v15 & 0x4000000) == 0 )
      {
        v18 = MmProtectToPteMask[v16] & 0x7FF0000000000E5ELL | 0x21;
      }
      v85 = MiUserPdeOrAbove(v9);
      v4 = a3;
      if ( v85 )
        v18 |= 4uLL;
    }
    v19 = (__int64)(v9 << 25) >> 16;
    if ( (v15 & 0x4000000) != 0 && v19 >= 0xFFFFF68000000000uLL )
    {
      do
      {
        if ( v19 > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        v19 = (__int64)(v19 << 25) >> 16;
      }
      while ( v19 >= 0xFFFFF68000000000uLL );
    }
    if ( v19 <= 0x7FFFFFFEFFFFLL )
      v18 |= 4uLL;
    IsAddressGlobal = MiIsAddressGlobal(v19, v18, v15 & 0x4000000, v4);
    v23 = v18 | 0x100;
    if ( !IsAddressGlobal )
      v23 = v21;
  }
  v24 = v23 | 0x42;
  if ( (v15 & 5) != 4 || v15 >= 0 )
    v24 = v23;
  v25 = v24 & 0xFFFFFFFFFFFFFFFBuLL;
  if ( (v15 & 0x40000000) == 0 )
    v25 = v24;
  if ( (v15 & 0x20000000) != 0 )
    v25 = ((unsigned __int64)(unsigned __int8)word_140E2EEC4 << 8) ^ (((unsigned __int64)(unsigned __int8)word_140E2EEC4 << 8) ^ v25) & 0xFFFFFFFFFFFFFEFFuLL;
  v26 = v25 & 0xFFFFFFFFFFFFFEFFuLL;
  if ( (v15 & 0x8000000) == 0 )
    v26 = v25;
  v27 = v26 | 0x80;
  if ( !v22 )
    v27 = v26;
  BugCheckParameter2 = v27 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  if ( v4 > 1 )
  {
    v95 = *(_QWORD *)(a1 + 8);
    v96 = *(_BYTE *)(v95 + 69);
    if ( (v96 & 8) == 0 )
    {
      v123 = 1;
      *(_BYTE *)(v95 + 69) = v96 | 8;
    }
  }
  v28 = 0LL;
  v29 = 0LL;
  while ( 1 )
  {
    KernelWaitTime = 0xFFFFF6FB7DBED000uLL;
    v113 = v29;
    if ( v29 >= v4 )
    {
      v75 = 273;
      goto LABEL_175;
    }
    v31 = *(_QWORD *)v9;
    if ( v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= 0xFFFFF6FB7DBED7F8uLL && (v31 & 1) != 0 )
    {
      if ( ((v31 & 0x42) == 0 || (v31 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
      {
        v80 = KeGetCurrentThread()->ApcState.Process;
        if ( v80->AddressPolicy != 1 )
        {
          KernelWaitTime = v80[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v81 = *(_QWORD *)(KernelWaitTime + 8 * ((v9 >> 3) & 0x1FF));
            if ( (v81 & 0x20) != 0 )
              v31 |= 0x20uLL;
            v82 = v31;
            v31 |= 0x42uLL;
            if ( (v81 & 0x42) == 0 )
              v31 = v82;
          }
        }
      }
      v29 = v113;
    }
    if ( *(_DWORD *)(a1 + 36) )
    {
      if ( (v31 & 0x400) == 0 && (v31 & 0x4000000) != 0 && !v29 )
      {
        v99 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&BugCheckParameter2);
        MiWriteValidPteNewProtection((ULONG_PTR)&BugCheckParameter2, v99 | 0x40, v100);
        v28 = 0LL;
      }
    }
    else if ( !v31 )
    {
      v31 = 32LL * (*(_DWORD *)(a1 + 32) & 0x1F);
      v109 = v17 + 1;
      if ( qword_140E2DCC0 )
      {
        if ( (qword_140E2DCC0 & v31) != 0 )
          v31 |= 0x10uLL;
        else
          v31 |= qword_140E2DCC0;
      }
      v117 = v31;
      v57 = v31;
      v58 = 0;
      if ( MiPteInShadowRange(v9) )
      {
        v104 = MiSanitizeShadowPxe(v59, (__int64)&v117, v60);
        v57 = v117;
        v58 = v104;
      }
      *(_QWORD *)v9 = v57;
      if ( v58 )
        MiWritePteShadow(v9, v57, v60, v4);
      v28 = 0LL;
    }
    v32 = *v5;
    if ( *v5 )
    {
      v33 = v5[2]-- == 1;
      *v5 = *(_QWORD *)v32;
      if ( v33 )
        v5[1] = 0LL;
    }
    v34 = 0xAAAAAAAAAAAAAAABuLL * ((v32 + 0x220000000000LL) >> 4);
    if ( *(_DWORD *)(a1 + 36) && !*(_QWORD *)(a1 + 72) && (v31 & 0x400) != 0 )
    {
      v77 = qword_140E2DCC0;
      v78 = v31;
      if ( qword_140E2DCC0 && (v31 & 0x10) == 0 )
        v78 = v31 & ~qword_140E2DCC0;
      if ( v78 >> 16 )
      {
        v103 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v103 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v77, KernelWaitTime, v28, v4) )
            {
              HvlNotifyLongSpinWait(v103);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v32 + 24) < 0 );
        }
        MiSetPfnIdentity(v32, 4u);
        _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        v31 = (v31 & 0x3E0) != 0 ? v31 & 0xFFFFFFFFFFFFFBFFuLL : 0LL;
      }
      v79 = MiMapPageInHyperSpaceWorker(v34, 0LL, 0x80000000LL);
      memset64((void *)v79, v31 & 0xFFFFFFFFFFFFFFFDuLL, 0x200uLL);
      v35 = v127 | 8;
      *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
      *(_QWORD *)(((v79 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
    }
    else
    {
      v35 = v127;
    }
    v36 = v35 | 0x20;
    if ( (*(_BYTE *)a1 & 2) == 0 )
      v36 = v35;
    v127 = v36;
    MiInitializePfn(v32, v9, *(unsigned int *)(a1 + 32), v36);
    if ( v118 )
    {
      v37 = (_QWORD *)(*(_QWORD *)(v118 + 8) + 16LL * *(_QWORD *)(v118 + 24));
      if ( (__int64)(v9 << 25) >> 16 == *v37 + (*(_QWORD *)(v118 + 32) << 12) && *(_BYTE *)v118 != 5 )
        MiAdvanceFaultList(v118);
    }
    v39 = v34 & 0xFFFFFFFFFFLL;
    if ( (*(_DWORD *)a1 & 0x10) == 0 )
      break;
    v119 = MiSwizzleInvalidPte(32 * ((v39 << 7) | *(_DWORD *)(a1 + 32) & 0x1F | 0x40), v37);
    v88 = 0;
    v89 = v119;
    if ( MiPteInShadowRange(v9) )
    {
      v105 = MiSanitizeShadowPxe(v91, (__int64)&v119, v92);
      v89 = v119;
      v88 = v105;
    }
    *(_QWORD *)v9 = v89;
    if ( v88 )
      MiWritePteShadow(v9, v89, v92, v93);
    if ( (*(_DWORD *)a1 & 0x100) != 0 )
      _InterlockedIncrement64((volatile signed __int64 *)Process[1].Padding);
    v94 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v94 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v91, v90, v92, v93) )
        {
          HvlNotifyLongSpinWait(v94);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v32 + 24) < 0 );
    }
    MiDecrementShareCountEx(v32, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_82:
    v9 += 8LL;
    v4 = a3;
    v29 = v113 + 1;
    v17 = v109;
    v28 = 0LL;
  }
  v40 = BugCheckParameter2 & 0xFFF0000000000FFFuLL | (v39 << 12);
  v41 = BugCheckParameter2 & 0xFFF0000000000FDFuLL | (v39 << 12);
  v42 = v40 | 0x20;
  if ( (*(_DWORD *)a1 & 2) == 0 )
    v41 = v42;
  BugCheckParameter2 = v41;
  if ( v9 > 0xFFFFF6BFFFFFFF78uLL || v9 < 0xFFFFF68000000000uLL )
    v41 = BugCheckParameter2;
  if ( *(_QWORD *)(a1 + 72) )
  {
    if ( _bittest64(&MiFlags, 0x24u) && (v41 & 0x20) == 0 && v9 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit(v9, v41, 128LL);
    *(_QWORD *)v9 = v41;
    goto LABEL_82;
  }
  if ( v9 != v120 && (*(_DWORD *)a1 & 0x200) != 0 )
  {
    v41 &= ~0x20uLL;
    BugCheckParameter2 = v41;
    if ( v114 < 0
      && v9 <= 0xFFFFF6BFFFFFFF78uLL
      && v9 >= 0xFFFFF68000000000uLL
      && (Process[1].DirectoryTableBase & 0x800000000000LL) != 0 )
    {
      if ( v111 )
      {
        if ( v111 != 2 )
          goto LABEL_65;
      }
      else
      {
        if ( v121 )
        {
          v102 = v121;
        }
        else
        {
          MiLockVadTree(1, 0xFFF0000000000FFFuLL, 0xFFFFF68000000000uLL, v38);
          Address = MiLocateAddress(*(_QWORD *)(a1 + 16));
          LOBYTE(v107) = 17;
          v102 = Address;
          MiUnlockVadTree(1LL, v107);
          v41 = BugCheckParameter2;
        }
        if ( (*(_DWORD *)(v102 + 48) & 0x600000) != 0x600000 )
        {
          v111 = 1;
          goto LABEL_65;
        }
        v111 = 2;
      }
      v41 &= 0xFFFFFFFFFFFFFFBDuLL;
      BugCheckParameter2 = v41;
    }
  }
LABEL_65:
  v43 = *(_QWORD *)(a1 + 8);
  v44 = *(_BYTE *)(v43 + 69);
  v45 = v43 + 56;
  if ( (v44 & 9) != 8 || (v44 & 4) != 0 )
  {
    v51 = v108 & 0xFFFFFFFB;
    goto LABEL_78;
  }
  v46 = *(unsigned __int16 *)(v43 + 66);
  if ( !(_WORD)v46 )
    goto LABEL_74;
  if ( *(unsigned __int16 *)(v43 + 64) + v46 != (((unsigned int)v9 >> 3) & 0x1FF) )
  {
LABEL_139:
    MiEmptyDeferredWorkingSetEntries((__int64 *)(v43 + 56));
    goto LABEL_74;
  }
  if ( *(__int64 *)(v32 + 40) < 0 )
  {
    if ( (*(_BYTE *)(v43 + 69) & 2) == 0 )
      goto LABEL_74;
    goto LABEL_139;
  }
  if ( (*(_BYTE *)(v43 + 69) & 2) == 0 )
  {
    v47 = *(_QWORD *)v45;
    v48 = ((unsigned __int64)*(unsigned __int16 *)(v43 + 64) << 12)
        + ((__int64)(*(_QWORD *)(v43 + 72) << 25) >> 16 << 25 >> 16);
    if ( v48 < 0xFFFFF68000000000uLL || v48 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v49 = 5LL;
    }
    else
    {
      v49 = 4LL;
      if ( (*(_DWORD *)(v47 + 184) & 0xF) != 0 )
        v49 = 0LL;
    }
    MiAddWorkingSetEntries(v47, v48, *(unsigned __int16 *)(v45 + 10), v49);
    *(_WORD *)(v45 + 10) = 0;
  }
LABEL_74:
  v50 = *(_WORD *)(v45 + 10);
  if ( v50 )
  {
    *(_WORD *)(v45 + 10) = v50 + 1;
  }
  else
  {
    *(_WORD *)(v45 + 10) = 1;
    *(_WORD *)(v45 + 8) = ((unsigned int)v9 >> 3) & 0x1FF;
    if ( *(__int64 *)(v32 + 40) >= 0 )
      *(_BYTE *)(v45 + 13) |= 2u;
    else
      *(_BYTE *)(v45 + 13) &= ~2u;
  }
  v43 = *(_QWORD *)(a1 + 8);
  v51 = v108 | 4;
  if ( (*(_BYTE *)(v43 + 69) & 0x10) == 0
    || (v101 = *(_QWORD *)(v43 + 16), (v101 & 1) != 0) && *(_BYTE *)(v101 & 0xFFFFFFFFFFFFFFFEuLL) == 2 )
  {
    v41 = BugCheckParameter2;
  }
  else
  {
    v41 = BugCheckParameter2 & 0xFFFFFFFFFFFFFFDFuLL;
    BugCheckParameter2 &= ~0x20uLL;
  }
LABEL_78:
  v52 = v51 | 0x10;
  if ( (*(_BYTE *)(v43 + 69) & 1) == 0 )
    v52 = v51;
  v108 = v52;
  if ( (unsigned int)MiAllocateWsle(v115[0], v9, v32, 0, v41, v52, v122) )
  {
    ++v112;
    goto LABEL_82;
  }
  v61 = 48 * (*(_QWORD *)(v32 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v62 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v62 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v54, v53, v55, v56) )
      {
        HvlNotifyLongSpinWait(v62);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v32 + 24) < 0 );
  }
  *(_QWORD *)v115 = *(_QWORD *)(v32 + 16);
  if ( (v115[0] & 4) != 0 )
  {
    *(_QWORD *)(v32 + 16) &= ~4uLL;
    MiClearPageFileReservation(v115);
  }
  else
  {
    *(_QWORD *)v115 = 0LL;
  }
  *(_QWORD *)(v32 + 16) &= ~2uLL;
  *(_QWORD *)(v32 + 24) |= 0x4000000000000000uLL;
  if ( (*(_BYTE *)(v32 + 34) & 7) != 6 )
    MiBadShareCount(v32);
  v63 = 0xFFFFLL;
  v64 = (*(_QWORD *)(v32 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
  v65 = v64 ^ (*(_QWORD *)(v32 + 24) ^ v64) & 0xC000000000000000uLL;
  *(_QWORD *)(v32 + 24) = v65;
  if ( !v64 )
  {
    v126 = *(_DWORD *)(v32 + 32);
    if ( *(__int64 *)(v32 + 40) < 0 )
    {
      v66 = *(_QWORD *)(v32 + 16) >> 5;
      v67 = ((unsigned int)*(_QWORD *)(v32 + 8) >> 3) & 0x1FF;
      v68 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(v32 + 40) & 0xFFFFFFFFFFLL, 0LL, 0x80000000LL);
      BugCheckParameter4 = *(_QWORD *)(v68 + 8 * v67);
      v70 = (__int64 *)(v68 + 8 * v67);
      v71 = (BugCheckParameter4 >> 12) & 0xFFFFFFFFFFLL;
      if ( 48 * v71 - 0x220000000000LL != v32 )
        KeBugCheckEx(
          0x4Eu,
          6uLL,
          0xAAAAAAAAAAAAAAABuLL * ((v32 + 0x220000000000LL) >> 4),
          (ULONG_PTR)v70,
          BugCheckParameter4);
      v64 = qword_140E2DCC0;
      v72 = 32 * ((v71 << 7) | v66 & 0x1F | 0x40);
      if ( qword_140E2DCC0 )
      {
        if ( (qword_140E2DCC0 & v72) != 0 )
          v72 |= 0x10uLL;
        else
          v72 |= qword_140E2DCC0;
      }
      *v70 = v72;
      v5 = a2;
      v63 = 0xFFFFLL;
      *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
      *(_QWORD *)(((v68 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
    }
    v55 = 1LL;
    v65 = (*(_QWORD *)(v32 + 24) & 0x4000000000000000LL) != 0;
    LOWORD(v126) = v126 - 1;
    if ( (_WORD)v126 )
    {
      if ( (*(_QWORD *)(v32 + 24) & 0x4000000000000000LL) != 0 )
      {
        BYTE2(v126) |= 7u;
      }
      else
      {
        if ( (v126 & 0x100000) != 0 )
        {
          v98 = BYTE2(v126) & 0xF8 | 3;
        }
        else if ( (v126 & 0x80000) != 0 )
        {
          v98 = BYTE2(v126) & 0xF8 | 3;
        }
        else
        {
          v98 = BYTE2(v126) & 0xF8 | 2;
        }
        BYTE2(v126) = v98;
      }
      *(_DWORD *)(v32 + 32) = v126;
      if ( (*(_DWORD *)(v32 + 16) & 0x400LL) == 0 && (unsigned int)MiGetPagingFileOffset(*(_QWORD *)(v32 + 16)) )
      {
        v65 = (unsigned __int64)qword_140E300C8;
        v64 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v32 + 40) >> 43) & 0x3FFLL));
        *(_BYTE *)(v64 + 723) = v55;
      }
    }
    else if ( (*(_QWORD *)(v32 + 24) & 0x4000000000000000LL) != 0 )
    {
      if ( (v126 & 0x10000000) != 0 )
        HIBYTE(v126) &= ~0x10u;
      *(_DWORD *)(v32 + 32) = v126;
      v73 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v32 + 40) >> 43) & 0x3FFLL));
      v118 = *(_QWORD *)(v32 + 16);
      if ( (v118 & 0x400) == 0 && ((v118 & 4) != 0 || (v118 & 2) != 0) && v118 )
        MiReleasePageFileInfo(v73, v118, 1LL, 0xFFFFLL);
      MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((v32 + 0x220000000000LL) >> 4));
    }
    else
    {
      v83 = MI_READ_PTE_LOCK_FREE(v32 + 16);
      v84 = -9LL;
      if ( (v83 & 0x400) != 0 )
        v84 = -2049LL;
      *(_QWORD *)(v32 + 16) = v83 & v84;
      if ( (v126 & 0x100000) != 0 )
      {
        *(_DWORD *)(v32 + 32) = v126;
        MiInsertPageInList(v32, 8LL);
      }
      else
      {
        BYTE2(v126) = BYTE2(v126) & 0xF8 | 2;
        *(_DWORD *)(v32 + 32) = v126;
        MiInsertPageInList(v32, 4LL);
      }
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v74 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v61 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v74 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v65, v64, v55, v63) )
      {
        HvlNotifyLongSpinWait(v74);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v61 + 24) < 0 );
  }
  MiDecrementShareCountEx(v61, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(v61 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v75 = -1073741801;
  while ( 1 )
  {
    v76 = (__int64 *)*v5;
    if ( !*v5 )
      break;
    v33 = v5[2]-- == 1;
    *v5 = *v76;
    if ( v33 )
      v5[1] = 0LL;
    MiReleaseFreshPage(v76);
  }
  if ( (v52 & 4) != 0 )
    --*(_WORD *)(*(_QWORD *)(a1 + 8) + 66LL);
LABEL_175:
  if ( v123 )
  {
    v97 = *(_QWORD *)(a1 + 8);
    if ( (*(_BYTE *)(v97 + 69) & 8) != 0 && *(_WORD *)(v97 + 66) )
      MiEmptyDeferredWorkingSetEntries((__int64 *)(v97 + 56));
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 69LL) &= ~8u;
  }
  if ( !*(_DWORD *)(a1 + 36) && v109 )
    MiUpdatePageTableUseCount(*(_QWORD *)(a1 + 16));
  v86 = v112;
  if ( v112 )
  {
    if ( (*(_DWORD *)a1 & 0x100) != 0 )
      _InterlockedAdd64((volatile signed __int64 *)Process[1].Padding, v112);
    __addgsdword(0x2E9Cu, v86);
  }
  return v75;
}
