/*
 * XREFs of MiMapViewOfImageSection @ 0x1408E3418
 * Callers:
 *     MiFinalizeLagePageImageMapping @ 0x1407ED7C4 (MiFinalizeLagePageImageMapping.c)
 *     MiMapImageInSystemProcess @ 0x1407ED868 (MiMapImageInSystemProcess.c)
 *     MiMapViewOfSection @ 0x14089A1A0 (MiMapViewOfSection.c)
 * Callees:
 *     MiReferenceActiveSubsection @ 0x14020E140 (MiReferenceActiveSubsection.c)
 *     MiReferenceControlAreaFile @ 0x1402464D0 (MiReferenceControlAreaFile.c)
 *     MiInsertVad @ 0x14025FB40 (MiInsertVad.c)
 *     MiLockVad @ 0x1402629EC (MiLockVad.c)
 *     MiReferenceVad @ 0x140262A70 (MiReferenceVad.c)
 *     MiMapImageScpCfgPages @ 0x140264810 (MiMapImageScpCfgPages.c)
 *     MiUnlockVad @ 0x140264968 (MiUnlockVad.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiSoftFaultMappedView @ 0x1402E7B9C (MiSoftFaultMappedView.c)
 *     PsGetSessionIdEx @ 0x1403025D0 (PsGetSessionIdEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     MiMapUserLargePages @ 0x14036E280 (MiMapUserLargePages.c)
 *     MiDereferenceControlArea @ 0x14036F494 (MiDereferenceControlArea.c)
 *     MiLocateLockedVadEvent @ 0x1403CDE38 (MiLocateLockedVadEvent.c)
 *     MiWriteVadFlags2 @ 0x1403FD470 (MiWriteVadFlags2.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140405E18 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x140405F18 (LOCK_ADDRESS_SPACE.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14040EFF0 (MiCheckPurgeAndUpMapCount.c)
 *     MiControlAreaRequiresCharge @ 0x1404166A4 (MiControlAreaRequiresCharge.c)
 *     ExGenRandom @ 0x14041A540 (ExGenRandom.c)
 *     MiUpdateVadStartVpn @ 0x140449454 (MiUpdateVadStartVpn.c)
 *     MiReadVadFlags2 @ 0x14044BF3C (MiReadVadFlags2.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140484160 (PdcCreateWatchdogAroundClientCall.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1404C119C (MiUpdatePrivateDemandZeroView.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1404CBAD0 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiInsertVadEvent @ 0x1404F1B48 (MiInsertVadEvent.c)
 *     MiRemoveVadEvent @ 0x140678550 (MiRemoveVadEvent.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MiAllowImageMap @ 0x1408694B4 (MiAllowImageMap.c)
 *     MiReferenceFileObjectForMap @ 0x1408E1590 (MiReferenceFileObjectForMap.c)
 *     MiSelectUserAddress @ 0x1408E15D0 (MiSelectUserAddress.c)
 *     MiInsertVadCharges @ 0x1408E2418 (MiInsertVadCharges.c)
 *     MiAdvanceVadHint @ 0x1408E25B0 (MiAdvanceVadHint.c)
 *     MiLogMapFileEvent @ 0x1408E2B54 (MiLogMapFileEvent.c)
 *     MiInsertSharedCommitNode @ 0x1408E2BF0 (MiInsertSharedCommitNode.c)
 *     MmUnsecureVirtualMemory @ 0x1408E51C0 (MmUnsecureVirtualMemory.c)
 *     MiUnmapVad @ 0x1408E5280 (MiUnmapVad.c)
 *     MiRemoveSharedCommitNode @ 0x1408E5960 (MiRemoveSharedCommitNode.c)
 *     MiDoesImageContainFunctionOverrideFixups @ 0x1408F94A8 (MiDoesImageContainFunctionOverrideFixups.c)
 *     MiCommitVadMetadataBits @ 0x1408FA9B0 (MiCommitVadMetadataBits.c)
 *     PsCallImageNotifyRoutines @ 0x1408FFB60 (PsCallImageNotifyRoutines.c)
 *     MiReleaseVadEventBlocks @ 0x1409B0550 (MiReleaseVadEventBlocks.c)
 *     MiAddSecureEntry @ 0x1409C3F30 (MiAddSecureEntry.c)
 *     MiInitializeFixupVad @ 0x1409DDF98 (MiInitializeFixupVad.c)
 *     MiSecureVad @ 0x1409EA8FC (MiSecureVad.c)
 *     MiArbitraryCodeBlocked @ 0x140A13140 (MiArbitraryCodeBlocked.c)
 *     MiIsVaRangeAvailable @ 0x140A139AC (MiIsVaRangeAvailable.c)
 *     MiDereferencePerSessionProtos @ 0x140A24458 (MiDereferencePerSessionProtos.c)
 *     PsIsImageNotifyEnabled @ 0x140A328DC (PsIsImageNotifyEnabled.c)
 *     MiCreatePerSessionProtos @ 0x140A4FE70 (MiCreatePerSessionProtos.c)
 *     MiCreateLargePageVad @ 0x140A82E50 (MiCreateLargePageVad.c)
 *     MiLoadUserSymbols @ 0x140AB13D8 (MiLoadUserSymbols.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiMapViewOfImageSection(
        _DWORD *a1,
        __int64 a2,
        __int64 *a3,
        _QWORD *a4,
        __int64 a5,
        int a6,
        int a7,
        char a8)
{
  __int64 v10; // r11
  int v11; // r15d
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // r14
  int v14; // edx
  int v15; // edx
  __int64 v16; // r9
  bool v17; // zf
  unsigned __int64 v18; // rdi
  unsigned int v19; // ebx
  __int16 v20; // cx
  __int16 v21; // r8
  int v22; // eax
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // r10
  int v25; // edx
  int v26; // edi
  __int64 v27; // rdx
  __int64 v28; // r8
  ULONG_PTR v29; // rdx
  int v30; // r8d
  _QWORD *Pool; // rax
  _OWORD *v32; // r14
  int v33; // eax
  int v34; // edi
  unsigned int v35; // ecx
  int v36; // ecx
  unsigned int v37; // eax
  int v38; // eax
  struct _KTHREAD *CurrentThread; // rsi
  int v40; // eax
  __int64 v41; // r15
  __int64 v42; // r15
  unsigned __int64 v43; // rdx
  unsigned int v44; // r9d
  _DWORD *v45; // rdx
  int v46; // eax
  char v47; // rax^4
  _QWORD *v48; // r8
  unsigned __int64 j; // rcx
  unsigned __int64 v50; // rax
  __int64 v51; // r14
  int LargePageVad; // esi
  int v53; // eax
  ULONG_PTR v54; // r14
  unsigned int v55; // ebx
  char VadFlags2; // di
  __int64 v57; // r8
  __int64 v58; // r15
  __int64 result; // rax
  int v60; // ecx
  __int64 v61; // rdi
  __int64 v62; // r8
  __int64 v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rax
  _DWORD *i; // rcx
  int v67; // eax
  unsigned int v68; // edx
  unsigned __int64 v69; // r15
  __int64 v70; // rcx
  unsigned __int64 v71; // rsi
  unsigned __int64 LockedVadEvent; // rax
  char v73; // cl
  unsigned __int64 v74; // r8
  __int64 v75; // rax
  __int64 v76; // rsi
  __int64 v77; // r8
  unsigned int SessionId; // eax
  __int16 v79; // dx
  __int16 v80; // cx
  _QWORD *v81; // rax
  int DoesImageContainFunctionOverrideFixups; // eax
  __int64 v83; // r9
  unsigned __int64 v84; // r10
  unsigned __int64 v85; // rax
  void *v86; // rcx
  __int16 v87; // ax
  unsigned __int64 v88; // r8
  unsigned __int64 v89; // rax
  __int64 v90; // rcx
  int v91; // r9d
  __int64 v92; // r14
  unsigned int v93; // esi
  unsigned __int64 v94; // rax
  __int16 v95; // cx
  void *v96; // rcx
  unsigned __int64 v97; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v98; // [rsp+58h] [rbp-A8h]
  unsigned int v99; // [rsp+60h] [rbp-A0h]
  __int64 v100; // [rsp+68h] [rbp-98h]
  unsigned __int64 v101; // [rsp+70h] [rbp-90h] BYREF
  struct _KTHREAD *v102; // [rsp+78h] [rbp-88h]
  unsigned __int64 v103; // [rsp+80h] [rbp-80h]
  unsigned __int64 v104; // [rsp+88h] [rbp-78h]
  __int16 v105; // [rsp+90h] [rbp-70h]
  __int64 v106; // [rsp+98h] [rbp-68h]
  unsigned __int64 v107; // [rsp+A0h] [rbp-60h]
  unsigned __int64 *v108; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v109; // [rsp+B0h] [rbp-50h]
  __int64 v110; // [rsp+B8h] [rbp-48h]
  __int64 v111; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v112; // [rsp+C8h] [rbp-38h]
  __int128 v113; // [rsp+D8h] [rbp-28h]
  __int128 v114; // [rsp+E8h] [rbp-18h]
  __int64 v115; // [rsp+F8h] [rbp-8h]
  _DWORD *v116; // [rsp+100h] [rbp+0h]
  unsigned __int64 v117[10]; // [rsp+110h] [rbp+10h] BYREF
  int v118; // [rsp+160h] [rbp+60h]
  __int16 v120; // [rsp+1C8h] [rbp+C8h]

  v101 = 0LL;
  v108 = 0LL;
  v111 = 0LL;
  memset_0(v117, 0, 0x58uLL);
  v10 = *(_QWORD *)a1;
  v11 = 0;
  v12 = *(_QWORD *)(a2 + 88);
  v13 = *((_QWORD *)a1 + 12) & 0xFFFFFFFFFFFFFFF8uLL;
  v14 = *(_DWORD *)(a2 + 40) >> 22;
  v115 = 0LL;
  v15 = v14 & 2;
  v100 = v10;
  v112 = 0LL;
  v113 = 0LL;
  v114 = 0LL;
  v16 = *(_QWORD *)(v10 + 56);
  v110 = v16;
  if ( dword_140E2D778
    && dword_140E2D77C == *(_DWORD *)(v16 + 60)
    && dword_140E2D780 == *(_DWORD *)(*(_QWORD *)(v10 + 56) + 68LL) )
  {
    __debugbreak();
  }
  v17 = (a1[14] & 0x20000000) == 0;
  v18 = *(_QWORD *)(v10 + 32);
  v106 = *(_QWORD *)(v10 + 48);
  v107 = v18;
  if ( !v17 || (v19 = v15, (*(_DWORD *)(v12 + 1532) & 0x2000) != 0) )
  {
    v19 = v15;
    if ( !_bittest16((const signed __int16 *)(v10 + 12), 0xEu) )
    {
      v11 = 1;
      v19 = v15 | 5;
    }
  }
  v20 = *(_WORD *)(v12 + 1772);
  v21 = *(_WORD *)(a2 + 58);
  v105 = v20;
  v120 = v21;
  if ( !v21 )
  {
    v22 = *(_DWORD *)(v12 + 1532);
    if ( (v22 & 0x1000) != 0 || (v22 & 1) != 0 )
    {
      v21 = *(_WORD *)(v16 + 48);
      v120 = v21;
    }
    else
    {
      v21 = v20;
      v120 = v20;
    }
  }
  if ( v21 != *(_WORD *)(v16 + 48) )
  {
    if ( (unsigned int)PdcCreateWatchdogAroundClientCall() )
    {
      v19 |= 4u;
      v11 |= 2u;
    }
    else
    {
      if ( v79 )
        return 3221225659LL;
      v120 = v80;
    }
  }
  if ( (*(_BYTE *)(v12 + 368) & 1) != 0 && (*(_DWORD *)(a2 + 64) & 0x2000000) == 0 )
    return 3221225506LL;
  v23 = *(_QWORD *)(a2 + 16);
  v24 = *(_QWORD *)(a2 + 24);
  v25 = *(_DWORD *)(a2 + 40);
  v103 = v23;
  v104 = v24;
  if ( (v25 & 0x20000000) != 0 )
  {
    if ( v18 < 0x100000000LL || v19 >= 4 )
      return 3221225496LL;
    v19 = v19 & 0xFFFFFFFC | 1;
    v11 = 0;
    if ( (*(_BYTE *)(v16 + 44) & 1) != 0 )
      return 3221226089LL;
    v23 = 0x200000LL;
    v24 = (v24 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
    v103 = 0x200000LL;
    v104 = v24;
  }
  if ( !a5 || (*(_DWORD *)(a5 + 56) & 0x80000) != 0 || (v25 & 0x40000) != 0 )
  {
    if ( a7 != 1 )
      return 3221225541LL;
    v19 |= 0x400u;
  }
  v26 = 0;
  v27 = (unsigned int)dword_140E2D7AC;
  if ( dword_140E2D7AC
    && (*(_BYTE *)(*(_QWORD *)(v10 + 56) + 76LL) & 0x40) != 0
    && (v19 & 0x400) == 0
    && v23 != 0x200000 )
  {
    v28 = 0LL;
    if ( (v24 >> 12) + ((v24 & 0xFFF) != 0) == *(_DWORD *)(v10 + 8)
      && (*(_BYTE *)(v12 + 2012) & 4) == 0
      && (a8 & 0x10) == 0 )
    {
      if ( (unsigned int)dword_140E2D7AC + v24 < v24 )
        return 3221225503LL;
      v104 = (unsigned int)dword_140E2D7AC + v24;
      v26 = 32;
    }
    else
    {
      DoesImageContainFunctionOverrideFixups = MiDoesImageContainFunctionOverrideFixups(a1);
      v28 = 0LL;
      if ( DoesImageContainFunctionOverrideFixups
        && (*a4 || v84 > ((*(unsigned int *)(v83 + 64) + 4095LL) & 0xFFFFFFFFFFFFF000uLL)) )
      {
        v19 |= 4u;
        v11 |= 1u;
      }
    }
  }
  else
  {
    v28 = 0LL;
  }
  if ( v19 < 0x400 )
  {
    result = MiAllowImageMap(v12, a5, (__int64)a1, v110);
    v28 = 0LL;
    if ( (int)result < 0 )
      return result;
    v60 = *(_DWORD *)(v12 + 1872);
    if ( (v60 & 0x10) == 0 )
      goto LABEL_99;
    v27 = v110;
    if ( (*(_BYTE *)(v110 + 51) & 4) != 0 )
      goto LABEL_99;
    if ( (*(_BYTE *)(v110 + 44) & 1) == 0 )
    {
      v19 |= 1u;
LABEL_99:
      v10 = v100;
      goto LABEL_23;
    }
    if ( (v60 & 8) == 0 )
      goto LABEL_99;
    return 3221226089LL;
  }
LABEL_23:
  if ( (v19 & 0x400) != 0
    || _bittest16((const signed __int16 *)(v10 + 12), 0xEu) && (*(_DWORD *)(v12 + 1872) & 0x40) == 0 )
  {
    v19 = v19 & 0xFFFFFFFC | 1;
  }
  if ( (a8 & 4) != 0 || v12 == PsSecureSystemProcess )
  {
    v11 = 0;
    v19 &= 0xFFFFFFF9;
  }
  if ( !*(_QWORD *)(v13 + 32) || _bittest(a1 + 14, 0xBu) )
  {
    if ( (v19 & 4) == 0 )
    {
      v11 = 0;
      v19 &= ~2u;
      goto LABEL_29;
    }
    return 3221225496LL;
  }
LABEL_29:
  v109 = 0LL;
  if ( (v19 & 0x400) == 0 )
  {
    for ( i = a1 + 32; i; i = (_DWORD *)*((_QWORD *)i + 2) )
    {
      if ( (i[8] & 0xEu) >= 0xC )
      {
        result = MiArbitraryCodeBlocked(*(_QWORD *)(a2 + 96));
        if ( (int)result >= 0 )
          break;
        return result;
      }
    }
  }
  v116 = a1 + 32;
  MiCheckPurgeAndUpMapCount((__int64)a1, v27, v28);
  if ( v11 )
  {
    v30 = 1231315286;
    v29 = 8
        * (((unsigned __int64)*(unsigned int *)(*(_QWORD *)a1 + 8LL) >> 6)
         + ((*(_DWORD *)(*(_QWORD *)a1 + 8LL) & 0x3F) != 0)
         + 21LL);
  }
  else
  {
    v29 = 136LL;
    v30 = 543449430;
  }
  Pool = (_QWORD *)MiAllocatePool(0x40uLL, v29, v30);
  v32 = Pool;
  if ( !Pool )
  {
    MiDereferenceControlArea((__int64)a1);
    return 3221225626LL;
  }
  if ( v11 )
    v19 |= 8u;
  Pool[2] = -2LL;
  *Pool = -2LL;
  Pool[1] = -2LL;
  v33 = 0;
  if ( a6 == 1 )
    v33 = 4;
  v34 = v33 | v26;
  v35 = v32[3] & 0xFFFFFF8F | 0x20;
  *((_DWORD *)v32 + 12) = v35;
  *((_DWORD *)v32 + 12) = v35 ^ (v35 ^ (*(_DWORD *)(a2 + 52) << 12)) & 0x7F000;
  if ( a5 )
  {
    *((_QWORD *)v32 + 16) = MiReferenceFileObjectForMap(a5);
    if ( *(int *)(a5 + 60) < 0 )
      v34 |= 8u;
  }
  v36 = v34;
  v37 = v32[3] & 0xFFFFF0FF;
  *((_QWORD *)v32 + 5) = 0LL;
  v38 = v37 | 0x80;
  *((_DWORD *)v32 + 12) = v38;
  if ( (v19 & 0x400) == 0 )
  {
    v64 = v106;
    *((_DWORD *)v32 + 12) = v38 | 0x380;
    v34 |= 0x10u;
    v65 = *(_QWORD *)(v12 + 368);
    *((_DWORD *)v32 + 13) = v64;
    *((_BYTE *)v32 + 34) = BYTE4(v64);
    if ( (v65 & 1) == 0 )
      v34 = v36;
  }
  CurrentThread = KeGetCurrentThread();
  v40 = *(_DWORD *)(a2 + 60);
  v99 = 0;
  v102 = CurrentThread;
  if ( (v40 & 1) == 0 || v103 == 0x200000 )
  {
    LODWORD(v41) = v107 + *(_DWORD *)a4;
    v97 = v107 + *(unsigned int *)a4;
    v101 = v97;
    if ( v103 == 0x200000 )
    {
      v85 = v104 >> 12;
      *((_DWORD *)v32 + 13) = v104 >> 12;
      *((_BYTE *)v32 + 34) = BYTE4(v85);
      v34 |= 1u;
      LargePageVad = MiCreateLargePageVad(v12, v32, 0LL, 0LL);
      if ( LargePageVad < 0 )
      {
        v86 = (void *)*((_QWORD *)v32 + 16);
        if ( v86 )
          ObfDereferenceObjectWithTag(v86, 0x63536D4Du);
        MiDereferenceControlArea((__int64)a1);
        ExFreePoolWithTag(v32, 0);
        return (unsigned int)LargePageVad;
      }
      CurrentThread = v102;
    }
  }
  else
  {
    v41 = *a3;
    v97 = *a3;
    v101 = *a3;
  }
  MiWriteVadFlags2((__int64)v32, v34, 1);
  if ( (v32[3] & 0xF80) == 0x380
    && *(_QWORD *)(v12 + 464)
    && (*(_DWORD *)(v12 + 1532) & 0x1000) == 0
    && v12 != PsSecureSystemProcess
    && (unsigned __int8)PsIsImageNotifyEnabled() )
  {
    v19 |= 0x800u;
  }
  v118 = 32;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, v12);
  if ( (*(_DWORD *)(v12 + 500) & 0x20) != 0 )
  {
    LargePageVad = -1073741558;
    goto LABEL_209;
  }
  if ( (*(_DWORD *)(a2 + 60) & 1) != 0 && v103 != 0x200000 )
  {
    if ( (unsigned int)MiIsVaRangeAvailable(v12, v41, v104, *(_QWORD *)a2, *(_QWORD *)(a2 + 8)) )
      goto LABEL_48;
    LargePageVad = -1073741800;
    goto LABEL_209;
  }
  if ( v104 > 0x7FFFFFFF0000LL )
  {
    LargePageVad = -1073741801;
LABEL_209:
    v42 = (__int64)v32;
LABEL_210:
    v51 = (__int64)a1;
    goto LABEL_148;
  }
  if ( (v19 & 1) == 0 && (unsigned int)MiIsVaRangeAvailable(v12, v41, v104, *(_QWORD *)a2, *(_QWORD *)(a2 + 8)) )
    goto LABEL_48;
  v69 = *(_QWORD *)(a2 + 8);
  v70 = 0LL;
  v106 = 0LL;
  if ( v107 < 0x100000000LL && v69 >= 0x100000000LL && (*(_WORD *)(v100 + 12) & 0x4000) == 0 )
    v69 = 0xFFFFFFFFLL;
  if ( *(__int16 *)(v100 + 12) < 0 )
  {
    if ( !*(_QWORD *)(v12 + 784) || (v87 = *(_WORD *)(v12 + 1772), v87 != 332) && v87 != 452 )
    {
      v70 = 0x100000000LL;
      v106 = 0x100000000LL;
    }
  }
  if ( *(_QWORD *)a2 >= v69 )
  {
    LargePageVad = -1073741801;
  }
  else
  {
    LargePageVad = MiSelectUserAddress(
                     *(_DWORD *)(a2 + 40),
                     *(_QWORD *)a2,
                     v69,
                     v104,
                     v103,
                     v70,
                     (*((_DWORD *)v32 + 12) >> 7) & 0x1F,
                     0,
                     &v108,
                     &v101);
    v97 = v101;
    if ( LargePageVad >= 0 )
      goto LABEL_135;
  }
  v88 = *(_QWORD *)(a2 + 8);
  if ( v69 != v88 )
  {
    LargePageVad = MiSelectUserAddress(
                     *(_DWORD *)(a2 + 40),
                     *(_QWORD *)a2,
                     v88,
                     v104,
                     v103,
                     v106,
                     (*((_DWORD *)v32 + 12) >> 7) & 0x1F,
                     0,
                     &v108,
                     &v101);
    v97 = v101;
  }
  v42 = (__int64)v32;
  if ( LargePageVad < 0 )
    goto LABEL_210;
LABEL_135:
  if ( v103 == 0x200000 )
  {
    v71 = v104;
    if ( v104 - *(_QWORD *)(a2 + 24) >= 0x10000 )
      v109 = (unsigned int)ExGenRandom(1) % ((v71 - *(_QWORD *)(a2 + 24)) >> 16);
    LockedVadEvent = MiLocateLockedVadEvent((__int64)v32, 16);
    v73 = v109;
    *(_QWORD *)(LockedVadEvent + 16) = v74 >> 12;
    *(_BYTE *)(LockedVadEvent + 8) = v73;
  }
LABEL_48:
  v42 = (__int64)v32;
  v43 = v97;
  if ( v97 - *(unsigned int *)a4 != v107 )
  {
    v99 = 1073741827;
    if ( (v19 & 2) != 0 )
    {
      if ( (v19 & 8) != 0 )
        goto LABEL_144;
      v75 = MiAllocatePool(
              0x40uLL,
              8
            * (((unsigned __int64)*(unsigned int *)(*(_QWORD *)a1 + 8LL) >> 6)
             + ((*(_DWORD *)(*(_QWORD *)a1 + 8LL) & 0x3F) != 0)
             + 21LL),
              1231315286);
      v76 = v75;
      if ( v75 )
      {
        *(_OWORD *)v75 = *v32;
        *(_OWORD *)(v75 + 16) = v32[1];
        *(_OWORD *)(v75 + 32) = v32[2];
        *(_OWORD *)(v75 + 48) = v32[3];
        *(_OWORD *)(v75 + 64) = v32[4];
        *(_OWORD *)(v75 + 80) = v32[5];
        *(_OWORD *)(v75 + 96) = v32[6];
        *(_OWORD *)(v75 + 112) = v32[7];
        *(_QWORD *)(v75 + 128) = *((_QWORD *)v32 + 16);
        ExFreePoolWithTag(v32, 0);
        v19 |= 8u;
        v42 = v76;
      }
      v43 = v97;
      if ( (v19 & 8) != 0 )
LABEL_144:
        v99 = 1073741878;
    }
  }
  v107 = v43 >> 12;
  v106 = (v43 + v104 - 1) >> 12;
  MiUpdateVadStartVpn(v42, v43 >> 12);
  v45 = v116;
  *(_DWORD *)(v42 + 28) = v46;
  *(_BYTE *)(v42 + 33) = v47;
  for ( j = *v48 >> 12; ; j -= v50 )
  {
    v50 = (unsigned int)v45[11];
    if ( j < v50 )
      break;
    v45 = (_DWORD *)*((_QWORD *)v45 + 2);
  }
  *(_QWORD *)(v42 + 72) = v45;
  *(_QWORD *)(v42 + 80) = *((_QWORD *)v45 + 1) + 8 * j;
  *(_QWORD *)(v42 + 88) = *(_QWORD *)(v100 + 64) + 8 * (*(unsigned int *)(v100 + 8) - 1LL);
  if ( (v19 & 8) != 0 )
    MiInitializeFixupVad(v42, v44, (*(_DWORD *)(v12 + 1532) >> 13) & 1);
  if ( *(_DWORD *)(a2 + 52) )
    *(_BYTE *)(*(_QWORD *)(v12 + 1040) + 1060LL) = 1;
  v51 = (__int64)a1;
  if ( (a1[14] & 0x8000000) != 0 )
  {
    SessionId = PsGetSessionIdEx(v12);
    LargePageVad = MiCreatePerSessionProtos(a1, SessionId);
    if ( LargePageVad < 0 )
      goto LABEL_148;
    v19 |= 0x100u;
  }
  if ( (v34 & 0x10) != 0 )
  {
    v92 = *(unsigned int *)(v42 + 52);
    v93 = *(unsigned __int8 *)(v42 + 34);
    v94 = (v92 | ((unsigned __int64)v93 << 32)) + MiUpdatePrivateDemandZeroView(v12, v42, 0);
    *(_DWORD *)(v42 + 52) = v94;
    *(_BYTE *)(v42 + 34) = BYTE4(v94);
    v117[1] = (unsigned __int64)v102;
    MiInsertVadEvent(v42, v117, 0);
    v19 |= 0x40u;
    v51 = (__int64)a1;
    v97 = v101;
  }
  LargePageVad = MiInsertSharedCommitNode(v51, v12, 0);
  if ( LargePageVad < 0 )
    goto LABEL_148;
  v19 |= 0x80u;
  v53 = MiControlAreaRequiresCharge(v51, (a8 & 8) != 0);
  if ( !v53 )
  {
    LargePageVad = -1073740277;
    goto LABEL_148;
  }
  if ( v53 == 2 )
  {
    LargePageVad = MiReferenceActiveSubsection((_QWORD *)(v51 + 128), (a8 & 8) != 0 ? 264 : 8, 0x11u);
    if ( LargePageVad < 0 )
      goto LABEL_148;
    v19 |= 0x200u;
  }
  LargePageVad = MiInsertVadCharges(v42, v12);
  if ( LargePageVad < 0 )
  {
LABEL_148:
    if ( (v19 & 0x100) != 0 )
    {
      PsGetSessionIdEx(v12);
      MiDereferencePerSessionProtos(v51);
    }
    if ( (v19 & 0x200) != 0 )
      MiReturnCrossPartitionControlAreaCharges(v51);
    if ( (v19 & 0x80u) != 0 )
      MiRemoveSharedCommitNode(v51, v12, 0LL);
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)v102, v12);
    if ( (v19 & 0x40) != 0 )
      MiRemoveVadEvent(v42, v117);
    if ( v42 )
    {
      if ( v103 == 0x200000 )
        MiReleaseVadEventBlocks(v42, 0LL);
      v96 = *(void **)(v42 + 128);
      if ( v96 )
        ObfDereferenceObjectWithTag(v96, 0x63536D4Du);
      ExFreePoolWithTag((PVOID)v42, 0);
    }
    MiDereferenceControlArea(v51);
    return (unsigned int)LargePageVad;
  }
  if ( (v19 & 8) != 0 )
  {
    ++*(_QWORD *)(*(_QWORD *)(v12 + 1040) + 1088LL);
    v97 = v101;
  }
  MiInsertVad(v42, v12, 0);
  v54 = 0LL;
  if ( v103 == 0x200000 )
  {
    MiLockVad((__int64)v102, v42);
    LargePageVad = MiMapUserLargePages(v42, 0, 0, 0LL);
    if ( LargePageVad < 0 )
    {
      UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)v102, v12);
      goto LABEL_171;
    }
    MiUnlockVad((__int64)v102, v42);
  }
  if ( v108 )
    MiAdvanceVadHint(v107, v106, v108);
  v98 = (v109 << 16) + v97;
  v101 = v98;
  *a3 = v98;
  if ( *(_BYTE *)(v110 + 50) && v120 != v105 )
  {
    v19 |= 0x1000u;
    if ( *(_QWORD *)(v12 + 784) && *(_WORD *)(v110 + 48) == 0x8664 )
      v19 &= ~0x1000u;
    v67 = v99;
    if ( (v19 & 0x1000) != 0 )
      v67 = 1073741838;
    v99 = v67;
  }
  if ( (PerfGlobalGroupMask & 0x8000) != 0 )
    MiLogMapFileEvent(v42, 1061);
  if ( (v34 & 0x20) != 0 && (unsigned int)MiDoesImageContainFunctionOverrideFixups(a1) )
    MiMapImageScpCfgPages(v12, v42, v77);
  v55 = v19 | 0x10;
  if ( (v55 & 0x400) == 0 )
  {
    if ( (NtGlobalFlag & 0x40000) != 0 )
    {
      v89 = v99 - 1073741827;
      if ( (unsigned int)v89 > 0x33 || (v90 = 0x8000000000801LL, !_bittest64(&v90, v89)) )
      {
        if ( ((__int64)v102[1].Queue & 0x20) == 0 )
        {
          v95 = *(_WORD *)(v100 + 12);
          if ( (v95 & 0x800) == 0 && (*(_BYTE *)(v100 + 14) & 0x20) != 0 )
          {
            *(_WORD *)(v100 + 12) = v95 | 0x800;
            MiLoadUserSymbols(a1, v98, v12);
          }
        }
      }
    }
    VadFlags2 = MiReadVadFlags2(v42);
    if ( (v55 & 0x800) != 0 )
    {
      BYTE8(v112) = 3;
      if ( (VadFlags2 & 8) != 0 )
      {
        v68 = DWORD2(v112) & 0xFFF80FFF;
      }
      else
      {
        v68 = DWORD2(v112) ^ ((unsigned __int16)(*(unsigned __int8 *)(v57 + 15) << 12) ^ WORD4(v112)) & 0xF000 ^ ((*(unsigned __int8 *)(v57 + 15) << 12) ^ DWORD2(v112) ^ ((unsigned __int16)(*(unsigned __int8 *)(v57 + 15) << 12) ^ WORD4(v112)) & 0xF000) & 0x70000;
        v98 = v101;
      }
      DWORD2(v112) = v68 ^ (v68 ^ (v55 >> 1)) & 0x800;
      *(_QWORD *)&v113 = v98;
      *(_QWORD *)&v114 = *(_QWORD *)(a2 + 24);
      if ( *(_QWORD *)(a2 + 24) != _InterlockedCompareExchange64((volatile signed __int64 *)(v57 + 24), -1LL, -1LL) )
        DWORD2(v112) |= 0x80000u;
      DWORD2(v113) = 0;
      DWORD2(v114) = 0;
      v54 = MiReferenceControlAreaFile((__int64)a1);
      LOWORD(v55) = v55 | 0x20;
      LODWORD(v98) = v101;
    }
    if ( *(_DWORD *)(a2 + 120) || (VadFlags2 & 0x10) != 0 || *(_QWORD *)(a2 + 72) || (*(_DWORD *)(a2 + 64) & 2) != 0 )
      LOWORD(v55) = v55 | 0x20;
  }
  if ( (v55 & 0x20) != 0 )
  {
    MiLockVad((__int64)v102, v42);
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)v102, v12);
    LOWORD(v55) = v55 & 0xFFEF;
    if ( (MiReadVadFlags2(v42) & 0x10) != 0 )
    {
      MiUpdatePrivateDemandZeroView(v12, v42, 1);
      MiRemoveVadEvent(v42, v117);
      LOWORD(v55) = v55 & 0xFFBF;
    }
    v61 = 0LL;
    if ( (v55 & 0x400) == 0 )
    {
      v62 = *(unsigned int *)(a2 + 120);
      if ( (_DWORD)v62 )
      {
        LargePageVad = MiCommitVadMetadataBits(v42, 0LL, v62);
        if ( LargePageVad < 0 )
          goto LABEL_171;
      }
    }
    if ( !*(_QWORD *)(a2 + 72) )
    {
      v61 = v111;
      goto LABEL_106;
    }
    v91 = *(_DWORD *)(a2 + 68);
    if ( v91 == 4 || (unsigned int)(v91 - 1) <= 1 || v91 == -2147483647 )
    {
      LargePageVad = MiSecureVad(v42, v98, *(_QWORD *)(a2 + 24), v91, 0, (__int64)&v111);
      if ( LargePageVad >= 0 )
      {
        **(_QWORD **)(a2 + 72) = qword_140E2DA80 ^ v111 ^ v12;
LABEL_106:
        if ( (v55 & 0x800) == 0
          || (v61 = MiAddSecureEntry(v42, (_DWORD)v107 << 12, ((_DWORD)v106 << 12) | 0xFFFu, -2147483647, 0)) != 0 )
        {
          if ( (*(_DWORD *)(a2 + 64) & 2) != 0 )
            MiSoftFaultMappedView(v42);
          v63 = v42;
          v58 = (__int64)v102;
          MiUnlockVad((__int64)v102, v63);
          if ( (v55 & 0x800) != 0 )
          {
            PsCallImageNotifyRoutines((PUNICODE_STRING)(v54 + 88));
            ObfDereferenceObjectWithTag((PVOID)v54, 0x63536D4Du);
          }
          if ( v61 )
            MmUnsecureVirtualMemory((HANDLE)(qword_140E2DA80 ^ v61 ^ v12));
          goto LABEL_78;
        }
        LargePageVad = -1073741670;
      }
    }
    else
    {
      LargePageVad = -1073741755;
    }
LABEL_171:
    MiReferenceVad(v42);
    if ( v54 )
      ObfDereferenceObjectWithTag((PVOID)v54, 0x63536D4Du);
    MiUnmapVad((PVOID)v42);
    v81 = *(_QWORD **)(a2 + 72);
    if ( v81 )
      *v81 = 0LL;
    return (unsigned int)LargePageVad;
  }
  v58 = (__int64)v102;
LABEL_78:
  if ( (v55 & 0x10) != 0 )
    UNLOCK_ADDRESS_SPACE_UNORDERED(v58, v12);
  if ( (v55 & 0x400) == 0 && a5 && (*(_BYTE *)(v12 + 368) & 1) == 0 )
    *(_DWORD *)(a2 + 60) |= 4u;
  return v99;
}
