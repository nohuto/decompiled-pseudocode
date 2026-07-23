/*
 * XREFs of EmpParseCallbacks @ 0x140C1840C
 * Callers:
 *     EmpParseInfDatabase @ 0x140C187C4 (EmpParseInfDatabase.c)
 * Callees:
 *     strtoul @ 0x1404FAFA8 (strtoul.c)
 *     EmpSearchCallbackDatabase @ 0x14057C990 (EmpSearchCallbackDatabase.c)
 *     EmpSearchEntryDatabase @ 0x14057C9C8 (EmpSearchEntryDatabase.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     EmpInfParseGetGuidFromName @ 0x140C18244 (EmpInfParseGetGuidFromName.c)
 *     EmpInfParseGetSectionLineCount @ 0x140C182F0 (EmpInfParseGetSectionLineCount.c)
 *     CmpGetKeyName @ 0x140C1A21C (CmpGetKeyName.c)
 *     CmpGetSectionLineIndex @ 0x140C1A254 (CmpGetSectionLineIndex.c)
 *     CmpGetSectionLineIndexValueCount @ 0x140C1A2CC (CmpGetSectionLineIndexValueCount.c)
 */

__int64 __fastcall EmpParseCallbacks(__int64 a1)
{
  unsigned int v2; // ebx
  int GuidFromName; // edi
  unsigned int SectionLineCount; // r12d
  __int64 KeyName; // rdi
  unsigned int SectionLineIndexValueCount; // eax
  unsigned int v7; // r15d
  GUID *Pool2; // rax
  GUID *v9; // rsi
  GUID *v10; // rcx
  const char *SectionLineIndex; // rax
  const char *v12; // rax
  unsigned int i; // r14d
  __int64 v14; // rax
  _QWORD *v15; // r10
  __int64 v16; // rax
  GUID v18; // [rsp+20h] [rbp-48h] BYREF

  v18 = 0LL;
  v2 = 0;
  GuidFromName = 0;
  SectionLineCount = EmpInfParseGetSectionLineCount(a1, (__int64)"CallbackDef");
  if ( SectionLineCount )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v2 >= SectionLineCount )
          return (unsigned int)GuidFromName;
        KeyName = CmpGetKeyName(a1, "CallbackDef", v2);
        if ( !KeyName )
          return 0;
        SectionLineIndexValueCount = CmpGetSectionLineIndexValueCount(a1, "CallbackDef", v2);
        v7 = SectionLineIndexValueCount;
        if ( SectionLineIndexValueCount >= 2 )
          break;
LABEL_5:
        ++v2;
LABEL_6:
        GuidFromName = 0;
      }
      Pool2 = (GUID *)ExAllocatePool2(0x100uLL, (int)(8 * SectionLineIndexValueCount + 56), 0x74694D45uLL);
      v9 = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      GuidFromName = EmpInfParseGetGuidFromName(a1, (__int64)"CallbackGuidDef", KeyName, Pool2);
      if ( GuidFromName < 0 )
        break;
      if ( EmpSearchCallbackDatabase(v9) )
        goto LABEL_13;
      v9[4].Data1 = v7 - 2;
      SectionLineIndex = (const char *)CmpGetSectionLineIndex(a1, "CallbackDef", v2, 0LL);
      if ( !SectionLineIndex )
        break;
      *(_DWORD *)v9[3].Data4 = strtoul(SectionLineIndex, 0LL, 10);
      v12 = (const char *)CmpGetSectionLineIndex(a1, "CallbackDef", v2, 1LL);
      if ( !v12 )
        break;
      *(_DWORD *)&v9[3].Data4[4] = strtoul(v12, 0LL, 10);
      for ( i = 2; i < v7; ++i )
      {
        v14 = CmpGetSectionLineIndex(a1, "CallbackDef", v2, i);
        GuidFromName = EmpInfParseGetGuidFromName(a1, (__int64)"EntryTypeGuidDef", v14, &v18);
        if ( GuidFromName < 0 || (v15 = EmpSearchEntryDatabase(&v18)) == 0LL )
        {
          ++v2;
          ExFreePoolWithTag(v9, 0x74694D45u);
          goto LABEL_6;
        }
        v16 = i - 2;
        *(_QWORD *)&v9[4].Data4[8 * v16] = v15;
      }
      *(_QWORD *)&v9[3].Data1 = 0LL;
      *(_QWORD *)&v9[1].Data1 = 0LL;
      ++v2;
      *(_DWORD *)v9[1].Data4 = 0;
      *(_QWORD *)&v9[2].Data1 = 0LL;
      ++EmpNumberOfCallbacks;
      *(_QWORD *)v9[2].Data4 = EmpCallbackListHead;
      EmpCallbackListHead = (__int64)v9[2].Data4;
    }
    v10 = v9;
LABEL_13:
    ExFreePoolWithTag(v10, 0x74694D45u);
    goto LABEL_5;
  }
  return (unsigned int)GuidFromName;
}
