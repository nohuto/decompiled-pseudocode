/*
 * XREFs of MiStoreWriteModifiedPages @ 0x1402CA294
 * Callers:
 *     MiGatherPagefilePages @ 0x1403C0730 (MiGatherPagefilePages.c)
 * Callees:
 *     SmPageWrite @ 0x140207CB0 (SmPageWrite.c)
 *     MiIsPfnOriginalPteLost @ 0x14020D7D0 (MiIsPfnOriginalPteLost.c)
 *     MiSetStoreVirtualPagefileValue @ 0x140226180 (MiSetStoreVirtualPagefileValue.c)
 *     MiTransferSoftwarePte @ 0x1402280C0 (MiTransferSoftwarePte.c)
 *     MiMakePageFilePte @ 0x14022828C (MiMakePageFilePte.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ObReferenceObjectSafeWithTag @ 0x140299100 (ObReferenceObjectSafeWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402BC860 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiStoreCheckCandidatePage @ 0x1402CA054 (MiStoreCheckCandidatePage.c)
 *     MiUpdatePagefilePeakUsage @ 0x1402CB070 (MiUpdatePagefilePeakUsage.c)
 *     MiClearPageFileReservation @ 0x1402CC084 (MiClearPageFileReservation.c)
 *     MiUpdatePfnBackingStore @ 0x1402CC130 (MiUpdatePfnBackingStore.c)
 *     MiStoreLogNotCandidate @ 0x1402CC35C (MiStoreLogNotCandidate.c)
 *     MiRefPageFileSpaceBitmaps @ 0x1402CC570 (MiRefPageFileSpaceBitmaps.c)
 *     MiStoreLogWriteIssueFailure @ 0x1402CC8D0 (MiStoreLogWriteIssueFailure.c)
 *     MiStoreUpdatePagefileHash @ 0x1402D18E4 (MiStoreUpdatePagefileHash.c)
 *     MiStoreGetWriteSupport @ 0x1402D9790 (MiStoreGetWriteSupport.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MiStoreModifiedWriteDereference @ 0x1402EFF34 (MiStoreModifiedWriteDereference.c)
 *     KeQueryNodeActiveAffinityEx @ 0x140305020 (KeQueryNodeActiveAffinityEx.c)
 *     KeSetUserAffinityThread @ 0x1403060E4 (KeSetUserAffinityThread.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     MmUnmapLockedPages @ 0x1403285B0 (MmUnmapLockedPages.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140329CF0 (MmMapLockedPagesSpecifyCache.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     RtlClearBits @ 0x140337F60 (RtlClearBits.c)
 *     MiUpdatePageFileHighInPte @ 0x14037C850 (MiUpdatePageFileHighInPte.c)
 *     MiSetPfnModified @ 0x1403871E0 (MiSetPfnModified.c)
 *     MiStoreFreeWriteSupport @ 0x1404638C0 (MiStoreFreeWriteSupport.c)
 *     MiStoreDecrementOutstandingWrites @ 0x1404838B0 (MiStoreDecrementOutstandingWrites.c)
 *     MiIsStoreVirtualPagefileFull @ 0x1404A3524 (MiIsStoreVirtualPagefileFull.c)
 *     MiStoreLogWriteDisabled @ 0x1404A821C (MiStoreLogWriteDisabled.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiStoreExtendVirtualPagefile @ 0x1404F3D60 (MiStoreExtendVirtualPagefile.c)
 *     MiStoreLogFullPagefile @ 0x1404F86A8 (MiStoreLogFullPagefile.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiStoreWriteModifiedPages(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // r14
  char *v6; // r12
  __int64 v8; // r15
  unsigned int v9; // edx
  _QWORD *v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rbx
  struct _KTHREAD *v13; // r13
  bool v14; // zf
  __int64 v15; // r8
  unsigned __int8 v16; // r12
  __int64 v17; // r14
  __int64 v18; // r9
  int v19; // r10d
  __int64 v20; // rdx
  unsigned __int64 v21; // r11
  __int64 *v22; // rax
  unsigned __int64 v23; // rdi
  __int64 v24; // rcx
  _DWORD *v25; // rcx
  int v26; // r8d
  unsigned int v27; // edx
  int v28; // r10d
  __int64 v29; // r9
  unsigned int v30; // r11d
  unsigned int v31; // ecx
  __int64 *v32; // rbx
  __int64 i; // rcx
  unsigned __int64 v34; // rax
  unsigned int v35; // ebx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rsi
  int v38; // r10d
  void *v39; // r8
  int v40; // eax
  __int64 v41; // rdx
  PVOID v42; // rsi
  __int64 v43; // rax
  _QWORD *v44; // rdx
  __int128 v45; // xmm0
  __int64 v46; // rcx
  __int64 v47; // rax
  unsigned __int64 v48; // r8
  _BYTE *v49; // r9
  int v50; // ebx
  char v51; // r10
  __int64 v52; // rdx
  unsigned int v53; // edx
  __int64 Pool; // rax
  unsigned __int64 v56; // rbx
  unsigned __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // rdx
  __int64 v60; // rcx
  unsigned __int8 CurrentIrql; // r12
  unsigned __int64 v62; // r14
  int v63; // r13d
  unsigned __int64 v64; // rcx
  unsigned __int64 v65; // rsi
  unsigned int v66; // ebx
  __int64 v67; // rdi
  unsigned int v68; // r11d
  unsigned int v69; // ebx
  __int64 v70; // rsi
  unsigned __int64 v71; // rbx
  int IsPfnOriginalPteLost; // eax
  __int64 v73; // rbx
  __int64 v74; // rdx
  unsigned __int64 updated; // rbx
  unsigned int v76; // r14d
  __int64 v77; // r13
  unsigned int *v78; // rax
  unsigned int v79; // esi
  unsigned int v80; // edi
  int v81; // edx
  int v82; // r10d
  __int64 v83; // r8
  unsigned int j; // r9d
  unsigned int v85; // r11d
  unsigned int v86; // ecx
  _QWORD *v87; // r14
  __int64 k; // rdx
  __int64 v89; // rdx
  __int64 v90; // rcx
  unsigned __int64 v91; // rax
  __int64 v92; // rax
  _BYTE *v93; // rdx
  _QWORD *v94; // rax
  __int64 v95; // rax
  __int64 v96; // rsi
  char v97; // di
  __int64 v98; // rdx
  int v99; // eax
  _BYTE *v100; // rsi
  unsigned __int64 v101; // rax
  unsigned int v102; // r14d
  __int64 v103; // rdx
  __int64 v104; // r8
  __int64 v105; // r9
  _DWORD *v106; // rsi
  KIRQL v107; // al
  int v108; // ebx
  __int64 v109; // rdx
  unsigned __int8 v110; // bl
  unsigned int v111; // edx
  unsigned __int64 v112; // rax
  __int64 PageFilePte; // rax
  __int64 v114; // rdx
  _WORD *v115; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  _BYTE *v117; // rdi
  unsigned int v118; // [rsp+30h] [rbp-D0h]
  unsigned int v119; // [rsp+30h] [rbp-D0h]
  int v120; // [rsp+34h] [rbp-CCh]
  int v121; // [rsp+34h] [rbp-CCh]
  int v122; // [rsp+38h] [rbp-C8h]
  __int64 v123; // [rsp+40h] [rbp-C0h]
  int v124; // [rsp+48h] [rbp-B8h]
  unsigned int NumberToClear; // [rsp+4Ch] [rbp-B4h]
  PVOID Object; // [rsp+50h] [rbp-B0h]
  char *v127; // [rsp+58h] [rbp-A8h]
  int v128; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v129; // [rsp+68h] [rbp-98h]
  __int64 v130; // [rsp+70h] [rbp-90h]
  PVOID *p_P; // [rsp+78h] [rbp-88h]
  int v132; // [rsp+80h] [rbp-80h]
  __int64 v133; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v134; // [rsp+90h] [rbp-70h]
  struct _KTHREAD *v135; // [rsp+98h] [rbp-68h]
  __int64 v136; // [rsp+A0h] [rbp-60h]
  __int64 *v137; // [rsp+A8h] [rbp-58h]
  _QWORD *v138; // [rsp+B0h] [rbp-50h]
  __int128 v139; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v140; // [rsp+D0h] [rbp-30h]
  PMDL MemoryDescriptorList; // [rsp+D8h] [rbp-28h]
  PVOID P; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v143; // [rsp+E8h] [rbp-18h]
  __int128 v144; // [rsp+F8h] [rbp-8h]
  __int16 v146; // [rsp+160h] [rbp+60h] BYREF
  unsigned int v147; // [rsp+168h] [rbp+68h]

  v4 = *(_QWORD *)(a1 + 64);
  v5 = a1 + 104;
  v6 = 0LL;
  MemoryDescriptorList = (PMDL)(a1 + 104);
  v128 = 0;
  v8 = *(_QWORD *)(v4 + 216);
  v9 = *(_DWORD *)(a1 + 144) >> 12;
  v10 = (_QWORD *)a1;
  v139 = 0LL;
  v133 = 0LL;
  LODWORD(v4) = *(_DWORD *)(v8 + 1220);
  v140 = v8;
  NumberToClear = v9;
  v143 = 0LL;
  v144 = 0LL;
  if ( (_DWORD)v4 )
  {
    MiStoreLogWriteDisabled(*(unsigned int *)(v8 + 1220));
    --*(_DWORD *)(v8 + 1220);
    return 3221225626LL;
  }
  v11 = *(_QWORD *)(v8 + 8LL * *(unsigned int *)(v8 + 1204) + 18528);
  v123 = v11;
  if ( *(_DWORD *)(v11 + 12) < v9 )
  {
    MiStoreExtendVirtualPagefile(v8, v11);
    if ( !*(_DWORD *)(v11 + 12) )
    {
      MiStoreLogFullPagefile();
      return 3221225599LL;
    }
    v9 = NumberToClear;
  }
  if ( a2 && v9 == dword_140FC41FC && (unsigned __int16)KeNumberNodes > 1u )
  {
    v115 = (_WORD *)(v8 + 1432);
    v146 = 0;
    KeQueryNodeActiveAffinityEx((unsigned __int16)(a2 - 1), v8 + 1432, &v146);
    if ( v146 )
    {
      CurrentThread = KeGetCurrentThread();
      KeSetUserAffinityThread(CurrentThread, v8 + 1432);
      memset_0((void *)(v8 + 1440), 0, 8LL * (unsigned __int16)*v115);
      *v115 = 1;
      KeSetUserAffinityThread(CurrentThread, v8 + 1432);
    }
    v11 = v123;
  }
  v12 = v10[9];
  v130 = v12;
  if ( !v12 )
  {
    Pool = MiAllocatePool(0x40uLL, 8LL * (unsigned int)dword_140FC41FC + 96);
    v130 = Pool;
    v12 = Pool;
    v10[9] = Pool;
    if ( !Pool )
    {
      *(_DWORD *)(v8 + 1220) = 32;
      return 3221225626LL;
    }
  }
  v13 = KeGetCurrentThread();
  p_P = &P;
  P = 0LL;
  Object = 0LL;
  --v13->KernelApcDisable;
  v135 = v13;
  --v13->SpecialApcDisable;
  if ( *(_QWORD *)(v8 + 1304) )
  {
    v14 = v13->SpecialApcDisable++ == -1;
    if ( v14 && ($727077A9B6E167EAE1398C74674DC5A5 *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
      KiCheckForKernelApcDelivery(0LL, 1LL, a3, a4);
    v102 = -1073740640;
  }
  else
  {
    ++*(_DWORD *)(v8 + 1228);
    v14 = v13->SpecialApcDisable++ == -1;
    if ( v14 && ($727077A9B6E167EAE1398C74674DC5A5 *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
      KiCheckForKernelApcDelivery(0LL, 1LL, a3, a4);
    if ( (*(_BYTE *)(v5 + 10) & 5) != 0 )
      v6 = *(char **)(v5 + 24);
    else
      v6 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v5, 0, MmCached, 0LL, 0, 0x40000020u);
    v15 = 0LL;
    v127 = v6;
    if ( v6 )
    {
      v16 = 17;
      v124 = 0;
      v17 = 0LL;
      v18 = 0LL;
      v147 = 0;
      v19 = 0;
      v122 = 0;
      *(_DWORD *)(v12 + 88) = NumberToClear + 1;
      v20 = *(unsigned int *)(v11 + 88);
      v21 = v10[11];
      v129 = *(_QWORD *)(v8 + 1424);
      v22 = v10 + 19;
      v138 = v10 + 19;
      v118 = v20;
      v23 = 0LL;
      v134 = v21 >> 12;
      while ( 1 )
      {
        v137 = v22;
        v120 = v23;
        if ( (unsigned int)v23 >= NumberToClear )
          break;
        v24 = *v22;
        v136 = *v22;
        if ( v136 == qword_140E37138 )
        {
          v38 = v19 + 1;
          v37 = (unsigned int)v23;
          v122 = v38;
          goto LABEL_32;
        }
        if ( !*(_DWORD *)(v123 + 12) )
        {
          v35 = -1;
          goto LABEL_28;
        }
        v25 = P;
        if ( P != *(PVOID *)(v123 + 80) )
        {
          if ( P )
          {
            --*(_DWORD *)P;
            if ( !*v25 )
            {
              if ( v25 )
                ExFreePoolWithTag(v25, 0);
            }
          }
          MiRefPageFileSpaceBitmaps(v123, &P, v15, v18);
          LODWORD(v20) = v118;
          p_P = &P;
        }
        v26 = (unsigned int)v20 < (unsigned int)v143 ? v20 : 0;
        v27 = v143 - 1;
        v28 = (BYTE8(v143) & 4) != 0LL ? 0x20 : 0;
        v29 = *((_QWORD *)&v143 + 1) - ((BYTE8(v143) & 4) != 0LL ? 4 : 0);
        while ( 1 )
        {
          v132 = 0;
          v30 = v28 + v27;
          v31 = v28 + v26;
          if ( v27 - v26 != -1 )
          {
            v32 = (__int64 *)(v29 + 8 * ((unsigned __int64)v31 >> 6));
            for ( i = ((1LL << (v31 & 0x3F)) - 1) | *v32; i == -1; i = *v32 )
            {
              if ( (unsigned __int64)++v32 > v29 + 8 * ((unsigned __int64)v30 >> 6) )
                goto LABEL_51;
            }
            _BitScanForward64(&v34, ~i);
            v35 = v34 + ((unsigned int)(((__int64)v32 - v29) >> 3) << 6);
            v132 = v34;
            if ( v35 <= v30 )
              break;
          }
LABEL_51:
          v35 = -1;
LABEL_52:
          if ( !v26 )
            goto LABEL_27;
          v53 = v118 + 1;
          v26 = 0;
          if ( v118 + 1 > (unsigned int)v143 )
            v53 = v143;
          v27 = v53 - 1;
        }
        if ( v35 == -1 )
          goto LABEL_52;
        v35 -= v28;
LABEL_27:
        v10 = (_QWORD *)a1;
        v24 = v136;
        v23 = (unsigned int)v23;
LABEL_28:
        v136 = 48 * v24;
        v17 = 48 * v24 - 0x220000000000LL;
        v16 = MiLockPageInline(v17);
        if ( (unsigned int)MiIsPfnOriginalPteLost(v17) )
        {
          PageFilePte = MiMakePageFilePte(0LL);
          v114 = v10[8];
          if ( (*(_BYTE *)(v114 + 172) & 0x40) != 0 )
            v36 = MiSetStoreVirtualPagefileValue(v8, PageFilePte, 4u);
          else
            v36 = MiTransferSoftwarePte(PageFilePte, v114, (_KPROCESS *)(unsigned int)(v23 + v134), 1);
        }
        else
        {
          v36 = *(_QWORD *)(v17 + 16);
        }
        v37 = v23;
        *(_QWORD *)(v130 + 8 * v23 + 96) = v36;
        if ( v35 == -1 )
        {
LABEL_31:
          v38 = v122;
          v20 = v118;
LABEL_32:
          v23 = v37;
          if ( v16 == 17 )
          {
            v39 = Object;
            v118 = v20;
            v122 = v38;
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v16 < 2u )
            {
              if ( KiIrqlFlags )
              {
                LOBYTE(v20) = v16;
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v20);
              }
              __writecr8(v16);
            }
            v39 = Object;
            v16 = 17;
          }
LABEL_166:
          if ( v39 )
          {
            ObDereferenceObjectDeferDeleteWithTag(v39, 0x66506D4Du);
            Object = 0LL;
          }
          v18 = v147 + 1;
          v10 = (_QWORD *)a1;
          v117 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 1416) + 8LL) + (v23 >> 3));
          ++v147;
          *v117 |= 1 << (v120 & 7);
          goto LABEL_46;
        }
        if ( (*(_QWORD *)(v17 + 24) & 0x4000000000000000LL) != 0 )
          goto LABEL_49;
        v133 = 0LL;
        v40 = MiStoreCheckCandidatePage(v17, v35, &v128, &v139, &v133);
        if ( v40 < 0 )
        {
          MiStoreLogNotCandidate((unsigned int)v40, v35);
LABEL_49:
          v37 = v23;
          goto LABEL_31;
        }
        if ( (BYTE8(v139) & 3) != 0 )
        {
          v42 = Object;
        }
        else
        {
          v37 = v23;
          if ( !ObReferenceObjectSafeWithTag(v139, 0x66506D4Du) )
            goto LABEL_31;
          v42 = (PVOID)v139;
          Object = (PVOID)v139;
        }
        LOBYTE(v41) = v16;
        MiUnlockPage(v17, v41);
        v16 = 17;
        v43 = MiStoreGetWriteSupport(v8);
        v44 = (_QWORD *)v43;
        if ( !v43 )
        {
          v39 = Object;
          v124 = 1;
          goto LABEL_166;
        }
        v45 = v139;
        v46 = v43 + 32;
        *(_QWORD *)(v43 + 24) = v42;
        v10 = (_QWORD *)a1;
        *(_QWORD *)(v43 + 32) = 0LL;
        *(_QWORD *)(v43 + 64) = 0LL;
        *(_DWORD *)(v43 + 40) = 56;
        *(_QWORD *)(v43 + 72) = 4096LL;
        *(_QWORD *)(v43 + 56) = v127;
        *(_WORD *)(v43 + 42) |= 3u;
        v47 = v136;
        *v44 = a1;
        Object = 0LL;
        v48 = v129;
        v44[10] = 0xAAAAAAAAAAAAAAABuLL * (v47 >> 4);
        *(_DWORD *)(v48 + 24) = v23;
        *(_DWORD *)(v48 + 4) = v128;
        *(_QWORD *)(v48 + 32) = v133;
        *(_QWORD *)(v48 + 40) = v46;
        *(_QWORD *)(v48 + 56) = v44 + 1;
        *(_OWORD *)(v48 + 8) = v45;
        *(_QWORD *)(v48 + 48) = v44;
        ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v123 + 200));
        v49 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(v123 + 80) + 16LL) + ((unsigned __int64)v35 >> 3));
        v118 = v35 + 1;
        *v49 |= 1 << (v35 & 7);
        *(_DWORD *)(v123 + 88) = v35 + 1;
        v50 = *(_DWORD *)(v123 + 12) - 1;
        *(_DWORD *)(v123 + 12) = v50;
        MiUpdatePagefilePeakUsage(v123);
        LOBYTE(v52) = v51;
        MiReleaseSpinLockExclusive(v123 + 200, v52);
        if ( !v50 && (unsigned int)MiIsStoreVirtualPagefileFull(v8) )
          KeSetEvent((PRKEVENT)(v8 + 928), 0, 0);
        v129 += 64LL;
        v18 = v147;
LABEL_46:
        v23 = (unsigned int)(v120 + 1);
        v127 += 4096;
        v22 = v137 + 1;
        v20 = v118;
        v15 = 0LL;
        v19 = v122;
      }
      v56 = v129;
      v57 = *(_QWORD *)(v8 + 1424);
      v13 = v135;
      v58 = (__int64)(v129 - v57) >> 6;
      v121 = 0;
      if ( (_DWORD)v58 )
      {
        SmPageWrite(*(_QWORD *)(v8 + 184), v57, v58);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v60) = CurrentIrql;
          KiRaiseIrqlProcessIrqlFlags(v60);
        }
        v62 = *(_QWORD *)(v8 + 1424);
        if ( v62 < v56 )
        {
          v63 = 0;
          do
          {
            if ( (++v63 & 0xF) == 0 && KeShouldYieldProcessor() )
            {
              if ( KiIrqlFlags )
              {
                LOBYTE(v89) = CurrentIrql;
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v89);
              }
              __writecr8(CurrentIrql);
              v110 = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags )
              {
                LOBYTE(v90) = v110;
                KiRaiseIrqlProcessIrqlFlags(v90);
              }
              CurrentIrql = v110;
            }
            v64 = *(unsigned int *)(v62 + 24);
            v65 = v64;
            v66 = *(_DWORD *)v62;
            v67 = 48LL * v138[v64] - 0x220000000000LL;
            v68 = *(_DWORD *)(v62 + 4);
            v119 = v68;
            if ( *(int *)v62 < 0 )
            {
              v99 = v124;
              if ( v66 == -1073741670 )
                v99 = 1;
              ++v147;
              v124 = v99;
              v100 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 1416) + 8LL) + (v64 >> 3));
              *v100 |= 1 << (v64 & 7);
              v101 = MiTransferSoftwarePte(CLFS_LSN_NULL_EXT, v123, (_KPROCESS *)v68, 1);
              MiReleasePageFileInfo(v8, v101, 3);
              MiStoreFreeWriteSupport(*(PSLIST_ENTRY *)(v62 + 48));
              MiStoreLogWriteIssueFailure(
                v66,
                v62 + 8,
                *(unsigned int *)(v62 + 4),
                (unsigned int)++*(_DWORD *)(v8 + 1224));
              v59 = 1LL;
            }
            else
            {
              v69 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v67 + 24), 0x3FuLL) )
              {
                do
                {
                  if ( (++v69 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(0LL) )
                  {
                    HvlNotifyLongSpinWait(v69);
                  }
                  else
                  {
                    _mm_pause();
                  }
                }
                while ( *(__int64 *)(v67 + 24) < 0 );
              }
              v70 = v130 + 8 * v65;
              v71 = *(_QWORD *)(v70 + 96);
              if ( (v71 & 4) != 0 )
                *(_QWORD *)(v70 + 96) &= ~4uLL;
              else
                v71 &= -(__int64)((v71 & 2) != 0);
              MiClearPageFileReservation(v70 + 96);
              *(_QWORD *)(v70 + 96) = MiTransferSoftwarePte(*(_QWORD *)(v70 + 96), v123, (_KPROCESS *)v119, 1);
              IsPfnOriginalPteLost = MiIsPfnOriginalPteLost(v67);
              v8 = v140;
              if ( !IsPfnOriginalPteLost )
              {
                MiClearPageFileReservation(v67 + 16);
                MiUpdatePfnBackingStore(v67, v123, v119);
              }
              _InterlockedAnd64((volatile signed __int64 *)(v67 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( v71 )
                MiReleasePageFileInfo(v8, v71, 3);
              v59 = 1LL;
              ++v121;
            }
            v62 += 64LL;
          }
          while ( v62 < v129 );
          v13 = v135;
          v10 = (_QWORD *)a1;
        }
        if ( KiIrqlFlags )
        {
          LOBYTE(v59) = CurrentIrql;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v59);
        }
        __writecr8(CurrentIrql);
        LODWORD(v18) = v147;
      }
      if ( v124 )
        *(_DWORD *)(v8 + 1220) = 32;
      v73 = v130;
      _InterlockedAdd((volatile signed __int32 *)(v130 + 88), -(int)v18);
      if ( (_DWORD)v18 != NumberToClear )
      {
        v74 = v10[8];
        updated = CLFS_LSN_NULL_EXT;
        v76 = -1;
        if ( (*(_BYTE *)(v74 + 172) & 0x40) == 0 )
        {
          v112 = MiTransferSoftwarePte(CLFS_LSN_NULL_EXT, v74, (_KPROCESS *)(unsigned int)v134, 1);
          LODWORD(v18) = v147;
          updated = v112;
        }
        v77 = v130;
        while ( 1 )
        {
          if ( !(_DWORD)v18 )
          {
            *(_DWORD *)(a1 + 40) |= 0x40u;
            v13 = v135;
            if ( v122 + v121 != NumberToClear || *(_QWORD *)(v123 + 184) )
              MiStoreUpdatePagefileHash(NumberToClear, a1, a1 + 104, NumberToClear);
            MiStoreModifiedWriteDereference(a1);
            v6 = 0LL;
            v102 = 259;
            goto LABEL_124;
          }
          v78 = *(unsigned int **)(v8 + 1416);
          v79 = v76 + 1;
          v80 = *v78;
          v81 = *v78 - 1;
          v82 = (v78[2] & 4) != 0LL ? 0x20 : 0;
          v83 = *((_QWORD *)v78 + 1) - ((*((_QWORD *)v78 + 1) & 4LL) != 0 ? 4 : 0);
          for ( j = v79 < *v78 ? v79 : 0; ; j = 0 )
          {
            v85 = v82 + v81;
            v86 = v82 + j;
            if ( v81 - j != -1 )
            {
              v87 = (_QWORD *)(v83 + 8 * ((unsigned __int64)v86 >> 6));
              for ( k = ~*v87 | ((1LL << (v86 & 0x3F)) - 1); k == -1; k = ~*v87 )
              {
                if ( (unsigned __int64)++v87 > v83 + 8 * ((unsigned __int64)v85 >> 6) )
                  goto LABEL_137;
              }
              _BitScanForward64(&v91, ~k);
              v76 = v91 + ((unsigned int)(((__int64)v87 - v83) >> 3) << 6);
              if ( v76 <= v85 )
                break;
            }
LABEL_137:
            v76 = -1;
LABEL_138:
            if ( !j )
              goto LABEL_106;
            v111 = v79 + 1;
            if ( v79 + 1 > v80 )
              v111 = v80;
            v81 = v111 - 1;
          }
          if ( v76 == -1 )
            goto LABEL_138;
          v76 -= v82;
LABEL_106:
          v92 = *(_QWORD *)(v8 + 1416);
          --v147;
          v93 = (_BYTE *)(*(_QWORD *)(v92 + 8) + ((unsigned __int64)v76 >> 3));
          v94 = v138;
          *v93 &= ~(1 << (v76 & 7));
          v95 = v94[v76];
          if ( v95 == qword_140E37138 )
          {
            updated = MiUpdatePageFileHighInPte(updated, v76 + (unsigned int)v134);
            MiReleasePageFileInfo(v8, updated, 2);
            *(_QWORD *)(v77 + 8LL * v76 + 96) = CLFS_LSN_NULL_EXT;
          }
          else
          {
            v96 = 48 * v95 - 0x220000000000LL;
            v97 = MiLockPageInline(v96);
            MiSetPfnModified(v96, 1LL);
            LOBYTE(v98) = v97;
            MiUnlockPage(v96, v98);
          }
          LODWORD(v18) = v147;
        }
      }
      RtlClearBits(*(PRTL_BITMAP *)(v8 + 1416), 0, NumberToClear);
      v6 = v127;
      v102 = -1073740759;
      *(_DWORD *)(v73 + 88) = 0;
    }
    else
    {
      v102 = -1073741688;
    }
    --v13->SpecialApcDisable;
    MiStoreDecrementOutstandingWrites(v8);
    v14 = v13->SpecialApcDisable++ == -1;
    if ( v14 && ($727077A9B6E167EAE1398C74674DC5A5 *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
      KiCheckForKernelApcDelivery(1LL, v103, v104, v105);
  }
LABEL_124:
  KeLeaveCriticalRegionThread((__int64)v13);
  v106 = *p_P;
  if ( *p_P )
  {
    v107 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v123 + 200));
    v108 = --*v106;
    LOBYTE(v109) = v107;
    MiReleaseSpinLockExclusive(v123 + 200, v109);
    if ( !v108 )
      ExFreePoolWithTag(v106, 0);
  }
  if ( v6 && (MemoryDescriptorList->MdlFlags & 1) != 0 )
    MmUnmapLockedPages(MemoryDescriptorList->MappedSystemVa, MemoryDescriptorList);
  return v102;
}
