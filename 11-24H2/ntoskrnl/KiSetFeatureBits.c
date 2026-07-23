/*
 * XREFs of KiSetFeatureBits @ 0x140B5BC74
 * Callers:
 *     KiInitializeBootStructures @ 0x140B5A140 (KiInitializeBootStructures.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HalIsHyperThreadingEnabled @ 0x14053F9F0 (HalIsHyperThreadingEnabled.c)
 *     HvlSetApicVirtualizationAvailable @ 0x14058048C (HvlSetApicVirtualizationAvailable.c)
 *     HvlSetHardwareMbecAvailable @ 0x14058049C (HvlSetHardwareMbecAvailable.c)
 *     Feature_PpmParkEx__private_IsEnabledNoReportingNoInline @ 0x1405B2278 (Feature_PpmParkEx__private_IsEnabledNoReportingNoInline.c)
 *     KiApplyProcessorErrata @ 0x1405BD910 (KiApplyProcessorErrata.c)
 *     KiGetProcessorSignature @ 0x1405C08D8 (KiGetProcessorSignature.c)
 *     KiSetProcessorSignature @ 0x1405C08F0 (KiSetProcessorSignature.c)
 *     KiDetectKvaLeakage @ 0x1405C0D00 (KiDetectKvaLeakage.c)
 *     KiComputeTopologyConstants @ 0x1405C5F38 (KiComputeTopologyConstants.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     KiInitializeHresetSupport @ 0x140B5A628 (KiInitializeHresetSupport.c)
 *     KdInitSystem @ 0x140B77E30 (KdInitSystem.c)
 */

__int128 *__fastcall KiSetFeatureBits(__int64 a1)
{
  char v1; // bl
  unsigned int v3; // ecx
  char v4; // dl
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  bool v10; // zf
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  int ProcessorSignature; // eax
  char v23; // r8
  __int16 v39; // r13
  unsigned int v40; // esi
  ULONG_PTR v41; // r12
  unsigned int v52; // r14d
  ULONG_PTR v53; // r15
  char v54; // dl
  unsigned __int8 v55; // al
  unsigned __int8 v56; // cl
  char v57; // al
  unsigned __int64 v58; // rcx
  __int64 v59; // rdx
  int v60; // eax
  __int64 v61; // rsi
  __int64 v62; // rcx
  char v63; // bl
  char v64; // r14
  int v65; // edx
  int v66; // ecx
  unsigned int v67; // ebx
  char v68; // r14
  int v69; // ebx
  unsigned __int64 v75; // rcx
  __int64 v76; // rbx
  __int64 v77; // rcx
  __int64 v78; // rbx
  unsigned __int64 v79; // rax
  unsigned __int64 v80; // rax
  char v81; // r9
  __int64 v92; // r8
  __int64 v93; // r10
  __int64 v94; // rsi
  __int64 v100; // rbx
  unsigned __int64 v101; // rax
  unsigned __int64 v102; // rax
  unsigned __int64 v113; // rax
  unsigned __int64 v119; // rax
  __int128 *result; // rax
  unsigned int v126; // [rsp+38h] [rbp-59h]
  unsigned int v127; // [rsp+3Ch] [rbp-55h]
  bool v128; // [rsp+40h] [rbp-51h]
  __int128 v129; // [rsp+48h] [rbp-49h] BYREF
  __int128 v130; // [rsp+58h] [rbp-39h]
  __int128 v131; // [rsp+68h] [rbp-29h] BYREF
  __int128 v132; // [rsp+78h] [rbp-19h] BYREF
  __int128 v133; // [rsp+88h] [rbp-9h]
  __int128 v134; // [rsp+98h] [rbp+7h]
  __int128 v135; // [rsp+A8h] [rbp+17h]

  v1 = *(_BYTE *)(a1 + 64);
  v3 = *(unsigned __int8 *)(a1 + 67);
  v4 = *(_BYTE *)(a1 + 141);
  v133 = 0LL;
  v128 = (unsigned __int8)(v4 - 1) <= 1u;
  v134 = 0LL;
  v135 = 0LL;
  v129 = 0LL;
  v130 = 0LL;
  if ( *(_DWORD *)(a1 + 36) )
  {
    ProcessorSignature = KiGetProcessorSignature();
    KiSetProcessorSignature(a1, ProcessorSignature);
  }
  else
  {
    if ( v4 == 2 )
    {
      if ( v1 != 6 )
        goto LABEL_39;
      KiLastExceptionFromBaseMSR = 477;
      KiLastExceptionToBaseMSR = 478;
      if ( v3 <= 0x2D )
      {
        if ( v3 != 45 )
        {
          if ( v3 > 0x1F )
          {
            v11 = v3 - 37;
            if ( v11 )
            {
              v12 = v11 - 1;
              if ( !v12 )
                goto LABEL_35;
              v13 = v12 - 1;
              if ( !v13 )
                goto LABEL_35;
              v14 = v13 - 3;
              if ( v14 )
              {
                v10 = v14 == 2;
LABEL_19:
                if ( !v10 )
                  goto LABEL_21;
              }
            }
          }
          else if ( v3 != 31 )
          {
            v5 = v3 - 15;
            if ( !v5 )
              goto LABEL_35;
            v6 = v5 - 8;
            if ( !v6 )
              goto LABEL_35;
            v7 = v6 - 3;
            if ( v7 )
            {
              v8 = v7 - 2;
              if ( v8 )
              {
                v9 = v8 - 1;
                if ( v9 )
                {
                  v10 = v9 == 1;
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
      if ( v3 > 0x3A )
      {
        v18 = v3 - 60;
        if ( !v18 )
          goto LABEL_20;
        v19 = v18 - 3;
        if ( !v19 )
          goto LABEL_20;
        v20 = v19 - 6;
        if ( !v20 )
          goto LABEL_20;
        v21 = v20 - 1;
        if ( !v21 )
          goto LABEL_20;
        if ( v21 == 7 )
          goto LABEL_35;
      }
      else
      {
        if ( v3 == 58 )
          goto LABEL_20;
        v15 = v3 - 46;
        if ( !v15 )
          goto LABEL_20;
        v16 = v15 - 1;
        if ( !v16 )
          goto LABEL_20;
        v17 = v16 - 6;
        if ( !v17 || v17 - 1 < 2 )
          goto LABEL_35;
      }
LABEL_21:
      if ( !KiLastBranchFromBaseMSR )
        goto LABEL_39;
      goto LABEL_22;
    }
    if ( v4 == 1 )
    {
      KiLastBranchFromBaseMSR = 475;
      KiLastBranchToBaseMSR = 476;
      KiLastExceptionFromBaseMSR = 477;
      KiLastExceptionToBaseMSR = 478;
    }
  }
LABEL_39:
  v23 = *(_BYTE *)(a1 + 141);
  _RAX = 0LL;
  __asm { cpuid }
  v127 = _RAX;
  *(_QWORD *)&v133 = __PAIR64__(_RBX, _RAX);
  *((_QWORD *)&v133 + 1) = __PAIR64__(_RDX, _RCX);
  if ( v23 == 2 )
  {
    __writemsr(0x8Bu, 0LL);
    _RAX = 1LL;
    __asm { cpuid }
    *(_QWORD *)&v133 = __PAIR64__(_RBX, _RAX);
    *((_QWORD *)&v133 + 1) = __PAIR64__(_RDX, _RCX);
  }
  else if ( v23 != 1 )
  {
    goto LABEL_43;
  }
  *(_QWORD *)(a1 + 36776) = __readmsr(0x8Bu);
LABEL_43:
  _RAX = 1LL;
  __asm { cpuid }
  v39 = _RCX;
  LODWORD(v135) = _RAX;
  v40 = _RBX;
  v41 = (unsigned int)_RDX;
  *(_QWORD *)((char *)&v135 + 4) = __PAIR64__(_RCX, _RBX);
  _RAX = 0x80000000LL;
  __asm { cpuid }
  v126 = _RAX;
  _RAX = 2147483649LL;
  HIDWORD(v135) = v41;
  __asm { cpuid }
  v52 = _RDX;
  v53 = (unsigned int)_RCX;
  LODWORD(v134) = _RAX;
  *(_QWORD *)((char *)&v134 + 4) = __PAIR64__(_RCX, _RBX);
  HIDWORD(v134) = _RDX;
  if ( !*(_DWORD *)(a1 + 36) )
  {
    if ( v23 == 1 )
    {
      v54 = *(_BYTE *)(a1 + 64);
      v55 = *(_BYTE *)(a1 + 67);
      v56 = *(_BYTE *)(a1 + 66);
      if ( v54 == 15 )
      {
        if ( (v55 == 107 || v55 == 104) && v56 == 1 )
          KiCacheErrataMonitor |= 1uLL;
      }
      else if ( v54 == 16 && (__PAIR16__(v55, v56) <= 2u || v55 == 2 && (v56 <= 2u || v56 == 10) || v55 == 4 && !v56) )
      {
        KiCacheErrataMonitor |= 2uLL;
      }
    }
    if ( !*(_DWORD *)(a1 + 36) )
    {
      v57 = *(_BYTE *)(a1 + 141);
      if ( v57 == 1 )
      {
        if ( *(_BYTE *)(a1 + 64) == 23 )
          KiAccessBitErrata = 1;
      }
      else if ( v57 == 2 && *(_BYTE *)(a1 + 64) == 6 )
      {
        if ( (v58 = *(unsigned __int8 *)(a1 + 67), (unsigned __int8)v58 <= 0x36u)
          && (v59 = 0x6000C010000000LL, _bittest64(&v59, v58))
          || (LOBYTE(v58) = v58 - 55, (unsigned __int8)v58 <= 0x16u)
          && (v60 = 4718593, _bittest(&v60, v58))
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
    v52 |= 0x100000u;
    HIDWORD(v134) = v52;
  }
  *(_DWORD *)(a1 + 212) = HIBYTE(v40);
  *(_DWORD *)(a1 + 232) = (v40 >> 5) & 0x7F8;
  if ( (v41 & 0x789F3FD) != 0x789F3FD
    || (v52 & 0x800) == 0
    || (v52 & 0x100000) == 0
    || (v39 & 0x2000) == 0
    || (v53 & 1) == 0
    || (_DWORD)KiOpPrefetchPatchSkip )
  {
    if ( !*(_DWORD *)(a1 + 36) )
      KdInitSystem(0LL, KeLoaderBlock_0);
    KeBugCheckEx(0x5Du, v41, v52, v53, (unsigned int)KiOpPrefetchPatchSkip);
  }
  v61 = *(_QWORD *)(a1 + 36768) | 0x20113DFELL;
  if ( (*(_QWORD *)(a1 + 36768) & 0x400000000LL) != 0 )
    __writemsr(0xC0000103, *(unsigned __int8 *)(a1 + 209) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 208) << 8));
  __writemsr(0x174u, 0LL);
  __writemsr(0x176u, 0LL);
  __writemsr(0x175u, 0LL);
  if ( (v52 & 0x2000000) != 0 )
    __writemsr(0xC0000080, __readmsr(0xC0000080) | 0x4000);
  *(_DWORD *)(a1 + 160) = 1;
  *(_DWORD *)(a1 + 164) = 1;
  *(_DWORD *)(a1 + 40648) = 1;
  *(_DWORD *)(a1 + 40652) = 1;
  if ( (unsigned int)Feature_PpmParkEx__private_IsEnabledNoReportingNoInline() )
    *(_DWORD *)(a1 + 47944) = 1;
  v62 = *(unsigned __int8 *)(a1 + 141);
  v131 = v135;
  v132 = v134;
  KiComputeTopologyConstants(v62, v127, v126, &v132, &v131, (int *)&v129);
  v63 = v129;
  if ( (v129 & 0x10) != 0 )
    *(_DWORD *)(a1 + 212) = DWORD2(v130);
  if ( (v63 & 1) != 0 )
    *(_DWORD *)(a1 + 164) = DWORD2(v129);
  if ( (v63 & 8) != 0 )
    *(_DWORD *)(a1 + 40652) = DWORD1(v130);
  if ( (v63 & 2) != 0 )
    *(_DWORD *)(a1 + 160) = HIDWORD(v129);
  if ( (v63 & 4) != 0 )
    *(_DWORD *)(a1 + 40648) = v130;
  if ( (unsigned int)Feature_PpmParkEx__private_IsEnabledNoReportingNoInline() && (v63 & 0x20) != 0 )
    *(_DWORD *)(a1 + 47944) = HIDWORD(v130);
  v64 = BYTE4(v129);
  *(_BYTE *)(a1 + 143) = *(_BYTE *)(a1 + 164);
  *(_BYTE *)(a1 + 142) = *(_BYTE *)(a1 + 160);
  v65 = (2 * (v64 & 1) + 1) | 4;
  if ( (v64 & 8) == 0 )
    v65 = 2 * (v64 & 1) + 1;
  v66 = v65 | 8;
  if ( (v64 & 4) == 0 )
    v66 = v65;
  v67 = v66 | 0x10;
  if ( (v64 & 2) == 0 )
    v67 = v66;
  if ( (unsigned int)Feature_PpmParkEx__private_IsEnabledNoReportingNoInline() && (v64 & 0x20) != 0 )
    v67 |= 0x20u;
  _InterlockedOr(&KiExplicitTopologyLevels, v67);
  v68 = *(_BYTE *)(a1 + 141);
  if ( v68 == 1 )
  {
    v61 |= 0x200000uLL;
  }
  else if ( v68 == 2 )
  {
    v61 |= 0x1000000uLL;
  }
  v69 = *(_DWORD *)(a1 + 164);
  if ( *(_DWORD *)(a1 + 36) && !HalIsHyperThreadingEnabled() )
    v69 *= *(_DWORD *)(a1 + 160);
  *(_DWORD *)(a1 + 220) = -v69;
  if ( (unsigned __int8)(v68 - 1) <= 2u )
  {
    if ( v126 < 0x80000008 )
    {
      if ( v68 == 1 )
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
  v75 = __readcr4();
  if ( (v61 & 1) != 0 )
    v75 |= 0x100000uLL;
  v76 = v75 | 0x10000;
  if ( (v61 & 0x10000000) == 0 )
    v76 = v75;
  if ( KeSmapEnabled )
    v76 |= 0x200000uLL;
  v77 = v76 | 0x800;
  if ( (KeFeatureBits2 & 4) == 0 )
    v77 = v76;
  v78 = v77 | 0x8000000;
  if ( (KeFeatureBits2 & 0x4000) == 0 )
    v78 = v77;
  v79 = v78;
  if ( *(_DWORD *)(a1 + 36) && (v61 & 0x40000000000LL) != 0 && KiFlushPcid )
    v79 = v78 | 0x20000;
  __writecr4(v79);
  if ( KeSmapEnabled )
    __asm { stac }
  if ( (v79 & 0x20000) != 0 )
  {
    v80 = __readcr3();
    __writecr3(v80 | 2);
  }
  v81 = *(_BYTE *)(a1 + 141);
  if ( v81 == 2 && v127 >= 7 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    if ( (_RBX & 0x8000) != 0 )
    {
      _RAX = 16LL;
      __asm { cpuid }
      if ( (_RBX & 2) != 0 )
        v61 |= 0x100000000000uLL;
    }
  }
  v92 = v61 | 0x20000;
  v93 = 0x10000000000LL;
  if ( !v128 )
    v92 = v61;
  v94 = v92;
  if ( v81 == 2 )
  {
    _RAX = 1LL;
    __asm { cpuid }
    if ( (_RCX & 0x20) != 0 )
    {
      v100 = v92;
      if ( (__readmsr(0x482u) & 0x8000000000000000uLL) != 0LL )
      {
        v101 = __readmsr(0x48Bu);
        if ( (v101 & 0x200000000LL) != 0 )
          v100 = v92 | 0x4000000;
        if ( (v100 & 1) != 0 && (v101 & 0x40000000000000LL) != 0 )
          HvlSetHardwareMbecAvailable();
        if ( (v101 & v93) != 0 )
          HvlSetApicVirtualizationAvailable();
      }
      v102 = __readmsr(0x3Au);
      v94 = v100 | 0x8000000;
      if ( (v102 & 5) != 5 )
        v94 = v100;
      if ( (v102 & 4) != 0 )
        KiVirtFlags |= 1u;
      if ( (v102 & 1) != 0 )
        KiVirtFlags |= 2u;
    }
  }
  else if ( v81 == 1 )
  {
    _RAX = 0x80000000LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX >= 0x8000000A )
    {
      _RAX = 2147483658LL;
      __asm { cpuid }
      if ( (_RDX & 1) != 0 )
        v94 = v92 | 0x4000000;
      if ( (_RDX & 0x20000) != 0 )
        HvlSetHardwareMbecAvailable();
      if ( (_RDX & 0x2000) != 0 )
        HvlSetApicVirtualizationAvailable();
    }
    v113 = __readmsr(0xC0010114);
    if ( (v113 & 0x10) == 0 )
    {
      v94 |= 0x8000000uLL;
      KiVirtFlags |= 1u;
    }
  }
  if ( *(_BYTE *)(a1 + 141) == 2 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    if ( (_RBX & 4) != 0 )
    {
      v119 = __readmsr(0x3Au);
      if ( (v119 & 0x40001) == 0x40001 )
      {
        _RAX = 18LL;
        __asm { cpuid }
        if ( (_RAX & 1) != 0 )
        {
          v94 |= v93;
          *(_DWORD *)(MmWriteableSharedUserData + 876) |= 2u;
          if ( (_RAX & 2) != 0 )
          {
            v94 |= 0x80000000000uLL;
            *(_DWORD *)(MmWriteableSharedUserData + 876) |= 4u;
          }
        }
      }
    }
  }
  KiApplyProcessorErrata((_BYTE *)a1);
  KiInitializeHresetSupport(a1);
  *(_QWORD *)(a1 + 36768) = v94;
  result = &KeProcessorFeaturesBuffer;
  qword_140FC75A0 = (__int64)&KeProcessorFeaturesBuffer;
  KeProcessorFeaturesBuffer = 0LL;
  KeProcessorFeaturesBitMap = 128LL;
  return result;
}
