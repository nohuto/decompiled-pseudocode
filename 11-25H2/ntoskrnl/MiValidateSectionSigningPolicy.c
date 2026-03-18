/*
 * XREFs of MiValidateSectionSigningPolicy @ 0x140945CA8
 * Callers:
 *     MiCreateNewSection @ 0x14093EAC0 (MiCreateNewSection.c)
 *     MiValidateExistingImage @ 0x14093F22C (MiValidateExistingImage.c)
 * Callees:
 *     SeCompareSigningLevels @ 0x14091E260 (SeCompareSigningLevels.c)
 *     MiValidateSectionCreate @ 0x140945124 (MiValidateSectionCreate.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x140ACEE4C (EtwTimLogProhibitNonMicrosoftBinaries.c)
 */

__int64 __fastcall MiValidateSectionSigningPolicy(
        unsigned int a1,
        ULONG_PTR a2,
        ULONG_PTR a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        char a7,
        char a8,
        char a9)
{
  int v13; // edx
  _KPROCESS *Process; // r12
  int v15; // ecx
  __int64 v16; // rcx
  int v17; // edi
  int v18; // r8d
  int v19; // r9d
  char v20; // bl
  char v21; // bl
  int v22; // ecx

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
    v17 = MiValidateSectionCreate(a2, a3, a4, a5, v15, a8, a9);
    if ( v17 < 0 )
    {
      v16 = (unsigned int)(a1 != 1) + 1;
      dword_140E2D4B8 = (a1 != 1) + 1;
    }
    v20 = *(_BYTE *)(*(_QWORD *)a3 + 15LL);
    if ( (a7 & 2) != 0 && v17 < 0 )
    {
      if ( v17 != -1073740760 || (a7 & 9) != 1 )
        return (unsigned int)v17;
      LOBYTE(v18) = a8;
      v21 = v20 & 0xF;
      v22 = 2;
    }
    else
    {
      if ( (a7 & 4) == 0 )
        return (unsigned int)v17;
      if ( v17 < 0 )
        return 0;
      v21 = v20 & 0xF;
      LOBYTE(v16) = v21;
      if ( (unsigned int)SeCompareSigningLevels(v16) )
        return (unsigned int)v17;
      LOBYTE(v18) = a9;
      v22 = 1;
    }
    LOBYTE(v19) = v21;
    EtwTimLogProhibitNonMicrosoftBinaries(v22, (_DWORD)Process, v18, v19, a2 + 88);
    return (unsigned int)v17;
  }
  return 3221225485LL;
}
