/*
 * XREFs of MiQueryAddressState @ 0x140300420
 * Callers:
 *     MiSetProtectionOnSection @ 0x140236630 (MiSetProtectionOnSection.c)
 *     MiQueryAddressSpan @ 0x1403CE718 (MiQueryAddressSpan.c)
 *     MiAllowProtectionChange @ 0x140441E14 (MiAllowProtectionChange.c)
 *     MiComparePteProtections @ 0x1404479F4 (MiComparePteProtections.c)
 *     MiObtainRotateProtectionRanges @ 0x140499870 (MiObtainRotateProtectionRanges.c)
 * Callees:
 *     MiPteHasShadow @ 0x1402141A0 (MiPteHasShadow.c)
 *     MiWalkPageTables @ 0x140235640 (MiWalkPageTables.c)
 *     MiVadPureReserve @ 0x140236380 (MiVadPureReserve.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     PsDereferencePartition @ 0x140275E60 (PsDereferencePartition.c)
 *     MiFastLockLeafPageTable @ 0x1402D90E0 (MiFastLockLeafPageTable.c)
 *     EtwTraceShouldYieldProcessor @ 0x1402DBE00 (EtwTraceShouldYieldProcessor.c)
 *     MiGetLeafVa @ 0x1402DEE20 (MiGetLeafVa.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiGetProtoPteAddress @ 0x140301740 (MiGetProtoPteAddress.c)
 *     MiGetPageProtection @ 0x1403019B0 (MiGetPageProtection.c)
 *     MiPureAweVad @ 0x140302310 (MiPureAweVad.c)
 *     MiFaultInPagedPool @ 0x140302344 (MiFaultInPagedPool.c)
 *     MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x140302420 (MI_GET_GRAPHICS_PROTECTION_FROM_VAD.c)
 *     PsGetSessionIdEx @ 0x1403025D0 (PsGetSessionIdEx.c)
 *     MiGetSharedProtos @ 0x1403025FC (MiGetSharedProtos.c)
 *     MiIsLazyStampedPte @ 0x1403114C0 (MiIsLazyStampedPte.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiGetAweVadPartition @ 0x1403CC010 (MiGetAweVadPartition.c)
 *     PsReferencePartitionSafe @ 0x1403D4B60 (PsReferencePartitionSafe.c)
 *     MiSkipEntirePagefileRegions @ 0x1403E4684 (MiSkipEntirePagefileRegions.c)
 *     MiQueryStateMatches @ 0x140433120 (MiQueryStateMatches.c)
 *     MiGetAnyMultiplexedVm @ 0x140442630 (MiGetAnyMultiplexedVm.c)
 *     MiSkipFractionalPagefileRegion @ 0x14046A7B4 (MiSkipFractionalPagefileRegion.c)
 *     MiGetProtectionFromPte @ 0x1404D3334 (MiGetProtectionFromPte.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
  __int64 v22; // r13
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
  __int64 v34; // r8
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
  int v56; // r10d
  struct _KPRCB *v57; // rcx
  int v58; // edi
  int v59; // r8d
  unsigned int DpcWatchdogCount; // esi
  unsigned int DpcTimeCount; // r14d
  _KTHREAD *NextThread; // rax
  struct _KPRCB *v63; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  char v65; // al
  __int64 v66; // rcx
  __int64 v67; // r14
  unsigned int SessionId; // eax
  __int64 v69; // r8
  unsigned __int64 v70; // r10
  unsigned __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // r9
  __int64 v74; // rax
  __int64 v75; // rax
  int v76; // ecx
  __int64 v77; // r14
  unsigned __int64 v78; // r12
  unsigned __int64 v79; // rdi
  int v80; // r14d
  unsigned __int64 v81; // rax
  __int64 v82; // rax
  unsigned __int64 v83; // r12
  unsigned __int64 v84; // r10
  __int64 v85; // r12
  unsigned __int64 v86; // r8
  unsigned __int32 v87; // eax
  unsigned __int32 v88; // ett
  unsigned __int64 v89; // rsi
  ULONG_PTR v90; // rdx
  unsigned __int64 v91; // rcx
  unsigned __int64 v92; // rcx
  unsigned __int64 v93; // rcx
  unsigned __int64 v94; // rcx
  _QWORD *v95; // r8
  unsigned __int64 v96; // rax
  __int16 v97; // cx
  __int64 v98; // rax
  unsigned int v99; // ecx
  int ProtectionFromPte; // ecx
  unsigned __int64 v101; // rax
  unsigned __int64 v102; // r10
  __int64 v103; // rcx
  int v104; // [rsp+30h] [rbp-D0h]
  int v105; // [rsp+34h] [rbp-CCh]
  _QWORD *ProtoPteAddress; // [rsp+38h] [rbp-C8h]
  __int16 v107; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v108; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v109; // [rsp+50h] [rbp-B0h]
  struct _LIST_ENTRY **p_Blink; // [rsp+58h] [rbp-A8h]
  int v111; // [rsp+60h] [rbp-A0h]
  __int64 v112; // [rsp+68h] [rbp-98h] BYREF
  int v113; // [rsp+70h] [rbp-90h]
  unsigned int v114; // [rsp+74h] [rbp-8Ch]
  unsigned int v115; // [rsp+78h] [rbp-88h]
  unsigned __int64 v116; // [rsp+80h] [rbp-80h]
  __int64 v117; // [rsp+88h] [rbp-78h]
  __int128 v118; // [rsp+90h] [rbp-70h] BYREF
  ULONG_PTR v119; // [rsp+A0h] [rbp-60h]
  __int64 v120; // [rsp+A8h] [rbp-58h]
  int v121; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v122; // [rsp+B4h] [rbp-4Ch] BYREF
  unsigned __int8 v123; // [rsp+B9h] [rbp-47h]
  struct _LIST_ENTRY **v124; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v125; // [rsp+D8h] [rbp-28h]
  __int64 v126; // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall *v127)(); // [rsp+160h] [rbp+60h]
  __int128 *v128; // [rsp+168h] [rbp+68h]
  __int64 v129; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned __int64 v130; // [rsp+1C8h] [rbp+C8h]
  unsigned __int8 v131; // [rsp+1D0h] [rbp+D0h]
  ULONG_PTR BugCheckParameter2; // [rsp+1D8h] [rbp+D8h]

  BugCheckParameter2 = a4;
  v131 = a3;
  v9 = a1;
  ProtoPteAddress = 0LL;
  v112 = 0LL;
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v107 = **((_WORD **)qword_140E2FF88 + *((unsigned __int16 *)p_Blink + 87));
  LOWORD(v129) = v107;
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v119 = v10;
  v11 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v115 = 0;
  v130 = v11;
  v114 = 0x2000;
  v113 = 0;
  v109 = 0LL;
  v108 = 0LL;
  v12 = 0LL;
  v117 = 0LL;
  v13 = v11 << 25 >> 16;
  v120 = v13;
LABEL_2:
  v116 = v11;
  v111 = 0;
  v14 = 0;
  v15 = 0LL;
  v118 = 0LL;
  memset_0(&v122, 0, 0xBCuLL);
  v121 = 8289;
  v16 = (__int64)((v10 << 25) - v12) >> 16;
  LeafVa = MiGetLeafVa(v16);
  if ( LeafVa < 0xFFFF800000000000uLL || LeafVa >= qword_140E2F280 && LeafVa <= qword_140E2F290 )
    AnyMultiplexedVm = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  else
    AnyMultiplexedVm = (struct _LIST_ENTRY **)MiGetAnyMultiplexedVm(2LL);
  v19 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v16, 0);
  if ( v19 )
  {
    CurrentPrcb = (unsigned int)(v19 - 1);
    LODWORD(v118) = v19 - 1;
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
    v126 = v13;
    MiWalkPageTables((__int64)&v121);
    CurrentPrcb = (unsigned int)v118;
    i = *((_QWORD *)&v118 + 1);
  }
  if ( !i )
  {
    i = v130 + 8;
    goto LABEL_22;
  }
  v22 = ((i >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v109 = v22;
  if ( !(_DWORD)CurrentPrcb )
  {
    if ( v10 == i )
    {
      v15 = *(_QWORD *)v10;
      i = v10 + 8;
      v111 = 1;
      v23 = (v10 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      v14 = *(_QWORD *)v10 == 0LL;
    }
    else
    {
LABEL_236:
      MiUnlockPageTableInternal(p_Blink, v22);
      v109 = 0LL;
      v23 = (i & 0xFFFFFFFFFFFFF000uLL) - 8;
    }
    if ( v23 > v130 )
      v23 = v130;
    v116 = v23;
    goto LABEL_22;
  }
  v89 = ((i >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (unsigned int)CurrentPrcb > 1 )
  {
    v103 = (unsigned int)(CurrentPrcb - 1);
    do
    {
      v89 = ((v89 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v103;
    }
    while ( v103 );
  }
  v22 = ((v89 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v109 = v22;
  if ( i != v10 )
    goto LABEL_236;
  v90 = *(_QWORD *)v89;
  if ( (*(_QWORD *)v89 & 1) != 0 )
  {
    v93 = *(_QWORD *)v89;
LABEL_251:
    v94 = (v93 >> 12) & 0xFFFFFFFFFFLL;
    if ( v94 <= qword_140E2DBE0 && (v95 = (_QWORD *)(48 * v94 - 0x21FFFFFFFFD8LL), (*v95 & 0x40000000000000LL) != 0) )
    {
      v97 = 1023;
      v98 = *v95 >> 43;
    }
    else
    {
      v96 = *(unsigned int *)(qword_140E2FFC0 + 8 * (v94 >> 18));
      v97 = 2047;
      v98 = v96 >> 4;
    }
    LOWORD(v129) = v97 & v98;
    v99 = *(_DWORD *)(BugCheckParameter2 + 48);
    if ( (*(_BYTE *)(BugCheckParameter2 + 48) & 0x70) == 0x30 || (v99 & 0xA00000) == 0xA00000 )
      ProtectionFromPte = MiGetProtectionFromPte(BugCheckParameter2, v90);
    else
      ProtectionFromPte = (v99 >> 7) & 0x1F;
    *a6 = ProtectionFromPte;
    goto LABEL_257;
  }
  if ( (v90 & 0x800) != 0 )
  {
    v93 = *(_QWORD *)v89;
    if ( qword_140E2DB80 )
    {
      if ( (v90 & 0x10) != 0 )
        v93 = v90 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v93 = v90 & ~qword_140E2DB80;
    }
    goto LABEL_251;
  }
  if ( (*(_BYTE *)(BugCheckParameter2 + 48) & 0x70) != 0x30 || !(unsigned int)MiIsLazyStampedPte(*(_QWORD *)v89) )
  {
    *a6 = 16;
LABEL_257:
    MiUnlockPageTableInternal(p_Blink, v22);
    *a7 = 0;
    *a8 = v129;
    v101 = MiGetLeafVa(v89 + 8);
    *a9 = v101;
    return 4096LL;
  }
  v15 = 0LL;
  while ( 1 )
  {
    v105 = 0;
    v104 = 0x2000;
    v28 = 0;
    v29 = 0;
    if ( !v15 )
      goto LABEL_24;
    if ( (unsigned int)MiPureAweVad(v27) && (unsigned int)MiIsLazyStampedPte(v15) )
    {
      v15 = v102;
LABEL_24:
      v30 = *(unsigned int *)(v27 + 48);
      if ( (*(_BYTE *)(v27 + 48) & 0x70) == 0x30 )
      {
        LOWORD(v129) = *(_WORD *)MiGetAweVadPartition(v27);
        goto LABEL_51;
      }
      if ( (v30 & 0x70) == 0x10 )
        goto LABEL_51;
      if ( (v30 & 0x200000) != 0 )
      {
        if ( (v30 & 0x2000000) != 0 )
        {
          v28 = ((unsigned int)v30 >> 7) & 0x1F;
          v104 = 4096;
          v105 = MI_GET_GRAPHICS_PROTECTION_FROM_VAD(v27, CurrentPrcb, v30);
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
            if ( *(_QWORD *)(v48 + 24) && (unsigned __int8)PsReferencePartitionSafe(*(_QWORD *)(v48 + 24)) )
            {
              LOWORD(v129) = **v49;
              PsDereferencePartition((__int64)v49);
            }
          }
        }
        goto LABEL_51;
      }
      v31 = v9 >> 12;
      LOWORD(v129) = **((_WORD **)qword_140E2FF88 + (*(_WORD *)(**(_QWORD **)(v27 + 72) + 60LL) & 0x3FF));
      ProtoPteAddress = (_QWORD *)MiGetProtoPteAddress(v27, v31, 12LL, &v112);
      if ( !ProtoPteAddress )
      {
        if ( a5 && (*(_DWORD *)(a5 + 32) != 0x2000 || *(_DWORD *)(a5 + 36) || (_WORD)v129 != *(_WORD *)(a5 + 20)) )
        {
          v29 = 1;
          i = v10;
        }
        else if ( !MiVadPureReserve(BugCheckParameter2)
               || !v112
               || *(_QWORD *)(v112 + 8)
               || (i = MiSkipEntirePagefileRegions(v56, v31, v10, i, v112), i == v10) )
        {
          i = v10 + 8;
        }
        goto LABEL_51;
      }
      if ( v14 )
      {
        v69 = ((__int64)(v116 - v10) >> 3) + 1;
        if ( v69 > 32 )
          v69 = 32LL;
        v70 = *(_QWORD *)(v112 + 8)
            + 8 * (*(unsigned int *)(v112 + 44) - (unsigned __int64)(*(_DWORD *)(v112 + 52) & 0x3FFFFFFF));
        if ( (*(_DWORD *)(v112 + 32) & 0x20000) != 0
          || (unsigned __int64)ProtoPteAddress >= v70
          || (unsigned __int64)ProtoPteAddress < *(_QWORD *)(v112 + 8) )
        {
          v69 = 0LL;
        }
        else if ( (unsigned __int64)&ProtoPteAddress[v69] > v70 )
        {
          v69 = (__int64)(v70 - (_QWORD)ProtoPteAddress) >> 3;
        }
        v71 = v10 + 8 * (v69 - 1);
        for ( i = v10 + 8; i <= v71; i += 8LL )
        {
          if ( *(_QWORD *)i )
            break;
        }
        if ( v111 )
          goto LABEL_30;
      }
      else
      {
        if ( v111 )
        {
LABEL_30:
          v32 = BugCheckParameter2;
LABEL_31:
          v33 = *(_QWORD **)(v32 + 120);
          if ( (__int64)v33 < 0 )
          {
            v34 = 1LL;
            v35 = (unsigned __int64)(*v33 - 1LL) >> 12;
          }
          else
          {
            v34 = 0LL;
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
                if ( (v36[4] & 0x20000) != 0 && (v67 = *v36, (*(_DWORD *)(*v36 + 56) & 0x8000000) != 0) )
                {
                  SessionId = PsGetSessionIdEx(KeGetCurrentThread()->ApcState.Process, v37, v34, v35);
                  v37 = *(_QWORD *)(MiGetSharedProtos(v67, SessionId, v36) + 72);
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
                v104 = 4096;
                goto LABEL_52;
              }
            }
            goto LABEL_51;
          }
          v77 = v112;
          if ( !*(_QWORD *)(*(_QWORD *)v112 + 64LL) && (*(_DWORD *)(*(_QWORD *)v112 + 56LL) & 0x2000) == 0 )
          {
            if ( v109 )
            {
              MiUnlockPageTableInternal(p_Blink, v109);
              v109 = 0LL;
            }
            MiUnlockWorkingSetShared((__int64)p_Blink, v131);
            v78 = (__int64)(i - v10) >> 3;
            v79 = (__int64)(*(_QWORD *)(v77 + 8)
                          + 8 * (*(unsigned int *)(v77 + 44) - (unsigned __int64)(*(_DWORD *)(v77 + 52) & 0x3FFFFFFF))
                          - (_QWORD)ProtoPteAddress) >> 3;
            if ( v79 > v78 )
              v79 = v78;
            if ( *ProtoPteAddress )
            {
              v80 = 4096;
              v104 = 4096;
              v28 = (*(_DWORD *)(BugCheckParameter2 + 48) >> 7) & 0x1F;
            }
            else
            {
              v80 = 0x2000;
            }
            if ( a5 && !(unsigned int)MiQueryStateMatches(a5, v80, v28, 0, v129) )
            {
              v108 = 0LL;
              v29 = 1;
              i = v10;
              MiLockWorkingSetShared((__int64)p_Blink);
              goto LABEL_51;
            }
            if ( v79 )
            {
LABEL_186:
              if ( *ProtoPteAddress )
              {
                if ( v80 == 4096 )
                {
LABEL_188:
                  ++v108;
                  --v79;
                  v80 = v104;
                  v81 = (unsigned __int64)(ProtoPteAddress + 1);
                  while ( 1 )
                  {
                    ProtoPteAddress = (_QWORD *)v81;
                    if ( !v79 )
                      break;
                    if ( (v81 & 0xFFF) != 0 )
                      goto LABEL_186;
                    v82 = *(_QWORD *)(((v81 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
                    if ( (v82 & 1) != 0 || (v82 & 0x3E0) != 0 )
                    {
                      if ( v104 == 4096 )
                        goto LABEL_186;
                      break;
                    }
                    if ( v104 == 4096 )
                      break;
                    if ( v79 <= 0x200 )
                    {
                      v108 += v79;
                      ProtoPteAddress += v79;
                      break;
                    }
                    v108 += 512LL;
                    v81 = (unsigned __int64)(ProtoPteAddress + 512);
                    v79 -= 512LL;
                  }
                }
              }
              else if ( v80 != 4096 )
              {
                goto LABEL_188;
              }
            }
            i = v10 + 8 * v108;
            MiLockWorkingSetShared((__int64)p_Blink);
LABEL_51:
            v38 = v104;
            goto LABEL_52;
          }
          v83 = (__int64)(i - v10) >> 3;
          v84 = (__int64)(*(_QWORD *)(v112 + 8)
                        + 8 * (*(unsigned int *)(v112 + 44) - (unsigned __int64)(*(_DWORD *)(v112 + 52) & 0x3FFFFFFF))
                        - (_QWORD)ProtoPteAddress) >> 3;
          if ( v84 > v83 )
            v84 = v83;
          v108 = v84;
          if ( (_DWORD)v34
            && (v91 = *(unsigned int *)(v32 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v32 + 32) << 32),
                v31 - v91 <= v35) )
          {
            v92 = v91 - v31;
            if ( v84 > v35 + v92 + 1 )
              v84 = v35 + v92 + 1;
            v108 = v84;
            i = v10 + 8 * v84;
          }
          else
          {
            i = v10 + 8 * v84;
            if ( (_DWORD)v34 )
              goto LABEL_51;
          }
          v38 = 4096;
          v28 = (*(_DWORD *)(v32 + 48) >> 7) & 0x1F;
          v104 = 4096;
          goto LABEL_52;
        }
        v85 = (__int64)(i - v10) >> 3;
        v86 = *(_QWORD *)(v112 + 8)
            + 8 * (*(unsigned int *)(v112 + 44) - (unsigned __int64)(*(_DWORD *)(v112 + 52) & 0x3FFFFFFF));
        if ( (*(_DWORD *)(v112 + 32) & 0x20000) != 0
          || (unsigned __int64)ProtoPteAddress >= v86
          || (unsigned __int64)ProtoPteAddress < *(_QWORD *)(v112 + 8) )
        {
          v85 = 1LL;
        }
        else if ( (unsigned __int64)&ProtoPteAddress[v85] > v86 )
        {
          i = v10 + 8 * ((__int64)(v86 - (_QWORD)ProtoPteAddress) >> 3);
          goto LABEL_167;
        }
        i = v10 + 8 * v85;
      }
LABEL_167:
      if ( MiVadPureReserve(BugCheckParameter2) )
      {
        v74 = MiSkipFractionalPagefileRegion(v73, v72, (__int64)(i - v10) >> 3);
        if ( (_QWORD *)v74 != ProtoPteAddress )
        {
          v75 = (v74 - (__int64)ProtoPteAddress) >> 3;
          ProtoPteAddress = 0LL;
          i = v10 + 8 * v75;
        }
      }
      goto LABEL_31;
    }
    if ( (v15 & 0x3E0) == 0x200 && (v15 & 1) == 0 )
    {
      if ( (v15 & 0x400) == 0 )
        goto LABEL_52;
      v46 = v15;
      if ( qword_140E2DB80 && (v15 & 0x10) == 0 )
        v46 = v15 & ~qword_140E2DB80;
      if ( HIDWORD(v46) == 0xFFFFFFFF )
        goto LABEL_52;
    }
    v104 = 4096;
    PageProtection = MiGetPageProtection(v27, v10, (__int64)&v129);
    v28 = PageProtection;
    if ( ProtoPteAddress )
    {
      MiUnlockPageTableInternal(p_Blink, v109);
      v109 = 0LL;
      MiUnlockWorkingSetShared((__int64)p_Blink, v131);
      MiFaultInPagedPool((ULONG_PTR)ProtoPteAddress);
      MiLockWorkingSetShared((__int64)p_Blink);
      v11 = v130;
      v12 = v117;
      v13 = v120;
      goto LABEL_2;
    }
    if ( PageProtection )
      goto LABEL_51;
    v38 = 0x2000;
    v104 = 0x2000;
LABEL_52:
    if ( v10 == v119 )
    {
      CurrentPrcb = a5;
      v24 = v129;
      v114 = v38;
      v115 = v28;
      v113 = v105;
      v107 = v129;
      if ( a5 )
      {
        if ( v38 != *(_DWORD *)(a5 + 32)
          || (!v28 ? (v76 = 0) : (v76 = MmProtectToValue[v28] | v105, v24 = v129),
              v76 != *(_DWORD *)(a5 + 36) || v24 != *(_WORD *)(a5 + 20)) )
        {
          v29 = 1;
          i = v10;
        }
      }
      v25 = a7;
      *a6 = v28;
      *v25 = v105;
      *a8 = v129;
LABEL_15:
      if ( v29 || v108 )
        goto LABEL_68;
      goto LABEL_17;
    }
    CurrentPrcb = v114;
    if ( v38 != v114 || (_WORD)v129 != v107 || v28 != v115 || v105 != v113 )
    {
      v43 = v114;
      LOWORD(v129) = v107;
      i = v10;
      goto LABEL_91;
    }
    if ( v108 )
      goto LABEL_15;
    if ( v29 )
      goto LABEL_68;
    if ( (__int64)((v10 - v119) & 0xFFFFFFFFFFFFFFF8uLL) < 256 )
      goto LABEL_17;
    if ( v109 )
    {
      if ( v109 != 0xFFFFF6FB7DBEDF68uLL )
      {
        if ( ((_DWORD)p_Blink[23] & 0xF) == 0 && v109 >= 0xFFFFF6FB7DBED000uLL && v109 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          v50 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7];
          if ( v50 )
          {
            CurrentPrcb = (*(_DWORD *)(v50 + 4LL * (((unsigned int)v109 >> 3) & 0x1FF)) & 0x40000000) != 0;
            goto LABEL_79;
          }
        }
        if ( ((_DWORD)p_Blink[23] & 0xF) != 0 && v109 >= 0xFFFFF6FB7DBED000uLL && v109 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          CurrentPrcb = (unsigned int)dword_140E2F0AC[(unsigned __int64)(2
                                                                       * (unsigned int)((__int64)(v109 + 0x90482413000LL) >> 3)) >> 5] >> ((2 * ((__int64)(v109 + 0x90482413000LL) >> 3)) & 0x1F);
          v45 = (CurrentPrcb & 2) == 0;
        }
        else
        {
          v44 = *(_QWORD *)v109;
          if ( v109 >= 0xFFFFF6FB7DBED000uLL
            && v109 <= 0xFFFFF6FB7DBED7F8uLL
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
      v65 = (_DWORD)p_Blink[23] & 0xF;
      if ( v65 )
      {
        if ( v65 == 7 )
        {
          v45 = *(_QWORD *)(CurrentPrcb + 40024) == 0LL;
          goto LABEL_80;
        }
        v66 = 72LL;
        if ( v65 == 5 )
          v66 = 0LL;
      }
      else
      {
        v66 = 48LL;
      }
      v45 = *(_QWORD *)(CurrentPrcb + v66 + 40000) == 0LL;
      goto LABEL_80;
    }
LABEL_61:
    if ( ((_DWORD)p_Blink[23] & 0xFu) <= 5 )
    {
      v40 = (__int64 *)(((_DWORD)p_Blink[23] & 0xF) == 1 ? &unk_140E38740 : p_Blink + 24);
      v41 = *v40;
      CurrentPrcb = (__int64)KeGetCurrentPrcb()->MmInternal;
      v42 = CurrentPrcb ? *(_DWORD *)(CurrentPrcb + 324) : 0;
      if ( (*(_DWORD *)(v41 + ((unsigned __int64)v42 << 6)) & 0x40000000) != 0 )
        goto LABEL_67;
    }
    if ( v131 < 2u )
      break;
LABEL_17:
    v26 = (unsigned __int64 *)(v10 + 8);
    v10 += 8LL;
    if ( i > v116 || (unsigned __int64 *)i != v26 )
      goto LABEL_68;
    if ( v111 )
      v15 = *v26;
    i += 8LL;
    v9 = (((_QWORD)v26 << 25) - v117) >> 16;
    v14 = 0;
LABEL_22:
    v27 = BugCheckParameter2;
  }
  v57 = KeGetCurrentPrcb();
  v58 = 0;
  v59 = 0;
  CurrentPrcb = (unsigned int)v57->DpcRequestSummary;
  DpcWatchdogCount = v57->DpcWatchdogCount;
  DpcTimeCount = v57->DpcTimeCount;
  if ( (CurrentPrcb & 1) != 0 )
  {
    v59 = 1;
    if ( DpcTimeCount <= 7 )
      goto LABEL_126;
    if ( v57->QuantumEnd )
    {
      v58 = 1;
      goto LABEL_134;
    }
LABEL_128:
    if ( (CurrentPrcb & 0x1E) != 0 )
    {
      v58 = 5;
      goto LABEL_134;
    }
    if ( v57->CurrentThread == v57->IdleThread )
    {
LABEL_144:
      _disable();
      v57->DpcWatchdogCount = 0;
      v57->DpcTimeCount = 0;
      v63 = KeGetCurrentPrcb();
      SchedulerAssist = (unsigned __int32 *)v63->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v87 = *SchedulerAssist;
        do
        {
          CurrentPrcb = v87;
          LODWORD(CurrentPrcb) = v87 & 0xFFDFFFFF;
          v88 = v87;
          v87 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v87 & 0xFFDFFFFF, v87);
        }
        while ( v88 != v87 );
        if ( (v87 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v63);
      }
      _enable();
    }
    else
    {
      v58 = 6;
    }
  }
  else if ( v57->NestingLevel )
  {
    if ( DpcWatchdogCount <= 7 )
      goto LABEL_17;
    if ( !v57->QuantumEnd )
      goto LABEL_128;
    v58 = 7;
  }
  else
  {
    if ( (CurrentPrcb & 0x1E) != 0 )
    {
      v58 = 2;
      goto LABEL_134;
    }
    if ( !v57->QuantumEnd )
    {
      NextThread = v57->NextThread;
      if ( NextThread && NextThread != v57->CurrentThread )
      {
        v58 = 4;
        goto LABEL_134;
      }
LABEL_126:
      if ( DpcWatchdogCount <= 7 )
        goto LABEL_17;
      if ( v59 )
        goto LABEL_128;
      goto LABEL_144;
    }
    v58 = 3;
  }
LABEL_134:
  if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
    EtwTraceShouldYieldProcessor(v58, DpcWatchdogCount, DpcTimeCount);
  if ( !v58 )
    goto LABEL_17;
LABEL_67:
  i = v10 + 8;
LABEL_68:
  v43 = v104;
LABEL_91:
  if ( v109 )
    MiUnlockPageTableInternal(p_Blink, v109);
  result = v43;
  *a9 = (__int64)(i << 25) >> 16;
  return result;
}
