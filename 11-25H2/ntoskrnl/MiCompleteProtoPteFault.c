/*
 * XREFs of MiCompleteProtoPteFault @ 0x140232170
 * Callers:
 *     MiIssueHardFault @ 0x1402085EC (MiIssueHardFault.c)
 *     MiResolveTransitionFault @ 0x140233060 (MiResolveTransitionFault.c)
 *     MiResolveProtoPteFault @ 0x140240060 (MiResolveProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x140241160 (MiResolveDemandZeroFault.c)
 * Callees:
 *     MiGetSessionIdForVa @ 0x140208E10 (MiGetSessionIdForVa.c)
 *     MiUserPdeOrAbove @ 0x14020F170 (MiUserPdeOrAbove.c)
 *     MiLockAndDecrementShareCount @ 0x140227554 (MiLockAndDecrementShareCount.c)
 *     MiGetPagePrivilege @ 0x140230BA0 (MiGetPagePrivilege.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeTransitionPteValid @ 0x140234420 (MiMakeTransitionPteValid.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiAllocateWsle @ 0x14024B590 (MiAllocateWsle.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiLockVadTree @ 0x1402B54D0 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1402B57D0 (MiLocateAddress.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x1402BB160 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiOffsetToProtos @ 0x1402BBD30 (MiOffsetToProtos.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402C2260 (ObFastDereferenceObjectDeferDelete.c)
 *     MiGetContainingPageTable @ 0x1402C3750 (MiGetContainingPageTable.c)
 *     MiIsAddressGlobal @ 0x1402C3B60 (MiIsAddressGlobal.c)
 *     MiClearPageFileReservation @ 0x1402CC084 (MiClearPageFileReservation.c)
 *     PfSnLogPageFault @ 0x1403041E0 (PfSnLogPageFault.c)
 *     MiGetSharedProtos @ 0x140322970 (MiGetSharedProtos.c)
 *     MiReferenceControlAreaFileWithTag @ 0x140323330 (MiReferenceControlAreaFileWithTag.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiIsDriverPage @ 0x14036D6BC (MiIsDriverPage.c)
 *     MiGetPagingFileOffset @ 0x14037C4CC (MiGetPagingFileOffset.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 *     MiSetPfnModified @ 0x1403871E0 (MiSetPfnModified.c)
 *     MiCheckAndUpdateIoAttribution @ 0x1403AA938 (MiCheckAndUpdateIoAttribution.c)
 *     MiLocateCloneAddress @ 0x1403DE800 (MiLocateCloneAddress.c)
 *     MiSetFaultPacketDirectives @ 0x1403F4984 (MiSetFaultPacketDirectives.c)
 *     MiPrivateFixup @ 0x140439BB4 (MiPrivateFixup.c)
 *     MiSystemImageHasPrivateFixups @ 0x14044B3D0 (MiSystemImageHasPrivateFixups.c)
 */

__int64 __fastcall MiCompleteProtoPteFault(ULONG_PTR *a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  ULONG_PTR v5; // rax
  ULONG_PTR *v6; // r15
  ULONG_PTR v7; // rcx
  unsigned int v8; // esi
  ULONG_PTR v9; // r12
  _QWORD *v10; // rbp
  unsigned __int64 v11; // r14
  __int64 v12; // rcx
  ULONG_PTR v13; // r13
  unsigned int v14; // ebx
  unsigned __int64 v15; // rax
  char v16; // di
  unsigned __int64 v17; // rcx
  __int64 v18; // rdi
  unsigned __int64 v19; // r9
  _QWORD *v20; // r8
  char v21; // bp
  unsigned __int64 v22; // rbx
  __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  int IsAddressGlobal; // eax
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rbx
  int v28; // edx
  signed __int64 TransitionPteValid; // rbx
  ULONG_PTR v30; // r14
  __int64 HasPrivateFixups; // r8
  int v32; // ebp
  unsigned int v33; // r12d
  __int64 v34; // rax
  int v35; // edx
  ULONG_PTR v36; // r14
  __int64 v37; // r8
  int v38; // r14d
  int v39; // eax
  _BYTE *v40; // rdx
  _BYTE *v41; // rcx
  char v42; // cl
  ULONG_PTR v43; // rax
  int v44; // eax
  unsigned int v45; // edx
  __int16 v46; // ax
  int v47; // edi
  ULONG_PTR v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // r8
  char PagePrivilege; // dl
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // r13
  __int64 v56; // r13
  __int64 v57; // r10
  __int64 v58; // rdi
  unsigned __int64 v59; // rbx
  unsigned int SessionIdForVa; // eax
  unsigned __int64 v61; // r8
  unsigned __int64 v62; // rbx
  unsigned __int64 v63; // rax
  _KPROCESS *v64; // rcx
  _KPROCESS *Process; // rcx
  _KAB_UM_PROCESS_TREE *Trees; // rax
  __int64 v67; // rcx
  ULONG_PTR v68; // r8
  __int64 v69; // rbp
  unsigned int v70; // r12d
  unsigned __int8 v71; // dl
  __int64 v72; // rcx
  __int64 Address; // r14
  int v74; // eax
  ULONG_PTR v75; // rax
  int v76; // eax
  __int64 v77; // r9
  ULONG_PTR v78; // [rsp+20h] [rbp-C8h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-A0h]
  __int64 v80; // [rsp+50h] [rbp-98h] BYREF
  int v81; // [rsp+58h] [rbp-90h] BYREF
  ULONG_PTR v82; // [rsp+60h] [rbp-88h]
  ULONG_PTR v83; // [rsp+68h] [rbp-80h]
  __int64 v84; // [rsp+70h] [rbp-78h]
  __int64 v85; // [rsp+78h] [rbp-70h]
  __int64 v86; // [rsp+80h] [rbp-68h] BYREF
  ULONG_PTR v87; // [rsp+88h] [rbp-60h]
  __int64 v88; // [rsp+90h] [rbp-58h]
  __int64 v89[10]; // [rsp+98h] [rbp-50h] BYREF
  _BYTE *v94; // [rsp+110h] [rbp+28h]

  v5 = *a1;
  v6 = a1 + 7;
  v7 = a1[7];
  v82 = v5;
  v81 = 0;
  v8 = 0;
  v87 = v7;
  v9 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v83 = v9;
  v10 = (_QWORD *)(48 * a2 - 0x220000000000LL);
  BugCheckParameter2 = (ULONG_PTR)v10;
  v11 = v10[2];
  v88 = *((_QWORD *)qword_140E2FD48 + ((v10[5] >> 43) & 0x3FFLL));
  if ( (v11 & 0x400) != 0 )
  {
    v55 = v11;
    if ( qword_140E2D940 && (v11 & 0x10) == 0 )
      v55 = v11 & ~qword_140E2D940;
    v56 = v55 >> 16;
    v84 = v56;
    v57 = *(_QWORD *)v56;
    v85 = *(_QWORD *)v56;
    if ( PfSnNumActiveTraces )
    {
      v58 = MiReferenceControlAreaFileWithTag(v57, 1666411853LL, 1LL);
      v59 = v10[1] | 0x8000000000000000uLL;
      SessionIdForVa = MiGetSessionIdForVa(v82);
      v61 = *(_QWORD *)(v56 + 8);
      if ( (*(_DWORD *)(*(_QWORD *)v56 + 56LL) & 0x20) != 0 )
      {
        if ( v59 < v61 || v59 >= v61 + 8LL * *(unsigned int *)(v56 + 44) )
        {
          v62 = ((v59 << 9) - (*(_QWORD *)(MiGetSharedProtos(*(_QWORD *)v56, SessionIdForVa, v56) + 72) << 9)) & 0xFFFFFFFFFFFFF000uLL;
          v63 = (unsigned __int64)*(unsigned int *)(v56 + 36) << 9;
        }
        else
        {
          v62 = ((v59 << 9) - (v61 << 9)) & 0xFFFFFFFFFFFFF000uLL;
          v63 = (unsigned __int64)*(unsigned int *)(v56 + 36) << 9;
        }
      }
      else
      {
        if ( v61 )
          v62 = (__int64)(v59 - v61) >> 3 << 12;
        else
          v62 = 0LL;
        v63 = (((unsigned __int64)(*(_DWORD *)(v56 + 32) & 0xFFC0) << 26) | *(unsigned int *)(v56 + 36)) << 12;
      }
      PfSnLogPageFault(v58, v63 + v62, (*(_DWORD *)(v85 + 56) >> 5) & 1);
      ObFastDereferenceObjectDeferDelete(v85 + 64, v58, 1666411853LL);
    }
  }
  else
  {
    v84 = 0LL;
    v85 = 0LL;
  }
  v13 = 48 * MiGetContainingPageTable(v9) - 0x220000000000LL;
  v14 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v14 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v12) )
      {
        HvlNotifyLongSpinWait(v14);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v13 + 24) < 0 );
  }
  *(_QWORD *)(v13 + 24) = ((*(_QWORD *)(v13 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1) ^ (((*(_QWORD *)(v13 + 24) & 0x3FFFFFFFFFFFFFFFLL)
                                                                                 + 1) ^ *(_QWORD *)(v13 + 24)) & 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v15 = MI_READ_PTE_LOCK_FREE(v9);
  v16 = v15;
  if ( (v15 & 0x400) == 0 )
    goto LABEL_75;
  v17 = v15;
  if ( qword_140E2D940 )
  {
    if ( (v15 & 0x10) != 0 )
      v17 = v15 & 0xFFFFFFFFFFFFFFEFuLL;
    else
      v17 = v15 & ~qword_140E2D940;
  }
  if ( HIDWORD(v17) == 0xFFFFFFFF )
  {
    v18 = (v15 >> 5) & 0x1F;
  }
  else
  {
LABEL_75:
    v8 = 1;
    v53 = (v11 >> 5) & 0x1F;
    if ( (v16 & 8) != 0 )
      LODWORD(v53) = 1;
    LODWORD(v18) = v53;
    v54 = a3;
    if ( a3 )
    {
      if ( (v18 & 4) == 0 )
        v54 = 0LL;
      a3 = v54;
    }
  }
  v19 = 0xFFFFF68000000000uLL;
  if ( (MiFlags & 0x8000) != 0
    && v82 >= 0xFFFF800000000000uLL
    && (v82 < 0xFFFFF68000000000uLL || v82 > 0xFFFFF6FFFFFFFFFFuLL)
    && (v18 & 2) != 0 )
  {
    PagePrivilege = MiGetPagePrivilege((ULONG_PTR)v10, 2, 0LL);
    if ( (PagePrivilege & 1) == 0 && (MiFlags & 0x10000) == 0 )
    {
      if ( (__int64)v10[5] >= 0 )
        goto LABEL_65;
      if ( (v10[2] & 0x400LL) == 0 )
      {
        if ( !MiIsDriverPage(v9, 0LL) )
        {
LABEL_66:
          LODWORD(v18) = v18 & 0xFFFFFFFD;
          if ( !(_DWORD)v18 )
            LODWORD(v18) = 1;
          goto LABEL_68;
        }
        LODWORD(v18) = 3;
        a3 = 0LL;
LABEL_68:
        v19 = 0xFFFFF68000000000uLL;
        goto LABEL_12;
      }
    }
    if ( (PagePrivilege & 1) != 0 )
    {
      LODWORD(v18) = 3;
LABEL_186:
      a3 = 0LL;
      goto LABEL_68;
    }
LABEL_65:
    if ( (PagePrivilege & 8) == 0 )
      goto LABEL_66;
    LODWORD(v18) = 1;
    goto LABEL_186;
  }
LABEL_12:
  v20 = v10;
  v21 = v18 & 0xE7;
  if ( (HIWORD(*(_DWORD *)(BugCheckParameter2 + 32)) & 0xC0) != 0x40 )
  {
    if ( BYTE2(*(_DWORD *)(BugCheckParameter2 + 32)) < 0x40u )
    {
      v21 |= 8u;
    }
    else if ( (HIWORD(*(_DWORD *)(BugCheckParameter2 + 32)) & 0xC0) == 0x80 )
    {
      v21 |= 0x18u;
    }
  }
  v22 = ((a2 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v21 & 0x1F] & 0xFFF0000000000E7FuLL | 0x21;
  if ( v9 < 0xFFFFF68000000000uLL || v9 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v27 = ((a2 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v21 & 0x1F] & 0xFFF0000000000E7FuLL | 0x121;
    goto LABEL_21;
  }
  if ( v9 >= 0xFFFFF6FB40000000uLL && v9 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    if ( v9 == 0xFFFFF6FB7DBEDF68uLL )
      v22 = ((a2 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v21 & 0x1F] & 0xFFF0000000000E7FuLL | 0x8000000000000021uLL;
    else
      v22 = ((a2 & 0xFFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v21 & 0x1F] & 0x7FF0000000000E7FLL | 0x21;
    if ( (unsigned int)MiUserPdeOrAbove(v9) )
    {
      v22 |= 4uLL;
      v23 = v72 << 25;
      goto LABEL_17;
    }
    v19 = 0xFFFFF68000000000uLL;
  }
  v23 = v9 << 25;
LABEL_17:
  v24 = v23 >> 16;
  if ( v24 <= 0x7FFFFFFEFFFFLL )
    v22 |= 4uLL;
  IsAddressGlobal = MiIsAddressGlobal(v24, v22, v20, v19);
  v20 = (_QWORD *)BugCheckParameter2;
  v27 = v22 | 0x100;
  if ( !IsAddressGlobal )
    v27 = v26;
LABEL_21:
  v28 = a4;
  TransitionPteValid = v27 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  if ( a4 && (v21 & 5) == 4 )
  {
    a3 = 1LL;
  }
  else if ( !a3 )
  {
    v30 = BugCheckParameter2;
    goto LABEL_24;
  }
  if ( *a1 <= 0x7FFFFFFEFFFFLL )
  {
    if ( (Process = KeGetCurrentThread()->ApcState.Process, TransitionPteValid >= 0)
      && (Process[1].DirectoryTableBase & 0x1000000000LL) != 0
      || (Trees = Process[4].AutoBoostState.Trees) != 0LL && (_KAB_UM_PROCESS_TREE *)Trees[1].Tree.Root != &Trees[1] )
    {
      v30 = BugCheckParameter2;
      a3 = 0LL;
      goto LABEL_24;
    }
  }
  if ( (v18 & 5) == 5 )
  {
LABEL_115:
    v30 = BugCheckParameter2;
    goto LABEL_24;
  }
  TransitionPteValid |= 0x42uLL;
  if ( (!_bittest64(v20 + 2, 0xAu) & (unsigned __int8)~(*((_BYTE *)v20 + 34) >> 4)) != 0
    && (unsigned int)MiGetPagingFileOffset(v20[2]) )
  {
    v69 = 0LL;
    v70 = 0;
LABEL_105:
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v68 + 24), 0x3FuLL) )
    {
      v71 = *(_BYTE *)(v68 + 34);
      if ( (!_bittest64((const signed __int64 *)(v68 + 16), 0xAu) & (unsigned __int8)~(v71 >> 4)) != 0 )
      {
        if ( (v71 & 8) == 0 )
        {
          v86 = *(_QWORD *)(v68 + 16);
          if ( (v86 & 4) != 0 )
          {
            *(_QWORD *)(v68 + 16) &= ~4uLL;
            MiClearPageFileReservation(&v86);
            v68 = BugCheckParameter2;
            v69 = v86;
          }
        }
        MiSetPfnModified(v68, 1LL);
        v68 = BugCheckParameter2;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v68 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v69 )
        MiReleasePageFileInfo(v88, v69, 1LL);
      v28 = a4;
      goto LABEL_114;
    }
    while ( 1 )
    {
      if ( (++v70 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
      {
        if ( (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v67) )
        {
          HvlNotifyLongSpinWait(v70);
          v68 = BugCheckParameter2;
          goto LABEL_201;
        }
        v68 = BugCheckParameter2;
      }
      _mm_pause();
LABEL_201:
      if ( *(__int64 *)(v68 + 24) >= 0 )
        goto LABEL_105;
    }
  }
LABEL_114:
  if ( (v11 & 0x400) == 0 )
    goto LABEL_115;
  v30 = BugCheckParameter2;
  if ( (*(_DWORD *)(v87 + 184) & 0xF) != 1 )
  {
    MiCheckAndUpdateIoAttribution(BugCheckParameter2);
    v28 = a4;
  }
LABEL_24:
  HasPrivateFixups = 0LL;
  v32 = 0;
  v33 = 0;
  if ( v28 )
  {
LABEL_35:
    v37 = BugCheckParameter2;
    goto LABEL_36;
  }
  v34 = *(_QWORD *)(v30 + 40);
  v35 = 0;
  v80 = 0LL;
  if ( (v34 & 0x10000000000LL) == 0 && *(__int64 *)(v30 + 8) >= 0 && *(_QWORD *)(v30 + 8) )
    goto LABEL_33;
  if ( v82 >= 0xFFFF800000000000uLL )
  {
    if ( v85 && (*(_DWORD *)(v85 + 56) & 0x20) == 0 )
      goto LABEL_33;
    HasPrivateFixups = MiSystemImageHasPrivateFixups(v82, &v80, &v81);
    if ( HasPrivateFixups )
    {
      v35 = 1;
      v84 = v80;
      LOBYTE(v8) = v8 | 2;
      goto LABEL_33;
    }
    goto LABEL_32;
  }
  if ( v84 )
  {
    if ( (*(_DWORD *)(v85 + 56) & 0x20) != 0 )
      v8 |= 4u;
  }
  else
  {
    v8 |= 4u;
    v64 = KeGetCurrentThread()->ApcState.Process;
    if ( v64[1].IdealProcessorAssignmentBlock )
    {
      if ( MiLocateCloneAddress(v64, *(_QWORD *)(v30 + 8) | 0x8000000000000000uLL, 0LL) )
        v8 &= ~4u;
      v35 = 0;
    }
  }
  if ( v8 < 4 )
  {
LABEL_32:
    v35 = 0;
LABEL_33:
    LODWORD(v36) = v81;
    goto LABEL_34;
  }
  HasPrivateFixups = 0LL;
  v89[0] = 0LL;
  if ( !KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[4].StaticBitmap[3] )
    goto LABEL_33;
  MiLockVadTree(1LL);
  Address = MiLocateAddress(v82);
  v80 = Address;
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1);
  if ( !Address
    || (v74 = *(_DWORD *)(Address + 48), (v74 & 0x70) != 0x20)
    || (v74 & 0x200000) != 0
    || (v74 & 0x400000) == 0
    || (v77 = **(_QWORD **)(Address + 72),
        v36 = (v82 >> 12)
            + ((__int64)(*(_QWORD *)(Address + 80) - *(_QWORD *)(v77 + 136)) >> 3)
            - (*(unsigned int *)(Address + 24) | ((unsigned __int64)*(unsigned __int8 *)(Address + 32) << 32)),
        ((*(char *)(((unsigned __int64)(unsigned int)v36 >> 3) + *(_QWORD *)(v80 + 160)) >> (v36 & 7)) & 1) == 0) )
  {
    HasPrivateFixups = 0LL;
    v35 = 0;
    goto LABEL_33;
  }
  v84 = MiOffsetToProtos(v77, v36 << 12, v89);
  LOBYTE(v8) = v8 | 2;
  HasPrivateFixups = *(_QWORD *)(v80 + 144);
  v35 = *(_DWORD *)(v80 + 136);
LABEL_34:
  if ( (v8 & 2) == 0 )
    goto LABEL_35;
  v33 = MiPrivateFixup((_DWORD)a1, v84, v36, BugCheckParameter2, HasPrivateFixups, v35);
  MiLockAndDecrementShareCount(BugCheckParameter2, 2);
  if ( v33 == 297 || v33 == -1073741670 )
  {
    MiLockAndDecrementShareCount(v13, 2);
    if ( v33 == 297 )
      return (unsigned int)-1073740748;
    return v33;
  }
  if ( (v33 & 0x80000000) != 0 )
    return v33;
  TransitionPteValid = MiMakeTransitionPteValid(v83);
  v37 = 48 * (((unsigned __int64)TransitionPteValid >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  BugCheckParameter2 = v37;
  if ( v82 >= 0xFFFF800000000000uLL && (*(_DWORD *)(v37 + 32) & 0x8000000) != 0 )
    v32 = 2;
  LODWORD(v18) = 0;
  LOBYTE(v8) = v8 & 0xFE;
LABEL_36:
  v38 = 0;
  if ( (v8 & 1) == 0 )
    v38 = v18;
  v39 = a5 & 1;
  if ( (a5 & 1) != 0 )
  {
    v40 = (_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL);
    v94 = v40;
    if ( *v40 == 5 )
      goto LABEL_41;
  }
  else
  {
    v40 = (_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL);
  }
  v41 = v40;
  v40 = 0LL;
  v94 = 0LL;
  if ( v39 && *v41 == 3 )
    v32 |= 1u;
LABEL_41:
  if ( a3
    && (TransitionPteValid & 0x800) == 0
    && (TransitionPteValid & 0x200) != 0
    && !KeGetCurrentThread()->ApcState.Process[1].ActiveGroupPadding[0] )
  {
    if ( !v40 && (MiFlags & 0x2000000) == 0 && (byte_140E2D889 & 1) != 0 )
    {
      TransitionPteValid &= ~0x20uLL;
      LOBYTE(v8) = v8 | 0x10;
    }
    LOBYTE(v8) = v8 | 8;
  }
  v42 = *((_BYTE *)v6 + 13);
  if ( (v42 & 0x10) == 0 )
    goto LABEL_43;
  v75 = a1[2];
  if ( (v75 & 1) == 0 || *(_BYTE *)(v75 & 0xFFFFFFFFFFFFFFFEuLL) != 2 )
  {
    TransitionPteValid &= ~0x20uLL;
LABEL_43:
    v43 = a1[2];
    if ( (v43 & 1) != 0 && *(_BYTE *)(v43 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
      TransitionPteValid &= ~0x20uLL;
  }
  if ( (v42 & 9) != 8 || (v42 & 4) != 0 )
    goto LABEL_54;
  v44 = *((unsigned __int16 *)v6 + 5);
  v45 = v83;
  if ( (_WORD)v44 )
  {
    if ( v44 + *((unsigned __int16 *)v6 + 4) != (((unsigned int)v83 >> 3) & 0x1FF) )
      goto LABEL_50;
    if ( *(__int64 *)(v37 + 40) < 0 )
    {
      if ( (*((_BYTE *)v6 + 13) & 2) == 0 )
        goto LABEL_51;
      goto LABEL_50;
    }
    if ( (*((_BYTE *)v6 + 13) & 2) == 0 )
    {
LABEL_50:
      MiEmptyDeferredWorkingSetEntries(v6, v83, v37);
      v45 = v83;
    }
  }
LABEL_51:
  v46 = *((_WORD *)v6 + 5);
  LODWORD(v37) = BugCheckParameter2;
  if ( v46 )
  {
    *((_WORD *)v6 + 5) = v46 + 1;
  }
  else
  {
    *((_WORD *)v6 + 5) = 1;
    *((_WORD *)v6 + 4) = (v45 >> 3) & 0x1FF;
    if ( *(__int64 *)(BugCheckParameter2 + 40) >= 0 )
      *((_BYTE *)v6 + 13) |= 2u;
    else
      *((_BYTE *)v6 + 13) &= ~2u;
  }
  v40 = v94;
  v32 |= 4u;
LABEL_54:
  v47 = v32 | 0x10;
  if ( (*((_BYTE *)v6 + 13) & 1) == 0 )
    v47 = v32;
  v78 = TransitionPteValid;
  v48 = v83;
  if ( !(unsigned int)MiAllocateWsle(v87, v83, v37, v38, v78, v47, (__int64)v40) )
  {
    if ( (v47 & 4) != 0 )
      --*((_WORD *)v6 + 5);
    MiLockAndDecrementShareCount(BugCheckParameter2, 2);
    if ( (v8 & 2) == 0 )
      MiLockAndDecrementShareCount(v13, 2);
    return (unsigned int)-1073741801;
  }
  if ( (v8 & 8) == 0 )
    return v33;
  v80 = 0LL;
  if ( v6[2] && (*((_BYTE *)v6 + 13) & 1) == 0 )
  {
    if ( *((_WORD *)v6 + 5) )
      MiEmptyDeferredWorkingSetEntries(v6, v49, v50);
  }
  v76 = MiCopyOnWrite(v82, v48, (__int64)&v80);
  v33 = v76;
  if ( v76 >= 0 )
    return v33;
  MiSetFaultPacketDirectives(a1, (unsigned int)v76, v80);
  return 3221226548LL;
}
