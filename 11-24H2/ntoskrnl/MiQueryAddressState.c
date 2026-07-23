/*
 * XREFs of MiQueryAddressState @ 0x14030ABA0
 * Callers:
 *     MiSetProtectionOnSection @ 0x1402107C0 (MiSetProtectionOnSection.c)
 *     MiAllowProtectionChange @ 0x1404389E8 (MiAllowProtectionChange.c)
 *     MiComparePteProtections @ 0x140440114 (MiComparePteProtections.c)
 *     MiQueryAddressSpan @ 0x14044AF24 (MiQueryAddressSpan.c)
 *     MiObtainRotateProtectionRanges @ 0x140494200 (MiObtainRotateProtectionRanges.c)
 * Callees:
 *     MiWalkPageTables @ 0x14020F7D0 (MiWalkPageTables.c)
 *     MiVadPureReserve @ 0x140210510 (MiVadPureReserve.c)
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     MiFastLockLeafPageTable @ 0x14023A9C0 (MiFastLockLeafPageTable.c)
 *     EtwTraceShouldYieldProcessor @ 0x14023D6E0 (EtwTraceShouldYieldProcessor.c)
 *     MiGetLeafVa @ 0x140240700 (MiGetLeafVa.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     PsReferencePartitionSafe @ 0x140262AE0 (PsReferencePartitionSafe.c)
 *     MiGetAweVadPartition @ 0x1402661D4 (MiGetAweVadPartition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiPteHasShadow @ 0x140307500 (MiPteHasShadow.c)
 *     MiGetProtoPteAddress @ 0x14030BEC0 (MiGetProtoPteAddress.c)
 *     MiGetPageProtection @ 0x14030C130 (MiGetPageProtection.c)
 *     MiPureAweVad @ 0x14030CA90 (MiPureAweVad.c)
 *     MiFaultInPagedPool @ 0x14030CAC4 (MiFaultInPagedPool.c)
 *     MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x14030CBA0 (MI_GET_GRAPHICS_PROTECTION_FROM_VAD.c)
 *     PsGetSessionIdEx @ 0x14030CBE0 (PsGetSessionIdEx.c)
 *     MiGetSharedProtos @ 0x14030CC0C (MiGetSharedProtos.c)
 *     MiSkipEntirePagefileRegions @ 0x1403D2224 (MiSkipEntirePagefileRegions.c)
 *     MiIsLazyStampedPte @ 0x1403F4D00 (MiIsLazyStampedPte.c)
 *     MiQueryStateMatches @ 0x140425260 (MiQueryStateMatches.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 *     MiSkipFractionalPagefileRegion @ 0x14046314C (MiSkipFractionalPagefileRegion.c)
 *     MiGetProtectionFromPte @ 0x1404CC4F4 (MiGetProtectionFromPte.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiQueryAddressState(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int8 a3,
        ULONG_PTR a4,
        __int64 a5,
        _DWORD *a6,
        _DWORD *a7,
        _WORD *a8,
        _QWORD *a9)
{
  unsigned __int64 v9; // rdi
  ULONG_PTR v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // r13
  BOOL v14; // r14d
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r12
  unsigned __int64 LeafVa; // rax
  struct _LIST_ENTRY **AnyMultiplexedVm; // rsi
  int v19; // eax
  __int64 CurrentPrcb; // rdx
  unsigned __int64 i; // r12
  unsigned __int64 v22; // r13
  unsigned __int64 v23; // r13
  __int16 v24; // ax
  _DWORD *v25; // rcx
  unsigned __int64 *v26; // rax
  ULONG_PTR v27; // r11
  unsigned int v28; // esi
  int v29; // r13d
  __int64 v30; // r8
  unsigned __int64 v31; // rdi
  ULONG_PTR v32; // r11
  _QWORD *v33; // rax
  int v34; // r8d
  unsigned __int64 v35; // r9
  __int64 *v36; // rdi
  unsigned __int64 v37; // rdx
  int v38; // r8d
  unsigned int PageProtection; // eax
  __int64 *v40; // rcx
  __int64 v41; // rcx
  unsigned int v42; // eax
  unsigned int v43; // r14d
  unsigned __int64 v44; // rdx
  bool v45; // zf
  unsigned __int64 v46; // rax
  __int64 result; // rax
  unsigned __int64 v48; // rcx
  _WORD **v49; // r8
  unsigned __int64 v50; // rcx
  _KPROCESS *v51; // rax
  unsigned __int64 v52; // r8
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v54; // rax
  unsigned __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  int v59; // r10d
  struct _KPRCB *v60; // rcx
  int v61; // edi
  int v62; // r8d
  unsigned int DpcWatchdogCount; // esi
  unsigned int DpcTimeCount; // r14d
  _KTHREAD *NextThread; // rax
  struct _KPRCB *v66; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  char v68; // al
  __int64 v69; // rcx
  __int64 v70; // r14
  unsigned int SessionId; // eax
  __int64 v72; // r8
  unsigned __int64 v73; // r10
  unsigned __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // r9
  __int64 v77; // rax
  __int64 v78; // rax
  int v79; // ecx
  __int64 v80; // r14
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // r9
  unsigned __int64 v84; // r12
  unsigned __int64 v85; // rdi
  int v86; // r14d
  unsigned __int64 v87; // rax
  __int64 v88; // rax
  unsigned __int64 v89; // r12
  unsigned __int64 v90; // r10
  __int64 v91; // r12
  unsigned __int64 v92; // r8
  unsigned __int32 v93; // eax
  unsigned __int32 v94; // ett
  unsigned __int64 v95; // rsi
  ULONG_PTR v96; // rdx
  unsigned __int64 v97; // rcx
  unsigned __int64 v98; // rcx
  unsigned __int64 v99; // rcx
  unsigned __int64 v100; // rcx
  _QWORD *v101; // r8
  unsigned __int64 v102; // rax
  __int16 v103; // cx
  __int64 v104; // rax
  unsigned int v105; // ecx
  int ProtectionFromPte; // ecx
  unsigned __int64 v107; // rax
  unsigned __int64 v108; // r10
  __int64 v109; // rcx
  int v110; // [rsp+30h] [rbp-D0h]
  int v111; // [rsp+34h] [rbp-CCh]
  _QWORD *ProtoPteAddress; // [rsp+38h] [rbp-C8h]
  __int16 v113; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v114; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v115; // [rsp+50h] [rbp-B0h]
  struct _LIST_ENTRY **p_Blink; // [rsp+58h] [rbp-A8h]
  int v117; // [rsp+60h] [rbp-A0h]
  __int64 v118; // [rsp+68h] [rbp-98h] BYREF
  int v119; // [rsp+70h] [rbp-90h]
  unsigned int v120; // [rsp+74h] [rbp-8Ch]
  unsigned int v121; // [rsp+78h] [rbp-88h]
  unsigned __int64 v122; // [rsp+80h] [rbp-80h]
  __int64 v123; // [rsp+88h] [rbp-78h]
  __int128 v124; // [rsp+90h] [rbp-70h] BYREF
  ULONG_PTR v125; // [rsp+A0h] [rbp-60h]
  __int64 v126; // [rsp+A8h] [rbp-58h]
  int v127; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v128; // [rsp+B4h] [rbp-4Ch] BYREF
  unsigned __int8 v129; // [rsp+B9h] [rbp-47h]
  struct _LIST_ENTRY **v130; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v131; // [rsp+D8h] [rbp-28h]
  __int64 v132; // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall *v133)(); // [rsp+160h] [rbp+60h]
  __int128 *v134; // [rsp+168h] [rbp+68h]
  __int64 v135; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned __int64 v136; // [rsp+1C8h] [rbp+C8h]
  unsigned __int8 v137; // [rsp+1D0h] [rbp+D0h]
  ULONG_PTR BugCheckParameter2; // [rsp+1D8h] [rbp+D8h]

  BugCheckParameter2 = a4;
  v137 = a3;
  v9 = a1;
  ProtoPteAddress = 0LL;
  v118 = 0LL;
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v113 = **((_WORD **)qword_140E300C8 + *((unsigned __int16 *)p_Blink + 87));
  LOWORD(v135) = v113;
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v125 = v10;
  v11 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v121 = 0;
  v136 = v11;
  v120 = 0x2000;
  v119 = 0;
  v115 = 0LL;
  v114 = 0LL;
  v12 = 0LL;
  v123 = 0LL;
  v13 = v11 << 25 >> 16;
  v126 = v13;
LABEL_2:
  v122 = v11;
  v117 = 0;
  v14 = 0;
  v15 = 0LL;
  v124 = 0LL;
  memset_0(&v128, 0, 0xBCuLL);
  v127 = 8289;
  v16 = (__int64)((v10 << 25) - v12) >> 16;
  LeafVa = MiGetLeafVa(v16);
  if ( LeafVa < 0xFFFF800000000000uLL || LeafVa >= qword_140E2F3C0 && LeafVa <= qword_140E2F3D0 )
    AnyMultiplexedVm = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  else
    AnyMultiplexedVm = (struct _LIST_ENTRY **)MiGetAnyMultiplexedVm(2LL);
  v19 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v16, 0);
  if ( v19 )
  {
    CurrentPrcb = (unsigned int)(v19 - 1);
    LODWORD(v124) = v19 - 1;
    i = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v124 + 1) = i;
  }
  else
  {
    v127 |= 4u;
    v134 = &v124;
    v130 = AnyMultiplexedVm;
    v131 = v16;
    v128 = v128 & 0xFFFFFE3F | 0x40;
    v133 = MiGetNextPageTableTail;
    v129 = v137;
    v132 = v13;
    MiWalkPageTables(&v127);
    CurrentPrcb = (unsigned int)v124;
    i = *((_QWORD *)&v124 + 1);
  }
  if ( !i )
  {
    i = v136 + 8;
    goto LABEL_22;
  }
  v22 = ((i >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v115 = v22;
  if ( !(_DWORD)CurrentPrcb )
  {
    if ( v10 == i )
    {
      v15 = *(_QWORD *)v10;
      i = v10 + 8;
      v117 = 1;
      v23 = (v10 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      v14 = *(_QWORD *)v10 == 0LL;
    }
    else
    {
LABEL_236:
      MiUnlockPageTableInternal((__int64)p_Blink, v22);
      v115 = 0LL;
      v23 = (i & 0xFFFFFFFFFFFFF000uLL) - 8;
    }
    if ( v23 > v136 )
      v23 = v136;
    v122 = v23;
    goto LABEL_22;
  }
  v95 = ((i >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (unsigned int)CurrentPrcb > 1 )
  {
    v109 = (unsigned int)(CurrentPrcb - 1);
    do
    {
      v95 = ((v95 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v109;
    }
    while ( v109 );
  }
  v22 = ((v95 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v115 = v22;
  if ( i != v10 )
    goto LABEL_236;
  v96 = *(_QWORD *)v95;
  if ( (*(_QWORD *)v95 & 1) != 0 )
  {
    v99 = *(_QWORD *)v95;
LABEL_251:
    v100 = (v99 >> 12) & 0xFFFFFFFFFFLL;
    if ( v100 <= qword_140E2DD20 && (v101 = (_QWORD *)(48 * v100 - 0x21FFFFFFFFD8LL), (*v101 & 0x40000000000000LL) != 0) )
    {
      v103 = 1023;
      v104 = *v101 >> 43;
    }
    else
    {
      v102 = *(unsigned int *)(qword_140E30100 + 8 * (v100 >> 18));
      v103 = 2047;
      v104 = v102 >> 4;
    }
    LOWORD(v135) = v103 & v104;
    v105 = *(_DWORD *)(BugCheckParameter2 + 48);
    if ( (*(_BYTE *)(BugCheckParameter2 + 48) & 0x70) == 0x30 || (v105 & 0xA00000) == 0xA00000 )
      ProtectionFromPte = MiGetProtectionFromPte(BugCheckParameter2, v96);
    else
      ProtectionFromPte = (v105 >> 7) & 0x1F;
    *a6 = ProtectionFromPte;
    goto LABEL_257;
  }
  if ( (v96 & 0x800) != 0 )
  {
    v99 = *(_QWORD *)v95;
    if ( qword_140E2DCC0 )
    {
      if ( (v96 & 0x10) != 0 )
        v99 = v96 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v99 = v96 & ~qword_140E2DCC0;
    }
    goto LABEL_251;
  }
  if ( (*(_BYTE *)(BugCheckParameter2 + 48) & 0x70) != 0x30 || !(unsigned int)MiIsLazyStampedPte(*(_QWORD *)v95) )
  {
    *a6 = 16;
LABEL_257:
    MiUnlockPageTableInternal((__int64)p_Blink, v22);
    *a7 = 0;
    *a8 = v135;
    v107 = MiGetLeafVa(v95 + 8);
    *a9 = v107;
    return 4096LL;
  }
  v15 = 0LL;
  while ( 1 )
  {
    v111 = 0;
    v110 = 0x2000;
    v28 = 0;
    v29 = 0;
    if ( !v15 )
      goto LABEL_24;
    if ( (unsigned int)MiPureAweVad(v27) && (unsigned int)MiIsLazyStampedPte(v15) )
    {
      v15 = v108;
LABEL_24:
      v30 = *(unsigned int *)(v27 + 48);
      if ( (*(_BYTE *)(v27 + 48) & 0x70) == 0x30 )
      {
        LOWORD(v135) = *(_WORD *)MiGetAweVadPartition(v27);
        goto LABEL_51;
      }
      if ( (v30 & 0x70) == 0x10 )
        goto LABEL_51;
      if ( (v30 & 0x200000) != 0 )
      {
        if ( (v30 & 0x2000000) != 0 )
        {
          v28 = ((unsigned int)v30 >> 7) & 0x1F;
          v110 = 4096;
          v111 = MI_GET_GRAPHICS_PROTECTION_FROM_VAD(v27, CurrentPrcb, v30);
        }
        if ( (v30 & 0xA00000) == 0xA00000 )
        {
          v48 = *(_QWORD *)(v27 + 56) & 0xFFFFFFFFFFFFFFF0uLL;
          if ( v48 )
          {
            while ( (*(_DWORD *)(v48 + 80) & 0x10) == 0 )
            {
              v48 = *(_QWORD *)v48;
              if ( !v48 )
                goto LABEL_51;
            }
            if ( *(_QWORD *)(v48 + 24) && PsReferencePartitionSafe(*(_QWORD *)(v48 + 24)) )
            {
              LOWORD(v135) = **v49;
              PsDereferencePartition((__int64)v49);
            }
          }
        }
        goto LABEL_51;
      }
      v31 = v9 >> 12;
      LOWORD(v135) = **((_WORD **)qword_140E300C8 + (*(_WORD *)(**(_QWORD **)(v27 + 72) + 60LL) & 0x3FF));
      ProtoPteAddress = (_QWORD *)MiGetProtoPteAddress(v27, v31, 12LL, &v118);
      if ( !ProtoPteAddress )
      {
        if ( a5 && (*(_DWORD *)(a5 + 32) != 0x2000 || *(_DWORD *)(a5 + 36) || (_WORD)v135 != *(_WORD *)(a5 + 20)) )
        {
          v29 = 1;
          i = v10;
        }
        else if ( !MiVadPureReserve(BugCheckParameter2)
               || !v118
               || *(_QWORD *)(v118 + 8)
               || (i = MiSkipEntirePagefileRegions(v59, v31, v10, i, v118), i == v10) )
        {
          i = v10 + 8;
        }
        goto LABEL_51;
      }
      if ( v14 )
      {
        v72 = ((__int64)(v122 - v10) >> 3) + 1;
        if ( v72 > 32 )
          v72 = 32LL;
        v73 = *(_QWORD *)(v118 + 8)
            + 8 * (*(unsigned int *)(v118 + 44) - (unsigned __int64)(*(_DWORD *)(v118 + 52) & 0x3FFFFFFF));
        if ( (*(_DWORD *)(v118 + 32) & 0x20000) != 0
          || (unsigned __int64)ProtoPteAddress >= v73
          || (unsigned __int64)ProtoPteAddress < *(_QWORD *)(v118 + 8) )
        {
          v72 = 0LL;
        }
        else if ( (unsigned __int64)&ProtoPteAddress[v72] > v73 )
        {
          v72 = (__int64)(v73 - (_QWORD)ProtoPteAddress) >> 3;
        }
        v74 = v10 + 8 * (v72 - 1);
        for ( i = v10 + 8; i <= v74; i += 8LL )
        {
          if ( *(_QWORD *)i )
            break;
        }
        if ( v117 )
          goto LABEL_30;
      }
      else
      {
        if ( v117 )
        {
LABEL_30:
          v32 = BugCheckParameter2;
LABEL_31:
          v33 = *(_QWORD **)(v32 + 120);
          if ( (__int64)v33 < 0 )
          {
            v34 = 1;
            v35 = (unsigned __int64)(*v33 - 1LL) >> 12;
          }
          else
          {
            v34 = 0;
            v35 = -1LL;
          }
          if ( !ProtoPteAddress )
            goto LABEL_51;
          if ( (*(_DWORD *)(v32 + 48) & 0x70) == 0x20 )
          {
            v36 = *(__int64 **)(v32 + 72);
            v37 = 0LL;
            if ( v36 )
            {
              do
              {
                if ( (v36[4] & 0x20000) != 0 && (v70 = *v36, (*(_DWORD *)(*v36 + 56) & 0x8000000) != 0) )
                {
                  SessionId = PsGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
                  v37 = *(_QWORD *)(MiGetSharedProtos(v70, SessionId, v36) + 72);
                }
                else
                {
                  v37 = v36[1];
                }
                if ( (unsigned __int64)ProtoPteAddress >= v37
                  && (unsigned __int64)ProtoPteAddress < v37 + 8LL * *((unsigned int *)v36 + 11) )
                {
                  break;
                }
                v36 = (__int64 *)v36[2];
              }
              while ( v36 );
              v32 = BugCheckParameter2;
            }
            if ( (__int64)((__int64)ProtoPteAddress - v37) >> 3 >= (unsigned __int64)(*((_DWORD *)v36 + 11)
                                                                                    - (*((_DWORD *)v36 + 13) & 0x3FFFFFFFu)) )
            {
              v28 = 0;
            }
            else
            {
              v28 = (*(_DWORD *)(v32 + 48) >> 7) & 0x1F;
              if ( v28 == 7 )
                v28 = (*((_DWORD *)v36 + 8) >> 1) & 0x1F;
              if ( v28 )
              {
                v38 = 4096;
                v110 = 4096;
                goto LABEL_52;
              }
            }
            goto LABEL_51;
          }
          v80 = v118;
          if ( !*(_QWORD *)(*(_QWORD *)v118 + 64LL) && (*(_DWORD *)(*(_QWORD *)v118 + 56LL) & 0x2000) == 0 )
          {
            if ( v115 )
            {
              MiUnlockPageTableInternal((__int64)p_Blink, v115);
              v115 = 0LL;
            }
            MiUnlockWorkingSetShared((__int64)p_Blink, v137);
            v84 = (__int64)(i - v10) >> 3;
            v85 = (__int64)(*(_QWORD *)(v80 + 8)
                          + 8 * (*(unsigned int *)(v80 + 44) - (unsigned __int64)(*(_DWORD *)(v80 + 52) & 0x3FFFFFFF))
                          - (_QWORD)ProtoPteAddress) >> 3;
            if ( v85 > v84 )
              v85 = v84;
            if ( *ProtoPteAddress )
            {
              v86 = 4096;
              v110 = 4096;
              v28 = (*(_DWORD *)(BugCheckParameter2 + 48) >> 7) & 0x1F;
            }
            else
            {
              v86 = 0x2000;
            }
            if ( a5 && !(unsigned int)MiQueryStateMatches(a5, v86, v28, 0, v135) )
            {
              v114 = 0LL;
              v29 = 1;
              i = v10;
              MiLockWorkingSetShared((__int64)p_Blink, v81, v82, v83);
              goto LABEL_51;
            }
            if ( v85 )
            {
LABEL_186:
              if ( *ProtoPteAddress )
              {
                if ( v86 == 4096 )
                {
LABEL_188:
                  ++v114;
                  --v85;
                  v86 = v110;
                  v87 = (unsigned __int64)(ProtoPteAddress + 1);
                  while ( 1 )
                  {
                    ProtoPteAddress = (_QWORD *)v87;
                    if ( !v85 )
                      break;
                    if ( (v87 & 0xFFF) != 0 )
                      goto LABEL_186;
                    v88 = *(_QWORD *)(((v87 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
                    if ( (v88 & 1) != 0 || (v88 & 0x3E0) != 0 )
                    {
                      if ( v110 == 4096 )
                        goto LABEL_186;
                      break;
                    }
                    if ( v110 == 4096 )
                      break;
                    if ( v85 <= 0x200 )
                    {
                      v114 += v85;
                      ProtoPteAddress += v85;
                      break;
                    }
                    v114 += 512LL;
                    v87 = (unsigned __int64)(ProtoPteAddress + 512);
                    v85 -= 512LL;
                  }
                }
              }
              else if ( v86 != 4096 )
              {
                goto LABEL_188;
              }
            }
            i = v10 + 8 * v114;
            MiLockWorkingSetShared((__int64)p_Blink, v81, v82, v83);
LABEL_51:
            v38 = v110;
            goto LABEL_52;
          }
          v89 = (__int64)(i - v10) >> 3;
          v90 = (__int64)(*(_QWORD *)(v118 + 8)
                        + 8 * (*(unsigned int *)(v118 + 44) - (unsigned __int64)(*(_DWORD *)(v118 + 52) & 0x3FFFFFFF))
                        - (_QWORD)ProtoPteAddress) >> 3;
          if ( v90 > v89 )
            v90 = v89;
          v114 = v90;
          if ( v34
            && (v97 = *(unsigned int *)(v32 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v32 + 32) << 32),
                v31 - v97 <= v35) )
          {
            v98 = v97 - v31;
            if ( v90 > v35 + v98 + 1 )
              v90 = v35 + v98 + 1;
            v114 = v90;
            i = v10 + 8 * v90;
          }
          else
          {
            i = v10 + 8 * v90;
            if ( v34 )
              goto LABEL_51;
          }
          v38 = 4096;
          v28 = (*(_DWORD *)(v32 + 48) >> 7) & 0x1F;
          v110 = 4096;
          goto LABEL_52;
        }
        v91 = (__int64)(i - v10) >> 3;
        v92 = *(_QWORD *)(v118 + 8)
            + 8 * (*(unsigned int *)(v118 + 44) - (unsigned __int64)(*(_DWORD *)(v118 + 52) & 0x3FFFFFFF));
        if ( (*(_DWORD *)(v118 + 32) & 0x20000) != 0
          || (unsigned __int64)ProtoPteAddress >= v92
          || (unsigned __int64)ProtoPteAddress < *(_QWORD *)(v118 + 8) )
        {
          v91 = 1LL;
        }
        else if ( (unsigned __int64)&ProtoPteAddress[v91] > v92 )
        {
          i = v10 + 8 * ((__int64)(v92 - (_QWORD)ProtoPteAddress) >> 3);
          goto LABEL_167;
        }
        i = v10 + 8 * v91;
      }
LABEL_167:
      if ( MiVadPureReserve(BugCheckParameter2) )
      {
        v77 = MiSkipFractionalPagefileRegion(v76, v75, (__int64)(i - v10) >> 3);
        if ( (_QWORD *)v77 != ProtoPteAddress )
        {
          v78 = (v77 - (__int64)ProtoPteAddress) >> 3;
          ProtoPteAddress = 0LL;
          i = v10 + 8 * v78;
        }
      }
      goto LABEL_31;
    }
    if ( (v15 & 0x3E0) == 0x200 && (v15 & 1) == 0 )
    {
      if ( (v15 & 0x400) == 0 )
        goto LABEL_52;
      v46 = v15;
      if ( qword_140E2DCC0 && (v15 & 0x10) == 0 )
        v46 = v15 & ~qword_140E2DCC0;
      if ( HIDWORD(v46) == 0xFFFFFFFF )
        goto LABEL_52;
    }
    v110 = 4096;
    PageProtection = MiGetPageProtection(v27, v10, (__int64)&v135);
    v28 = PageProtection;
    if ( ProtoPteAddress )
    {
      MiUnlockPageTableInternal((__int64)p_Blink, v115);
      v115 = 0LL;
      MiUnlockWorkingSetShared((__int64)p_Blink, v137);
      MiFaultInPagedPool((ULONG_PTR)ProtoPteAddress);
      MiLockWorkingSetShared((__int64)p_Blink, v56, v57, v58);
      v11 = v136;
      v12 = v123;
      v13 = v126;
      goto LABEL_2;
    }
    if ( PageProtection )
      goto LABEL_51;
    v38 = 0x2000;
    v110 = 0x2000;
LABEL_52:
    if ( v10 == v125 )
    {
      CurrentPrcb = a5;
      v24 = v135;
      v120 = v38;
      v121 = v28;
      v119 = v111;
      v113 = v135;
      if ( a5 )
      {
        if ( v38 != *(_DWORD *)(a5 + 32)
          || (!v28 ? (v79 = 0) : (v79 = MmProtectToValue[v28] | v111, v24 = v135),
              v79 != *(_DWORD *)(a5 + 36) || v24 != *(_WORD *)(a5 + 20)) )
        {
          v29 = 1;
          i = v10;
        }
      }
      v25 = a7;
      *a6 = v28;
      *v25 = v111;
      *a8 = v135;
LABEL_15:
      if ( v29 || v114 )
        goto LABEL_68;
      goto LABEL_17;
    }
    CurrentPrcb = v120;
    if ( v38 != v120 || (_WORD)v135 != v113 || v28 != v121 || v111 != v119 )
    {
      v43 = v120;
      LOWORD(v135) = v113;
      i = v10;
      goto LABEL_91;
    }
    if ( v114 )
      goto LABEL_15;
    if ( v29 )
      goto LABEL_68;
    if ( (__int64)((v10 - v125) & 0xFFFFFFFFFFFFFFF8uLL) < 256 )
      goto LABEL_17;
    if ( v115 )
    {
      if ( v115 != 0xFFFFF6FB7DBEDF68uLL )
      {
        if ( ((_DWORD)p_Blink[23] & 0xF) == 0 && v115 >= 0xFFFFF6FB7DBED000uLL && v115 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          v50 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7];
          if ( v50 )
          {
            CurrentPrcb = (*(_DWORD *)(v50 + 4LL * (((unsigned int)v115 >> 3) & 0x1FF)) & 0x40000000) != 0;
            goto LABEL_79;
          }
        }
        if ( ((_DWORD)p_Blink[23] & 0xF) != 0 && v115 >= 0xFFFFF6FB7DBED000uLL && v115 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          CurrentPrcb = (unsigned int)dword_140E2F1EC[(unsigned __int64)(2
                                                                       * (unsigned int)((__int64)(v115 + 0x90482413000LL) >> 3)) >> 5] >> ((2 * ((__int64)(v115 + 0x90482413000LL) >> 3)) & 0x1F);
          v45 = (CurrentPrcb & 2) == 0;
        }
        else
        {
          v44 = *(_QWORD *)v115;
          if ( v115 >= 0xFFFFF6FB7DBED000uLL
            && v115 <= 0xFFFFF6FB7DBED7F8uLL
            && (v44 & 1) != 0
            && ((v44 & 0x42) == 0 || (v44 & 0x20) == 0) )
          {
            v51 = MiPteHasShadow();
            if ( v51 )
            {
              KernelWaitTime = v51[2].KernelWaitTime;
              if ( KernelWaitTime )
              {
                v54 = *(_QWORD *)(KernelWaitTime + 8 * ((v52 >> 3) & 0x1FF));
                if ( (v54 & 0x20) != 0 )
                  v44 |= 0x20uLL;
                v55 = v44;
                v44 |= 0x42uLL;
                if ( (v54 & 0x42) == 0 )
                  v44 = v55;
              }
            }
          }
          CurrentPrcb = (v44 >> 60) & 2;
LABEL_79:
          v45 = (_DWORD)CurrentPrcb == 0;
        }
LABEL_80:
        if ( !v45 )
          goto LABEL_67;
        goto LABEL_61;
      }
      CurrentPrcb = (__int64)KeGetCurrentPrcb();
      v68 = (_DWORD)p_Blink[23] & 0xF;
      if ( v68 )
      {
        if ( v68 == 7 )
        {
          v45 = *(_QWORD *)(CurrentPrcb + 40024) == 0LL;
          goto LABEL_80;
        }
        v69 = 72LL;
        if ( v68 == 5 )
          v69 = 0LL;
      }
      else
      {
        v69 = 48LL;
      }
      v45 = *(_QWORD *)(CurrentPrcb + v69 + 40000) == 0LL;
      goto LABEL_80;
    }
LABEL_61:
    if ( ((_DWORD)p_Blink[23] & 0xFu) <= 5 )
    {
      v40 = (__int64 *)(((_DWORD)p_Blink[23] & 0xF) == 1 ? &unk_140E38880 : p_Blink + 24);
      v41 = *v40;
      CurrentPrcb = (__int64)KeGetCurrentPrcb()->MmInternal;
      v42 = CurrentPrcb ? *(_DWORD *)(CurrentPrcb + 324) : 0;
      if ( (*(_DWORD *)(v41 + ((unsigned __int64)v42 << 6)) & 0x40000000) != 0 )
        goto LABEL_67;
    }
    if ( v137 < 2u )
      break;
LABEL_17:
    v26 = (unsigned __int64 *)(v10 + 8);
    v10 += 8LL;
    if ( i > v122 || (unsigned __int64 *)i != v26 )
      goto LABEL_68;
    if ( v117 )
      v15 = *v26;
    i += 8LL;
    v9 = (((_QWORD)v26 << 25) - v123) >> 16;
    v14 = 0;
LABEL_22:
    v27 = BugCheckParameter2;
  }
  v60 = KeGetCurrentPrcb();
  v61 = 0;
  v62 = 0;
  CurrentPrcb = (unsigned int)v60->DpcRequestSummary;
  DpcWatchdogCount = v60->DpcWatchdogCount;
  DpcTimeCount = v60->DpcTimeCount;
  if ( (CurrentPrcb & 1) != 0 )
  {
    v62 = 1;
    if ( DpcTimeCount <= 7 )
      goto LABEL_126;
    if ( v60->QuantumEnd )
    {
      v61 = 1;
      goto LABEL_134;
    }
LABEL_128:
    if ( (CurrentPrcb & 0x1E) != 0 )
    {
      v61 = 5;
      goto LABEL_134;
    }
    if ( v60->CurrentThread == v60->IdleThread )
    {
LABEL_144:
      _disable();
      v60->DpcWatchdogCount = 0;
      v60->DpcTimeCount = 0;
      v66 = KeGetCurrentPrcb();
      SchedulerAssist = (unsigned __int32 *)v66->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v93 = *SchedulerAssist;
        do
        {
          CurrentPrcb = v93;
          LODWORD(CurrentPrcb) = v93 & 0xFFDFFFFF;
          v94 = v93;
          v93 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v93 & 0xFFDFFFFF, v93);
        }
        while ( v94 != v93 );
        if ( (v93 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v66);
      }
      _enable();
    }
    else
    {
      v61 = 6;
    }
  }
  else if ( v60->NestingLevel )
  {
    if ( DpcWatchdogCount <= 7 )
      goto LABEL_17;
    if ( !v60->QuantumEnd )
      goto LABEL_128;
    v61 = 7;
  }
  else
  {
    if ( (CurrentPrcb & 0x1E) != 0 )
    {
      v61 = 2;
      goto LABEL_134;
    }
    if ( !v60->QuantumEnd )
    {
      NextThread = v60->NextThread;
      if ( NextThread && NextThread != v60->CurrentThread )
      {
        v61 = 4;
        goto LABEL_134;
      }
LABEL_126:
      if ( DpcWatchdogCount <= 7 )
        goto LABEL_17;
      if ( v62 )
        goto LABEL_128;
      goto LABEL_144;
    }
    v61 = 3;
  }
LABEL_134:
  if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
    EtwTraceShouldYieldProcessor(v61, DpcWatchdogCount, DpcTimeCount);
  if ( !v61 )
    goto LABEL_17;
LABEL_67:
  i = v10 + 8;
LABEL_68:
  v43 = v110;
LABEL_91:
  if ( v115 )
    MiUnlockPageTableInternal((__int64)p_Blink, v115);
  result = v43;
  *a9 = (__int64)(i << 25) >> 16;
  return result;
}
