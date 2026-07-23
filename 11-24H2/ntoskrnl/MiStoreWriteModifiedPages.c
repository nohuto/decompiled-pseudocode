/*
 * XREFs of MiStoreWriteModifiedPages @ 0x1402FB3F4
 * Callers:
 *     MiGatherPagefilePages @ 0x1402F9BC8 (MiGatherPagefilePages.c)
 * Callees:
 *     MiTransferSoftwarePte @ 0x140215AA0 (MiTransferSoftwarePte.c)
 *     MiMakePageFilePte @ 0x140215C78 (MiMakePageFilePte.c)
 *     MiSetPfnModified @ 0x140215EC0 (MiSetPfnModified.c)
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiStoreGetWriteSupport @ 0x140276E44 (MiStoreGetWriteSupport.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14028EF60 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiStoreFreeWriteSupport @ 0x1402DD6E0 (MiStoreFreeWriteSupport.c)
 *     MiStoreModifiedWriteDereference @ 0x1402DF2DC (MiStoreModifiedWriteDereference.c)
 *     RtlClearBits @ 0x1402EA360 (RtlClearBits.c)
 *     MiUpdatePageFileHighInPte @ 0x1402EACE0 (MiUpdatePageFileHighInPte.c)
 *     SmPageWrite @ 0x1402F5950 (SmPageWrite.c)
 *     MiIsPfnOriginalPteLost @ 0x1402FABFC (MiIsPfnOriginalPteLost.c)
 *     MiSetStoreVirtualPagefileValue @ 0x1402FAC20 (MiSetStoreVirtualPagefileValue.c)
 *     MiUpdatePagefilePeakUsage @ 0x1402FC1E8 (MiUpdatePagefilePeakUsage.c)
 *     MiStoreCheckCandidatePage @ 0x1402FC214 (MiStoreCheckCandidatePage.c)
 *     MiUpdatePfnBackingStore @ 0x1402FD13C (MiUpdatePfnBackingStore.c)
 *     MiClearPageFileReservation @ 0x14030714C (MiClearPageFileReservation.c)
 *     ObpTraceObjectReferenceIfActive @ 0x14031F930 (ObpTraceObjectReferenceIfActive.c)
 *     KeQueryNodeActiveAffinityEx @ 0x140330080 (KeQueryNodeActiveAffinityEx.c)
 *     KeSetUserAffinityThread @ 0x140330B44 (KeSetUserAffinityThread.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiRefPageFileSpaceBitmaps @ 0x1403C5EE8 (MiRefPageFileSpaceBitmaps.c)
 *     MiStoreUpdatePagefileHash @ 0x140425E74 (MiStoreUpdatePagefileHash.c)
 *     MiStoreLogNotCandidate @ 0x14044F838 (MiStoreLogNotCandidate.c)
 *     MiStoreLogWriteIssueFailure @ 0x14047F52C (MiStoreLogWriteIssueFailure.c)
 *     MiStoreDecrementOutstandingWrites @ 0x14047F648 (MiStoreDecrementOutstandingWrites.c)
 *     MiIsStoreVirtualPagefileFull @ 0x14049DEC8 (MiIsStoreVirtualPagefileFull.c)
 *     MiStoreLogWriteDisabled @ 0x1404A368C (MiStoreLogWriteDisabled.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiStoreExtendVirtualPagefile @ 0x1404F3E10 (MiStoreExtendVirtualPagefile.c)
 *     MiStoreLogFullPagefile @ 0x1404F8428 (MiStoreLogFullPagefile.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  unsigned __int64 v19; // rdx
  _QWORD *v20; // rax
  __int64 v21; // r10
  unsigned __int64 v22; // rdi
  __int64 v23; // r8
  __int64 v24; // r12
  _DWORD *v25; // rcx
  int v26; // r10d
  unsigned int v27; // r11d
  unsigned int v28; // ecx
  __int64 *v29; // rbx
  __int64 i; // rcx
  unsigned __int64 v31; // rax
  unsigned int v32; // ebx
  __int64 v33; // r12
  unsigned __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // r9
  signed __int64 *v38; // roff
  signed __int64 v39; // rax
  signed __int64 v40; // rtt
  PSLIST_ENTRY v41; // rax
  __int128 v42; // xmm0
  _BYTE *v43; // r9
  int v44; // ebx
  unsigned __int8 v45; // r10
  int v46; // ecx
  unsigned int v47; // edx
  unsigned __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rcx
  unsigned __int8 CurrentIrql; // r12
  unsigned __int64 v53; // r14
  int v54; // r13d
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // rsi
  unsigned int v57; // ebx
  __int64 v58; // rdi
  unsigned int v59; // r10d
  unsigned int v60; // ebx
  __int64 v61; // rsi
  unsigned __int64 v62; // rbx
  int IsPfnOriginalPteLost; // eax
  __int64 v64; // r9
  __int64 updated; // rbx
  unsigned int v66; // r14d
  __int64 v67; // rdx
  unsigned __int64 v68; // rax
  unsigned int *v69; // rax
  unsigned int v70; // esi
  unsigned int v71; // edi
  int v72; // edx
  int v73; // r10d
  __int64 v74; // r8
  __int64 j; // r9
  unsigned int v76; // r11d
  unsigned int v77; // ecx
  _QWORD *v78; // r14
  __int64 k; // rdx
  __int64 v80; // rdx
  __int64 v81; // rcx
  unsigned __int64 v82; // rax
  __int64 v83; // rax
  _BYTE *v84; // rdx
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rsi
  unsigned __int8 v88; // di
  unsigned __int8 v89; // bl
  unsigned int v91; // r14d
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  _DWORD *v96; // rsi
  KIRQL v97; // al
  int v98; // ebx
  int v99; // eax
  _BYTE *v100; // rsi
  unsigned __int64 v101; // rax
  __int64 v102; // r9
  __int64 v103; // r9
  unsigned int v104; // edx
  __int64 PageFilePte; // rax
  __int64 v106; // rdx
  void *v107; // r8
  _WORD *v108; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v110; // rax
  unsigned int v111; // [rsp+30h] [rbp-A9h]
  unsigned int v112; // [rsp+30h] [rbp-A9h]
  int v113; // [rsp+34h] [rbp-A5h]
  int v114; // [rsp+38h] [rbp-A1h]
  int v115; // [rsp+3Ch] [rbp-9Dh]
  unsigned int NumberToClear; // [rsp+40h] [rbp-99h]
  __int64 v117; // [rsp+48h] [rbp-91h]
  PVOID Object; // [rsp+50h] [rbp-89h]
  char *v119; // [rsp+58h] [rbp-81h]
  unsigned __int64 v120; // [rsp+68h] [rbp-71h]
  __int64 Pool; // [rsp+70h] [rbp-69h]
  __int64 v122; // [rsp+88h] [rbp-51h] BYREF
  __int64 v123; // [rsp+90h] [rbp-49h]
  struct _KTHREAD *v124; // [rsp+98h] [rbp-41h]
  _QWORD *v125; // [rsp+A0h] [rbp-39h]
  __int64 v126; // [rsp+A8h] [rbp-31h]
  __int128 v127; // [rsp+B0h] [rbp-29h]
  __int64 v128; // [rsp+C8h] [rbp-11h]
  PMDL MemoryDescriptorList; // [rsp+D0h] [rbp-9h]
  PVOID P; // [rsp+D8h] [rbp-1h] BYREF
  __int128 v131; // [rsp+E0h] [rbp+7h]
  __int128 v132; // [rsp+F0h] [rbp+17h]
  __int16 v134; // [rsp+150h] [rbp+77h] BYREF
  unsigned int v135; // [rsp+158h] [rbp+7Fh]

  v4 = *(_QWORD *)(a1 + 64);
  v5 = a1 + 104;
  v6 = 0LL;
  MemoryDescriptorList = (PMDL)(a1 + 104);
  v8 = *(_QWORD *)(v4 + 216);
  v9 = *(_DWORD *)(a1 + 144) >> 12;
  v127 = 0LL;
  v122 = 0LL;
  LODWORD(v4) = *(_DWORD *)(v8 + 1220);
  v128 = v8;
  NumberToClear = v9;
  v131 = 0LL;
  v132 = 0LL;
  if ( (_DWORD)v4 )
  {
    MiStoreLogWriteDisabled(*(unsigned int *)(v8 + 1220));
    --*(_DWORD *)(v8 + 1220);
    return 3221225626LL;
  }
  v11 = *(_QWORD *)(v8 + 8LL * *(unsigned int *)(v8 + 1204) + 18528);
  v117 = v11;
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
  if ( a2 && (unsigned __int16)KeNumberNodes > 1u && (_DWORD)v9 == dword_140FC520C )
  {
    v108 = (_WORD *)(v8 + 1432);
    v134 = 0;
    KeQueryNodeActiveAffinityEx((unsigned __int16)(a2 - 1), v8 + 1432, &v134);
    if ( v134 )
    {
      CurrentThread = KeGetCurrentThread();
      KeSetUserAffinityThread(CurrentThread, v8 + 1432);
      memset_0((void *)(v8 + 1440), 0, 8LL * (unsigned __int16)*v108);
      *v108 = 1;
      KeSetUserAffinityThread(CurrentThread, v8 + 1432);
    }
    v11 = v117;
  }
  v12 = *(_QWORD *)(a1 + 72);
  Pool = v12;
  if ( !v12 )
  {
    Pool = MiAllocatePool(0x40uLL, 8LL * (unsigned int)dword_140FC520C + 96, 2001956173);
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
  v119 = 0LL;
  --v13->SpecialApcDisable;
  v124 = v13;
  if ( *(_QWORD *)(v8 + 1304) )
  {
    v14 = v13->SpecialApcDisable++ == -1;
    if ( v14 && ($727077A9B6E167EAE1398C74674DC5A5 *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
      KiCheckForKernelApcDelivery(1LL, v9, a3, a4);
    v91 = -1073740640;
  }
  else
  {
    ++*(_DWORD *)(v8 + 1228);
    v14 = v13->SpecialApcDisable++ == -1;
    if ( v14 && ($727077A9B6E167EAE1398C74674DC5A5 *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
      KiCheckForKernelApcDelivery(1LL, v9, a3, a4);
    if ( (*(_BYTE *)(v5 + 10) & 5) != 0 )
      v15 = *(char **)(v5 + 24);
    else
      v15 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v5, 0, MmCached, 0LL, 0, 0x40000020u);
    v119 = v15;
    if ( v15 )
    {
      v16 = 0;
      v115 = 0;
      LOBYTE(v17) = 17;
      v18 = 0LL;
      v135 = 0;
      v114 = 0;
      *(_DWORD *)(v12 + 88) = NumberToClear + 1;
      v19 = *(unsigned int *)(v11 + 88);
      v120 = *(_QWORD *)(v8 + 1424);
      v20 = (_QWORD *)(a1 + 152);
      v21 = *(_QWORD *)(a1 + 88) >> 12;
      v126 = a1 + 152;
      v111 = v19;
      v22 = 0LL;
      v123 = v21;
      while ( 1 )
      {
        v125 = v20;
        v23 = 2LL;
        if ( (unsigned int)v22 >= NumberToClear )
          break;
        v24 = *v20;
        if ( *v20 == qword_140E374B8 )
        {
          v46 = v16 + 1;
          v114 = v46;
          goto LABEL_48;
        }
        if ( !*(_DWORD *)(v117 + 12) )
        {
          v32 = -1;
          goto LABEL_28;
        }
        v25 = P;
        if ( P != *(PVOID *)(v117 + 80) )
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
          MiRefPageFileSpaceBitmaps(v117, &P);
          LODWORD(v19) = v111;
        }
        v23 = (unsigned int)v19 < (unsigned int)v131 ? (unsigned int)v19 : 0;
        v19 = (unsigned int)(v131 - 1);
        v26 = (BYTE8(v131) & 4) != 0LL ? 0x20 : 0;
        v18 = *((_QWORD *)&v131 + 1) - ((BYTE8(v131) & 4) != 0LL ? 4 : 0);
        while ( 1 )
        {
          v27 = v26 + v19;
          v28 = v26 + v23;
          if ( (_DWORD)v19 - (_DWORD)v23 != -1 )
          {
            v19 = (unsigned __int64)v28 >> 6;
            v29 = (__int64 *)(v18 + 8 * v19);
            for ( i = ((1LL << (v28 & 0x3F)) - 1) | *v29; i == -1; i = *v29 )
            {
              if ( (unsigned __int64)++v29 > v18 + 8 * ((unsigned __int64)v27 >> 6) )
                goto LABEL_55;
            }
            _BitScanForward64(&v31, ~i);
            v32 = v31 + ((unsigned int)(((__int64)v29 - v18) >> 3) << 6);
            if ( v32 <= v27 )
              break;
          }
LABEL_55:
          v32 = -1;
LABEL_56:
          if ( !(_DWORD)v23 )
            goto LABEL_27;
          v47 = v111 + 1;
          v23 = 0LL;
          if ( v111 + 1 > (unsigned int)v131 )
            v47 = v131;
          v19 = v47 - 1;
        }
        if ( v32 == -1 )
          goto LABEL_56;
        v32 -= v26;
LABEL_27:
        v22 = (unsigned int)v22;
LABEL_28:
        v33 = 48 * v24;
        v6 = v33 - 0x220000000000LL;
        v17 = (unsigned __int8)MiLockPageInline(v33 - 0x220000000000LL, v19, v23, v18);
        if ( (unsigned int)MiIsPfnOriginalPteLost(v33 - 0x220000000000LL) )
        {
          PageFilePte = MiMakePageFilePte(0LL);
          v106 = *(_QWORD *)(a1 + 64);
          if ( (*(_BYTE *)(v106 + 172) & 0x40) != 0 )
            v34 = MiSetStoreVirtualPagefileValue(v8, PageFilePte, 4u);
          else
            v34 = MiTransferSoftwarePte(PageFilePte, v106, (int)v22 + (int)v123, 1);
        }
        else
        {
          v34 = *(_QWORD *)(v6 + 16);
        }
        *(_QWORD *)(Pool + 8 * v22 + 96) = v34;
        if ( v32 != -1 && (*(_QWORD *)(v6 + 24) & 0x4000000000000000LL) == 0 )
        {
          v122 = 0LL;
          v35 = MiStoreCheckCandidatePage(v33 - 0x220000000000LL, (__int64)&v122);
          if ( v35 < 0 )
          {
            MiStoreLogNotCandidate((unsigned int)v35, v32);
            goto LABEL_47;
          }
          if ( (BYTE8(v127) & 3) == 0 )
          {
            v37 = v127;
            v38 = (signed __int64 *)(v127 - 48);
            _m_prefetchw((const void *)(v127 - 48));
            v39 = *v38;
            while ( v39 )
            {
              v40 = v39;
              v39 = _InterlockedCompareExchange64((volatile signed __int64 *)(v37 - 48), v39 + 1, v39);
              if ( v40 == v39 )
              {
                ObpTraceObjectReferenceIfActive(v37 - 48, 1LL, 1716546893LL);
                Object = (PVOID)v127;
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
              LOBYTE(v36) = v17;
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v36);
            }
            __writecr8(v17);
          }
          LOBYTE(v17) = 17;
          v41 = MiStoreGetWriteSupport((_SLIST_HEADER *)v8);
          if ( v41 )
          {
            v42 = v127;
            *((_QWORD *)&v41[1].Next + 1) = Object;
            v41[2].Next = 0LL;
            *((_DWORD *)&v41[2].Next + 2) = 56;
            v41[4].Next = 0LL;
            *((_QWORD *)&v41[4].Next + 1) = 4096LL;
            *((_QWORD *)&v41[3].Next + 1) = v119;
            *((_WORD *)&v41[2].Next + 5) |= 3u;
            v41->Next = (_SLIST_ENTRY *)a1;
            v41[5].Next = (_SLIST_ENTRY *)(0xAAAAAAAAAAAAAAABuLL * (v33 >> 4));
            *(_DWORD *)(v120 + 24) = v22;
            *(_DWORD *)(v120 + 4) = 0;
            *(_QWORD *)(v120 + 32) = v122;
            *(_QWORD *)(v120 + 40) = v41 + 2;
            *(_QWORD *)(v120 + 56) = &v41->Next + 1;
            Object = 0LL;
            *(_OWORD *)(v120 + 8) = v42;
            *(_QWORD *)(v120 + 48) = v41;
            ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v117 + 200));
            v43 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(v117 + 80) + 16LL) + ((unsigned __int64)v32 >> 3));
            v111 = v32 + 1;
            *v43 |= 1 << (v32 & 7);
            *(_DWORD *)(v117 + 88) = v32 + 1;
            v44 = *(_DWORD *)(v117 + 12) - 1;
            *(_DWORD *)(v117 + 12) = v44;
            MiUpdatePagefilePeakUsage(v117);
            MiReleaseSpinLockExclusive((_DWORD *)(v117 + 200), v45);
            if ( !v44 && (unsigned int)MiIsStoreVirtualPagefileFull(v8) )
              KeSetEvent((PRKEVENT)(v8 + 928), 0, 0);
            v120 += 64LL;
            v18 = v135;
            goto LABEL_45;
          }
          v115 = 1;
LABEL_163:
          v107 = Object;
          goto LABEL_170;
        }
LABEL_47:
        v46 = v114;
        v19 = v111;
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
        v107 = Object;
        v111 = v19;
        v114 = v46;
LABEL_170:
        if ( v107 )
        {
          ObDereferenceObjectDeferDeleteWithTag(v107, 0x66506D4Du);
          Object = 0LL;
        }
        v110 = *(_QWORD *)(v8 + 1416);
        v18 = ++v135;
        *(_BYTE *)(*(_QWORD *)(v110 + 8) + (v22 >> 3)) |= 1 << (v22 & 7);
LABEL_45:
        v22 = (unsigned int)(v22 + 1);
        v119 += 4096;
        v20 = v125 + 1;
        v19 = v111;
        v16 = v114;
      }
      v48 = *(_QWORD *)(v8 + 1424);
      v13 = v124;
      v49 = (__int64)(v120 - v48) >> 6;
      v113 = 0;
      if ( (_DWORD)v49 )
      {
        SmPageWrite(*(_QWORD *)(v8 + 184), v48, v49);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v50) = 2;
          LOBYTE(v51) = CurrentIrql;
          KiRaiseIrqlProcessIrqlFlags(v51, v50);
        }
        v53 = *(_QWORD *)(v8 + 1424);
        if ( v53 < v120 )
        {
          v54 = 0;
          do
          {
            if ( (++v54 & 0xF) == 0 && KeShouldYieldProcessor() )
            {
              if ( KiIrqlFlags )
              {
                LOBYTE(v80) = CurrentIrql;
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v80);
              }
              __writecr8(CurrentIrql);
              v89 = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags )
              {
                LOBYTE(v80) = 2;
                LOBYTE(v81) = v89;
                KiRaiseIrqlProcessIrqlFlags(v81, v80);
              }
              CurrentIrql = v89;
            }
            v55 = *(unsigned int *)(v53 + 24);
            v56 = v55;
            v57 = *(_DWORD *)v53;
            v58 = 48LL * *(_QWORD *)(v126 + 8 * v55) - 0x220000000000LL;
            v59 = *(_DWORD *)(v53 + 4);
            v112 = v59;
            if ( *(int *)v53 < 0 )
            {
              v99 = v115;
              if ( v57 == -1073741670 )
                v99 = 1;
              ++v135;
              v115 = v99;
              v100 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 1416) + 8LL) + (v55 >> 3));
              *v100 |= 1 << (v55 & 7);
              v101 = MiTransferSoftwarePte(CLFS_LSN_NULL_EXT, v117, v59, 1);
              MiReleasePageFileInfo(v8, v101, 3LL, v102);
              MiStoreFreeWriteSupport(*(PSLIST_ENTRY *)(v53 + 48), (_SLIST_HEADER *)v8);
              MiStoreLogWriteIssueFailure(
                v57,
                v53 + 8,
                *(unsigned int *)(v53 + 4),
                (unsigned int)++*(_DWORD *)(v8 + 1224));
              v50 = 1LL;
            }
            else
            {
              v60 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v58 + 24), 0x3FuLL) )
              {
                do
                {
                  if ( (++v60 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && KiCheckVpBackingLongSpinWaitHypercall() )
                  {
                    HvlNotifyLongSpinWait(v60);
                  }
                  else
                  {
                    _mm_pause();
                  }
                }
                while ( *(__int64 *)(v58 + 24) < 0 );
              }
              v61 = Pool + 8 * v56;
              v62 = *(_QWORD *)(v61 + 96);
              if ( (v62 & 4) != 0 )
                *(_QWORD *)(v61 + 96) &= ~4uLL;
              else
                v62 &= -(__int64)((v62 & 2) != 0);
              MiClearPageFileReservation(v61 + 96);
              *(_QWORD *)(v61 + 96) = MiTransferSoftwarePte(*(_QWORD *)(v61 + 96), v117, v112, 1);
              IsPfnOriginalPteLost = MiIsPfnOriginalPteLost(v58);
              v8 = v128;
              if ( !IsPfnOriginalPteLost )
              {
                MiClearPageFileReservation(v58 + 16);
                MiUpdatePfnBackingStore(v58, v117, v112);
              }
              _InterlockedAnd64((volatile signed __int64 *)(v58 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( v62 )
                MiReleasePageFileInfo(v8, v62, 3LL, v64);
              v50 = 1LL;
              ++v113;
            }
            v53 += 64LL;
          }
          while ( v53 < v120 );
          v13 = v124;
        }
        if ( KiIrqlFlags )
        {
          LOBYTE(v50) = CurrentIrql;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v50);
        }
        __writecr8(CurrentIrql);
        LODWORD(v18) = v135;
      }
      if ( v115 )
        *(_DWORD *)(v8 + 1220) = 32;
      _InterlockedAdd((volatile signed __int32 *)(Pool + 88), -(int)v18);
      if ( (_DWORD)v18 != NumberToClear )
      {
        updated = CLFS_LSN_NULL_EXT;
        v66 = -1;
        v119 = 0LL;
        v67 = *(_QWORD *)(a1 + 64);
        if ( (*(_BYTE *)(v67 + 172) & 0x40) == 0 )
        {
          v68 = MiTransferSoftwarePte(CLFS_LSN_NULL_EXT, v67, v123, 1);
          LODWORD(v18) = v135;
          updated = v68;
        }
        while ( 1 )
        {
          if ( !(_DWORD)v18 )
          {
            *(_DWORD *)(a1 + 40) |= 0x40u;
            if ( v114 + v113 != NumberToClear || *(_QWORD *)(v117 + 184) )
              MiStoreUpdatePagefileHash(NumberToClear, a1, a1 + 104, NumberToClear);
            MiStoreModifiedWriteDereference(a1);
            v91 = 259;
            goto LABEL_122;
          }
          v69 = *(unsigned int **)(v8 + 1416);
          v70 = v66 + 1;
          v71 = *v69;
          v72 = *v69 - 1;
          v73 = (v69[2] & 4) != 0LL ? 0x20 : 0;
          v74 = *((_QWORD *)v69 + 1) - ((*((_QWORD *)v69 + 1) & 4LL) != 0 ? 4 : 0);
          for ( j = v70 < *v69 ? v70 : 0; ; j = 0LL )
          {
            v76 = v73 + v72;
            v77 = v73 + j;
            if ( v72 - (_DWORD)j != -1 )
            {
              v78 = (_QWORD *)(v74 + 8 * ((unsigned __int64)v77 >> 6));
              for ( k = ~*v78 | ((1LL << (v77 & 0x3F)) - 1); k == -1; k = ~*v78 )
              {
                if ( (unsigned __int64)++v78 > v74 + 8 * ((unsigned __int64)v76 >> 6) )
                  goto LABEL_143;
              }
              _BitScanForward64(&v82, ~k);
              v66 = v82 + ((unsigned int)(((__int64)v78 - v74) >> 3) << 6);
              if ( v66 <= v76 )
                break;
            }
LABEL_143:
            v66 = -1;
LABEL_144:
            if ( !(_DWORD)j )
              goto LABEL_105;
            v104 = v70 + 1;
            if ( v70 + 1 > v71 )
              v104 = v71;
            v72 = v104 - 1;
          }
          if ( v66 == -1 )
            goto LABEL_144;
          v66 -= v73;
LABEL_105:
          v83 = *(_QWORD *)(v8 + 1416);
          --v135;
          v84 = (_BYTE *)(*(_QWORD *)(v83 + 8) + ((unsigned __int64)v66 >> 3));
          v85 = v126;
          *v84 &= ~(1 << (v66 & 7));
          v86 = *(_QWORD *)(v85 + 8LL * v66);
          if ( v86 == qword_140E374B8 )
          {
            updated = MiUpdatePageFileHighInPte(updated, v66 + (unsigned int)v123);
            MiReleasePageFileInfo(v8, updated, 2LL, v103);
            *(_QWORD *)(Pool + 8LL * v66 + 96) = CLFS_LSN_NULL_EXT;
          }
          else
          {
            v87 = 48 * v86 - 0x220000000000LL;
            v88 = MiLockPageInline(v87, (__int64)v84, v74, j);
            MiSetPfnModified(v87, 1);
            MiUnlockPage(v87, v88);
          }
          LODWORD(v18) = v135;
        }
      }
      RtlClearBits(*(PRTL_BITMAP *)(v8 + 1416), 0, NumberToClear);
      *(_DWORD *)(Pool + 88) = 0;
      v91 = -1073740759;
    }
    else
    {
      v91 = -1073741688;
    }
    --v13->SpecialApcDisable;
    MiStoreDecrementOutstandingWrites(v8);
    v14 = v13->SpecialApcDisable++ == -1;
    if ( v14 && ($727077A9B6E167EAE1398C74674DC5A5 *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
      KiCheckForKernelApcDelivery(v93, v92, v94, v95);
  }
LABEL_122:
  KeLeaveCriticalRegionThread();
  v96 = P;
  if ( P )
  {
    v97 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v117 + 200));
    v98 = --*v96;
    MiReleaseSpinLockExclusive((_DWORD *)(v117 + 200), v97);
    if ( !v98 )
      ExFreePoolWithTag(v96, 0);
  }
  if ( v119 && (MemoryDescriptorList->MdlFlags & 1) != 0 )
    MmUnmapLockedPages(MemoryDescriptorList->MappedSystemVa, MemoryDescriptorList);
  return v91;
}
