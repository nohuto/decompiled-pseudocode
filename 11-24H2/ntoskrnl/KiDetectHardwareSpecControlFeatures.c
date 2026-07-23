/*
 * XREFs of KiDetectHardwareSpecControlFeatures @ 0x1405BAE44
 * Callers:
 *     KiDetermineRetpolineEnablement @ 0x1405BB3E0 (KiDetermineRetpolineEnablement.c)
 *     KiSetHardwareSpeculationControlFeatures @ 0x1405BC50C (KiSetHardwareSpeculationControlFeatures.c)
 *     KiDetectKvaLeakage @ 0x1405C0D00 (KiDetectKvaLeakage.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x14049E730 (HviIsAnyHypervisorPresent.c)
 *     KiIsBranchConfusionPresent @ 0x1405BB508 (KiIsBranchConfusionPresent.c)
 *     HviGetEnlightenmentInformation @ 0x14066234C (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorFeatures @ 0x1406623A0 (HviGetHypervisorFeatures.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x140662638 (HviIsHypervisorMicrosoftCompatible.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char *__fastcall KiDetectHardwareSpecControlFeatures(__int64 a1, __int64 a2, __int64 a3, char *a4)
{
  int v4; // r14d
  char v5; // al
  char v6; // r12
  char v8; // r15
  char v9; // r13
  bool IsAnyHypervisorPresent; // r9
  __int64 v11; // rdi
  __int64 v21; // r8
  unsigned __int64 v22; // rax
  char v23; // bl
  char v32; // cl
  int v33; // ecx
  char v34; // al
  unsigned __int8 v35; // al
  char v36; // cl
  char v37; // al
  char v38; // al
  __int64 v39; // rbx
  unsigned __int64 v40; // rax
  char v41; // cl
  __int64 v42; // rdi
  char *result; // rax
  char v44; // [rsp+20h] [rbp-60h]
  char v45; // [rsp+21h] [rbp-5Fh]
  __int128 v46; // [rsp+28h] [rbp-58h]
  __int128 v50; // [rsp+58h] [rbp-28h] BYREF
  __int128 v51; // [rsp+68h] [rbp-18h] BYREF

  v5 = *(_BYTE *)(a1 + 141);
  v6 = *(_BYTE *)(a1 + 64);
  LOBYTE(v4) = *(_BYTE *)(a1 + 67);
  v46 = 0LL;
  DWORD2(v46) = 72;
  v8 = 0;
  v9 = 0;
  v50 = 0LL;
  v51 = 0LL;
  v44 = v5;
  v45 = 1;
  if ( (unsigned __int8)HviIsHypervisorMicrosoftCompatible() )
  {
    HviGetEnlightenmentInformation(&v51);
    v50 = 0LL;
    HviGetHypervisorFeatures(&v50);
    if ( (v50 & 0x100000000000LL) == 0 || (v51 & 0x1000) != 0 )
    {
      IsAnyHypervisorPresent = 1;
    }
    else
    {
      IsAnyHypervisorPresent = 0;
      v45 = 0;
    }
  }
  else
  {
    IsAnyHypervisorPresent = HviIsAnyHypervisorPresent();
    v45 = IsAnyHypervisorPresent;
  }
  v11 = v46;
  _RAX = 0LL;
  __asm { cpuid }
  if ( (unsigned int)_RAX < 7 )
  {
    v21 = 0LL;
  }
  else
  {
    _RAX = 7LL;
    __asm { cpuid }
    v21 = (unsigned int)_RDX;
    if ( (_RDX & 0x20000000) != 0 )
    {
      v22 = __readmsr(0x10Au);
      _RDX = (unsigned __int64)HIDWORD(v22) << 32;
      if ( (v22 & 2) != 0 )
      {
        v9 = 1;
        v11 = v46 | 0x201;
        v8 = 1;
        *(_QWORD *)&v46 = v46 | 0x201;
      }
      if ( (v22 & 0x10) != 0 )
      {
        v11 |= 0x100uLL;
        v8 = 1;
        *(_QWORD *)&v46 = v11;
      }
      if ( (v22 & 4) != 0 )
      {
        v11 |= 0x200uLL;
        v8 = 1;
        *(_QWORD *)&v46 = v11;
      }
    }
  }
  v23 = v44;
  if ( v44 == 1 )
  {
    _RAX = 0x80000000LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX < 0x80000008 )
    {
      LODWORD(_RBX) = 0;
    }
    else
    {
      _RAX = 2147483656LL;
      __asm { cpuid }
    }
    if ( (_RBX & 0x1000) != 0 )
    {
      v11 |= 4uLL;
      v8 = 1;
      *(_QWORD *)&v46 = v11;
    }
    if ( (_RBX & 0x4000) != 0 )
    {
      v11 |= 0x10uLL;
      v8 = 1;
      *(_QWORD *)&v46 = v11;
    }
    if ( (_RBX & 0x8000) != 0 )
    {
      v11 |= 0x40uLL;
      v8 = 1;
      *(_QWORD *)&v46 = v11;
    }
    if ( (_RBX & 0x1000000) != 0 )
    {
      v11 |= 0x80uLL;
      *(_QWORD *)&v46 = v11;
    }
    if ( (_RBX & 0x4000000) != 0 )
    {
      v11 |= 0x180uLL;
      *(_QWORD *)&v46 = v11;
    }
    v23 = 1;
    v32 = v11;
    if ( (v11 & 0x80u) != 0LL )
      v8 = 1;
  }
  else
  {
    if ( (v21 & 0x4000000) != 0 )
    {
      v11 |= 0x14uLL;
      v8 = 1;
      *(_QWORD *)&v46 = v11;
    }
    if ( (v21 & 0x8000000) != 0 )
    {
      v11 |= 0x44uLL;
      v8 = 1;
      *(_QWORD *)&v46 = v11;
    }
    if ( (int)v21 < 0 )
    {
      v11 |= 0x80uLL;
      v8 = 1;
      *(_QWORD *)&v46 = v11;
    }
    v32 = v11;
  }
  if ( (a2 & 1) != 0 || KiKvaShadowMode == 1 )
  {
    v11 |= 0x20uLL;
    *(_QWORD *)&v46 = v11;
    v32 = v11;
  }
  if ( v23 == 2 && v6 == 6 )
  {
    if ( (unsigned __int8)(v4 - 78) <= 0x19u && (_RDX = 50397313LL, _bittest((const int *)&_RDX, v4 - 78))
      || (_BYTE)v4 == 0x8E
      || (_BYTE)v4 == 0x9E )
    {
      v11 |= 0x200uLL;
      *(_QWORD *)&v46 = v11;
      v32 = v11;
    }
    if ( (unsigned __int8)(v4 - 55) <= 0x37u
      && (_RDX = 0x80404800680001LL, _bittest64((const __int64 *)&_RDX, (unsigned int)(v4 - 55)))
      || (_BYTE)v4 == 117 )
    {
      v11 |= 0x200uLL;
      *(_QWORD *)&v46 = v11;
      v32 = v11;
    }
  }
  if ( (v32 & 0x14) == 0x14 )
  {
    if ( IsAnyHypervisorPresent && (KiFeatureSettings & 0x8000) == 0 )
      goto LABEL_130;
    v33 = *(_DWORD *)(a1 + 1740);
    if ( (v33 & 2) != 0 )
    {
      v11 |= 0x400uLL;
      *(_QWORD *)&v46 = v11;
    }
    if ( (v33 & 4) != 0 )
    {
      v11 |= 0x800uLL;
      *(_QWORD *)&v46 = v11;
      if ( (KiFeatureSettings & 0x4000) != 0 )
      {
        v11 |= 1uLL;
        *(_QWORD *)&v46 = v11;
      }
    }
    if ( v23 == 2 )
    {
      if ( !IsAnyHypervisorPresent && !v9 || (v33 & 3) != 0 )
      {
        v11 |= 0x1000uLL;
LABEL_70:
        *(_QWORD *)&v46 = v11;
      }
    }
    else
    {
LABEL_130:
      if ( v23 == 1 )
      {
        v11 |= 0x1000uLL;
        *(_QWORD *)&v46 = v11;
        if ( (v11 & 0x40) != 0 )
        {
          v11 |= 0x4000uLL;
          goto LABEL_70;
        }
      }
    }
  }
  if ( (KeFeatureBits2 & 0x20000) != 0 && (KiFeatureSettings & 0x400000) == 0 )
  {
    v11 |= 0x2000uLL;
    *(_QWORD *)&v46 = v11;
  }
  if ( (unsigned int)KiIsBranchConfusionPresent(a1, _RDX, v21) )
  {
    v11 |= 0x8000uLL;
    *(_QWORD *)&v46 = v11;
  }
  if ( *(_BYTE *)(a1 + 141) == 1 && (KeFeatureBits2 & 0xC0000000000LL) != 0xC0000000000LL )
  {
    if ( HviIsAnyHypervisorPresent()
      || (v34 = *(_BYTE *)(a1 + 64), v34 >= 25)
      && (v34 != 26 || (v35 = *(_BYTE *)(a1 + 67), v35 > 0x4Fu) && (unsigned __int8)(v35 - 96) > 0x1Fu) )
    {
      v11 |= 0x8000000uLL;
      *(_QWORD *)&v46 = v11;
    }
  }
  if ( v23 != 1 || (KeFeatureBits2 & 0x2000000) != 0 )
  {
    v11 |= 8uLL;
    *(_QWORD *)&v46 = v11;
  }
  BYTE12(v46) = 0;
  if ( v23 == 2 )
  {
    if ( (KeFeatureBits2 & 0x4000000) == 0 && (v45 || v9) )
    {
      v11 |= 0x10000uLL;
      *(_QWORD *)&v46 = v11;
    }
    if ( (v11 & 0x10000) != 0 )
    {
      if ( (KeFeatureBits2 & 0x8000000) != 0 )
      {
        v11 |= 0x20000uLL;
        *(_QWORD *)&v46 = v11;
      }
      if ( KiTsxSupported )
      {
        BYTE12(v46) = 3;
      }
      else if ( (KeFeatureBits2 & 0x8000000) != 0
             || *(_BYTE *)(a1 + 64) == 6
             && ((v36 = *(_BYTE *)(a1 + 67), v36 == -105) && ((v37 = *(_BYTE *)(a1 + 66), v37 == 2) || v37 == 5)
              || v36 == -102 && ((v38 = *(_BYTE *)(a1 + 66), v38 == 3) || v38 == 4))
             || (BYTE12(v46) = 1, v45) )
      {
        BYTE12(v46) = 2;
      }
    }
    v23 = v44;
  }
  if ( (KiFeatureSettings & 0x10000) != 0 )
  {
    v11 &= 0xFFFFFFFFFFFFF7FEuLL;
    *(_QWORD *)&v46 = v11;
  }
  if ( v23 == 2 && (a2 & 0x8000000000000LL) != 0 && (KeFeatureBits2 & 0x100000000LL) == 0 )
  {
    v11 |= 0x40000uLL;
    *(_QWORD *)&v46 = v11;
    v39 = v11;
    if ( (KeFeatureBits2 & 0x80000000) != 0 )
    {
      v11 |= 0x80000uLL;
      *(_QWORD *)&v46 = v11;
      v40 = __readmsr(0x123u);
      if ( (v40 & 0x20) != 0 )
      {
        v11 = v39 | 0x180000;
        *(_QWORD *)&v46 = v39 | 0x180000;
      }
    }
    v23 = v44;
  }
  v41 = *(_BYTE *)(a1 + 141);
  if ( v41 == 1 && !_bittest64((const signed __int64 *)&KeFeatureBits2, 0x22u) )
  {
    v11 |= 0x200000uLL;
    *(_QWORD *)&v46 = v11;
  }
  if ( v23 == 1 )
  {
    v11 |= 0x400000uLL;
    *(_QWORD *)&v46 = v11;
  }
  if ( v41 == 2 && (KeFeatureBits2 & 0x800000000LL) == 0 )
  {
    v42 = v11 | 0x800000;
    *(_QWORD *)&v46 = v42;
    if ( (KeFeatureBits2 & 0x1000000000LL) != 0 )
      *(_QWORD *)&v46 = v42 | 0x1000000;
  }
  *(_OWORD *)a3 = v46;
  *(_QWORD *)(a3 + 16) = 4LL;
  result = a4;
  if ( a4 )
    *a4 = v8;
  return result;
}
