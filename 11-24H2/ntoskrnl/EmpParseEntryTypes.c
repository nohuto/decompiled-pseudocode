/*
 * XREFs of EmpParseEntryTypes @ 0x140C18644
 * Callers:
 *     EmpParseInfDatabase @ 0x140C187C4 (EmpParseInfDatabase.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14045BBA0 (RtlInitAnsiString.c)
 *     EmpSearchEntryDatabase @ 0x14057C9C8 (EmpSearchEntryDatabase.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x1408C7C70 (RtlGUIDFromString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140903ED0 (RtlAnsiStringToUnicodeString.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     EmpInfParseGetSectionLineCount @ 0x140C182F0 (EmpInfParseGetSectionLineCount.c)
 *     CmpGetSectionLineIndex @ 0x140C1A254 (CmpGetSectionLineIndex.c)
 */

__int64 __fastcall EmpParseEntryTypes(__int64 a1)
{
  NTSTATUS v1; // ebx
  unsigned int v3; // edi
  unsigned int SectionLineCount; // ebp
  const CHAR *SectionLineIndex; // rax
  GUID *Pool2; // rax
  GUID *v7; // rsi
  GUID *v8; // rcx
  UNICODE_STRING GuidString; // [rsp+20h] [rbp-98h] BYREF
  STRING DestinationString; // [rsp+30h] [rbp-88h] BYREF
  char v12; // [rsp+40h] [rbp-78h] BYREF

  *(_QWORD *)&GuidString.Length = 5111808LL;
  GuidString.Buffer = (wchar_t *)&v12;
  v1 = 0;
  v3 = 0;
  DestinationString = 0LL;
  SectionLineCount = EmpInfParseGetSectionLineCount(a1, (__int64)"EntryTypeGuidDef");
  if ( SectionLineCount )
  {
    while ( 1 )
    {
      if ( v3 >= SectionLineCount )
        return (unsigned int)v1;
      SectionLineIndex = (const CHAR *)CmpGetSectionLineIndex(a1, "EntryTypeGuidDef", v3, 0LL);
      if ( !SectionLineIndex )
        return 0;
      RtlInitAnsiString(&DestinationString, SectionLineIndex);
      if ( RtlAnsiStringToUnicodeString(&GuidString, &DestinationString, 0) < 0 )
        break;
      Pool2 = (GUID *)ExAllocatePool2(0x100uLL, 0x50uLL, 0x74694D45uLL);
      v7 = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      ++v3;
      v1 = RtlGUIDFromString(&GuidString, Pool2);
      v8 = v7;
      if ( v1 < 0 || EmpSearchEntryDatabase(v7) )
      {
        ExFreePoolWithTag(v8, 0x74694D45u);
LABEL_6:
        v1 = 0;
      }
      else
      {
        *(_QWORD *)&v7[3].Data1 = (char *)v7 + 40;
        *(_QWORD *)v7[2].Data4 = (char *)v7 + 40;
        *(_QWORD *)v7[4].Data4 = 0LL;
        *(_QWORD *)&v7[4].Data1 = (char *)v7 + 56;
        *(_QWORD *)v7[3].Data4 = (char *)v7 + 56;
        v7[1].Data1 = 0;
        ++EmpNumberOfEntryTypes;
        *(_QWORD *)&v7[2].Data1 = (char *)v7 + 40;
        *(_QWORD *)v7[1].Data4 = EmpEntryListHead;
        EmpEntryListHead = (__int64)v7[1].Data4;
      }
    }
    ++v3;
    goto LABEL_6;
  }
  return (unsigned int)v1;
}
