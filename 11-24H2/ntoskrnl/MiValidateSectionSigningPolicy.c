/*
 * XREFs of MiValidateSectionSigningPolicy @ 0x14093C388
 * Callers:
 *     MiCreateNewSection @ 0x14098D630 (MiCreateNewSection.c)
 *     MiValidateExistingImage @ 0x14098DCCC (MiValidateExistingImage.c)
 * Callees:
 *     MiValidateSectionCreate @ 0x14093C5D8 (MiValidateSectionCreate.c)
 *     SeCompareSigningLevels @ 0x1409FA8D0 (SeCompareSigningLevels.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x140ADB280 (EtwTimLogProhibitNonMicrosoftBinaries.c)
 */

__int64 __fastcall MiValidateSectionSigningPolicy(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        char a7,
        char a8,
        char a9)
{
  int v13; // edx
  _KPROCESS *Process; // r12
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // edi
  int v19; // r8d
  int v20; // r9d
  char v21; // bl
  char v22; // bl
  int v23; // ecx

  if ( a1 < 2 )
  {
    if ( (a7 & 6) == 0 )
      return 0LL;
    v13 = a6 | 0x2000000;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( (a7 & 2) != 0 )
      v13 = a6;
    v15 = v13 | 0x800000;
    if ( (a7 & 8) == 0 )
      v15 = v13;
    v18 = MiValidateSectionCreate(a2, a3, a4, a5, v15, a8, a9);
    if ( v18 < 0 )
    {
      v17 = (unsigned int)(a1 != 1) + 1;
      dword_140E2D838 = (a1 != 1) + 1;
    }
    v21 = *(_BYTE *)(*(_QWORD *)a3 + 15LL);
    if ( (a7 & 2) != 0 && v18 < 0 )
    {
      if ( v18 != -1073740760 || (a7 & 9) != 1 )
        return (unsigned int)v18;
      LOBYTE(v19) = a8;
      v22 = v21 & 0xF;
      v23 = 2;
    }
    else
    {
      if ( (a7 & 4) == 0 )
        return (unsigned int)v18;
      if ( v18 < 0 )
        return 0;
      v22 = v21 & 0xF;
      LOBYTE(v16) = a9;
      LOBYTE(v17) = v22;
      if ( (unsigned int)SeCompareSigningLevels(v17, v16) )
        return (unsigned int)v18;
      LOBYTE(v19) = a9;
      v23 = 1;
    }
    LOBYTE(v20) = v22;
    EtwTimLogProhibitNonMicrosoftBinaries(v23, (_DWORD)Process, v19, v20, a2 + 88);
    return (unsigned int)v18;
  }
  return 3221225485LL;
}
