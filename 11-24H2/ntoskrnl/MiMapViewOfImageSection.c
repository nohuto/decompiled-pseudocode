/*
 * XREFs of MiMapViewOfImageSection @ 0x140AE8594
 * Callers:
 *     MiFinalizeLagePageImageMapping @ 0x1407EDD94 (MiFinalizeLagePageImageMapping.c)
 *     MiMapImageInSystemProcess @ 0x1407EDE38 (MiMapImageInSystemProcess.c)
 *     MiMapViewOfSection @ 0x1408A2840 (MiMapViewOfSection.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x14026757C (MiLocateLockedVadEvent.c)
 *     MiMapUserLargePages @ 0x14026A20C (MiMapUserLargePages.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiInsertVad @ 0x140290150 (MiInsertVad.c)
 *     MiLockVad @ 0x1402926F0 (MiLockVad.c)
 *     MiReferenceVad @ 0x140292770 (MiReferenceVad.c)
 *     MiMapImageScpCfgPages @ 0x140294080 (MiMapImageScpCfgPages.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PsGetSessionIdEx @ 0x14030CBE0 (PsGetSessionIdEx.c)
 *     MiReferenceActiveSubsection @ 0x1403374A0 (MiReferenceActiveSubsection.c)
 *     MiSoftFaultMappedView @ 0x1403491DC (MiSoftFaultMappedView.c)
 *     MiControlAreaRequiresCharge @ 0x140394370 (MiControlAreaRequiresCharge.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1403C8374 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403C8474 (LOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x1403C870C (MiUnlockVad.c)
 *     MiWriteVadFlags2 @ 0x1403DAD90 (MiWriteVadFlags2.c)
 *     MiCheckPurgeAndUpMapCount @ 0x1404071F0 (MiCheckPurgeAndUpMapCount.c)
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 *     MiReferenceControlAreaFile @ 0x14041CAA0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlArea @ 0x14042777C (MiDereferenceControlArea.c)
 *     MiUpdateVadStartVpn @ 0x140441BA4 (MiUpdateVadStartVpn.c)
 *     MiReadVadFlags2 @ 0x14044307C (MiReadVadFlags2.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x14047F700 (PdcCreateWatchdogAroundClientCall.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1404BC78C (MiUpdatePrivateDemandZeroView.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1404C4F4C (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiInsertVadEvent @ 0x1404EF5E8 (MiInsertVadEvent.c)
 *     MiRemoveVadEvent @ 0x1406796DC (MiRemoveVadEvent.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiAllowImageMap @ 0x14086D7E4 (MiAllowImageMap.c)
 *     MiRemoveSharedCommitNode @ 0x140895560 (MiRemoveSharedCommitNode.c)
 *     MiUnmapVad @ 0x140895E38 (MiUnmapVad.c)
 *     MmUnsecureVirtualMemory @ 0x140896BF0 (MmUnsecureVirtualMemory.c)
 *     MiAddSecureEntry @ 0x1408DC0A0 (MiAddSecureEntry.c)
 *     MiReferenceFileObjectForMap @ 0x140918140 (MiReferenceFileObjectForMap.c)
 *     MiSelectUserAddress @ 0x140918180 (MiSelectUserAddress.c)
 *     MiInsertVadCharges @ 0x140918FC8 (MiInsertVadCharges.c)
 *     MiAdvanceVadHint @ 0x140919160 (MiAdvanceVadHint.c)
 *     MiLogMapFileEvent @ 0x140919704 (MiLogMapFileEvent.c)
 *     MiInsertSharedCommitNode @ 0x1409197A0 (MiInsertSharedCommitNode.c)
 *     MiDoesImageContainFunctionOverrideFixups @ 0x14091BD84 (MiDoesImageContainFunctionOverrideFixups.c)
 *     MiCommitVadMetadataBits @ 0x14091D290 (MiCommitVadMetadataBits.c)
 *     PsCallImageNotifyRoutines @ 0x140922440 (PsCallImageNotifyRoutines.c)
 *     MiReleaseVadEventBlocks @ 0x14099A250 (MiReleaseVadEventBlocks.c)
 *     MiInitializeFixupVad @ 0x1409D7B68 (MiInitializeFixupVad.c)
 *     MiSecureVad @ 0x1409E51EC (MiSecureVad.c)
 *     MiArbitraryCodeBlocked @ 0x140A0B8A0 (MiArbitraryCodeBlocked.c)
 *     MiIsVaRangeAvailable @ 0x140A0C10C (MiIsVaRangeAvailable.c)
 *     MiDereferencePerSessionProtos @ 0x140A18828 (MiDereferencePerSessionProtos.c)
 *     PsIsImageNotifyEnabled @ 0x140A268F4 (PsIsImageNotifyEnabled.c)
 *     MiCreatePerSessionProtos @ 0x140A46C20 (MiCreatePerSessionProtos.c)
 *     MiCreateLargePageVad @ 0x140A7D970 (MiCreateLargePageVad.c)
 *     MiLoadUserSymbols @ 0x140AAC348 (MiLoadUserSymbols.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiMapViewOfImageSection(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        _QWORD *a4,
        __int64 a5,
        int a6,
        int a7,
        char a8)
{
  __int64 v10; // r11
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // r14
  int v13; // edx
  int v14; // edx
  __int64 v15; // r9
  bool v16; // zf
  unsigned __int64 v17; // rdi
  unsigned int v18; // ebx
  __int16 v19; // cx
  __int16 v20; // r8
  int v21; // eax
  __int16 v22; // dx
  __int16 v23; // cx
  int v24; // r10d
  __int64 result; // rax
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // r15
  int v28; // ecx
  __int64 v29; // rcx
  int v30; // edi
  int v31; // eax
  __int64 v32; // r9
  int v33; // r10d
  int v34; // ecx
  int v35; // r15d
  __int64 i; // rcx
  ULONG_PTR v37; // rdx
  int v38; // r8d
  _QWORD *Pool; // rax
  _OWORD *v40; // r14
  int v41; // eax
  int v42; // edi
  unsigned int v43; // ecx
  int v44; // ecx
  unsigned int v45; // eax
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rax
  struct _KTHREAD *CurrentThread; // rsi
  int v50; // eax
  unsigned __int64 v51; // r15
  unsigned __int64 v52; // rax
  int LargePageVad; // esi
  void *v54; // rcx
  __int64 v55; // rdx
  ULONG_PTR v56; // r15
  __int64 *v57; // r14
  unsigned int SessionId; // eax
  void *v59; // rcx
  int IsVaRangeAvailable; // eax
  __int64 v61; // r9
  unsigned __int64 v62; // r15
  __int64 v63; // rcx
  __int16 v64; // ax
  unsigned __int64 v65; // rdx
  int v66; // eax
  unsigned __int64 v67; // r8
  unsigned __int64 v68; // rsi
  __int64 v69; // r8
  unsigned __int64 LockedVadEvent; // rax
  char v71; // cl
  unsigned __int64 v72; // r8
  unsigned __int64 v73; // rdx
  __int64 v74; // rax
  ULONG_PTR v75; // rsi
  unsigned int v76; // r9d
  __int64 v77; // rdx
  int v78; // eax
  char v79; // rax^4
  _QWORD *v80; // r8
  unsigned __int64 j; // rcx
  unsigned __int64 v82; // rax
  unsigned int v83; // eax
  __int64 v84; // r14
  unsigned int v85; // esi
  unsigned __int64 v86; // rax
  int v87; // eax
  __int64 v88; // r9
  ULONG_PTR v89; // r14
  int v90; // eax
  int v91; // eax
  __int64 v92; // r8
  unsigned int v93; // ebx
  unsigned __int64 v94; // rax
  __int64 v95; // rcx
  __int16 v96; // cx
  char VadFlags2; // di
  __int64 v98; // r8
  unsigned int v99; // edx
  int v100; // r8d
  int v101; // r9d
  __int64 v102; // rsi
  _QWORD *v103; // rax
  __int64 v104; // rdx
  __int64 v105; // r15
  int v106; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v107; // [rsp+58h] [rbp-A8h]
  __int64 v108; // [rsp+58h] [rbp-A8h]
  unsigned int v109; // [rsp+60h] [rbp-A0h]
  __int64 v110; // [rsp+68h] [rbp-98h]
  __int64 v111; // [rsp+70h] [rbp-90h] BYREF
  struct _KTHREAD *v112; // [rsp+78h] [rbp-88h]
  unsigned __int64 v113; // [rsp+80h] [rbp-80h]
  unsigned __int64 v114; // [rsp+88h] [rbp-78h]
  __int16 v115; // [rsp+90h] [rbp-70h]
  __int64 v116; // [rsp+98h] [rbp-68h]
  unsigned __int64 v117; // [rsp+A0h] [rbp-60h]
  __int64 v118; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v119; // [rsp+B0h] [rbp-50h]
  unsigned __int64 *v120; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v121; // [rsp+C0h] [rbp-40h]
  __int64 v122; // [rsp+C8h] [rbp-38h]
  __int128 v123; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v124; // [rsp+E0h] [rbp-20h]
  __int128 v125; // [rsp+F0h] [rbp-10h]
  __int64 v126; // [rsp+100h] [rbp+0h]
  __int64 v127; // [rsp+108h] [rbp+8h]
  unsigned __int64 v128[10]; // [rsp+110h] [rbp+10h] BYREF
  int v129; // [rsp+160h] [rbp+60h]
  __int16 v131; // [rsp+1C8h] [rbp+C8h]

  memset_0(v128, 0, 0x58uLL);
  v10 = *(_QWORD *)a1;
  v11 = *(_QWORD *)(a2 + 88);
  v12 = *(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF8uLL;
  v13 = *(_DWORD *)(a2 + 40) >> 22;
  v126 = 0LL;
  v14 = v13 & 2;
  v106 = 0;
  v110 = v10;
  v123 = 0LL;
  v124 = 0LL;
  v125 = 0LL;
  v15 = *(_QWORD *)(v10 + 56);
  v122 = v15;
  if ( dword_140E2D8B8
    && dword_140E2D8BC == *(_DWORD *)(v15 + 60)
    && dword_140E2D8C0 == *(_DWORD *)(*(_QWORD *)(v10 + 56) + 68LL) )
  {
    __debugbreak();
  }
  v16 = (*(_DWORD *)(a1 + 56) & 0x20000000) == 0;
  v17 = *(_QWORD *)(v10 + 32);
  v116 = *(_QWORD *)(v10 + 48);
  v117 = v17;
  if ( !v16 || (v18 = v14, (*(_DWORD *)(v11 + 1532) & 0x2000) != 0) )
  {
    v18 = v14;
    if ( !_bittest16((const signed __int16 *)(v10 + 12), 0xEu) )
    {
      v18 = v14 | 5;
      v106 = 1;
    }
  }
  v19 = *(_WORD *)(v11 + 1772);
  v20 = *(_WORD *)(a2 + 58);
  v115 = v19;
  v131 = v20;
  if ( !v20 )
  {
    v21 = *(_DWORD *)(v11 + 1532);
    if ( (v21 & 0x1000) != 0 || (v21 & 1) != 0 )
    {
      v20 = *(_WORD *)(v15 + 48);
      v131 = v20;
    }
    else
    {
      v20 = v19;
      v131 = v19;
    }
  }
  if ( v20 != *(_WORD *)(v15 + 48) )
  {
    if ( (unsigned int)PdcCreateWatchdogAroundClientCall() )
    {
      v18 |= 4u;
      v106 = v24 | 2;
    }
    else
    {
      if ( v22 )
        return 3221225659LL;
      v131 = v23;
    }
  }
  if ( (*(_BYTE *)(v11 + 368) & 1) != 0 && (*(_DWORD *)(a2 + 64) & 0x2000000) == 0 )
    return 3221225506LL;
  v26 = *(_QWORD *)(a2 + 16);
  v27 = *(_QWORD *)(a2 + 24);
  v28 = *(_DWORD *)(a2 + 40);
  v113 = v26;
  v114 = v27;
  if ( (v28 & 0x20000000) != 0 )
  {
    if ( v17 < 0x100000000LL || v18 >= 4 )
      return 3221225496LL;
    v18 = v18 & 0xFFFFFFFC | 1;
    v106 = 0;
    if ( (*(_BYTE *)(v15 + 44) & 1) != 0 )
      return 3221226089LL;
    v26 = 0x200000LL;
    v27 = (v27 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
    v113 = 0x200000LL;
    v114 = v27;
  }
  if ( !a5 || (*(_DWORD *)(a5 + 56) & 0x80000) != 0 || (v28 & 0x40000) != 0 )
  {
    if ( a7 != 1 )
      return 3221225541LL;
    v18 |= 0x400u;
  }
  v29 = 0LL;
  v30 = 0;
  if ( !dword_140E2D8EC || (*(_DWORD *)(*(_QWORD *)(v10 + 56) + 76LL) & 0x40) == 0 || v18 >= 0x400 )
  {
LABEL_48:
    if ( v18 >= 0x400 )
      goto LABEL_57;
    goto LABEL_49;
  }
  if ( v26 != 0x200000 )
  {
    LOBYTE(v29) = (v27 & 0xFFF) != 0;
    if ( (v27 >> 12) + v29 == *(_DWORD *)(v10 + 8) && (*(_DWORD *)(v11 + 2012) & 4) == 0 && (a8 & 0x10) == 0 )
    {
      if ( (unsigned int)dword_140E2D8EC + v27 < v27 )
        return 3221225503LL;
      v114 = (unsigned int)dword_140E2D8EC + v27;
      v30 = 32;
      goto LABEL_49;
    }
    LOBYTE(v31) = MiDoesImageContainFunctionOverrideFixups(a1);
    if ( v31 )
    {
      if ( *a4 || v27 > ((*(unsigned int *)(v32 + 64) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) )
      {
        v18 |= 4u;
        v106 = v33 | 1;
        goto LABEL_48;
      }
    }
  }
LABEL_49:
  result = MiAllowImageMap(v11, a5, a1, v122);
  if ( (int)result < 0 )
    return result;
  v34 = *(_DWORD *)(v11 + 1872);
  if ( (v34 & 0x10) != 0 && (*(_BYTE *)(v122 + 51) & 4) == 0 )
  {
    if ( (*(_BYTE *)(v122 + 44) & 1) != 0 )
    {
      if ( (v34 & 8) != 0 )
        return 3221226089LL;
    }
    else
    {
      v18 |= 1u;
    }
  }
  v10 = v110;
LABEL_57:
  if ( (v18 & 0x400) != 0
    || _bittest16((const signed __int16 *)(v10 + 12), 0xEu) && (*(_DWORD *)(v11 + 1872) & 0x40) == 0 )
  {
    v18 = v18 & 0xFFFFFFFC | 1;
  }
  if ( (a8 & 4) != 0 || v11 == PsSecureSystemProcess )
  {
    v35 = 0;
    v18 &= 0xFFFFFFF9;
  }
  else
  {
    v35 = v106;
  }
  if ( !*(_QWORD *)(v12 + 32) || _bittest((const signed __int32 *)(a1 + 56), 0xBu) )
  {
    if ( (v18 & 4) != 0 )
      return 3221225496LL;
    v35 = 0;
    v18 &= ~2u;
  }
  v121 = 0LL;
  if ( (v18 & 0x400) == 0 )
  {
    for ( i = a1 + 128; i; i = *(_QWORD *)(i + 16) )
    {
      if ( (*(_BYTE *)(i + 32) & 0xEu) >= 0xC )
      {
        result = MiArbitraryCodeBlocked(*(_QWORD *)(a2 + 96));
        if ( (int)result < 0 )
          return result;
        break;
      }
    }
  }
  v127 = a1 + 128;
  MiCheckPurgeAndUpMapCount(a1);
  if ( v35 )
  {
    v38 = 1231315286;
    v37 = 8
        * (((unsigned __int64)*(unsigned int *)(*(_QWORD *)a1 + 8LL) >> 6)
         + ((*(_DWORD *)(*(_QWORD *)a1 + 8LL) & 0x3F) != 0)
         + 21LL);
  }
  else
  {
    v37 = 136LL;
    v38 = 543449430;
  }
  Pool = (_QWORD *)MiAllocatePool(0x40uLL, v37, v38);
  v40 = Pool;
  if ( !Pool )
  {
    MiDereferenceControlArea(a1);
    return 3221225626LL;
  }
  if ( v35 )
    v18 |= 8u;
  Pool[2] = -2LL;
  *Pool = -2LL;
  Pool[1] = -2LL;
  v41 = 0;
  if ( a6 == 1 )
    v41 = 4;
  v42 = v41 | v30;
  v43 = v40[3] & 0xFFFFFF8F | 0x20;
  *((_DWORD *)v40 + 12) = v43;
  *((_DWORD *)v40 + 12) = v43 ^ (v43 ^ (*(_DWORD *)(a2 + 52) << 12)) & 0x7F000;
  if ( a5 )
  {
    *((_QWORD *)v40 + 16) = MiReferenceFileObjectForMap(a5);
    if ( *(int *)(a5 + 60) < 0 )
      v42 |= 8u;
  }
  v44 = v42;
  v45 = v40[3] & 0xFFFFF0FF;
  *((_QWORD *)v40 + 5) = 0LL;
  v46 = v45 | 0x80;
  *((_DWORD *)v40 + 12) = v46;
  if ( (v18 & 0x400) == 0 )
  {
    v47 = v116;
    *((_DWORD *)v40 + 12) = v46 | 0x380;
    v42 |= 0x10u;
    v48 = *(_QWORD *)(v11 + 368);
    *((_DWORD *)v40 + 13) = v47;
    *((_BYTE *)v40 + 34) = BYTE4(v47);
    if ( (v48 & 1) == 0 )
      v42 = v44;
  }
  CurrentThread = KeGetCurrentThread();
  v50 = *(_DWORD *)(a2 + 60);
  v120 = 0LL;
  v109 = 0;
  v112 = CurrentThread;
  if ( (v50 & 1) == 0 || v113 == 0x200000 )
  {
    v51 = v117 + *(unsigned int *)a4;
    v107 = v51;
    v111 = v51;
    if ( v113 == 0x200000 )
    {
      v52 = v114 >> 12;
      *((_DWORD *)v40 + 13) = v114 >> 12;
      *((_BYTE *)v40 + 34) = BYTE4(v52);
      v42 |= 1u;
      LargePageVad = MiCreateLargePageVad(v11, (__int64)v40, 0LL);
      if ( LargePageVad < 0 )
      {
        v54 = (void *)*((_QWORD *)v40 + 16);
        if ( v54 )
          ObfDereferenceObjectWithTag(v54, 0x63536D4Du);
        MiDereferenceControlArea(a1);
        ExFreePoolWithTag(v40, 0);
        return (unsigned int)LargePageVad;
      }
      CurrentThread = v112;
    }
  }
  else
  {
    v51 = *a3;
    v107 = *a3;
    v111 = *a3;
  }
  MiWriteVadFlags2((__int64)v40, v42, 1);
  v55 = 0LL;
  if ( (v40[3] & 0xF80) == 0x380
    && *(_QWORD *)(v11 + 464)
    && (*(_DWORD *)(v11 + 1532) & 0x1000) == 0
    && (*(_BYTE *)(v11 + 368) & 1) == 0
    && PsIsImageNotifyEnabled() )
  {
    v18 |= 0x800u;
  }
  v119 = v55;
  v118 = v55;
  v129 = 32;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, v11);
  if ( (*(_DWORD *)(v11 + 500) & 0x20) != 0 )
  {
    LargePageVad = -1073741558;
LABEL_109:
    v56 = (ULONG_PTR)v40;
LABEL_110:
    v57 = (__int64 *)a1;
LABEL_111:
    if ( (v18 & 0x100) != 0 )
    {
      SessionId = PsGetSessionIdEx(v11);
      MiDereferencePerSessionProtos(v57, SessionId);
    }
    if ( (v18 & 0x200) != 0 )
      MiReturnCrossPartitionControlAreaCharges((__int64)v57);
    if ( (v18 & 0x80u) != 0 )
      MiRemoveSharedCommitNode((__int64)v57, v11, 0);
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)v112, v11);
    if ( (v18 & 0x40) != 0 )
      MiRemoveVadEvent(v56, v128);
    if ( v56 )
    {
      if ( v113 == 0x200000 )
        MiReleaseVadEventBlocks(v56, 0);
      v59 = *(void **)(v56 + 128);
      if ( v59 )
        ObfDereferenceObjectWithTag(v59, 0x63536D4Du);
      ExFreePoolWithTag((PVOID)v56, 0);
    }
    MiDereferenceControlArea((__int64)v57);
    return (unsigned int)LargePageVad;
  }
  if ( (*(_DWORD *)(a2 + 60) & 1) == 0 || v113 == 0x200000 )
  {
    if ( v114 > 0x7FFFFFFF0000LL )
    {
      LargePageVad = -1073741801;
      goto LABEL_109;
    }
    if ( (v18 & 1) != 0 )
    {
      v61 = 0LL;
    }
    else
    {
      IsVaRangeAvailable = MiIsVaRangeAvailable(v11, v51, v114, *(_QWORD *)a2, *(_QWORD *)(a2 + 8));
      v61 = 0LL;
      if ( IsVaRangeAvailable )
        goto LABEL_158;
    }
    v62 = *(_QWORD *)(a2 + 8);
    v63 = 0LL;
    v116 = 0LL;
    if ( v117 < 0x100000000LL && v62 >= 0x100000000LL && (*(_WORD *)(v110 + 12) & 0x4000) == 0 )
      v62 = 0xFFFFFFFFLL;
    if ( *(__int16 *)(v110 + 12) < 0 )
    {
      if ( !*(_QWORD *)(v11 + 784) || (v64 = *(_WORD *)(v11 + 1772), v64 != 332) && v64 != 452 )
      {
        v63 = 0x100000000LL;
        v116 = 0x100000000LL;
      }
    }
    v65 = *(_QWORD *)a2;
    if ( *(_QWORD *)a2 >= v62 )
    {
      LargePageVad = -1073741801;
    }
    else
    {
      v66 = MiSelectUserAddress(
              *(_DWORD *)(a2 + 40),
              v65,
              v62,
              v114,
              v113,
              v63,
              (*((_DWORD *)v40 + 12) >> 7) & 0x1F,
              0,
              &v120,
              &v111);
      v61 = 0LL;
      LargePageVad = v66;
      v107 = v111;
      if ( v66 >= 0 )
      {
LABEL_154:
        if ( v113 == 0x200000 )
        {
          v68 = v114;
          v69 = *(_QWORD *)(a2 + 24);
          if ( v114 - v69 >= 0x10000 )
            v121 = (unsigned int)ExGenRandom(1, v65, v69, v61) % ((v68 - *(_QWORD *)(a2 + 24)) >> 16);
          LockedVadEvent = MiLocateLockedVadEvent((__int64)v40, 16);
          v71 = v121;
          *(_QWORD *)(LockedVadEvent + 16) = v72 >> 12;
          *(_BYTE *)(LockedVadEvent + 8) = v71;
        }
        goto LABEL_158;
      }
    }
    v67 = *(_QWORD *)(a2 + 8);
    if ( v62 != v67 )
    {
      LargePageVad = MiSelectUserAddress(
                       *(_DWORD *)(a2 + 40),
                       *(_QWORD *)a2,
                       v67,
                       v114,
                       v113,
                       v116,
                       (*((_DWORD *)v40 + 12) >> 7) & 0x1F,
                       0,
                       &v120,
                       &v111);
      v107 = v111;
    }
    v56 = (ULONG_PTR)v40;
    if ( LargePageVad < 0 )
      goto LABEL_110;
    goto LABEL_154;
  }
  if ( !(unsigned int)MiIsVaRangeAvailable(v11, v51, v114, *(_QWORD *)a2, *(_QWORD *)(a2 + 8)) )
  {
    LargePageVad = -1073741800;
    goto LABEL_109;
  }
LABEL_158:
  v56 = (ULONG_PTR)v40;
  v73 = v107;
  if ( v107 - *(unsigned int *)a4 != v117 )
  {
    v109 = 1073741827;
    if ( (v18 & 2) != 0 )
    {
      if ( (v18 & 8) != 0 )
        goto LABEL_164;
      v74 = MiAllocatePool(
              0x40uLL,
              8
            * (((unsigned __int64)*(unsigned int *)(*(_QWORD *)a1 + 8LL) >> 6)
             + ((*(_DWORD *)(*(_QWORD *)a1 + 8LL) & 0x3F) != 0)
             + 21LL),
              1231315286);
      v75 = v74;
      if ( v74 )
      {
        *(_OWORD *)v74 = *v40;
        *(_OWORD *)(v74 + 16) = v40[1];
        *(_OWORD *)(v74 + 32) = v40[2];
        *(_OWORD *)(v74 + 48) = v40[3];
        *(_OWORD *)(v74 + 64) = v40[4];
        *(_OWORD *)(v74 + 80) = v40[5];
        *(_OWORD *)(v74 + 96) = v40[6];
        *(_OWORD *)(v74 + 112) = v40[7];
        *(_QWORD *)(v74 + 128) = *((_QWORD *)v40 + 16);
        ExFreePoolWithTag(v40, 0);
        v18 |= 8u;
        v56 = v75;
      }
      v73 = v107;
      if ( (v18 & 8) != 0 )
LABEL_164:
        v109 = 1073741878;
    }
  }
  v117 = v73 >> 12;
  v116 = (v73 + v114 - 1) >> 12;
  MiUpdateVadStartVpn(v56, v73 >> 12);
  v77 = v127;
  *(_DWORD *)(v56 + 28) = v78;
  *(_BYTE *)(v56 + 33) = v79;
  for ( j = *v80 >> 12; ; j -= v82 )
  {
    v82 = *(unsigned int *)(v77 + 44);
    if ( j < v82 )
      break;
    v77 = *(_QWORD *)(v77 + 16);
  }
  *(_QWORD *)(v56 + 72) = v77;
  *(_QWORD *)(v56 + 80) = *(_QWORD *)(v77 + 8) + 8 * j;
  *(_QWORD *)(v56 + 88) = *(_QWORD *)(v110 + 64) + 8 * (*(unsigned int *)(v110 + 8) - 1LL);
  if ( (v18 & 8) != 0 )
    MiInitializeFixupVad(v56, v76, (*(_DWORD *)(v11 + 1532) >> 13) & 1);
  if ( *(_DWORD *)(a2 + 52) )
    *(_BYTE *)(*(_QWORD *)(v11 + 1040) + 1060LL) = 1;
  v57 = (__int64 *)a1;
  if ( (*(_DWORD *)(a1 + 56) & 0x8000000) != 0 )
  {
    v83 = PsGetSessionIdEx(v11);
    LargePageVad = MiCreatePerSessionProtos((_QWORD *)a1, v83);
    if ( LargePageVad < 0 )
      goto LABEL_111;
    v18 |= 0x100u;
  }
  if ( (v42 & 0x10) != 0 )
  {
    v84 = *(unsigned int *)(v56 + 52);
    v85 = *(unsigned __int8 *)(v56 + 34);
    v86 = (v84 | ((unsigned __int64)v85 << 32)) + MiUpdatePrivateDemandZeroView(v11, v56, 0);
    *(_DWORD *)(v56 + 52) = v86;
    *(_BYTE *)(v56 + 34) = BYTE4(v86);
    v128[1] = (unsigned __int64)v112;
    MiInsertVadEvent(v56, v128, 0);
    v18 |= 0x40u;
    v57 = (__int64 *)a1;
    v107 = v111;
    v119 = v118;
  }
  LargePageVad = MiInsertSharedCommitNode((__int64)v57, v11, 0);
  if ( LargePageVad < 0 )
    goto LABEL_111;
  v18 |= 0x80u;
  v87 = MiControlAreaRequiresCharge((__int64)v57, (a8 & 8) != 0);
  if ( !v87 )
  {
    LargePageVad = -1073740277;
    goto LABEL_111;
  }
  if ( v87 == 2 )
  {
    LargePageVad = MiReferenceActiveSubsection(v57 + 16, (a8 & 8) != 0 ? 264 : 8, 0x11u);
    if ( LargePageVad < 0 )
      goto LABEL_111;
    v18 |= 0x200u;
  }
  LargePageVad = MiInsertVadCharges(v56, v11);
  if ( LargePageVad < 0 )
    goto LABEL_111;
  if ( (v18 & 8) != 0 )
  {
    ++*(_QWORD *)(*(_QWORD *)(v11 + 1040) + 1088LL);
    v107 = v111;
    v119 = v118;
  }
  MiInsertVad(v56, v11, 0LL, v88);
  v89 = 0LL;
  if ( v113 == 0x200000 )
  {
    MiLockVad((__int64)v112, v56);
    LargePageVad = MiMapUserLargePages(v56, 0, 0, 0LL);
    if ( LargePageVad < 0 )
    {
      UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)v112, v11);
LABEL_242:
      MiReferenceVad(v56);
      if ( v89 )
        ObfDereferenceObjectWithTag((PVOID)v89, 0x63536D4Du);
      MiUnmapVad((unsigned __int8 *)v56, 0LL);
      v103 = *(_QWORD **)(a2 + 72);
      if ( v103 )
        *v103 = 0LL;
      return (unsigned int)LargePageVad;
    }
    MiUnlockVad((__int64)v112, v56);
  }
  if ( v120 )
    MiAdvanceVadHint(v117, v116, v120);
  v108 = (v121 << 16) + v107;
  v111 = v108;
  *a3 = v108;
  if ( *(_BYTE *)(v122 + 50) && v131 != v115 )
  {
    v18 |= 0x1000u;
    if ( *(_QWORD *)(v11 + 784) && *(_WORD *)(v122 + 48) == 0x8664 )
      v18 &= ~0x1000u;
    v90 = v109;
    if ( (v18 & 0x1000) != 0 )
      v90 = 1073741838;
    v109 = v90;
  }
  if ( (PerfGlobalGroupMask[0] & 0x8000) != 0 )
    MiLogMapFileEvent(v56, 1061);
  if ( (v42 & 0x20) != 0 )
  {
    LOBYTE(v91) = MiDoesImageContainFunctionOverrideFixups(a1);
    if ( v91 )
      MiMapImageScpCfgPages(v11, v56, v92);
  }
  v93 = v18 | 0x10;
  if ( (v93 & 0x400) == 0 )
  {
    if ( (NtGlobalFlag & 0x40000) != 0 )
    {
      v94 = v109 - 1073741827;
      if ( (unsigned int)v94 > 0x33 || (v95 = 0x8000000000801LL, !_bittest64(&v95, v94)) )
      {
        if ( ((__int64)v112[1].Queue & 0x20) == 0 )
        {
          v96 = *(_WORD *)(v110 + 12);
          if ( (v96 & 0x800) == 0 && (*(_BYTE *)(v110 + 14) & 0x20) != 0 )
          {
            *(_WORD *)(v110 + 12) = v96 | 0x800;
            MiLoadUserSymbols(a1);
          }
        }
      }
    }
    VadFlags2 = MiReadVadFlags2(v56);
    if ( (v93 & 0x800) != 0 )
    {
      BYTE8(v123) = 3;
      if ( (VadFlags2 & 8) != 0 )
      {
        v99 = DWORD2(v123) & 0xFFF80FFF;
      }
      else
      {
        v99 = DWORD2(v123) ^ ((unsigned __int16)(*(unsigned __int8 *)(v98 + 15) << 12) ^ WORD4(v123)) & 0xF000 ^ ((*(unsigned __int8 *)(v98 + 15) << 12) ^ DWORD2(v123) ^ ((unsigned __int16)(*(unsigned __int8 *)(v98 + 15) << 12) ^ WORD4(v123)) & 0xF000) & 0x70000;
        v108 = v111;
      }
      DWORD2(v123) = v99 ^ (v99 ^ (v93 >> 1)) & 0x800;
      *(_QWORD *)&v124 = v108;
      *(_QWORD *)&v125 = *(_QWORD *)(a2 + 24);
      if ( *(_QWORD *)(a2 + 24) != _InterlockedCompareExchange64((volatile signed __int64 *)(v98 + 24), -1LL, -1LL) )
        DWORD2(v123) |= 0x80000u;
      DWORD2(v124) = 0;
      DWORD2(v125) = 0;
      v89 = MiReferenceControlAreaFile(a1);
      LOWORD(v93) = v93 | 0x20;
      v108 = v111;
      v119 = v118;
    }
    if ( *(_DWORD *)(a2 + 120) || (VadFlags2 & 0x10) != 0 || *(_QWORD *)(a2 + 72) || (*(_DWORD *)(a2 + 64) & 2) != 0 )
      LOWORD(v93) = v93 | 0x20;
  }
  if ( (v93 & 0x20) != 0 )
  {
    MiLockVad((__int64)v112, v56);
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)v112, v11);
    LOWORD(v93) = v93 & 0xFFEF;
    if ( (MiReadVadFlags2(v56) & 0x10) != 0 )
    {
      MiUpdatePrivateDemandZeroView(v11, v56, 1);
      MiRemoveVadEvent(v56, v128);
      LOWORD(v93) = v93 & 0xFFBF;
    }
    if ( (v93 & 0x400) == 0 )
    {
      v100 = *(_DWORD *)(a2 + 120);
      if ( v100 )
      {
        LargePageVad = MiCommitVadMetadataBits(v56, 0LL, v100);
        if ( LargePageVad < 0 )
          goto LABEL_242;
      }
    }
    if ( *(_QWORD *)(a2 + 72) )
    {
      v101 = *(_DWORD *)(a2 + 68);
      if ( (unsigned int)(v101 - 1) > 1 && v101 != -2147483647 && v101 != 4 )
      {
        LargePageVad = -1073741755;
        goto LABEL_242;
      }
      LargePageVad = MiSecureVad(v56, v108, *(_QWORD *)(a2 + 24), v101, 0, &v118);
      if ( LargePageVad < 0 )
        goto LABEL_242;
      v102 = 0LL;
      **(_QWORD **)(a2 + 72) = qword_140E2DBC0 ^ v118 ^ v11;
    }
    else
    {
      v102 = v119;
    }
    if ( (v93 & 0x800) != 0 )
    {
      v102 = MiAddSecureEntry(v56, v117 << 12, (v116 << 12) | 0xFFF, -2147483647, 0);
      if ( !v102 )
      {
        LargePageVad = -1073741670;
        goto LABEL_242;
      }
    }
    if ( (*(_DWORD *)(a2 + 64) & 2) != 0 )
      MiSoftFaultMappedView(v56);
    v104 = v56;
    v105 = (__int64)v112;
    MiUnlockVad((__int64)v112, v104);
    if ( (v93 & 0x800) != 0 )
    {
      PsCallImageNotifyRoutines((PUNICODE_STRING)(v89 + 88), v11, &v123, v89);
      ObfDereferenceObjectWithTag((PVOID)v89, 0x63536D4Du);
    }
    if ( v102 )
      MmUnsecureVirtualMemory((HANDLE)(qword_140E2DBC0 ^ v102 ^ v11));
  }
  else
  {
    v105 = (__int64)v112;
  }
  if ( (v93 & 0x10) != 0 )
    UNLOCK_ADDRESS_SPACE_UNORDERED(v105, v11);
  if ( (v93 & 0x400) == 0 && a5 && (*(_BYTE *)(v11 + 368) & 1) == 0 )
    *(_DWORD *)(a2 + 60) |= 4u;
  return v109;
}
