/*
 * XREFs of MiStoreWriteModifiedPages @ 0x1402281F4
 * Callers:
 *     MiGatherPagefilePages @ 0x14039C8C8 (MiGatherPagefilePages.c)
 * Callees:
 *     KeQueryNodeActiveAffinityEx @ 0x140208AA0 (KeQueryNodeActiveAffinityEx.c)
 *     KeSetUserAffinityThread @ 0x140209564 (KeSetUserAffinityThread.c)
 *     MiClearPageFileReservation @ 0x140213DEC (MiClearPageFileReservation.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiUpdatePagefilePeakUsage @ 0x140228FE8 (MiUpdatePagefilePeakUsage.c)
 *     MiStoreCheckCandidatePage @ 0x140229014 (MiStoreCheckCandidatePage.c)
 *     MiUpdatePfnBackingStore @ 0x140229ECC (MiUpdatePfnBackingStore.c)
 *     SmPageWrite @ 0x140246630 (SmPageWrite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14025E950 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     MmUnmapLockedPages @ 0x14028D9C0 (MmUnmapLockedPages.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14028F9F0 (MmMapLockedPagesSpecifyCache.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiStoreGetWriteSupport @ 0x1402ABB24 (MiStoreGetWriteSupport.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     KeShouldYieldProcessor @ 0x1402DA180 (KeShouldYieldProcessor.c)
 *     MiSetPfnModified @ 0x1402E4730 (MiSetPfnModified.c)
 *     MiStoreModifiedWriteDereference @ 0x1403371B8 (MiStoreModifiedWriteDereference.c)
 *     ObpTraceObjectReferenceIfActive @ 0x140340450 (ObpTraceObjectReferenceIfActive.c)
 *     MiRefPageFileSpaceBitmaps @ 0x140367484 (MiRefPageFileSpaceBitmaps.c)
 *     MiUpdatePageFileHighInPte @ 0x140368F40 (MiUpdatePageFileHighInPte.c)
 *     RtlClearBits @ 0x14037CD40 (RtlClearBits.c)
 *     MiIsPfnOriginalPteLost @ 0x14039D8FC (MiIsPfnOriginalPteLost.c)
 *     MiSetStoreVirtualPagefileValue @ 0x14039D920 (MiSetStoreVirtualPagefileValue.c)
 *     MiTransferSoftwarePte @ 0x14039F300 (MiTransferSoftwarePte.c)
 *     MiMakePageFilePte @ 0x14039F4D8 (MiMakePageFilePte.c)
 *     MiStoreLogNotCandidate @ 0x14045A3E8 (MiStoreLogNotCandidate.c)
 *     MiStoreFreeWriteSupport @ 0x14045C4C4 (MiStoreFreeWriteSupport.c)
 *     MiStoreLogWriteIssueFailure @ 0x14048400C (MiStoreLogWriteIssueFailure.c)
 *     MiStoreDecrementOutstandingWrites @ 0x1404840B0 (MiStoreDecrementOutstandingWrites.c)
 *     MiStoreUpdatePagefileHash @ 0x140486554 (MiStoreUpdatePagefileHash.c)
 *     MiIsStoreVirtualPagefileFull @ 0x1404A2F68 (MiIsStoreVirtualPagefileFull.c)
 *     MiStoreLogWriteDisabled @ 0x1404A926C (MiStoreLogWriteDisabled.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiStoreExtendVirtualPagefile @ 0x1404F6510 (MiStoreExtendVirtualPagefile.c)
 *     MiStoreLogFullPagefile @ 0x1404FAB48 (MiStoreLogFullPagefile.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiStoreWriteModifiedPages(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // r14
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v11; // rdi
  __int64 v12; // rbx
  struct _KTHREAD *v13; // r13
  bool v14; // zf
  char *v15; // rcx
  int v16; // ecx
  unsigned __int64 v17; // rsi
  __int64 v18; // r9
  __int64 v19; // rdx
  _QWORD *v20; // rax
  __int64 v21; // r10
  unsigned __int64 v22; // rdi
  __int64 v23; // r12
  _DWORD *v24; // rcx
  int v25; // r8d
  unsigned int v26; // edx
  int v27; // r10d
  __int64 v28; // r9
  unsigned int v29; // r11d
  unsigned int v30; // ecx
  __int64 *v31; // rbx
  __int64 i; // rcx
  unsigned __int64 v33; // rax
  unsigned int v34; // ebx
  __int64 v35; // r12
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // r9
  signed __int64 *v40; // roff
  signed __int64 v41; // rax
  signed __int64 v42; // rtt
  __int64 v43; // rax
  __int128 v44; // xmm0
  _BYTE *v45; // r9
  int v46; // ebx
  char v47; // r10
  __int64 v48; // rdx
  int v49; // ecx
  unsigned int v50; // edx
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  unsigned __int8 CurrentIrql; // r12
  unsigned __int64 v57; // r14
  int v58; // r13d
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // rsi
  unsigned int v61; // ebx
  __int64 v62; // rdi
  unsigned int v63; // r10d
  unsigned int v64; // ebx
  __int64 v65; // rsi
  unsigned __int64 v66; // rbx
  int IsPfnOriginalPteLost; // eax
  unsigned __int64 updated; // rbx
  unsigned int v69; // r14d
  __int64 v70; // rdx
  __int64 v71; // rax
  unsigned int *v72; // rax
  unsigned int v73; // esi
  unsigned int v74; // edi
  int v75; // edx
  int v76; // r10d
  __int64 v77; // r8
  unsigned int j; // r9d
  unsigned int v79; // r11d
  unsigned int v80; // ecx
  _QWORD *v81; // r14
  __int64 k; // rdx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  unsigned __int64 v86; // rax
  __int64 v87; // rax
  _BYTE *v88; // rdx
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rsi
  char v92; // di
  __int64 v93; // rdx
  unsigned __int8 v94; // bl
  unsigned int v96; // r14d
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  _DWORD *v101; // rsi
  KIRQL v102; // al
  int v103; // ebx
  __int64 v104; // rdx
  int v105; // eax
  _BYTE *v106; // rsi
  unsigned __int64 v107; // rax
  unsigned int v108; // edx
  __int64 PageFilePte; // rax
  __int64 v110; // rdx
  void *v111; // r8
  _WORD *v112; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v114; // r8
  __int64 v115; // rax
  unsigned int v116; // [rsp+30h] [rbp-A9h]
  unsigned int v117; // [rsp+30h] [rbp-A9h]
  int v118; // [rsp+34h] [rbp-A5h]
  int v119; // [rsp+38h] [rbp-A1h]
  int v120; // [rsp+3Ch] [rbp-9Dh]
  unsigned int NumberToClear; // [rsp+40h] [rbp-99h]
  __int64 v122; // [rsp+48h] [rbp-91h]
  PVOID Object; // [rsp+50h] [rbp-89h]
  char *v124; // [rsp+58h] [rbp-81h]
  unsigned __int64 v125; // [rsp+68h] [rbp-71h]
  __int64 Pool; // [rsp+70h] [rbp-69h]
  __int64 v127; // [rsp+88h] [rbp-51h] BYREF
  __int64 v128; // [rsp+90h] [rbp-49h]
  struct _KTHREAD *v129; // [rsp+98h] [rbp-41h]
  _QWORD *v130; // [rsp+A0h] [rbp-39h]
  __int64 v131; // [rsp+A8h] [rbp-31h]
  __int128 v132; // [rsp+B0h] [rbp-29h]
  __int64 v133; // [rsp+C8h] [rbp-11h]
  PMDL MemoryDescriptorList; // [rsp+D0h] [rbp-9h]
  PVOID P; // [rsp+D8h] [rbp-1h] BYREF
  __int128 v136; // [rsp+E0h] [rbp+7h]
  __int128 v137; // [rsp+F0h] [rbp+17h]
  __int16 v139; // [rsp+150h] [rbp+77h] BYREF
  unsigned int v140; // [rsp+158h] [rbp+7Fh]

  v4 = *(_QWORD *)(a1 + 64);
  v5 = a1 + 104;
  v6 = 0LL;
  MemoryDescriptorList = (PMDL)(a1 + 104);
  v8 = *(_QWORD *)(v4 + 216);
  v9 = *(_DWORD *)(a1 + 144) >> 12;
  v132 = 0LL;
  v127 = 0LL;
  LODWORD(v4) = *(_DWORD *)(v8 + 1220);
  v133 = v8;
  NumberToClear = v9;
  v136 = 0LL;
  v137 = 0LL;
  if ( (_DWORD)v4 )
  {
    MiStoreLogWriteDisabled(*(unsigned int *)(v8 + 1220));
    --*(_DWORD *)(v8 + 1220);
    return 3221225626LL;
  }
  v11 = *(_QWORD *)(v8 + 8LL * *(unsigned int *)(v8 + 1204) + 18528);
  v122 = v11;
  if ( *(_DWORD *)(v11 + 12) < (unsigned int)v9 )
  {
    MiStoreExtendVirtualPagefile(v8, v11);
    if ( !*(_DWORD *)(v11 + 12) )
    {
      MiStoreLogFullPagefile();
      return 3221225599LL;
    }
    v9 = NumberToClear;
  }
  if ( a2 && (unsigned __int16)KeNumberNodes > 1u && (_DWORD)v9 == dword_140FC420C )
  {
    v112 = (_WORD *)(v8 + 1432);
    v139 = 0;
    KeQueryNodeActiveAffinityEx(a2 - 1, (unsigned __int16 *)(v8 + 1432), &v139);
    if ( v139 )
    {
      CurrentThread = KeGetCurrentThread();
      KeSetUserAffinityThread((__int64)CurrentThread, v8 + 1432, a3);
      memset_0((void *)(v8 + 1440), 0, 8LL * (unsigned __int16)*v112);
      *v112 = 1;
      KeSetUserAffinityThread((__int64)CurrentThread, v8 + 1432, v114);
    }
    v11 = v122;
  }
  v12 = *(_QWORD *)(a1 + 72);
  Pool = v12;
  if ( !v12 )
  {
    Pool = MiAllocatePool(0x40uLL, 8LL * (unsigned int)dword_140FC420C + 96);
    v12 = Pool;
    *(_QWORD *)(a1 + 72) = Pool;
    if ( !Pool )
    {
      *(_DWORD *)(v8 + 1220) = 32;
      return 3221225626LL;
    }
  }
  v13 = KeGetCurrentThread();
  P = 0LL;
  Object = 0LL;
  --v13->KernelApcDisable;
  v124 = 0LL;
  --v13->SpecialApcDisable;
  v129 = v13;
  if ( *(_QWORD *)(v8 + 1304) )
  {
    v14 = v13->SpecialApcDisable++ == -1;
    if ( v14 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
      KiCheckForKernelApcDelivery(1LL, v9, a3, a4);
    v96 = -1073740640;
  }
  else
  {
    ++*(_DWORD *)(v8 + 1228);
    v14 = v13->SpecialApcDisable++ == -1;
    if ( v14 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
      KiCheckForKernelApcDelivery(1LL, v9, a3, a4);
    if ( (*(_BYTE *)(v5 + 10) & 5) != 0 )
      v15 = *(char **)(v5 + 24);
    else
      v15 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v5, 0, MmCached, 0LL, 0, 0x40000020u);
    v124 = v15;
    if ( v15 )
    {
      v16 = 0;
      v120 = 0;
      LOBYTE(v17) = 17;
      v18 = 0LL;
      v140 = 0;
      v119 = 0;
      *(_DWORD *)(v12 + 88) = NumberToClear + 1;
      v19 = *(unsigned int *)(v11 + 88);
      v125 = *(_QWORD *)(v8 + 1424);
      v20 = (_QWORD *)(a1 + 152);
      v21 = *(_QWORD *)(a1 + 88) >> 12;
      v131 = a1 + 152;
      v116 = v19;
      v22 = 0LL;
      v128 = v21;
      while ( 1 )
      {
        v130 = v20;
        if ( (unsigned int)v22 >= NumberToClear )
          break;
        v23 = *v20;
        if ( *v20 == qword_140E37378 )
        {
          v49 = v16 + 1;
          v119 = v49;
          goto LABEL_48;
        }
        if ( !*(_DWORD *)(v122 + 12) )
        {
          v34 = -1;
          goto LABEL_28;
        }
        v24 = P;
        if ( P != *(PVOID *)(v122 + 80) )
        {
          if ( P )
          {
            --*(_DWORD *)P;
            if ( !*v24 )
            {
              if ( v24 )
                ExFreePoolWithTag(v24, 0);
            }
          }
          MiRefPageFileSpaceBitmaps(v122, &P);
          LODWORD(v19) = v116;
        }
        v25 = (unsigned int)v19 < (unsigned int)v136 ? v19 : 0;
        v26 = v136 - 1;
        v27 = (BYTE8(v136) & 4) != 0LL ? 0x20 : 0;
        v28 = *((_QWORD *)&v136 + 1) - ((BYTE8(v136) & 4) != 0LL ? 4 : 0);
        while ( 1 )
        {
          v29 = v27 + v26;
          v30 = v27 + v25;
          if ( v26 - v25 != -1 )
          {
            v31 = (__int64 *)(v28 + 8 * ((unsigned __int64)v30 >> 6));
            for ( i = ((1LL << (v30 & 0x3F)) - 1) | *v31; i == -1; i = *v31 )
            {
              if ( (unsigned __int64)++v31 > v28 + 8 * ((unsigned __int64)v29 >> 6) )
                goto LABEL_55;
            }
            _BitScanForward64(&v33, ~i);
            v34 = v33 + ((unsigned int)(((__int64)v31 - v28) >> 3) << 6);
            if ( v34 <= v29 )
              break;
          }
LABEL_55:
          v34 = -1;
LABEL_56:
          if ( !v25 )
            goto LABEL_27;
          v50 = v116 + 1;
          v25 = 0;
          if ( v116 + 1 > (unsigned int)v136 )
            v50 = v136;
          v26 = v50 - 1;
        }
        if ( v34 == -1 )
          goto LABEL_56;
        v34 -= v27;
LABEL_27:
        v22 = (unsigned int)v22;
LABEL_28:
        v35 = 48 * v23;
        v6 = v35 - 0x220000000000LL;
        v17 = (unsigned __int8)MiLockPageInline(v35 - 0x220000000000LL);
        if ( (unsigned int)MiIsPfnOriginalPteLost(v35 - 0x220000000000LL) )
        {
          PageFilePte = MiMakePageFilePte(0LL);
          v110 = *(_QWORD *)(a1 + 64);
          if ( (*(_BYTE *)(v110 + 172) & 0x40) != 0 )
            v36 = MiSetStoreVirtualPagefileValue(v8, PageFilePte, 4LL);
          else
            v36 = MiTransferSoftwarePte(PageFilePte, v110, (unsigned int)(v22 + v128), 1LL);
        }
        else
        {
          v36 = *(_QWORD *)(v6 + 16);
        }
        *(_QWORD *)(Pool + 8 * v22 + 96) = v36;
        if ( v34 != -1 && (*(_QWORD *)(v6 + 24) & 0x4000000000000000LL) == 0 )
        {
          v127 = 0LL;
          v37 = MiStoreCheckCandidatePage(v35 - 0x220000000000LL, (__int64)&v127);
          if ( v37 < 0 )
          {
            MiStoreLogNotCandidate((unsigned int)v37, v34);
            goto LABEL_47;
          }
          if ( (BYTE8(v132) & 3) == 0 )
          {
            v39 = v132;
            v40 = (signed __int64 *)(v132 - 48);
            _m_prefetchw((const void *)(v132 - 48));
            v41 = *v40;
            while ( v41 )
            {
              v42 = v41;
              v41 = _InterlockedCompareExchange64((volatile signed __int64 *)(v39 - 48), v41 + 1, v41);
              if ( v42 == v41 )
              {
                ObpTraceObjectReferenceIfActive(v39 - 48, 1LL, 1716546893LL);
                Object = (PVOID)v132;
                goto LABEL_38;
              }
            }
            goto LABEL_47;
          }
LABEL_38:
          _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (unsigned __int8)v17 < 2u )
          {
            if ( KiIrqlFlags )
            {
              LOBYTE(v38) = v17;
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v38);
            }
            __writecr8(v17);
          }
          LOBYTE(v17) = 17;
          v43 = MiStoreGetWriteSupport(v8);
          if ( v43 )
          {
            v44 = v132;
            *(_QWORD *)(v43 + 24) = Object;
            *(_QWORD *)(v43 + 32) = 0LL;
            *(_DWORD *)(v43 + 40) = 56;
            *(_QWORD *)(v43 + 64) = 0LL;
            *(_QWORD *)(v43 + 72) = 4096LL;
            *(_QWORD *)(v43 + 56) = v124;
            *(_WORD *)(v43 + 42) |= 3u;
            *(_QWORD *)v43 = a1;
            *(_QWORD *)(v43 + 80) = 0xAAAAAAAAAAAAAAABuLL * (v35 >> 4);
            *(_DWORD *)(v125 + 24) = v22;
            *(_DWORD *)(v125 + 4) = 0;
            *(_QWORD *)(v125 + 32) = v127;
            *(_QWORD *)(v125 + 40) = v43 + 32;
            *(_QWORD *)(v125 + 56) = v43 + 8;
            Object = 0LL;
            *(_OWORD *)(v125 + 8) = v44;
            *(_QWORD *)(v125 + 48) = v43;
            ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v122 + 200));
            v45 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(v122 + 80) + 16LL) + ((unsigned __int64)v34 >> 3));
            v116 = v34 + 1;
            *v45 |= 1 << (v34 & 7);
            *(_DWORD *)(v122 + 88) = v34 + 1;
            v46 = *(_DWORD *)(v122 + 12) - 1;
            *(_DWORD *)(v122 + 12) = v46;
            MiUpdatePagefilePeakUsage(v122);
            LOBYTE(v48) = v47;
            MiReleaseSpinLockExclusive(v122 + 200, v48);
            if ( !v46 && (unsigned int)MiIsStoreVirtualPagefileFull(v8) )
              KeSetEvent((PRKEVENT)(v8 + 928), 0, 0);
            v125 += 64LL;
            v18 = v140;
            goto LABEL_45;
          }
          v120 = 1;
LABEL_163:
          v111 = Object;
          goto LABEL_170;
        }
LABEL_47:
        v49 = v119;
        v19 = v116;
LABEL_48:
        if ( (_BYTE)v17 != 17 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (unsigned __int8)v17 < 2u )
          {
            if ( KiIrqlFlags )
            {
              LOBYTE(v19) = v17;
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v19);
            }
            __writecr8((unsigned __int8)v17);
          }
          LOBYTE(v17) = 17;
          goto LABEL_163;
        }
        v111 = Object;
        v116 = v19;
        v119 = v49;
LABEL_170:
        if ( v111 )
        {
          ObDereferenceObjectDeferDeleteWithTag(v111, 0x66506D4Du);
          Object = 0LL;
        }
        v115 = *(_QWORD *)(v8 + 1416);
        v18 = ++v140;
        *(_BYTE *)(*(_QWORD *)(v115 + 8) + (v22 >> 3)) |= 1 << (v22 & 7);
LABEL_45:
        v22 = (unsigned int)(v22 + 1);
        v124 += 4096;
        v20 = v130 + 1;
        v19 = v116;
        v16 = v119;
      }
      v51 = *(_QWORD *)(v8 + 1424);
      v13 = v129;
      v52 = (__int64)(v125 - v51) >> 6;
      v118 = 0;
      if ( (_DWORD)v52 )
      {
        SmPageWrite(*(_QWORD *)(v8 + 184), v51, v52, v18);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v53) = 2;
          LOBYTE(v54) = CurrentIrql;
          KiRaiseIrqlProcessIrqlFlags(v54, v53, v55);
        }
        v57 = *(_QWORD *)(v8 + 1424);
        if ( v57 < v125 )
        {
          v58 = 0;
          do
          {
            if ( (++v58 & 0xF) == 0 && KeShouldYieldProcessor() )
            {
              if ( KiIrqlFlags )
              {
                LOBYTE(v83) = CurrentIrql;
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v83);
              }
              __writecr8(CurrentIrql);
              v94 = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags )
              {
                LOBYTE(v83) = 2;
                LOBYTE(v84) = v94;
                KiRaiseIrqlProcessIrqlFlags(v84, v83, v85);
              }
              CurrentIrql = v94;
            }
            v59 = *(unsigned int *)(v57 + 24);
            v60 = v59;
            v61 = *(_DWORD *)v57;
            v62 = 48LL * *(_QWORD *)(v131 + 8 * v59) - 0x220000000000LL;
            v63 = *(_DWORD *)(v57 + 4);
            v117 = v63;
            if ( *(int *)v57 < 0 )
            {
              v105 = v120;
              if ( v61 == -1073741670 )
                v105 = 1;
              ++v140;
              v120 = v105;
              v106 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 1416) + 8LL) + (v59 >> 3));
              *v106 |= 1 << (v59 & 7);
              v107 = MiTransferSoftwarePte(CLFS_LSN_NULL_EXT, v122, v63, 1LL);
              MiReleasePageFileInfo(v8, v107, 3LL);
              MiStoreFreeWriteSupport(*(PSLIST_ENTRY *)(v57 + 48));
              MiStoreLogWriteIssueFailure(
                v61,
                v57 + 8,
                *(unsigned int *)(v57 + 4),
                (unsigned int)++*(_DWORD *)(v8 + 1224));
              v53 = 1LL;
            }
            else
            {
              v64 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v62 + 24), 0x3FuLL) )
              {
                do
                {
                  if ( (++v64 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v59) )
                  {
                    HvlNotifyLongSpinWait(v64);
                  }
                  else
                  {
                    _mm_pause();
                  }
                }
                while ( *(__int64 *)(v62 + 24) < 0 );
              }
              v65 = Pool + 8 * v60;
              v66 = *(_QWORD *)(v65 + 96);
              if ( (v66 & 4) != 0 )
                *(_QWORD *)(v65 + 96) &= ~4uLL;
              else
                v66 &= -(__int64)((v66 & 2) != 0);
              MiClearPageFileReservation((__int64 *)(v65 + 96));
              *(_QWORD *)(v65 + 96) = MiTransferSoftwarePte(*(_QWORD *)(v65 + 96), v122, v117, 1LL);
              IsPfnOriginalPteLost = MiIsPfnOriginalPteLost(v62);
              v8 = v133;
              if ( !IsPfnOriginalPteLost )
              {
                MiClearPageFileReservation((__int64 *)(v62 + 16));
                MiUpdatePfnBackingStore(v62, v122, v117);
              }
              _InterlockedAnd64((volatile signed __int64 *)(v62 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( v66 )
                MiReleasePageFileInfo(v8, v66, 3LL);
              v53 = 1LL;
              ++v118;
            }
            v57 += 64LL;
          }
          while ( v57 < v125 );
          v13 = v129;
        }
        if ( KiIrqlFlags )
        {
          LOBYTE(v53) = CurrentIrql;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v53);
        }
        __writecr8(CurrentIrql);
        LODWORD(v18) = v140;
      }
      if ( v120 )
        *(_DWORD *)(v8 + 1220) = 32;
      _InterlockedAdd((volatile signed __int32 *)(Pool + 88), -(int)v18);
      if ( (_DWORD)v18 != NumberToClear )
      {
        updated = CLFS_LSN_NULL_EXT;
        v69 = -1;
        v124 = 0LL;
        v70 = *(_QWORD *)(a1 + 64);
        if ( (*(_BYTE *)(v70 + 172) & 0x40) == 0 )
        {
          v71 = MiTransferSoftwarePte(CLFS_LSN_NULL_EXT, v70, (unsigned int)v128, 1LL);
          LODWORD(v18) = v140;
          updated = v71;
        }
        while ( 1 )
        {
          if ( !(_DWORD)v18 )
          {
            *(_DWORD *)(a1 + 40) |= 0x40u;
            v13 = v129;
            if ( v119 + v118 != NumberToClear || *(_QWORD *)(v122 + 184) )
              MiStoreUpdatePagefileHash(NumberToClear, a1, a1 + 104, NumberToClear);
            MiStoreModifiedWriteDereference(a1);
            v96 = 259;
            goto LABEL_122;
          }
          v72 = *(unsigned int **)(v8 + 1416);
          v73 = v69 + 1;
          v74 = *v72;
          v75 = *v72 - 1;
          v76 = (v72[2] & 4) != 0LL ? 0x20 : 0;
          v77 = *((_QWORD *)v72 + 1) - ((*((_QWORD *)v72 + 1) & 4LL) != 0 ? 4 : 0);
          for ( j = v73 < *v72 ? v73 : 0; ; j = 0 )
          {
            v79 = v76 + v75;
            v80 = v76 + j;
            if ( v75 - j != -1 )
            {
              v81 = (_QWORD *)(v77 + 8 * ((unsigned __int64)v80 >> 6));
              for ( k = ~*v81 | ((1LL << (v80 & 0x3F)) - 1); k == -1; k = ~*v81 )
              {
                if ( (unsigned __int64)++v81 > v77 + 8 * ((unsigned __int64)v79 >> 6) )
                  goto LABEL_143;
              }
              _BitScanForward64(&v86, ~k);
              v69 = v86 + ((unsigned int)(((__int64)v81 - v77) >> 3) << 6);
              if ( v69 <= v79 )
                break;
            }
LABEL_143:
            v69 = -1;
LABEL_144:
            if ( !j )
              goto LABEL_105;
            v108 = v73 + 1;
            if ( v73 + 1 > v74 )
              v108 = v74;
            v75 = v108 - 1;
          }
          if ( v69 == -1 )
            goto LABEL_144;
          v69 -= v76;
LABEL_105:
          v87 = *(_QWORD *)(v8 + 1416);
          --v140;
          v88 = (_BYTE *)(*(_QWORD *)(v87 + 8) + ((unsigned __int64)v69 >> 3));
          v89 = v131;
          *v88 &= ~(1 << (v69 & 7));
          v90 = *(_QWORD *)(v89 + 8LL * v69);
          if ( v90 == qword_140E37378 )
          {
            updated = MiUpdatePageFileHighInPte(updated, v69 + (unsigned int)v128, v77);
            MiReleasePageFileInfo(v8, updated, 2LL);
            *(_QWORD *)(Pool + 8LL * v69 + 96) = CLFS_LSN_NULL_EXT;
          }
          else
          {
            v91 = 48 * v90 - 0x220000000000LL;
            v92 = MiLockPageInline(v91);
            MiSetPfnModified(v91, 1LL);
            LOBYTE(v93) = v92;
            MiUnlockPage(v91, v93);
          }
          LODWORD(v18) = v140;
        }
      }
      RtlClearBits(*(PRTL_BITMAP *)(v8 + 1416), 0, NumberToClear);
      *(_DWORD *)(Pool + 88) = 0;
      v96 = -1073740759;
    }
    else
    {
      v96 = -1073741688;
    }
    --v13->SpecialApcDisable;
    MiStoreDecrementOutstandingWrites(v8);
    v14 = v13->SpecialApcDisable++ == -1;
    if ( v14 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
      KiCheckForKernelApcDelivery(v98, v97, v99, v100);
  }
LABEL_122:
  KeLeaveCriticalRegionThread(v13);
  v101 = P;
  if ( P )
  {
    v102 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v122 + 200));
    v103 = --*v101;
    LOBYTE(v104) = v102;
    MiReleaseSpinLockExclusive(v122 + 200, v104);
    if ( !v103 )
      ExFreePoolWithTag(v101, 0);
  }
  if ( v124 && (MemoryDescriptorList->MdlFlags & 1) != 0 )
    MmUnmapLockedPages(MemoryDescriptorList->MappedSystemVa, MemoryDescriptorList);
  return v96;
}
