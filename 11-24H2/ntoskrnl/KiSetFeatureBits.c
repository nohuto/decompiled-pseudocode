/*
 * XREFs of KiSetFeatureBits @ 0x140B59BF4
 * Callers:
 *     KiInitializeBootStructures @ 0x140B580C0 (KiInitializeBootStructures.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     HalIsHyperThreadingEnabled @ 0x1405420A0 (HalIsHyperThreadingEnabled.c)
 *     HvlSetApicVirtualizationAvailable @ 0x14058310C (HvlSetApicVirtualizationAvailable.c)
 *     HvlSetHardwareMbecAvailable @ 0x14058311C (HvlSetHardwareMbecAvailable.c)
 *     Feature_PpmParkEx__private_IsEnabledNoReportingNoInline @ 0x1405B5004 (Feature_PpmParkEx__private_IsEnabledNoReportingNoInline.c)
 *     Feature_1930645816__private_IsEnabledDeviceUsageNoInline @ 0x1405C02E0 (Feature_1930645816__private_IsEnabledDeviceUsageNoInline.c)
 *     KiApplyProcessorErrata @ 0x1405C0334 (KiApplyProcessorErrata.c)
 *     KiGetProcessorSignature @ 0x1405C3308 (KiGetProcessorSignature.c)
 *     KiSetProcessorSignature @ 0x1405C3320 (KiSetProcessorSignature.c)
 *     KiDetectKvaLeakage @ 0x1405C3730 (KiDetectKvaLeakage.c)
 *     KiComputeTopologyConstants @ 0x1405C8808 (KiComputeTopologyConstants.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     KiInitializeHresetSupport @ 0x140B585A8 (KiInitializeHresetSupport.c)
 *     KdInitSystem @ 0x140B75E30 (KdInitSystem.c)
 */

__int128 *__fastcall KiSetFeatureBits(__int64 a1)
{
  char v1; // al
  char v2; // si
  unsigned int v4; // ebx
  char v5; // al
  unsigned int v6; // ebx
  unsigned int v7; // ebx
  unsigned int v8; // ebx
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  bool v11; // zf
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  unsigned int v17; // ebx
  unsigned int v18; // ebx
  unsigned int v19; // ebx
  unsigned int v20; // ebx
  unsigned int v21; // ebx
  unsigned int v22; // ebx
  int ProcessorSignature; // eax
  char v24; // r8
  __int16 v40; // r13
  unsigned int v41; // esi
  ULONG_PTR v42; // r12
  unsigned int v53; // r14d
  ULONG_PTR v54; // r15
  char v55; // dl
  unsigned __int8 v56; // al
  unsigned __int8 v57; // cl
  char v58; // al
  unsigned __int64 v59; // rcx
  __int64 v60; // rdx
  int v61; // eax
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rsi
  __int64 v65; // rdx
  __int64 v66; // rcx
  unsigned __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  char v73; // bl
  __int64 v74; // r8
  __int64 v75; // r9
  char v76; // r14
  unsigned int v77; // ecx
  __int64 v78; // rdx
  __int64 v79; // rcx
  unsigned int v80; // ebx
  char v81; // r14
  int v82; // ebx
  unsigned __int64 v88; // rcx
  __int64 v89; // rbx
  __int64 v90; // rcx
  __int64 v91; // rbx
  unsigned __int64 v92; // rax
  unsigned __int64 v93; // rax
  char v94; // r9
  __int64 v105; // r8
  __int64 v106; // r10
  __int64 v107; // rsi
  __int64 v113; // rbx
  unsigned __int64 v114; // rax
  unsigned __int64 v115; // rax
  unsigned __int64 v126; // rax
  unsigned __int64 v132; // rax
  __int128 *result; // rax
  unsigned int v139; // [rsp+38h] [rbp-59h]
  unsigned int v140; // [rsp+3Ch] [rbp-55h]
  bool v141; // [rsp+40h] [rbp-51h]
  __int128 v142; // [rsp+48h] [rbp-49h] BYREF
  __int128 v143; // [rsp+58h] [rbp-39h]
  __int128 v144; // [rsp+68h] [rbp-29h] BYREF
  __int128 v145; // [rsp+78h] [rbp-19h] BYREF
  __int128 v146; // [rsp+88h] [rbp-9h]
  __int128 v147; // [rsp+98h] [rbp+7h]
  __int128 v148; // [rsp+A8h] [rbp+17h]

  v1 = *(_BYTE *)(a1 + 141);
  v2 = *(_BYTE *)(a1 + 64);
  v4 = *(unsigned __int8 *)(a1 + 67);
  v146 = 0LL;
  v141 = (unsigned __int8)(v1 - 1) <= 1u;
  v147 = 0LL;
  v148 = 0LL;
  v142 = 0LL;
  v143 = 0LL;
  if ( *(_DWORD *)(a1 + 36) )
  {
    ProcessorSignature = KiGetProcessorSignature();
    KiSetProcessorSignature(a1, ProcessorSignature);
  }
  else
  {
    v11 = (unsigned int)Feature_1930645816__private_IsEnabledDeviceUsageNoInline() == 0;
    v5 = *(_BYTE *)(a1 + 141);
    Feature_MSRC101641_Enabled = !v11;
    if ( v5 == 2 )
    {
      if ( v2 != 6 )
        goto LABEL_39;
      KiLastExceptionFromBaseMSR = 477;
      KiLastExceptionToBaseMSR = 478;
      if ( v4 <= 0x2D )
      {
        if ( v4 != 45 )
        {
          if ( v4 > 0x1F )
          {
            v12 = v4 - 37;
            if ( v12 )
            {
              v13 = v12 - 1;
              if ( !v13 )
                goto LABEL_35;
              v14 = v13 - 1;
              if ( !v14 )
                goto LABEL_35;
              v15 = v14 - 3;
              if ( v15 )
              {
                v11 = v15 == 2;
LABEL_19:
                if ( !v11 )
                  goto LABEL_21;
              }
            }
          }
          else if ( v4 != 31 )
          {
            v6 = v4 - 15;
            if ( !v6 )
              goto LABEL_35;
            v7 = v6 - 8;
            if ( !v7 )
              goto LABEL_35;
            v8 = v7 - 3;
            if ( v8 )
            {
              v9 = v8 - 2;
              if ( v9 )
              {
                v10 = v9 - 1;
                if ( v10 )
                {
                  v11 = v10 == 1;
                  goto LABEL_19;
                }
              }
LABEL_35:
              KiLastBranchFromBaseMSR = 64;
              KiLastBranchToBaseMSR = 96;
LABEL_22:
              KiLastBranchTOSMSR = 457;
              goto LABEL_39;
            }
          }
        }
LABEL_20:
        KiLastBranchFromBaseMSR = 1664;
        KiLastBranchToBaseMSR = 1728;
        goto LABEL_21;
      }
      if ( v4 > 0x3A )
      {
        v19 = v4 - 60;
        if ( !v19 )
          goto LABEL_20;
        v20 = v19 - 3;
        if ( !v20 )
          goto LABEL_20;
        v21 = v20 - 6;
        if ( !v21 )
          goto LABEL_20;
        v22 = v21 - 1;
        if ( !v22 )
          goto LABEL_20;
        if ( v22 == 7 )
          goto LABEL_35;
      }
      else
      {
        if ( v4 == 58 )
          goto LABEL_20;
        v16 = v4 - 46;
        if ( !v16 )
          goto LABEL_20;
        v17 = v16 - 1;
        if ( !v17 )
          goto LABEL_20;
        v18 = v17 - 6;
        if ( !v18 || v18 - 1 < 2 )
          goto LABEL_35;
      }
LABEL_21:
      if ( !KiLastBranchFromBaseMSR )
        goto LABEL_39;
      goto LABEL_22;
    }
    if ( v5 == 1 )
    {
      KiLastBranchFromBaseMSR = 475;
      KiLastBranchToBaseMSR = 476;
      KiLastExceptionFromBaseMSR = 477;
      KiLastExceptionToBaseMSR = 478;
    }
  }
LABEL_39:
  v24 = *(_BYTE *)(a1 + 141);
  _RAX = 0LL;
  __asm { cpuid }
  v140 = _RAX;
  *(_QWORD *)&v146 = __PAIR64__(_RBX, _RAX);
  *((_QWORD *)&v146 + 1) = __PAIR64__(_RDX, _RCX);
  if ( v24 == 2 )
  {
    __writemsr(0x8Bu, 0LL);
    _RAX = 1LL;
    __asm { cpuid }
    *(_QWORD *)&v146 = __PAIR64__(_RBX, _RAX);
    *((_QWORD *)&v146 + 1) = __PAIR64__(_RDX, _RCX);
  }
  else if ( v24 != 1 )
  {
    goto LABEL_43;
  }
  *(_QWORD *)(a1 + 36776) = __readmsr(0x8Bu);
LABEL_43:
  _RAX = 1LL;
  __asm { cpuid }
  v40 = _RCX;
  LODWORD(v148) = _RAX;
  v41 = _RBX;
  v42 = (unsigned int)_RDX;
  *(_QWORD *)((char *)&v148 + 4) = __PAIR64__(_RCX, _RBX);
  _RAX = 0x80000000LL;
  __asm { cpuid }
  v139 = _RAX;
  _RAX = 2147483649LL;
  HIDWORD(v148) = v42;
  __asm { cpuid }
  v53 = _RDX;
  v54 = (unsigned int)_RCX;
  *(_QWORD *)&v147 = __PAIR64__(_RBX, _RAX);
  *((_QWORD *)&v147 + 1) = __PAIR64__(_RDX, _RCX);
  if ( !*(_DWORD *)(a1 + 36) )
  {
    if ( v24 == 1 )
    {
      v55 = *(_BYTE *)(a1 + 64);
      v56 = *(_BYTE *)(a1 + 67);
      v57 = *(_BYTE *)(a1 + 66);
      if ( v55 == 15 )
      {
        if ( (v56 == 107 || v56 == 104) && v57 == 1 )
          KiCacheErrataMonitor |= 1uLL;
      }
      else if ( v55 == 16 && (__PAIR16__(v56, v57) <= 2u || v56 == 2 && (v57 <= 2u || v57 == 10) || v56 == 4 && !v57) )
      {
        KiCacheErrataMonitor |= 2uLL;
      }
    }
    if ( !*(_DWORD *)(a1 + 36) )
    {
      v58 = *(_BYTE *)(a1 + 141);
      if ( v58 == 1 )
      {
        if ( *(_BYTE *)(a1 + 64) == 23 )
          KiAccessBitErrata = 1;
      }
      else if ( v58 == 2 && *(_BYTE *)(a1 + 64) == 6 )
      {
        if ( (v59 = *(unsigned __int8 *)(a1 + 67), (unsigned __int8)v59 <= 0x36u)
          && (v60 = 0x6000C010000000LL, _bittest64(&v60, v59))
          || (LOBYTE(v59) = v59 - 55, (unsigned __int8)v59 <= 0x16u)
          && (v61 = 4718593, _bittest(&v61, v59))
          && *(_BYTE *)(a1 + 66) <= 7u )
        {
          KiAccessBitErrata = 2;
        }
      }
    }
  }
  KiDetectKvaLeakage(a1);
  _m_prefetchw((const void *)a1);
  if ( *(_BYTE *)(a1 + 141) == 1 )
  {
    v53 |= 0x100000u;
    HIDWORD(v147) = v53;
  }
  *(_DWORD *)(a1 + 212) = HIBYTE(v41);
  *(_DWORD *)(a1 + 232) = (v41 >> 5) & 0x7F8;
  if ( (v42 & 0x789F3FD) != 0x789F3FD
    || (v53 & 0x800) == 0
    || (v53 & 0x100000) == 0
    || (v40 & 0x2000) == 0
    || (v54 & 1) == 0
    || (_DWORD)KiOpPrefetchPatchSkip )
  {
    if ( !*(_DWORD *)(a1 + 36) )
      KdInitSystem(0LL, KeLoaderBlock_0);
    KeBugCheckEx(0x5Du, v42, v53, v54, (unsigned int)KiOpPrefetchPatchSkip);
  }
  v64 = *(_QWORD *)(a1 + 36768) | 0x20113DFELL;
  if ( (*(_QWORD *)(a1 + 36768) & 0x400000000LL) != 0 )
    __writemsr(0xC0000103, *(unsigned __int8 *)(a1 + 209) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 208) << 8));
  v65 = 0LL;
  __writemsr(0x174u, 0LL);
  __writemsr(0x176u, 0LL);
  v66 = 373LL;
  __writemsr(0x175u, 0LL);
  if ( (v53 & 0x2000000) != 0 )
  {
    v66 = 3221225600LL;
    v67 = __readmsr(0xC0000080) | 0x4000;
    v65 = HIDWORD(v67);
    __writemsr(0xC0000080, v67);
  }
  *(_DWORD *)(a1 + 160) = 1;
  *(_DWORD *)(a1 + 164) = 1;
  *(_DWORD *)(a1 + 40648) = 1;
  *(_DWORD *)(a1 + 40652) = 1;
  if ( (unsigned int)Feature_PpmParkEx__private_IsEnabledNoReportingNoInline(v66, v65, v62, v63) )
    *(_DWORD *)(a1 + 47944) = 1;
  v68 = *(unsigned __int8 *)(a1 + 141);
  v144 = v148;
  v145 = v147;
  KiComputeTopologyConstants(v68, v140, v139, &v145, &v144, (int *)&v142);
  v73 = v142;
  if ( (v142 & 0x10) != 0 )
    *(_DWORD *)(a1 + 212) = DWORD2(v143);
  if ( (v73 & 1) != 0 )
    *(_DWORD *)(a1 + 164) = DWORD2(v142);
  if ( (v73 & 8) != 0 )
    *(_DWORD *)(a1 + 40652) = DWORD1(v143);
  if ( (v73 & 2) != 0 )
    *(_DWORD *)(a1 + 160) = HIDWORD(v142);
  if ( (v73 & 4) != 0 )
    *(_DWORD *)(a1 + 40648) = v143;
  if ( (unsigned int)Feature_PpmParkEx__private_IsEnabledNoReportingNoInline(v70, v69, v71, v72) && (v73 & 0x20) != 0 )
    *(_DWORD *)(a1 + 47944) = HIDWORD(v143);
  v76 = BYTE4(v142);
  *(_BYTE *)(a1 + 143) = *(_BYTE *)(a1 + 164);
  *(_BYTE *)(a1 + 142) = *(_BYTE *)(a1 + 160);
  v77 = 2 * (v76 & 1) + 1;
  v78 = v77 | 4;
  if ( (v76 & 8) == 0 )
    v78 = v77;
  v79 = (unsigned int)v78 | 8;
  if ( (v76 & 4) == 0 )
    v79 = (unsigned int)v78;
  v80 = v79 | 0x10;
  if ( (v76 & 2) == 0 )
    v80 = v79;
  if ( (unsigned int)Feature_PpmParkEx__private_IsEnabledNoReportingNoInline(v79, v78, v74, v75) && (v76 & 0x20) != 0 )
    v80 |= 0x20u;
  _InterlockedOr(&KiExplicitTopologyLevels, v80);
  v81 = *(_BYTE *)(a1 + 141);
  if ( v81 == 1 )
  {
    v64 |= 0x200000uLL;
  }
  else if ( v81 == 2 )
  {
    v64 |= 0x1000000uLL;
  }
  v82 = *(_DWORD *)(a1 + 164);
  if ( *(_DWORD *)(a1 + 36) && !HalIsHyperThreadingEnabled() )
    v82 *= *(_DWORD *)(a1 + 160);
  *(_DWORD *)(a1 + 220) = -v82;
  if ( (unsigned __int8)(v81 - 1) <= 2u )
  {
    if ( v139 < 0x80000008 )
    {
      if ( v81 == 1 )
        LOBYTE(KiMtrrMaxRangeShift) = 40;
    }
    else
    {
      _RAX = 2147483656LL;
      __asm { cpuid }
      LOBYTE(KiMtrrMaxRangeShift) = _RAX;
    }
  }
  KiMtrrMaskBase = ((1LL << KiMtrrMaxRangeShift) - 1) & 0xFFFFFFFFFFFFF000uLL;
  KiMtrrMaskMask = ((1LL << KiMtrrMaxRangeShift) - 1) & 0xFFFFFFFFFFFFF000uLL;
  v88 = __readcr4();
  if ( (v64 & 1) != 0 )
    v88 |= 0x100000uLL;
  v89 = v88 | 0x10000;
  if ( (v64 & 0x10000000) == 0 )
    v89 = v88;
  if ( KeSmapEnabled )
    v89 |= 0x200000uLL;
  v90 = v89 | 0x800;
  if ( (KeFeatureBits2 & 4) == 0 )
    v90 = v89;
  v91 = v90 | 0x8000000;
  if ( (KeFeatureBits2 & 0x4000) == 0 )
    v91 = v90;
  v92 = v91;
  if ( *(_DWORD *)(a1 + 36) && (v64 & 0x40000000000LL) != 0 && KiFlushPcid )
    v92 = v91 | 0x20000;
  __writecr4(v92);
  if ( KeSmapEnabled )
    __asm { stac }
  if ( (v92 & 0x20000) != 0 )
  {
    v93 = __readcr3();
    __writecr3(v93 | 2);
  }
  v94 = *(_BYTE *)(a1 + 141);
  if ( v94 == 2 && v140 >= 7 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    if ( (_RBX & 0x8000) != 0 )
    {
      _RAX = 16LL;
      __asm { cpuid }
      if ( (_RBX & 2) != 0 )
        v64 |= 0x100000000000uLL;
    }
  }
  v105 = v64 | 0x20000;
  v106 = 0x10000000000LL;
  if ( !v141 )
    v105 = v64;
  v107 = v105;
  if ( v94 == 2 )
  {
    _RAX = 1LL;
    __asm { cpuid }
    if ( (_RCX & 0x20) != 0 )
    {
      v113 = v105;
      if ( (__readmsr(0x482u) & 0x8000000000000000uLL) != 0LL )
      {
        v114 = __readmsr(0x48Bu);
        if ( (v114 & 0x200000000LL) != 0 )
          v113 = v105 | 0x4000000;
        if ( (v113 & 1) != 0 && (v114 & 0x40000000000000LL) != 0 )
          HvlSetHardwareMbecAvailable();
        if ( (v114 & v106) != 0 )
          HvlSetApicVirtualizationAvailable();
      }
      v115 = __readmsr(0x3Au);
      v107 = v113 | 0x8000000;
      if ( (v115 & 5) != 5 )
        v107 = v113;
      if ( (v115 & 4) != 0 )
        KiVirtFlags |= 1u;
      if ( (v115 & 1) != 0 )
        KiVirtFlags |= 2u;
    }
  }
  else if ( v94 == 1 )
  {
    _RAX = 0x80000000LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX >= 0x8000000A )
    {
      _RAX = 2147483658LL;
      __asm { cpuid }
      if ( (_RDX & 1) != 0 )
        v107 = v105 | 0x4000000;
      if ( (_RDX & 0x20000) != 0 )
        HvlSetHardwareMbecAvailable();
      if ( (_RDX & 0x2000) != 0 )
        HvlSetApicVirtualizationAvailable();
    }
    v126 = __readmsr(0xC0010114);
    if ( (v126 & 0x10) == 0 )
    {
      v107 |= 0x8000000uLL;
      KiVirtFlags |= 1u;
    }
  }
  if ( *(_BYTE *)(a1 + 141) == 2 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    if ( (_RBX & 4) != 0 )
    {
      v132 = __readmsr(0x3Au);
      if ( (v132 & 0x40001) == 0x40001 )
      {
        _RAX = 18LL;
        __asm { cpuid }
        if ( (_RAX & 1) != 0 )
        {
          v107 |= v106;
          *(_DWORD *)(MmWriteableSharedUserData + 876) |= 2u;
          if ( (_RAX & 2) != 0 )
          {
            v107 |= 0x80000000000uLL;
            *(_DWORD *)(MmWriteableSharedUserData + 876) |= 4u;
          }
        }
      }
    }
  }
  KiApplyProcessorErrata((_BYTE *)a1);
  KiInitializeHresetSupport(a1);
  *(_QWORD *)(a1 + 36768) = v107;
  result = &KeProcessorFeaturesBuffer;
  qword_140FC6538 = (__int64)&KeProcessorFeaturesBuffer;
  KeProcessorFeaturesBuffer = 0LL;
  KeProcessorFeaturesBitMap = 128LL;
  return result;
}
