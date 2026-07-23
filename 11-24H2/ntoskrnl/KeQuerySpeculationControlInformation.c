/*
 * XREFs of KeQuerySpeculationControlInformation @ 0x140AC167C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     MiIsImportOptimizationEnabled @ 0x14049A000 (MiIsImportOptimizationEnabled.c)
 *     KeKvaShadowingActive @ 0x1404A367C (KeKvaShadowingActive.c)
 *     HvlQueryL1tfMitigationInformation @ 0x1404A5A70 (HvlQueryL1tfMitigationInformation.c)
 *     SpcIsFbClearSupported @ 0x1406A1B44 (SpcIsFbClearSupported.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KeQuerySpeculationControlInformation(void *a1, unsigned int a2, unsigned int *a3)
{
  size_t v3; // r12
  unsigned int v5; // r13d
  bool IsImportOptimizationEnabled; // al
  int v7; // r8d
  unsigned __int8 v8; // r9
  unsigned __int64 v9; // rdx
  ULONG_PTR v10; // rdi
  int v11; // eax
  int v12; // ebx
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // edi
  bool v16; // zf
  int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  char v26; // [rsp+68h] [rbp+10h]
  unsigned __int64 Src; // [rsp+78h] [rbp+20h] BYREF

  v3 = a2;
  if ( a2 < 4 )
  {
    *a3 = 8;
    return 3221225476LL;
  }
  v5 = a2;
  if ( a2 >= 8 )
    v5 = 8;
  *a3 = v5;
  Src = ((unsigned __int64)KiSpeculationFeatures >> 36) & 1 | ((unsigned __int64)KiSpeculationFeatures >> 33) & 2 | ((unsigned __int64)KiSpeculationFeatures >> 33) & 4;
  if ( (KiSpeculationFeatures & 0x10) != 0 || (KiSpeculationFeatures & 0x40) != 0 )
    LODWORD(Src) = Src | 8;
  if ( (KiSpeculationFeatures & 4) != 0 )
    LODWORD(Src) = Src | 0x10;
  if ( (KiSpeculationFeatures & 0x1000000000LL) != 0 && (KiSpeculationFeatures & 0x2000000000LL) != 0 )
    LODWORD(Src) = Src | 0x2000;
  LODWORD(Src) = Src & 0xFFFFE11F | (2 * (_BYTE)KiSpeculationFeatures) & 0x20 | KiSpeculationFeatures & 0x40 | (4 * KiSpeculationFeatures) & 0x80 | 0x100 | (4 * (_WORD)KiSpeculationFeatures) & 0x200 | ((unsigned __int64)KiSpeculationFeatures >> 28) & 0x400 | ((unsigned __int64)KiSpeculationFeatures >> 28) & 0x800 | ~(16 * (_WORD)KiSpeculationFeatures) & 0x1000;
  IsImportOptimizationEnabled = MiIsImportOptimizationEnabled();
  LODWORD(Src) = Src & 0xFFFF3FFF | (IsImportOptimizationEnabled << 15) | (v9 >> 27) & 0x4000;
  v10 = KeFeatureBits2;
  v26 = KiKvaShadow;
  if ( !KiKvaShadow || (v11 = 637534208, ((unsigned __int8)KeFeatureBits2 & v8) == 0) )
    v11 = 603979776;
  v12 = v11 | Src & 0xFCFEFFFF | ((_DWORD)KeFeatureBits2 << 19) & 0x1000000 | ((v7 | KiSpeculationFeatures & 1) << 16) & 0xFDFFFFFF;
  if ( (KeFeatureBits2 & 0x8000) != 0 && KiDisableTsx || !KiTsxSupported )
  {
    v13 = v12 | 0x18000000;
  }
  else if ( (KeFeatureBits2 & 0x10000) != 0 || (KeFeatureBits2 & 0x28) == v8 && (unsigned int)KeKvaShadowingActive() )
  {
    v13 = v12 & 0xE7FFFFFF | 0x10000000;
  }
  else if ( (v10 & 0x8000) != 0 )
  {
    v13 = v12 & 0xE7FFFFFF | 0x8000000;
  }
  else
  {
    v13 = v12 & 0xE7FFFFFF;
  }
  if ( (v10 & 0x10000) != 0 || !KiTsxSupportedAtBoot )
    v14 = 0x40000000;
  else
    v14 = 0;
  LODWORD(Src) = v14 | v13 & 0xBFFFFFFF;
  HvlQueryL1tfMitigationInformation((int *)&Src);
  v15 = HIDWORD(Src) & 0xFFFFFFF8 | (v10 >> 19) & 7;
  if ( !v26 || (v16 = !SpcIsFbClearSupported(), v17 = 1048, v16) )
    v17 = 1040;
  HIDWORD(Src) = v17 | v15 & 0xFFFFFFF7;
  if ( (KiSpeculationFeatures & 0x8000) == 0 )
  {
    v18 = HIDWORD(Src) & 0xFFFFFCFF | 0x200;
LABEL_44:
    HIDWORD(Src) = v18;
    goto LABEL_45;
  }
  if ( (KiSpeculationFeatures & 0x400000000LL) != 0
    || (KiSpeculationFeatures & 0x2000000000LL) != 0
    || (KiSpeculationFeatures & 0x100000000000LL) != 0 )
  {
    v18 = HIDWORD(Src) & 0xFFFFFCFF | 0x100;
    goto LABEL_44;
  }
  if ( (KiSpeculationFeatures & 0x800000000LL) != 0 || (KiSpeculationFeatures & 0x200000000000LL) != 0 )
    HIDWORD(Src) &= 0xFFFFFCFF;
  else
    HIDWORD(Src) |= 0x300u;
LABEL_45:
  if ( (KiSpeculationFeatures & 0x10000) != 0 )
  {
    if ( (KiSpeculationFeatures & 0x10000000000000LL) != 0 || (KiSpeculationFeatures & 0x400000000LL) != 0 )
    {
      HIDWORD(Src) |= 0x40u;
    }
    else if ( (KiSpeculationFeatures & 0x20000000000000LL) != 0 || (KiSpeculationFeatures & 0x800000000LL) != 0 )
    {
      HIDWORD(Src) |= 0x80u;
    }
    else if ( (KiSpeculationFeatures & 0x40000000000000LL) != 0 || (KiSpeculationFeatures & 0x80000000000000LL) != 0 )
    {
      HIDWORD(Src) |= 0x20u;
    }
  }
  HIDWORD(Src) = HIDWORD(Src) & 0xFFFFEFFF | ((_WORD)KeFeatureBits2 << 8) & 0x1000 | 0x2800;
  if ( (KiSpeculationFeatures & 0x40000) != 0 )
  {
    if ( (KiSpeculationFeatures & 0x80000) != 0 )
    {
      if ( (KiSpeculationFeatures & 0x100000) != 0 )
      {
        v19 = HIDWORD(Src) & 0xFFFE3FFF | 0x10000;
      }
      else if ( (KiSpeculationFeatures & 0x400000000000LL) != 0 )
      {
        v19 = HIDWORD(Src) & 0xFFFE3FFF | 0x4000;
      }
      else
      {
        v19 = HIDWORD(Src) & 0xFFFE3FFF | 0xC000;
      }
    }
    else
    {
      v19 = HIDWORD(Src) & 0xFFFE3FFF;
    }
  }
  else
  {
    v19 = HIDWORD(Src) & 0xFFFE3FFF | 0x8000;
  }
  HIDWORD(Src) = v19 | 0x20000;
  if ( (KiSpeculationFeatures & 0x200000) != 0 )
  {
    if ( (KiSpeculationFeatures & 0x400000000LL) != 0
      || (KiSpeculationFeatures & 0x2000000000LL) != 0
      || (KiSpeculationFeatures & 0x800000000000LL) != 0 )
    {
      v20 = HIDWORD(Src) & 0xFFF3FFFF | 0x40000;
    }
    else if ( (KiSpeculationFeatures & 0x800000000LL) != 0 || (KiSpeculationFeatures & 0x1000000000000LL) != 0 )
    {
      v20 = HIDWORD(Src) & 0xFFF3FFFF;
    }
    else
    {
      v20 = HIDWORD(Src) | 0xC0000;
    }
  }
  else
  {
    v20 = HIDWORD(Src) & 0xFFF3FFFF | 0x80000;
  }
  HIDWORD(Src) = v20 | 0x100000;
  v21 = v20 | 0x100000;
  if ( (KiSpeculationFeatures & 0x400000) != 0 )
    v22 = v21 | 0x200000;
  else
    v22 = v21 & 0xFFDFFFFF;
  HIDWORD(Src) = v22 | 0x400000;
  if ( (KiSpeculationFeatures & 0x800000) != 0 )
  {
    if ( (KiSpeculationFeatures & 0x2000000000000LL) != 0 )
    {
      v23 = HIDWORD(Src) & 0xFE7FFFFF | 0x800000;
    }
    else if ( (KiSpeculationFeatures & 0x4000000000000LL) != 0 )
    {
      v23 = HIDWORD(Src) & 0xFE7FFFFF;
    }
    else
    {
      v23 = HIDWORD(Src) | 0x1800000;
    }
  }
  else
  {
    v23 = HIDWORD(Src) & 0xFE7FFFFF | 0x1000000;
  }
  HIDWORD(Src) = v23 | 0x2000000;
  if ( (KiSpeculationFeatures & 0x8000000) != 0 )
  {
    if ( (KiSpeculationFeatures & 0x400000000LL) == 0
      && (KiSpeculationFeatures & 0x2000000000LL) == 0
      && (KiSpeculationFeatures & 0x200000000000000LL) == 0 )
    {
      if ( (KiSpeculationFeatures & 0x800000000LL) != 0 || (KiSpeculationFeatures & 0x400000000000000LL) != 0 )
        HIDWORD(Src) &= 0xF3FFFFFF;
      else
        HIDWORD(Src) |= 0xC000000u;
      goto LABEL_95;
    }
    v24 = HIDWORD(Src) & 0xF3FFFFFF | 0x4000000;
  }
  else
  {
    v24 = HIDWORD(Src) & 0xF3FFFFFF | 0x8000000;
  }
  HIDWORD(Src) = v24;
LABEL_95:
  memset_0(a1, 0, v3);
  memmove(a1, &Src, v5);
  return 0LL;
}
