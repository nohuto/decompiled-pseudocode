/*
 * XREFs of ObGetSiloRootDirectoryPath @ 0x14082AF14
 * Callers:
 *     PspConvertSiloToServerSilo @ 0x140772754 (PspConvertSiloToServerSilo.c)
 *     NtQueryInformationJobObject @ 0x140ACCBF0 (NtQueryInformationJobObject.c)
 * Callees:
 *     PsGetPermanentSiloContext @ 0x1403F0070 (PsGetPermanentSiloContext.c)
 *     RtlCopyUnicodeString @ 0x1403FFE80 (RtlCopyUnicodeString.c)
 *     PsGetCurrentSilo @ 0x140402420 (PsGetCurrentSilo.c)
 *     RtlAppendUnicodeStringToString @ 0x14040BBA0 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlIntegerToUnicodeString @ 0x1408EF170 (RtlIntegerToUnicodeString.c)
 *     PsGetParentSilo @ 0x140A59700 (PsGetParentSilo.c)
 *     PsGetSiloIdentifier @ 0x140A68090 (PsGetSiloIdentifier.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

int __fastcall ObGetSiloRootDirectoryPath(__int64 a1, UNICODE_STRING *a2)
{
  int result; // eax
  struct _LIST_ENTRY *ParentSilo; // rbx
  ULONG SiloIdentifier; // eax
  unsigned int v7; // ebx
  __int64 Pool2; // rax
  UNICODE_STRING String; // [rsp+20h] [rbp-40h] BYREF
  UNICODE_STRING Source; // [rsp+30h] [rbp-30h] BYREF
  char v11; // [rsp+40h] [rbp-20h] BYREF

  *(_QWORD *)&Source.Length = 262146LL;
  Source.Buffer = (wchar_t *)L"\\";
  result = PsGetPermanentSiloContext(a1, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&String.Length);
  if ( result >= 0 )
  {
    ParentSilo = (struct _LIST_ENTRY *)PsGetParentSilo(a1);
    if ( PsGetCurrentSilo() != ParentSilo )
      return -1073740007;
    *(_QWORD *)&String.Length = 1441792LL;
    String.Buffer = (wchar_t *)&v11;
    SiloIdentifier = PsGetSiloIdentifier(a1);
    result = RtlIntegerToUnicodeString(SiloIdentifier, 0xAu, &String);
    if ( result >= 0 )
    {
      v7 = String.Length + 14;
      if ( a2->Buffer )
      {
        if ( a2->MaximumLength < v7 )
          return -1073741789;
      }
      else
      {
        Pool2 = ExAllocatePool2(0x100uLL);
        a2->Buffer = (wchar_t *)Pool2;
        if ( !Pool2 )
          return -1073741670;
        a2->Length = 0;
        a2->MaximumLength = v7;
      }
      RtlCopyUnicodeString(a2, &ObpSilosDirectoryName);
      RtlAppendUnicodeStringToString(a2, &Source);
      RtlAppendUnicodeStringToString(a2, &String);
      return 0;
    }
  }
  return result;
}
