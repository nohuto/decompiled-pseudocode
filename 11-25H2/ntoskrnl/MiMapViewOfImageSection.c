/*
 * XREFs of MiMapViewOfImageSection @ 0x1409028FC
 * Callers:
 *     MiFinalizeLagePageImageMapping @ 0x1407DD924 (MiFinalizeLagePageImageMapping.c)
 *     MiMapImageInSystemProcess @ 0x1407DD9C8 (MiMapImageInSystemProcess.c)
 *     MiMapViewOfSection @ 0x1408FC9F0 (MiMapViewOfSection.c)
 * Callees:
 *     MiReferenceActiveSubsection @ 0x1402140B0 (MiReferenceActiveSubsection.c)
 *     PsGetSessionIdEx @ 0x140246440 (PsGetSessionIdEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     MiWriteVadFlags2 @ 0x1402A3350 (MiWriteVadFlags2.c)
 *     MiInsertVadEvent @ 0x1402A33D8 (MiInsertVadEvent.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1402A3CEC (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiLocateLockedVadEvent @ 0x1402A57D4 (MiLocateLockedVadEvent.c)
 *     MiControlAreaRequiresCharge @ 0x1402A673C (MiControlAreaRequiresCharge.c)
 *     MiUnlockVad @ 0x1402A6928 (MiUnlockVad.c)
 *     MiMapImageScpCfgPages @ 0x1402A69D0 (MiMapImageScpCfgPages.c)
 *     MiLockVad @ 0x1402A6CB4 (MiLockVad.c)
 *     MiReferenceVad @ 0x1402A7A40 (MiReferenceVad.c)
 *     MiInsertVad @ 0x1402A80AC (MiInsertVad.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MiSoftFaultMappedView @ 0x140339FC4 (MiSoftFaultMappedView.c)
 *     MiCheckPurgeAndUpMapCount @ 0x1403A4900 (MiCheckPurgeAndUpMapCount.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403D824C (LOCK_ADDRESS_SPACE.c)
 *     MiMapUserLargePages @ 0x14040538C (MiMapUserLargePages.c)
 *     ExGenRandom @ 0x14041CDD0 (ExGenRandom.c)
 *     MiReferenceControlAreaFile @ 0x14042F960 (MiReferenceControlAreaFile.c)
 *     MiUpdateVadStartVpn @ 0x14044B674 (MiUpdateVadStartVpn.c)
 *     MiReadVadFlags2 @ 0x140455FA8 (MiReadVadFlags2.c)
 *     MiDereferenceControlArea @ 0x14046FD68 (MiDereferenceControlArea.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140483BB0 (PdcCreateWatchdogAroundClientCall.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1404C29AC (MiUpdatePrivateDemandZeroView.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1404CBB78 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiRemoveVadEvent @ 0x14066CC00 (MiRemoveVadEvent.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MmUnsecureVirtualMemory @ 0x1408B48C0 (MmUnsecureVirtualMemory.c)
 *     MiUnmapVad @ 0x1408B4E4C (MiUnmapVad.c)
 *     MiRemoveSharedCommitNode @ 0x1408B5520 (MiRemoveSharedCommitNode.c)
 *     MiAddSecureEntry @ 0x1408F8CA0 (MiAddSecureEntry.c)
 *     MiReferenceFileObjectForMap @ 0x1408FF8F0 (MiReferenceFileObjectForMap.c)
 *     MiSelectUserAddress @ 0x1408FF930 (MiSelectUserAddress.c)
 *     MiInsertVadCharges @ 0x140900770 (MiInsertVadCharges.c)
 *     MiAdvanceVadHint @ 0x140900910 (MiAdvanceVadHint.c)
 *     MiInsertSharedCommitNode @ 0x140900A50 (MiInsertSharedCommitNode.c)
 *     MiReleaseVadEventBlocks @ 0x140901E30 (MiReleaseVadEventBlocks.c)
 *     MiIsVaRangeAvailable @ 0x140902548 (MiIsVaRangeAvailable.c)
 *     MiArbitraryCodeBlocked @ 0x140902858 (MiArbitraryCodeBlocked.c)
 *     MiLogMapFileEvent @ 0x140903AB0 (MiLogMapFileEvent.c)
 *     MiAllowImageMap @ 0x140903D34 (MiAllowImageMap.c)
 *     MiInitializeFixupVad @ 0x140903FFC (MiInitializeFixupVad.c)
 *     PsIsImageNotifyEnabled @ 0x14090409C (PsIsImageNotifyEnabled.c)
 *     MiDoesImageContainFunctionOverrideFixups @ 0x14090469C (MiDoesImageContainFunctionOverrideFixups.c)
 *     MiCreatePerSessionProtos @ 0x1409046C4 (MiCreatePerSessionProtos.c)
 *     MiCommitVadMetadataBits @ 0x140906D54 (MiCommitVadMetadataBits.c)
 *     PsCallImageNotifyRoutines @ 0x14090BC00 (PsCallImageNotifyRoutines.c)
 *     MiSecureVad @ 0x1409F01EC (MiSecureVad.c)
 *     MiDereferencePerSessionProtos @ 0x140A1D1D8 (MiDereferencePerSessionProtos.c)
 *     MiCreateLargePageVad @ 0x140A7F47C (MiCreateLargePageVad.c)
 *     MiLoadUserSymbols @ 0x140AABED8 (MiLoadUserSymbols.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiMapViewOfImageSection(
        _DWORD *a1,
        __int64 a2,
        unsigned __int64 *a3,
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
  ULONG_PTR v27; // rdx
  int v28; // r8d
  _QWORD *Pool; // rax
  _OWORD *v30; // r14
  int v31; // eax
  int v32; // edi
  unsigned int v33; // ecx
  int v34; // ecx
  unsigned int v35; // eax
  int v36; // eax
  struct _KTHREAD *CurrentThread; // rsi
  int v38; // eax
  unsigned __int64 v39; // r15
  __int64 v40; // r15
  unsigned __int64 v41; // rdx
  unsigned int v42; // r9d
  _DWORD *v43; // rdx
  int v44; // eax
  char v45; // rax^4
  _QWORD *v46; // r8
  unsigned __int64 j; // rcx
  unsigned __int64 v48; // rax
  __int64 v49; // r14
  int LargePageVad; // esi
  int v51; // eax
  __int64 v52; // r9
  ULONG_PTR v53; // r14
  unsigned __int64 *v54; // r8
  unsigned int v55; // ebx
  char VadFlags2; // di
  __int64 v57; // r8
  __int64 v58; // r15
  __int64 result; // rax
  __int64 v60; // rdi
  __int64 v61; // r8
  __int64 v62; // rdx
  int v63; // ecx
  int v64; // eax
  __int64 v65; // rdx
  __int64 v66; // rax
  unsigned int v67; // edx
  _DWORD *i; // rcx
  unsigned __int64 v69; // r15
  __int64 v70; // rcx
  unsigned __int64 v71; // rsi
  unsigned __int64 LockedVadEvent; // rax
  char v73; // cl
  unsigned __int64 v74; // r8
  __int64 v75; // rax
  __int64 v76; // rsi
  __int16 v77; // dx
  __int16 v78; // cx
  __int64 v79; // r8
  unsigned int SessionId; // eax
  _QWORD *v81; // rax
  __int64 v82; // r9
  unsigned __int64 v83; // r10
  __int16 v84; // ax
  unsigned __int64 v85; // r8
  unsigned __int64 v86; // rax
  __int64 v87; // rcx
  int v88; // r9d
  unsigned int v89; // eax
  unsigned __int64 v90; // rax
  void *v91; // rcx
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
  if ( dword_140E2D538
    && dword_140E2D53C == *(_DWORD *)(v16 + 60)
    && dword_140E2D540 == *(_DWORD *)(*(_QWORD *)(v10 + 56) + 68LL) )
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
      if ( v77 )
        return 3221225659LL;
      v120 = v78;
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
  if ( dword_140E2D56C
    && (*(_BYTE *)(*(_QWORD *)(v10 + 56) + 76LL) & 0x40) != 0
    && (v19 & 0x400) == 0
    && v23 != 0x200000 )
  {
    if ( (v24 >> 12) + ((v24 & 0xFFF) != 0) == *(_DWORD *)(v10 + 8)
      && (*(_BYTE *)(v12 + 2012) & 4) == 0
      && (a8 & 0x10) == 0 )
    {
      if ( (unsigned int)dword_140E2D56C + v24 < v24 )
        return 3221225503LL;
      v104 = (unsigned int)dword_140E2D56C + v24;
      v26 = 32;
    }
    else if ( (unsigned int)MiDoesImageContainFunctionOverrideFixups(a1)
           && (*a4 || v83 > ((*(unsigned int *)(v82 + 64) + 4095LL) & 0xFFFFFFFFFFFFF000uLL)) )
    {
      v19 |= 4u;
      v11 |= 1u;
    }
  }
  if ( v19 < 0x400 )
  {
    result = MiAllowImageMap(v12, a5, a1, v110);
    if ( (int)result < 0 )
      return result;
    v63 = *(_DWORD *)(v12 + 1872);
    if ( (v63 & 0x10) == 0 || (*(_BYTE *)(v110 + 51) & 4) != 0 )
      goto LABEL_107;
    if ( (*(_BYTE *)(v110 + 44) & 1) == 0 )
    {
      v19 |= 1u;
LABEL_107:
      v10 = v100;
      goto LABEL_17;
    }
    if ( (v63 & 8) == 0 )
      goto LABEL_107;
    return 3221226089LL;
  }
LABEL_17:
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
      goto LABEL_23;
    }
    return 3221225496LL;
  }
LABEL_23:
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
  MiCheckPurgeAndUpMapCount((__int64)a1);
  if ( v11 )
  {
    v28 = 1231315286;
    v27 = 8
        * (((unsigned __int64)*(unsigned int *)(*(_QWORD *)a1 + 8LL) >> 6)
         + ((*(_DWORD *)(*(_QWORD *)a1 + 8LL) & 0x3F) != 0)
         + 21LL);
  }
  else
  {
    v27 = 136LL;
    v28 = 543449430;
  }
  Pool = (_QWORD *)MiAllocatePool(0x40uLL, v27, v28);
  v30 = Pool;
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
  v31 = 0;
  if ( a6 == 1 )
    v31 = 4;
  v32 = v31 | v26;
  v33 = v30[3] & 0xFFFFFF8F | 0x20;
  *((_DWORD *)v30 + 12) = v33;
  *((_DWORD *)v30 + 12) = v33 ^ (v33 ^ (*(_DWORD *)(a2 + 52) << 12)) & 0x7F000;
  if ( a5 )
  {
    *((_QWORD *)v30 + 16) = MiReferenceFileObjectForMap(a5);
    if ( *(int *)(a5 + 60) < 0 )
      v32 |= 8u;
  }
  v34 = v32;
  v35 = v30[3] & 0xFFFFF0FF;
  *((_QWORD *)v30 + 5) = 0LL;
  v36 = v35 | 0x80;
  *((_DWORD *)v30 + 12) = v36;
  if ( (v19 & 0x400) == 0 )
  {
    v65 = v106;
    *((_DWORD *)v30 + 12) = v36 | 0x380;
    v32 |= 0x10u;
    v66 = *(_QWORD *)(v12 + 368);
    *((_DWORD *)v30 + 13) = v65;
    *((_BYTE *)v30 + 34) = BYTE4(v65);
    if ( (v66 & 1) == 0 )
      v32 = v34;
  }
  CurrentThread = KeGetCurrentThread();
  v38 = *(_DWORD *)(a2 + 60);
  v99 = 0;
  v102 = CurrentThread;
  if ( (v38 & 1) == 0 || v103 == 0x200000 )
  {
    v39 = v107 + *(unsigned int *)a4;
    v97 = v39;
    v101 = v39;
    if ( v103 == 0x200000 )
    {
      v90 = v104 >> 12;
      *((_DWORD *)v30 + 13) = v104 >> 12;
      *((_BYTE *)v30 + 34) = BYTE4(v90);
      v32 |= 1u;
      LargePageVad = MiCreateLargePageVad(v12, v30, 0LL, 0LL);
      if ( LargePageVad < 0 )
      {
        v91 = (void *)*((_QWORD *)v30 + 16);
        if ( v91 )
          ObfDereferenceObjectWithTag(v91, 0x63536D4Du);
        MiDereferenceControlArea((__int64)a1);
        ExFreePoolWithTag(v30, 0);
        return (unsigned int)LargePageVad;
      }
      CurrentThread = v102;
    }
  }
  else
  {
    v39 = *a3;
    v97 = *a3;
    v101 = *a3;
  }
  MiWriteVadFlags2((__int64)v30, v32, 1);
  if ( (v30[3] & 0xF80) == 0x380
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
    goto LABEL_203;
  }
  if ( (*(_DWORD *)(a2 + 60) & 1) != 0 && v103 != 0x200000 )
  {
    if ( (unsigned int)MiIsVaRangeAvailable(v12, v39, v104, *(_QWORD *)a2, *(_QWORD *)(a2 + 8)) )
      goto LABEL_42;
    LargePageVad = -1073741800;
    goto LABEL_203;
  }
  if ( v104 > 0x7FFFFFFF0000LL )
  {
    LargePageVad = -1073741801;
LABEL_203:
    v40 = (__int64)v30;
LABEL_204:
    v49 = (__int64)a1;
    goto LABEL_153;
  }
  if ( (v19 & 1) == 0 && (unsigned int)MiIsVaRangeAvailable(v12, v39, v104, *(_QWORD *)a2, *(_QWORD *)(a2 + 8)) )
    goto LABEL_42;
  v69 = *(_QWORD *)(a2 + 8);
  v70 = 0LL;
  v106 = 0LL;
  if ( v107 < 0x100000000LL && v69 >= 0x100000000LL && (*(_WORD *)(v100 + 12) & 0x4000) == 0 )
    v69 = 0xFFFFFFFFLL;
  if ( *(__int16 *)(v100 + 12) < 0 )
  {
    if ( !*(_QWORD *)(v12 + 784) || (v84 = *(_WORD *)(v12 + 1772), v84 != 332) && v84 != 452 )
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
                     (*((_DWORD *)v30 + 12) >> 7) & 0x1F,
                     0,
                     &v108,
                     &v101);
    v97 = v101;
    if ( LargePageVad >= 0 )
      goto LABEL_134;
  }
  v85 = *(_QWORD *)(a2 + 8);
  if ( v69 != v85 )
  {
    LargePageVad = MiSelectUserAddress(
                     *(_DWORD *)(a2 + 40),
                     *(_QWORD *)a2,
                     v85,
                     v104,
                     v103,
                     v106,
                     (*((_DWORD *)v30 + 12) >> 7) & 0x1F,
                     0,
                     &v108,
                     &v101);
    v97 = v101;
  }
  v40 = (__int64)v30;
  if ( LargePageVad < 0 )
    goto LABEL_204;
LABEL_134:
  if ( v103 == 0x200000 )
  {
    v71 = v104;
    if ( v104 - *(_QWORD *)(a2 + 24) >= 0x10000 )
      v109 = (unsigned int)ExGenRandom(1) % ((v71 - *(_QWORD *)(a2 + 24)) >> 16);
    LockedVadEvent = MiLocateLockedVadEvent((__int64)v30, 16);
    v73 = v109;
    *(_QWORD *)(LockedVadEvent + 16) = v74 >> 12;
    *(_BYTE *)(LockedVadEvent + 8) = v73;
  }
LABEL_42:
  v40 = (__int64)v30;
  v41 = v97;
  if ( v97 - *(unsigned int *)a4 != v107 )
  {
    v99 = 1073741827;
    if ( (v19 & 2) != 0 )
    {
      if ( (v19 & 8) != 0 )
        goto LABEL_143;
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
        *(_OWORD *)v75 = *v30;
        *(_OWORD *)(v75 + 16) = v30[1];
        *(_OWORD *)(v75 + 32) = v30[2];
        *(_OWORD *)(v75 + 48) = v30[3];
        *(_OWORD *)(v75 + 64) = v30[4];
        *(_OWORD *)(v75 + 80) = v30[5];
        *(_OWORD *)(v75 + 96) = v30[6];
        *(_OWORD *)(v75 + 112) = v30[7];
        *(_QWORD *)(v75 + 128) = *((_QWORD *)v30 + 16);
        ExFreePoolWithTag(v30, 0);
        v19 |= 8u;
        v40 = v76;
      }
      v41 = v97;
      if ( (v19 & 8) != 0 )
LABEL_143:
        v99 = 1073741878;
    }
  }
  v107 = v41 >> 12;
  v106 = (v41 + v104 - 1) >> 12;
  MiUpdateVadStartVpn(v40, v41 >> 12);
  v43 = v116;
  *(_DWORD *)(v40 + 28) = v44;
  *(_BYTE *)(v40 + 33) = v45;
  for ( j = *v46 >> 12; ; j -= v48 )
  {
    v48 = (unsigned int)v43[11];
    if ( j < v48 )
      break;
    v43 = (_DWORD *)*((_QWORD *)v43 + 2);
  }
  *(_QWORD *)(v40 + 72) = v43;
  *(_QWORD *)(v40 + 80) = *((_QWORD *)v43 + 1) + 8 * j;
  *(_QWORD *)(v40 + 88) = *(_QWORD *)(v100 + 64) + 8 * (*(unsigned int *)(v100 + 8) - 1LL);
  if ( (v19 & 8) != 0 )
    MiInitializeFixupVad(v40, v42, (*(_DWORD *)(v12 + 1532) >> 13) & 1);
  if ( *(_DWORD *)(a2 + 52) )
    *(_BYTE *)(*(_QWORD *)(v12 + 1040) + 1060LL) = 1;
  v49 = (__int64)a1;
  if ( (a1[14] & 0x8000000) != 0 )
  {
    SessionId = PsGetSessionIdEx(v12);
    LargePageVad = MiCreatePerSessionProtos(a1, SessionId);
    if ( LargePageVad < 0 )
      goto LABEL_153;
    v19 |= 0x100u;
  }
  if ( (v32 & 0x10) != 0 )
  {
    v92 = *(unsigned int *)(v40 + 52);
    v93 = *(unsigned __int8 *)(v40 + 34);
    v94 = (v92 | ((unsigned __int64)v93 << 32)) + MiUpdatePrivateDemandZeroView(v12, v40, 0);
    *(_DWORD *)(v40 + 52) = v94;
    *(_BYTE *)(v40 + 34) = BYTE4(v94);
    v117[1] = (unsigned __int64)v102;
    MiInsertVadEvent(v40, v117, 0);
    v19 |= 0x40u;
    v49 = (__int64)a1;
    v97 = v101;
  }
  LargePageVad = MiInsertSharedCommitNode(v49, v12, 0);
  if ( LargePageVad < 0 )
    goto LABEL_153;
  v19 |= 0x80u;
  v51 = MiControlAreaRequiresCharge(v49, (a8 & 8) != 0);
  if ( !v51 )
  {
    LargePageVad = -1073740277;
    goto LABEL_153;
  }
  if ( v51 == 2 )
  {
    LargePageVad = MiReferenceActiveSubsection((_QWORD *)(v49 + 128), (a8 & 8) != 0 ? 264 : 8, 0x11u);
    if ( LargePageVad < 0 )
      goto LABEL_153;
    v19 |= 0x200u;
  }
  LargePageVad = MiInsertVadCharges(v40, v12);
  if ( LargePageVad < 0 )
  {
LABEL_153:
    if ( (v19 & 0x100) != 0 )
    {
      v89 = PsGetSessionIdEx(v12);
      MiDereferencePerSessionProtos(v49, v89);
    }
    if ( (v19 & 0x200) != 0 )
      MiReturnCrossPartitionControlAreaCharges(v49);
    if ( (v19 & 0x80u) != 0 )
      MiRemoveSharedCommitNode(v49, v12, 0);
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)v102, v12);
    if ( (v19 & 0x40) != 0 )
      MiRemoveVadEvent(v40, v117);
    if ( v40 )
    {
      if ( v103 == 0x200000 )
        MiReleaseVadEventBlocks(v40, 0);
      v96 = *(void **)(v40 + 128);
      if ( v96 )
        ObfDereferenceObjectWithTag(v96, 0x63536D4Du);
      ExFreePoolWithTag((PVOID)v40, 0);
    }
    MiDereferenceControlArea(v49);
    return (unsigned int)LargePageVad;
  }
  if ( (v19 & 8) != 0 )
  {
    ++*(_QWORD *)(*(_QWORD *)(v12 + 1040) + 1088LL);
    v97 = v101;
  }
  MiInsertVad(v40, v12, 0);
  v53 = 0LL;
  if ( v103 == 0x200000 )
  {
    MiLockVad((__int64)v102, v40);
    LargePageVad = MiMapUserLargePages(v40, 0, 0, 0LL);
    if ( LargePageVad < 0 )
    {
      UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)v102, v12);
      goto LABEL_169;
    }
    MiUnlockVad((__int64)v102, v40);
  }
  v54 = v108;
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
    v64 = v99;
    if ( (v19 & 0x1000) != 0 )
      v64 = 1073741838;
    v99 = v64;
  }
  if ( (PerfGlobalGroupMask[0] & 0x8000) != 0 )
    MiLogMapFileEvent(v40, 1061LL, v54, v52);
  if ( (v32 & 0x20) != 0 && (unsigned int)MiDoesImageContainFunctionOverrideFixups(a1) )
    MiMapImageScpCfgPages(v12, v40, v79);
  v55 = v19 | 0x10;
  if ( (v55 & 0x400) == 0 )
  {
    if ( (NtGlobalFlag & 0x40000) != 0 )
    {
      v86 = v99 - 1073741827;
      if ( (unsigned int)v86 > 0x33 || (v87 = 0x8000000000801LL, !_bittest64(&v87, v86)) )
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
    VadFlags2 = MiReadVadFlags2(v40);
    if ( (v55 & 0x800) != 0 )
    {
      BYTE8(v112) = 3;
      if ( (VadFlags2 & 8) != 0 )
      {
        v67 = DWORD2(v112) & 0xFFF80FFF;
      }
      else
      {
        v67 = DWORD2(v112) ^ ((unsigned __int16)(*(unsigned __int8 *)(v57 + 15) << 12) ^ WORD4(v112)) & 0xF000 ^ ((*(unsigned __int8 *)(v57 + 15) << 12) ^ DWORD2(v112) ^ ((unsigned __int16)(*(unsigned __int8 *)(v57 + 15) << 12) ^ WORD4(v112)) & 0xF000) & 0x70000;
        v98 = v101;
      }
      DWORD2(v112) = v67 ^ (v67 ^ (v55 >> 1)) & 0x800;
      *(_QWORD *)&v113 = v98;
      *(_QWORD *)&v114 = *(_QWORD *)(a2 + 24);
      if ( *(_QWORD *)(a2 + 24) != _InterlockedCompareExchange64((volatile signed __int64 *)(v57 + 24), -1LL, -1LL) )
        DWORD2(v112) |= 0x80000u;
      DWORD2(v113) = 0;
      DWORD2(v114) = 0;
      v53 = MiReferenceControlAreaFile((__int64)a1);
      LOWORD(v55) = v55 | 0x20;
      LODWORD(v98) = v101;
    }
    if ( *(_DWORD *)(a2 + 120) || (VadFlags2 & 0x10) != 0 || *(_QWORD *)(a2 + 72) || (*(_DWORD *)(a2 + 64) & 2) != 0 )
      LOWORD(v55) = v55 | 0x20;
  }
  if ( (v55 & 0x20) != 0 )
  {
    MiLockVad((__int64)v102, v40);
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)v102, v12);
    LOWORD(v55) = v55 & 0xFFEF;
    if ( (MiReadVadFlags2(v40) & 0x10) != 0 )
    {
      MiUpdatePrivateDemandZeroView(v12, v40, 1);
      MiRemoveVadEvent(v40, v117);
      LOWORD(v55) = v55 & 0xFFBF;
    }
    v60 = 0LL;
    if ( (v55 & 0x400) == 0 )
    {
      v61 = *(unsigned int *)(a2 + 120);
      if ( (_DWORD)v61 )
      {
        LargePageVad = MiCommitVadMetadataBits(v40, 0LL, v61);
        if ( LargePageVad < 0 )
          goto LABEL_169;
      }
    }
    if ( !*(_QWORD *)(a2 + 72) )
    {
      v60 = v111;
      goto LABEL_97;
    }
    v88 = *(_DWORD *)(a2 + 68);
    if ( v88 == 4 || (unsigned int)(v88 - 1) <= 1 || v88 == -2147483647 )
    {
      LargePageVad = MiSecureVad(v40, v98, *(_QWORD *)(a2 + 24), v88, 0, (__int64)&v111);
      if ( LargePageVad >= 0 )
      {
        **(_QWORD **)(a2 + 72) = qword_140E2D840 ^ v111 ^ v12;
LABEL_97:
        if ( (v55 & 0x800) == 0 || (v60 = MiAddSecureEntry(v40, v107 << 12, (v106 << 12) | 0xFFF, -2147483647, 0)) != 0 )
        {
          if ( (*(_DWORD *)(a2 + 64) & 2) != 0 )
            MiSoftFaultMappedView(v40);
          v62 = v40;
          v58 = (__int64)v102;
          MiUnlockVad((__int64)v102, v62);
          if ( (v55 & 0x800) != 0 )
          {
            PsCallImageNotifyRoutines((PUNICODE_STRING)(v53 + 88));
            ObfDereferenceObjectWithTag((PVOID)v53, 0x63536D4Du);
          }
          if ( v60 )
            MmUnsecureVirtualMemory((HANDLE)(qword_140E2D840 ^ v60 ^ v12));
          goto LABEL_72;
        }
        LargePageVad = -1073741670;
      }
    }
    else
    {
      LargePageVad = -1073741755;
    }
LABEL_169:
    MiReferenceVad(v40);
    if ( v53 )
      ObfDereferenceObjectWithTag((PVOID)v53, 0x63536D4Du);
    MiUnmapVad(v40, 0LL, 0);
    v81 = *(_QWORD **)(a2 + 72);
    if ( v81 )
      *v81 = 0LL;
    return (unsigned int)LargePageVad;
  }
  v58 = (__int64)v102;
LABEL_72:
  if ( (v55 & 0x10) != 0 )
    UNLOCK_ADDRESS_SPACE_UNORDERED(v58, v12);
  if ( (v55 & 0x400) == 0 && a5 && (*(_BYTE *)(v12 + 368) & 1) == 0 )
    *(_DWORD *)(a2 + 60) |= 4u;
  return v99;
}
