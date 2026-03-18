/*
 * XREFs of MiQueryAddressState @ 0x140244320
 * Callers:
 *     MiComparePteProtections @ 0x140246118 (MiComparePteProtections.c)
 *     MiAllowProtectionChange @ 0x140246230 (MiAllowProtectionChange.c)
 *     MiSetProtectionOnSection @ 0x14037E180 (MiSetProtectionOnSection.c)
 *     MiQueryAddressSpan @ 0x14045AA68 (MiQueryAddressSpan.c)
 *     MiObtainRotateProtectionRanges @ 0x140499700 (MiObtainRotateProtectionRanges.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x1402454D0 (MiGetProtoPteAddress.c)
 *     MiGetPageProtection @ 0x140245740 (MiGetPageProtection.c)
 *     MiPureAweVad @ 0x140246010 (MiPureAweVad.c)
 *     MiFaultInPagedPool @ 0x140246044 (MiFaultInPagedPool.c)
 *     PsGetSessionIdEx @ 0x140246440 (PsGetSessionIdEx.c)
 *     MiWalkPageTables @ 0x1402468A0 (MiWalkPageTables.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiFastLockLeafPageTable @ 0x1402AF390 (MiFastLockLeafPageTable.c)
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     MiGetLeafVa @ 0x1402B5480 (MiGetLeafVa.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     PsDereferencePartition @ 0x140302710 (PsDereferencePartition.c)
 *     MiGetSharedProtos @ 0x140322970 (MiGetSharedProtos.c)
 *     MiVadPureReserve @ 0x140384DA0 (MiVadPureReserve.c)
 *     PsReferencePartitionSafe @ 0x1403BE990 (PsReferencePartitionSafe.c)
 *     MiIsLazyStampedPte @ 0x14040AF1C (MiIsLazyStampedPte.c)
 *     MiQueryStateMatches @ 0x140436840 (MiQueryStateMatches.c)
 *     MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x14043CF80 (MI_GET_GRAPHICS_PROTECTION_FROM_VAD.c)
 *     MiGetAnyMultiplexedVm @ 0x1404423A0 (MiGetAnyMultiplexedVm.c)
 *     MiSkipFractionalPagefileRegion @ 0x14046BA70 (MiSkipFractionalPagefileRegion.c)
 *     MiSkipEntirePagefileRegions @ 0x14047351C (MiSkipEntirePagefileRegions.c)
 *     MiGetAweVadPartition @ 0x1404B3A84 (MiGetAweVadPartition.c)
 *     MiGetProtectionFromPte @ 0x1404D3508 (MiGetProtectionFromPte.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiQueryAddressState(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int8 a3,
        ULONG_PTR a4,
        __int64 a5,
        int *a6,
        _DWORD *a7,
        _WORD *a8,
        __int64 *a9)
{
  unsigned __int64 v9; // r14
  struct _LIST_ENTRY **p_Blink; // r13
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rdi
  BOOL v14; // r15d
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 LeafVa; // rax
  struct _LIST_ENTRY **AnyMultiplexedVm; // rdi
  int v22; // eax
  unsigned int v23; // ecx
  unsigned __int64 i; // r12
  unsigned __int64 v25; // rdi
  unsigned __int64 *v26; // rax
  ULONG_PTR v27; // r11
  int v28; // esi
  int v29; // r13d
  unsigned int v30; // r8d
  unsigned __int64 v31; // r14
  ULONG_PTR v32; // r15
  ULONG_PTR v33; // r11
  _QWORD *v34; // rax
  __int64 v35; // r8
  unsigned __int64 v36; // r9
  __int64 *v37; // rdi
  unsigned __int64 v38; // rdx
  unsigned int v39; // r8d
  unsigned __int64 v40; // rax
  int PageProtection; // eax
  unsigned __int64 v42; // rax
  ULONG_PTR v43; // rsi
  int v44; // eax
  bool v45; // zf
  __int64 *v46; // rax
  __int64 v47; // rdx
  _DWORD *MmInternal; // rcx
  unsigned int v49; // eax
  __int64 result; // rax
  __int16 v51; // ax
  _DWORD *v52; // rcx
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // rdi
  struct _KPRCB *CurrentPrcb; // rdx
  char v56; // al
  __int64 v57; // rcx
  __int64 v58; // r14
  unsigned int SessionId; // eax
  __int64 v60; // r8
  unsigned __int64 v61; // r10
  unsigned __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // r9
  __int64 v65; // rax
  __int64 v66; // rax
  int v67; // ecx
  int v68; // r10d
  __int64 v69; // rdi
  unsigned __int64 v70; // r12
  unsigned __int64 v71; // r10
  __int64 v72; // r14
  unsigned __int64 v73; // r12
  unsigned __int64 v74; // rdi
  int v75; // r14d
  unsigned __int64 v76; // rdx
  unsigned __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // r12
  unsigned __int64 v80; // r8
  unsigned __int64 v81; // rcx
  _WORD **v82; // r8
  __int64 v83; // r9
  ULONG_PTR v84; // rdx
  int v85; // r8d
  unsigned __int64 v86; // rcx
  unsigned __int64 v87; // rcx
  unsigned __int64 v88; // rcx
  unsigned __int64 v89; // rcx
  _QWORD *v90; // r8
  unsigned __int64 v91; // rax
  __int16 v92; // cx
  __int64 v93; // rax
  unsigned int v94; // ecx
  int ProtectionFromPte; // eax
  int v96; // ecx
  __int64 v97; // rdx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rax
  unsigned __int64 v101; // r10
  __int64 v102; // rcx
  int v103; // [rsp+30h] [rbp-D0h]
  int v104; // [rsp+34h] [rbp-CCh]
  ULONG_PTR v105; // [rsp+38h] [rbp-C8h]
  _QWORD *ProtoPteAddress; // [rsp+40h] [rbp-C0h]
  __int16 v107; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v108; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v109; // [rsp+58h] [rbp-A8h]
  int v110; // [rsp+60h] [rbp-A0h]
  __int64 v111; // [rsp+68h] [rbp-98h] BYREF
  struct _LIST_ENTRY **v112; // [rsp+70h] [rbp-90h]
  int v113; // [rsp+78h] [rbp-88h]
  int v114; // [rsp+7Ch] [rbp-84h]
  int v115; // [rsp+80h] [rbp-80h]
  unsigned __int64 v116; // [rsp+88h] [rbp-78h]
  __int64 v117; // [rsp+90h] [rbp-70h]
  __int128 v118; // [rsp+98h] [rbp-68h] BYREF
  __int64 v119; // [rsp+A8h] [rbp-58h]
  __int64 v120; // [rsp+B0h] [rbp-50h]
  int v121; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v122; // [rsp+C4h] [rbp-3Ch] BYREF
  unsigned __int8 v123; // [rsp+C9h] [rbp-37h]
  struct _LIST_ENTRY **v124; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v125; // [rsp+E8h] [rbp-18h]
  __int64 v126; // [rsp+F0h] [rbp-10h]
  __int64 (__fastcall *v127)(); // [rsp+170h] [rbp+70h]
  __int128 *v128; // [rsp+178h] [rbp+78h]
  __int64 v129; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned __int64 v130; // [rsp+1D8h] [rbp+D8h]
  unsigned __int8 v131; // [rsp+1E0h] [rbp+E0h]
  ULONG_PTR BugCheckParameter2; // [rsp+1E8h] [rbp+E8h]

  BugCheckParameter2 = a4;
  v131 = a3;
  v9 = a1;
  ProtoPteAddress = 0LL;
  v111 = 0LL;
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v112 = p_Blink;
  v107 = **((_WORD **)qword_140E2FD48 + *((unsigned __int16 *)p_Blink + 87));
  LOWORD(v129) = v107;
  v11 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v120 = v11;
  v12 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v105 = v11;
  v130 = v12;
  v114 = 0x2000;
  v115 = 0;
  v113 = 0;
  v108 = 0LL;
  v13 = 0LL;
  v117 = 0LL;
  v119 = v12 << 25 >> 16;
LABEL_2:
  v116 = v12;
  v110 = 0;
  v14 = 0;
  v15 = 0LL;
  v118 = 0LL;
  memset_0(&v122, 0, 0xBCuLL);
  v121 = 8289;
  v16 = ((v11 << 25) - v13) >> 16;
  LeafVa = MiGetLeafVa(v16, v17, v18, v19);
  if ( LeafVa < 0xFFFF800000000000uLL || LeafVa >= qword_140E2F040 && LeafVa <= qword_140E2F050 )
    AnyMultiplexedVm = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  else
    AnyMultiplexedVm = (struct _LIST_ENTRY **)MiGetAnyMultiplexedVm(2LL);
  v22 = MiFastLockLeafPageTable(AnyMultiplexedVm, v16, 0LL);
  if ( v22 )
  {
    v23 = v22 - 1;
    LODWORD(v118) = v22 - 1;
    i = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v118 + 1) = i;
  }
  else
  {
    v121 |= 4u;
    v128 = &v118;
    v124 = AnyMultiplexedVm;
    v125 = v16;
    v122 = v122 & 0xFFFFFE3F | 0x40;
    v127 = MiGetNextPageTableTail;
    v123 = v131;
    v126 = v119;
    MiWalkPageTables(&v121);
    v23 = v118;
    i = *((_QWORD *)&v118 + 1);
  }
  if ( !i )
  {
    v25 = v116;
    i = v130 + 8;
    v109 = 0LL;
    goto LABEL_14;
  }
  v54 = ((i >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v109 = v54;
  if ( !v23 )
  {
    if ( v105 != i )
      goto LABEL_235;
    v15 = *(_QWORD *)v105;
    i = v105 + 8;
    v110 = 1;
    v25 = (v105 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    v14 = *(_QWORD *)v105 == 0LL;
    goto LABEL_97;
  }
  if ( v23 > 1 )
  {
    v102 = v23 - 1;
    do
    {
      v54 = ((v54 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v102;
    }
    while ( v102 );
  }
  v83 = ((v54 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v109 = v83;
  if ( i != v11 )
  {
    v54 = ((v54 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_235:
    MiUnlockPageTable(p_Blink, v54);
    v109 = 0LL;
    v25 = (i & 0xFFFFFFFFFFFFF000uLL) - 8;
LABEL_97:
    if ( v25 > v130 )
      v25 = v130;
    v116 = v25;
    goto LABEL_14;
  }
  v84 = *(_QWORD *)v54;
  if ( (*(_QWORD *)v54 & 1) != 0 )
  {
    v88 = *(_QWORD *)v54;
LABEL_211:
    v89 = (v88 >> 12) & 0xFFFFFFFFFFLL;
    if ( v89 <= qword_140E2D9A0 && (v90 = (_QWORD *)(48 * v89 - 0x21FFFFFFFFD8LL), (*v90 & 0x40000000000000LL) != 0) )
    {
      v92 = 1023;
      v93 = *v90 >> 43;
    }
    else
    {
      v91 = *(unsigned int *)(qword_140E2FD80 + 8 * (v89 >> 18));
      v92 = 2047;
      v93 = v91 >> 4;
    }
    LOWORD(v129) = v92 & v93;
    v94 = *(_DWORD *)(BugCheckParameter2 + 48);
    if ( (*(_BYTE *)(BugCheckParameter2 + 48) & 0x70) == 0x30 || (v94 & 0xA00000) == 0xA00000 )
    {
      ProtectionFromPte = MiGetProtectionFromPte(BugCheckParameter2, v84);
      v83 = v109;
      v96 = ProtectionFromPte;
    }
    else
    {
      v96 = (v94 >> 7) & 0x1F;
    }
    p_Blink = v112;
    *a6 = v96;
    goto LABEL_217;
  }
  if ( (v84 & 0x800) != 0 )
  {
    v88 = *(_QWORD *)v54;
    if ( qword_140E2D940 )
    {
      if ( (v84 & 0x10) != 0 )
        v88 = v84 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v88 = v84 & ~qword_140E2D940;
    }
    goto LABEL_211;
  }
  if ( (*(_BYTE *)(BugCheckParameter2 + 48) & 0x70) != 0x30 || !(unsigned int)MiIsLazyStampedPte(*(_QWORD *)v54) )
  {
    *a6 = 16;
LABEL_217:
    MiUnlockPageTable(p_Blink, v83);
    *a7 = 0;
    *a8 = v129;
    v100 = MiGetLeafVa(v54 + 8, v97, v98, v99);
    *a9 = v100;
    return 4096LL;
  }
  v25 = v116;
  v15 = 0LL;
  while ( 1 )
  {
    v104 = 0;
    v103 = 0x2000;
    v28 = 0;
    v29 = 0;
    if ( v15 )
    {
      if ( !(unsigned int)MiPureAweVad(v27) || !(unsigned int)MiIsLazyStampedPte(v15) )
      {
        if ( (v15 & 0x3E0) != 0x200 || (v15 & 1) != 0 )
          goto LABEL_47;
        if ( (v15 & 0x400) == 0 )
          goto LABEL_236;
        v40 = v15;
        if ( qword_140E2D940 && (v15 & 0x10) == 0 )
          v40 = v15 & ~qword_140E2D940;
        if ( HIDWORD(v40) == 0xFFFFFFFF )
        {
LABEL_236:
          v32 = v105;
        }
        else
        {
LABEL_47:
          v32 = v105;
          v103 = 4096;
          PageProtection = MiGetPageProtection(v27, v105, (__int64)&v129);
          v28 = PageProtection;
          if ( ProtoPteAddress )
          {
            p_Blink = v112;
            MiUnlockPageTable(v112, v109);
            MiUnlockWorkingSetShared(p_Blink, v131);
            MiFaultInPagedPool((ULONG_PTR)ProtoPteAddress);
            MiLockWorkingSetShared((__int64)p_Blink);
            v12 = v130;
            v13 = v117;
            v11 = v105;
            goto LABEL_2;
          }
          if ( PageProtection )
            goto LABEL_49;
          v39 = 0x2000;
          v103 = 0x2000;
        }
        goto LABEL_50;
      }
      v15 = v101;
    }
    v30 = *(_DWORD *)(v27 + 48);
    if ( (*(_BYTE *)(v27 + 48) & 0x70) == 0x30 )
    {
      v32 = v105;
      LOWORD(v129) = *(_WORD *)MiGetAweVadPartition(v27);
      goto LABEL_49;
    }
    if ( (v30 & 0x70) == 0x10 )
      goto LABEL_89;
    if ( (v30 & 0x200000) != 0 )
    {
      if ( (v30 & 0x2000000) != 0 )
      {
        v28 = (v30 >> 7) & 0x1F;
        v103 = 4096;
        v104 = MI_GET_GRAPHICS_PROTECTION_FROM_VAD(v27);
      }
      if ( (v30 & 0xA00000) != 0xA00000 )
        goto LABEL_89;
      v81 = *(_QWORD *)(v27 + 56) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( !v81 )
        goto LABEL_89;
      while ( (*(_DWORD *)(v81 + 80) & 0x10) == 0 )
      {
        v81 = *(_QWORD *)v81;
        if ( !v81 )
          goto LABEL_89;
      }
      if ( *(_QWORD *)(v81 + 24) && (unsigned __int8)PsReferencePartitionSafe(*(_QWORD *)(v81 + 24)) )
      {
        LOWORD(v129) = **v82;
        PsDereferencePartition(v82, 1968270669LL);
        v32 = v105;
      }
      else
      {
LABEL_89:
        v32 = v105;
      }
      goto LABEL_49;
    }
    v31 = v9 >> 12;
    LOWORD(v129) = **((_WORD **)qword_140E2FD48 + (*(_WORD *)(**(_QWORD **)(v27 + 72) + 60LL) & 0x3FF));
    ProtoPteAddress = (_QWORD *)MiGetProtoPteAddress(v27, v31, 12LL, &v111);
    if ( !ProtoPteAddress )
    {
      if ( !a5 || (unsigned int)MiQueryStateMatches(a5, 0x2000, 0, 0, v129) )
      {
        if ( (unsigned int)MiVadPureReserve(BugCheckParameter2) && v111 && !*(_QWORD *)(v111 + 8) )
        {
          v32 = v105;
          i = MiSkipEntirePagefileRegions(v68, v31, v105, i, v111);
          if ( i == v105 )
            i = v105 + 8;
        }
        else
        {
          v32 = v105;
          i = v105 + 8;
        }
      }
      else
      {
        v32 = v105;
        v29 = v85 + 1;
        i = v105;
      }
      goto LABEL_49;
    }
    v45 = !v14;
    v32 = v105;
    if ( v45 )
    {
      if ( v110 )
        goto LABEL_22;
      v79 = (__int64)(i - v105) >> 3;
      v80 = *(_QWORD *)(v111 + 8)
          + 8 * (*(unsigned int *)(v111 + 44) - (unsigned __int64)(*(_DWORD *)(v111 + 52) & 0x3FFFFFFF));
      if ( (*(_DWORD *)(v111 + 32) & 0x20000) != 0
        || (unsigned __int64)ProtoPteAddress >= v80
        || (unsigned __int64)ProtoPteAddress < *(_QWORD *)(v111 + 8) )
      {
        v79 = 1LL;
      }
      else if ( (unsigned __int64)&ProtoPteAddress[v79] > v80 )
      {
        i = v105 + 8 * ((__int64)(v80 - (_QWORD)ProtoPteAddress) >> 3);
        goto LABEL_120;
      }
      i = v105 + 8 * v79;
LABEL_120:
      if ( (unsigned int)MiVadPureReserve(BugCheckParameter2) )
      {
        v65 = MiSkipFractionalPagefileRegion(v64, v63, (__int64)(i - v105) >> 3);
        if ( (_QWORD *)v65 != ProtoPteAddress )
        {
          v66 = (v65 - (__int64)ProtoPteAddress) >> 3;
          ProtoPteAddress = 0LL;
          i = v105 + 8 * v66;
        }
      }
      goto LABEL_23;
    }
    v60 = ((__int64)(v25 - v105) >> 3) + 1;
    if ( v60 > 32 )
      v60 = 32LL;
    v61 = *(_QWORD *)(v111 + 8)
        + 8 * (*(unsigned int *)(v111 + 44) - (unsigned __int64)(*(_DWORD *)(v111 + 52) & 0x3FFFFFFF));
    if ( (*(_DWORD *)(v111 + 32) & 0x20000) != 0
      || (unsigned __int64)ProtoPteAddress >= v61
      || (unsigned __int64)ProtoPteAddress < *(_QWORD *)(v111 + 8) )
    {
      v60 = 0LL;
    }
    else if ( (unsigned __int64)&ProtoPteAddress[v60] > v61 )
    {
      v60 = (__int64)(v61 - (_QWORD)ProtoPteAddress) >> 3;
    }
    v62 = v105 - 8 + 8 * v60;
    for ( i = v105 + 8; i <= v62; i += 8LL )
    {
      if ( *(_QWORD *)i )
        break;
    }
    if ( !v110 )
      goto LABEL_120;
LABEL_22:
    v33 = BugCheckParameter2;
LABEL_23:
    v34 = *(_QWORD **)(v33 + 120);
    if ( (__int64)v34 < 0 )
    {
      v35 = 1LL;
      v36 = (unsigned __int64)(*v34 - 1LL) >> 12;
    }
    else
    {
      v35 = 0LL;
      v36 = -1LL;
    }
    if ( !ProtoPteAddress )
      goto LABEL_49;
    if ( (*(_DWORD *)(v33 + 48) & 0x70) == 0x20 )
    {
      v37 = *(__int64 **)(v33 + 72);
      v38 = 0LL;
      if ( v37 )
      {
        do
        {
          if ( (v37[4] & 0x20000) != 0 && (v58 = *v37, (*(_DWORD *)(*v37 + 56) & 0x8000000) != 0) )
          {
            SessionId = PsGetSessionIdEx(KeGetCurrentThread()->ApcState.Process, v38, v35, v36);
            v38 = *(_QWORD *)(MiGetSharedProtos(v58, SessionId, v37) + 72);
          }
          else
          {
            v38 = v37[1];
          }
          if ( (unsigned __int64)ProtoPteAddress >= v38
            && (unsigned __int64)ProtoPteAddress < v38 + 8LL * *((unsigned int *)v37 + 11) )
          {
            break;
          }
          v37 = (__int64 *)v37[2];
        }
        while ( v37 );
        v33 = BugCheckParameter2;
      }
      if ( (__int64)((__int64)ProtoPteAddress - v38) >> 3 >= (unsigned __int64)(*((_DWORD *)v37 + 11)
                                                                              - (*((_DWORD *)v37 + 13) & 0x3FFFFFFFu)) )
      {
        v28 = 0;
      }
      else
      {
        v28 = (*(_DWORD *)(v33 + 48) >> 7) & 0x1F;
        if ( v28 == 7 )
          v28 = (*((_DWORD *)v37 + 8) >> 1) & 0x1F;
        if ( v28 )
        {
          v39 = 4096;
          v103 = 4096;
          goto LABEL_50;
        }
      }
      goto LABEL_49;
    }
    v69 = v111;
    if ( !*(_QWORD *)(*(_QWORD *)v111 + 64LL) && (*(_DWORD *)(*(_QWORD *)v111 + 56LL) & 0x2000) == 0 )
    {
      v72 = (__int64)v112;
      if ( v109 )
      {
        MiUnlockPageTable(v112, v109);
        v109 = 0LL;
      }
      MiUnlockWorkingSetShared(v72, v131);
      v73 = (__int64)(i - v105) >> 3;
      v74 = (__int64)(*(_QWORD *)(v69 + 8)
                    + 8 * (*(unsigned int *)(v69 + 44) - (unsigned __int64)(*(_DWORD *)(v69 + 52) & 0x3FFFFFFF))
                    - (_QWORD)ProtoPteAddress) >> 3;
      if ( v74 > v73 )
        v74 = v73;
      if ( *ProtoPteAddress )
      {
        v75 = 4096;
        v103 = 4096;
        v28 = (*(_DWORD *)(BugCheckParameter2 + 48) >> 7) & 0x1F;
      }
      else
      {
        v75 = 0x2000;
      }
      if ( !a5 || (unsigned int)MiQueryStateMatches(a5, v75, v28, 0, v129) )
      {
        v76 = v108;
        if ( !v74 )
          goto LABEL_168;
LABEL_155:
        if ( *ProtoPteAddress )
        {
          if ( v75 != 4096 )
            goto LABEL_168;
        }
        else if ( v75 == 4096 )
        {
          goto LABEL_168;
        }
        ++v108;
        --v74;
        v76 = v108;
        v77 = (unsigned __int64)(ProtoPteAddress + 1);
        v32 = v105;
        while ( 1 )
        {
          ProtoPteAddress = (_QWORD *)v77;
          if ( !v74 )
            break;
          if ( (v77 & 0xFFF) != 0 )
            goto LABEL_155;
          v78 = *(_QWORD *)(((v77 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          if ( (v78 & 1) != 0 || (v78 & 0x3E0) != 0 )
          {
            if ( v75 != 4096 )
              break;
            goto LABEL_155;
          }
          if ( v75 == 4096 )
            break;
          if ( v74 <= 0x200 )
          {
            v76 += v74;
            ProtoPteAddress += v74;
            goto LABEL_167;
          }
          v76 += 512LL;
          v77 = (unsigned __int64)(ProtoPteAddress + 512);
          v108 = v76;
          v74 -= 512LL;
        }
      }
      else
      {
        v76 = 0LL;
        v29 = 1;
LABEL_167:
        v108 = v76;
      }
LABEL_168:
      i = v32 + 8 * v76;
      MiLockWorkingSetShared((__int64)v112);
LABEL_49:
      v39 = v103;
      goto LABEL_50;
    }
    v70 = (__int64)(i - v105) >> 3;
    v71 = (__int64)(*(_QWORD *)(v111 + 8)
                  + 8 * (*(unsigned int *)(v111 + 44) - (unsigned __int64)(*(_DWORD *)(v111 + 52) & 0x3FFFFFFF))
                  - (_QWORD)ProtoPteAddress) >> 3;
    if ( v71 > v70 )
      v71 = v70;
    v108 = v71;
    if ( (_DWORD)v35
      && (v86 = *(unsigned int *)(v33 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v33 + 32) << 32), v31 - v86 <= v36) )
    {
      v87 = v86 - v31;
      if ( v71 > v36 + v87 + 1 )
        v71 = v36 + v87 + 1;
      v108 = v71;
      i = v105 + 8 * v71;
    }
    else
    {
      i = v105 + 8 * v71;
      if ( (_DWORD)v35 )
        goto LABEL_49;
    }
    v39 = 4096;
    v28 = (*(_DWORD *)(v33 + 48) >> 7) & 0x1F;
    v103 = 4096;
LABEL_50:
    if ( v32 != v120 )
      break;
    v51 = v129;
    v114 = v39;
    v115 = v28;
    v113 = v104;
    v107 = v129;
    if ( a5 )
    {
      if ( v39 != *(_DWORD *)(a5 + 32)
        || (!v28 ? (v67 = 0) : (v67 = MmProtectToValue[v28] | v104, v51 = v129),
            v67 != *(_DWORD *)(a5 + 36) || v51 != *(_WORD *)(a5 + 20)) )
      {
        v29 = 1;
        i = v32;
      }
    }
    v52 = a7;
    *a6 = v28;
    *v52 = v104;
    *a8 = v129;
    v42 = v108;
LABEL_80:
    if ( v29 || v42 )
      goto LABEL_75;
    v43 = v105;
LABEL_9:
    v26 = (unsigned __int64 *)(v43 + 8);
    v105 = v43 + 8;
    if ( i != v43 + 8 )
      goto LABEL_74;
    v25 = v116;
    if ( i > v116 )
      goto LABEL_74;
    if ( v110 )
      v15 = *v26;
    i += 8LL;
    v9 = (((_QWORD)v26 << 25) - v117) >> 16;
    v14 = 0;
LABEL_14:
    v27 = BugCheckParameter2;
  }
  if ( v39 != v114 || v28 != v115 || (_WORD)v129 != v107 || v104 != v113 )
  {
    v39 = v114;
    LOWORD(v129) = v107;
    i = v32;
    v103 = v114;
    goto LABEL_75;
  }
  v42 = v108;
  if ( v108 )
    goto LABEL_80;
  if ( v29 )
    goto LABEL_75;
  v43 = v105;
  if ( (__int64)((v105 - v120) & 0xFFFFFFFFFFFFFFF8uLL) < 256 )
    goto LABEL_9;
  if ( v109 )
  {
    if ( v109 == 0xFFFFF6FB7DBEDF68uLL )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v56 = (_DWORD)v112[23] & 0xF;
      if ( v56 )
      {
        if ( v56 == 7 )
        {
          v45 = CurrentPrcb->SelfmapLockHandle[1].LockQueue.Next == 0LL;
          goto LABEL_66;
        }
        v57 = 3LL;
        if ( v56 == 5 )
          v57 = 0LL;
      }
      else
      {
        v57 = 2LL;
      }
      v45 = CurrentPrcb->SelfmapLockHandle[v57].LockQueue.Next == 0LL;
    }
    else if ( ((_DWORD)v112[23] & 0xF) != 0
           || v109 < 0xFFFFF6FB7DBED000uLL
           || v109 > 0xFFFFF6FB7DBEDFFFuLL
           || (v53 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
    {
      if ( ((_DWORD)v112[23] & 0xF) == 0 || v109 < 0xFFFFF6FB7DBED000uLL || v109 > 0xFFFFF6FB7DBEDFFFuLL )
      {
        v44 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v109) >> 60) & 2;
        goto LABEL_65;
      }
      v45 = (((unsigned int)dword_140E2EE6C[(unsigned __int64)(2 * (unsigned int)((__int64)(v109 + 0x90482413000LL) >> 3)) >> 5] >> ((2 * ((__int64)(v109 + 0x90482413000LL) >> 3)) & 0x1F)) & 2) == 0;
    }
    else
    {
      v44 = (*(_DWORD *)(v53 + 4LL * (((unsigned int)v109 >> 3) & 0x1FF)) >> 30) & 1;
LABEL_65:
      v45 = v44 == 0;
    }
LABEL_66:
    if ( !v45 )
      goto LABEL_73;
  }
  if ( ((_DWORD)v112[23] & 0xFu) > 5
    || (((_DWORD)v112[23] & 0xF) != 1 ? (v46 = (__int64 *)(v112 + 24)) : (v46 = (__int64 *)&unk_140E38500),
        (v47 = *v46, (MmInternal = KeGetCurrentPrcb()->MmInternal) == 0LL) ? (v49 = 0) : (v49 = MmInternal[81]),
        (*(_DWORD *)(((unsigned __int64)v49 << 6) + v47) & 0x40000000) == 0) )
  {
    if ( v131 >= 2u || !KeShouldYieldProcessor() )
      goto LABEL_9;
  }
LABEL_73:
  i = v105 + 8;
LABEL_74:
  v39 = v103;
LABEL_75:
  if ( v109 )
  {
    MiUnlockPageTable(v112, v109);
    v39 = v103;
  }
  result = v39;
  *a9 = (__int64)((i << 25) - v117) >> 16;
  return result;
}
