/*
 * XREFs of KiSetFeatureBits @ 0x140B49BD0
 * Callers:
 *     KiInitializeBootStructures @ 0x140B48120 (KiInitializeBootStructures.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1404A3870 (HviIsAnyHypervisorPresent.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     HalIsHyperThreadingEnabled @ 0x14053F870 (HalIsHyperThreadingEnabled.c)
 *     HvlSetApicVirtualizationAvailable @ 0x14057F95C (HvlSetApicVirtualizationAvailable.c)
 *     HvlSetHardwareMbecAvailable @ 0x14057F96C (HvlSetHardwareMbecAvailable.c)
 *     KiGetProcessorSignature @ 0x1405BF228 (KiGetProcessorSignature.c)
 *     KiSetProcessorSignature @ 0x1405BF240 (KiSetProcessorSignature.c)
 *     KiDetectKvaLeakage @ 0x1405BF650 (KiDetectKvaLeakage.c)
 *     KiComputeTopologyConstants @ 0x1405C45E8 (KiComputeTopologyConstants.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     KiInitializeHresetSupport @ 0x140B48618 (KiInitializeHresetSupport.c)
 *     KdInitSystem @ 0x140B65E30 (KdInitSystem.c)
 */

__int128 *__fastcall KiSetFeatureBits(__int64 a1)
{
  char v2; // bl
  unsigned int v3; // ecx
  char v4; // dl
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  bool v18; // zf
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  int ProcessorSignature; // eax
  char v29; // r8
  ULONG_PTR v40; // r13
  unsigned int v41; // esi
  unsigned int v52; // r15d
  ULONG_PTR v53; // r12
  char v54; // dl
  char v55; // al
  unsigned __int8 v56; // cl
  char v57; // al
  unsigned __int64 v58; // rcx
  __int64 v59; // rdx
  int v60; // eax
  __int64 v61; // rsi
  char v62; // cl
  char v63; // r11
  int v64; // edx
  int v65; // ecx
  unsigned int v66; // eax
  char v67; // r15
  int v68; // ebx
  char IsHyperThreadingEnabled; // al
  unsigned __int64 v75; // rcx
  __int64 v76; // rbx
  __int64 v77; // rcx
  __int64 v78; // rbx
  unsigned __int64 v79; // rcx
  unsigned __int64 v80; // rax
  char v81; // r10
  __int64 v92; // r8
  __int64 v93; // rsi
  __int64 v99; // rbx
  unsigned __int64 v100; // rax
  __int64 v101; // r8
  unsigned __int64 v102; // rax
  unsigned __int64 v113; // rax
  unsigned __int64 v119; // rax
  char v125; // al
  __int128 *result; // rax
  __int64 v127; // rdx
  bool v128; // [rsp+30h] [rbp-B8h]
  __int16 v129; // [rsp+38h] [rbp-B0h]
  unsigned int v130; // [rsp+40h] [rbp-A8h]
  unsigned int v131; // [rsp+44h] [rbp-A4h]
  __int128 v132; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v133; // [rsp+58h] [rbp-90h]
  int v134; // [rsp+60h] [rbp-88h]
  __int64 v135; // [rsp+68h] [rbp-80h]
  __int128 v136; // [rsp+70h] [rbp-78h] BYREF
  __int128 v137; // [rsp+80h] [rbp-68h] BYREF
  __int128 v138; // [rsp+90h] [rbp-58h]
  __int128 v139; // [rsp+A0h] [rbp-48h]
  __int128 v140; // [rsp+B0h] [rbp-38h]

  v135 = a1;
  v138 = 0LL;
  v139 = 0LL;
  v140 = 0LL;
  v132 = 0LL;
  v133 = 0LL;
  v134 = 0;
  v2 = *(_BYTE *)(a1 + 64);
  v3 = *(unsigned __int8 *)(a1 + 67);
  v4 = *(_BYTE *)(a1 + 141);
  v128 = (unsigned __int8)(v4 - 1) <= 1u;
  if ( *(_DWORD *)(a1 + 36) )
  {
    ProcessorSignature = KiGetProcessorSignature();
    KiSetProcessorSignature(a1, ProcessorSignature);
    goto LABEL_40;
  }
  if ( v4 == 2 )
  {
    if ( v2 != 6 )
      goto LABEL_40;
    KiLastExceptionFromBaseMSR = 477;
    KiLastExceptionToBaseMSR = 478;
    if ( v3 <= 0x2D )
    {
      if ( v3 == 45 )
        goto LABEL_14;
      if ( v3 > 0x1F )
      {
        v10 = v3 - 37;
        if ( !v10 )
          goto LABEL_14;
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            v13 = v12 - 3;
            if ( v13 && v13 != 2 )
            {
LABEL_15:
              if ( KiLastBranchFromBaseMSR )
                KiLastBranchTOSMSR = 457;
              goto LABEL_40;
            }
            goto LABEL_14;
          }
        }
      }
      else
      {
        if ( v3 == 31 )
          goto LABEL_14;
        v5 = v3 - 15;
        if ( v5 )
        {
          v6 = v5 - 8;
          if ( v6 )
          {
            v7 = v6 - 3;
            if ( v7 )
            {
              v8 = v7 - 2;
              if ( v8 )
              {
                v9 = v8 - 1;
                if ( v9 )
                {
                  if ( v9 != 1 )
                    goto LABEL_15;
                  goto LABEL_14;
                }
              }
              goto LABEL_36;
            }
LABEL_14:
            KiLastBranchFromBaseMSR = 1664;
            KiLastBranchToBaseMSR = 1728;
            goto LABEL_15;
          }
        }
      }
LABEL_36:
      KiLastBranchFromBaseMSR = 64;
      KiLastBranchToBaseMSR = 96;
      goto LABEL_15;
    }
    if ( v3 > 0x3A )
    {
      v19 = v3 - 60;
      if ( !v19 )
        goto LABEL_14;
      v20 = v19 - 3;
      if ( !v20 )
        goto LABEL_14;
      v21 = v20 - 6;
      if ( !v21 )
        goto LABEL_14;
      v22 = v21 - 1;
      if ( !v22 )
        goto LABEL_14;
      v18 = v22 == 7;
    }
    else
    {
      if ( v3 == 58 )
        goto LABEL_14;
      v14 = v3 - 46;
      if ( !v14 )
        goto LABEL_14;
      v15 = v14 - 1;
      if ( !v15 )
        goto LABEL_14;
      v16 = v15 - 6;
      if ( !v16 )
        goto LABEL_36;
      v17 = v16 - 1;
      if ( !v17 )
        goto LABEL_36;
      v18 = v17 == 1;
    }
    if ( !v18 )
      goto LABEL_15;
    goto LABEL_36;
  }
  if ( v4 == 1 )
  {
    KiLastBranchFromBaseMSR = 475;
    KiLastBranchToBaseMSR = 476;
    KiLastExceptionFromBaseMSR = 477;
    KiLastExceptionToBaseMSR = 478;
  }
LABEL_40:
  _RAX = 0LL;
  __asm { cpuid }
  v131 = _RAX;
  *(_QWORD *)&v138 = __PAIR64__(_RBX, _RAX);
  *((_QWORD *)&v138 + 1) = __PAIR64__(_RDX, _RCX);
  v29 = *(_BYTE *)(a1 + 141);
  if ( v29 == 2 )
  {
    __writemsr(0x8Bu, 0LL);
    _RAX = 1LL;
    __asm { cpuid }
    *(_QWORD *)&v138 = __PAIR64__(_RBX, _RAX);
    *((_QWORD *)&v138 + 1) = __PAIR64__(_RDX, _RCX);
  }
  else if ( v29 != 1 )
  {
    goto LABEL_44;
  }
  *(_QWORD *)(a1 + 36776) = __readmsr(0x8Bu);
LABEL_44:
  _RAX = 1LL;
  __asm { cpuid }
  v40 = (unsigned int)_RDX;
  v129 = _RCX;
  v41 = _RBX;
  *(_QWORD *)&v140 = __PAIR64__(_RBX, _RAX);
  *((_QWORD *)&v140 + 1) = __PAIR64__(_RDX, _RCX);
  _RAX = 0x80000000LL;
  __asm { cpuid }
  v130 = _RAX;
  _RAX = 2147483649LL;
  __asm { cpuid }
  v52 = _RDX;
  v53 = (unsigned int)_RCX;
  *(_QWORD *)&v139 = __PAIR64__(_RBX, _RAX);
  *((_QWORD *)&v139 + 1) = __PAIR64__(_RDX, _RCX);
  if ( !*(_DWORD *)(a1 + 36) )
  {
    if ( v29 == 1 )
    {
      v54 = *(_BYTE *)(a1 + 64);
      v55 = *(_BYTE *)(a1 + 67);
      v56 = *(_BYTE *)(a1 + 66);
      if ( v54 == 15 && (v55 == 107 || v55 == 104) && v56 == 1 )
      {
        KiCacheErrataMonitor |= 1uLL;
      }
      else if ( v54 == 16 && (!v55 && v56 <= 2u || v55 == 2 && (v56 <= 2u || v56 == 10) || v55 == 4 && !v56) )
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
    HIDWORD(v139) = v52;
  }
  *(_DWORD *)(a1 + 212) = HIBYTE(v41);
  *(_DWORD *)(a1 + 232) = (v41 >> 5) & 0x7F8;
  if ( (v40 & 0x789F3FD) != 0x789F3FD
    || (v52 & 0x800) == 0
    || (v52 & 0x100000) == 0
    || (v129 & 0x2000) == 0
    || (v53 & 1) == 0
    || (_DWORD)KiOpPrefetchPatchSkip )
  {
    if ( !*(_DWORD *)(a1 + 36) )
    {
      v127 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
      KdInitSystem(0LL, v127);
    }
    KeBugCheckEx(0x5Du, v40, v52, v53, (unsigned int)KiOpPrefetchPatchSkip);
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
  v136 = v140;
  v137 = v139;
  KiComputeTopologyConstants(*(unsigned __int8 *)(a1 + 141), v131, v130, &v137, &v136, (__int64)&v132);
  v62 = v132;
  if ( (v132 & 0x10) != 0 )
    *(_DWORD *)(a1 + 212) = v134;
  v63 = 1;
  if ( (v62 & 1) != 0 )
    *(_DWORD *)(a1 + 164) = DWORD2(v132);
  if ( (v62 & 8) != 0 )
    *(_DWORD *)(a1 + 40652) = HIDWORD(v133);
  if ( (v62 & 2) != 0 )
    *(_DWORD *)(a1 + 160) = HIDWORD(v132);
  if ( (v62 & 4) != 0 )
    *(_DWORD *)(a1 + 40648) = v133;
  *(_BYTE *)(a1 + 143) = *(_BYTE *)(a1 + 164);
  *(_BYTE *)(a1 + 142) = *(_BYTE *)(a1 + 160);
  v64 = (2 * (BYTE4(v132) & 1) + 1) | 4;
  if ( (BYTE4(v132) & 8) == 0 )
    v64 = 2 * (BYTE4(v132) & 1) + 1;
  v65 = v64 | 8;
  if ( (BYTE4(v132) & 4) == 0 )
    v65 = v64;
  v66 = v65 | 0x10;
  if ( (BYTE4(v132) & 2) == 0 )
    v66 = v65;
  _InterlockedOr(&KiExplicitTopologyLevels, v66);
  v67 = *(_BYTE *)(a1 + 141);
  if ( v67 == 1 )
  {
    v61 |= 0x200000uLL;
  }
  else if ( v67 == 2 )
  {
    v61 |= 0x1000000uLL;
  }
  v68 = *(_DWORD *)(a1 + 164);
  if ( *(_DWORD *)(a1 + 36) )
  {
    IsHyperThreadingEnabled = HalIsHyperThreadingEnabled();
    v63 = 1;
    if ( !IsHyperThreadingEnabled )
      v68 *= *(_DWORD *)(a1 + 160);
  }
  *(_DWORD *)(a1 + 220) = -v68;
  if ( (unsigned __int8)(v67 - 1) > 2u || v130 < 0x80000008 )
  {
    if ( v67 == 1 )
      LOBYTE(KiMtrrMaxRangeShift) = 40;
  }
  else
  {
    _RAX = 2147483656LL;
    __asm { cpuid }
    LOBYTE(KiMtrrMaxRangeShift) = _RAX;
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
  if ( v81 == 2 && v131 >= 7 )
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
  if ( !v128 )
    v92 = v61;
  v93 = v92;
  if ( v81 != 2 )
  {
    if ( v81 == 1 )
    {
      _RAX = 0x80000000LL;
      __asm { cpuid }
      if ( (unsigned int)_RAX >= 0x8000000A )
      {
        _RAX = 2147483658LL;
        __asm { cpuid }
        if ( (_RDX & 1) != 0 )
          v93 = v92 | 0x4000000;
        if ( (_RDX & 0x20000) != 0 )
          HvlSetHardwareMbecAvailable();
        if ( (_RDX & 0x2000) != 0 )
          HvlSetApicVirtualizationAvailable();
      }
      v113 = __readmsr(0xC0010114);
      if ( (v113 & 0x10) == 0 )
      {
        v93 |= 0x8000000uLL;
        KiVirtFlags |= v63;
      }
    }
    goto LABEL_164;
  }
  _RAX = 1LL;
  __asm { cpuid }
  if ( (_RCX & 0x20) == 0 )
  {
LABEL_164:
    v101 = 0x10000000000LL;
    goto LABEL_165;
  }
  v99 = v92;
  if ( (__readmsr(0x482u) & 0x8000000000000000uLL) == 0LL )
  {
    v101 = 0x10000000000LL;
  }
  else
  {
    v100 = __readmsr(0x48Bu);
    if ( (v100 & 0x200000000LL) != 0 )
      v99 = v92 | 0x4000000;
    if ( (v99 & 1) != 0 && (v100 & 0x40000000000000LL) != 0 )
      HvlSetHardwareMbecAvailable();
    v101 = 0x10000000000LL;
    if ( (v100 & 0x10000000000LL) != 0 )
      HvlSetApicVirtualizationAvailable();
  }
  v102 = __readmsr(0x3Au);
  v93 = v99 | 0x8000000;
  if ( (v102 & 5) != 5 )
    v93 = v99;
  if ( (v102 & 4) != 0 )
    KiVirtFlags |= v63;
  if ( ((unsigned __int8)v102 & (unsigned __int8)v63) != 0 )
    KiVirtFlags |= 2u;
LABEL_165:
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
        if ( ((unsigned __int8)_RAX & (unsigned __int8)v63) != 0 )
        {
          v93 |= v101;
          *(_DWORD *)(MmWriteableSharedUserData + 876) |= 2u;
          if ( (_RAX & 2) != 0 )
          {
            v93 |= 0x80000000000uLL;
            *(_DWORD *)(MmWriteableSharedUserData + 876) |= 4u;
          }
        }
      }
    }
  }
  if ( *(_BYTE *)(a1 + 141) == v63 )
  {
    v125 = *(_BYTE *)(a1 + 64);
    if ( v125 > 15 && v125 != 17 && !HviIsAnyHypervisorPresent() )
      __writemsr(0xC0011029, __readmsr(0xC0011029) | 2);
  }
  KiInitializeHresetSupport(a1);
  *(_QWORD *)(a1 + 36768) = v93;
  KeProcessorFeaturesBuffer = 0LL;
  KeProcessorFeaturesBitMap = 128LL;
  result = &KeProcessorFeaturesBuffer;
  qword_140FC6560 = (__int64)&KeProcessorFeaturesBuffer;
  return result;
}
