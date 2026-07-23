/*
 * XREFs of EmpParseStrings @ 0x140C19670
 * Callers:
 *     EmpParseInfDatabase @ 0x140C187C4 (EmpParseInfDatabase.c)
 * Callees:
 *     RtlStringCchCopyA @ 0x14044D468 (RtlStringCchCopyA.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     EmpInfParseGetSectionLineCount @ 0x140C182F0 (EmpInfParseGetSectionLineCount.c)
 *     CmpGetSectionLineIndex @ 0x140C1A254 (CmpGetSectionLineIndex.c)
 */

__int64 __fastcall EmpParseStrings(__int64 a1)
{
  NTSTATUS v2; // ebx
  unsigned int SectionLineCount; // eax
  unsigned int v4; // r14d
  _BYTE *v5; // rdi
  _QWORD *v7; // rcx
  __int64 v8; // r8
  signed __int64 v9; // rdx
  unsigned int v10; // edi
  __int64 SectionLineIndex; // rax
  const char *v12; // rbp
  __int64 v13; // rdx
  char *Pool2; // rax
  __int64 v15; // rdx
  __int64 v16; // r10
  __int64 v17; // r11

  v2 = 0;
  SectionLineCount = EmpInfParseGetSectionLineCount(a1, (__int64)"Strings");
  v4 = SectionLineCount;
  if ( SectionLineCount )
  {
    v5 = EmpStringTable;
    if ( EmpStringTable )
    {
      EmpStringTable = (PVOID)ExAllocatePool2(0x100uLL, 8LL * (SectionLineCount + EmpNumberOfStrings), 0x74694D45uLL);
      v7 = EmpStringTable;
      if ( !EmpStringTable )
        return (unsigned int)-1073741670;
      if ( EmpNumberOfStrings )
      {
        v8 = (unsigned int)EmpNumberOfStrings;
        v9 = v5 - (_BYTE *)EmpStringTable;
        do
        {
          *v7 = *(_QWORD *)((char *)v7 + v9);
          ++v7;
          --v8;
        }
        while ( v8 );
      }
      ExFreePoolWithTag(v5, 0x74694D45u);
    }
    else
    {
      EmpStringTable = (PVOID)ExAllocatePool2(0x100uLL, 8LL * SectionLineCount, 0x74694D45uLL);
      if ( !EmpStringTable )
        return (unsigned int)-1073741670;
    }
    v10 = 0;
    while ( v10 < v4 )
    {
      SectionLineIndex = CmpGetSectionLineIndex(a1, "Strings", v10, 0LL);
      v12 = (const char *)SectionLineIndex;
      if ( SectionLineIndex )
      {
        v13 = -1LL;
        do
          ++v13;
        while ( *(_BYTE *)(v13 + SectionLineIndex) );
        Pool2 = (char *)ExAllocatePool2(0x100uLL, v13 + 1, 0x74694D45uLL);
        *((_QWORD *)EmpStringTable + (unsigned int)EmpNumberOfStrings) = Pool2;
        if ( !Pool2 )
          return (unsigned int)-1073741670;
        v15 = -1LL;
        do
          ++v15;
        while ( v12[v15] );
        v2 = RtlStringCchCopyA(Pool2, v15 + 1, v12);
        if ( v2 < 0 )
        {
          ExFreePoolWithTag(*(PVOID *)(v17 + 8 * v16), 0x74694D45u);
          v2 = 0;
        }
        else
        {
          ++EmpNumberOfStrings;
        }
        ++v10;
      }
    }
  }
  return (unsigned int)v2;
}
