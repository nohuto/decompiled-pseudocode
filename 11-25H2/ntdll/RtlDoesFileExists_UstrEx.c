/*
 * XREFs of RtlDoesFileExists_UstrEx @ 0x1800A2500
 * Callers:
 *     sxsisol_RespectDotLocal @ 0x1800A0C84 (sxsisol_RespectDotLocal.c)
 *     RtlDoesFileExists_UEx @ 0x1800A24A0 (RtlDoesFileExists_UEx.c)
 *     RtlDosSearchPath_Ustr @ 0x1800A2650 (RtlDosSearchPath_Ustr.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x1800158A0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlReleaseRelativeName @ 0x1800A2FC0 (RtlReleaseRelativeName.c)
 *     ZwQueryAttributesFile @ 0x1801639C0 (ZwQueryAttributesFile.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

bool __fastcall RtlDoesFileExists_UstrEx(unsigned __int16 *a1, char a2)
{
  HANDLE ContainingDirectory; // rbx
  PVOID v4; // rdi
  NTSTATUS v5; // ebx
  PVOID BaseAddress[2]; // [rsp+40h] [rbp-39h] BYREF
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+50h] [rbp-29h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-9h] BYREF
  _FILE_BASIC_INFORMATION FileInformation; // [rsp+A0h] [rbp+27h] BYREF

  ContainingDirectory = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_OWORD *)BaseAddress = 0LL;
  memset(&RelativeName, 0, sizeof(RelativeName));
  memset(&FileInformation, 0, sizeof(FileInformation));
  if ( (int)RtlpDosPathNameToRelativeNtPathName(
              2,
              a1,
              0LL,
              (unsigned __int16 *)BaseAddress,
              0LL,
              0LL,
              (__int64)&RelativeName) < 0 )
    return 0;
  v4 = BaseAddress[1];
  if ( RelativeName.RelativeName.Length )
  {
    ContainingDirectory = RelativeName.ContainingDirectory;
    *(UNICODE_STRING *)BaseAddress = RelativeName.RelativeName;
  }
  else
  {
    RelativeName.ContainingDirectory = 0LL;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)BaseAddress;
  ObjectAttributes.RootDirectory = ContainingDirectory;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwQueryAttributesFile(&ObjectAttributes, &FileInformation);
  RtlReleaseRelativeName(&RelativeName);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  if ( v5 >= 0 )
    return 1;
  return (v5 == -1073741757 || v5 == -1073741790) && a2 != 0;
}
