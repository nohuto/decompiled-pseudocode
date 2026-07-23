/*
 * XREFs of LdrpIsReparsePoint @ 0x18007A600
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x180075320 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpResSearchResourceMappedFile @ 0x180096010 (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18006F820 (RtlpDosPathNameToRelativeNtPathName.c)
 *     LdrpGetLoadAsEntry @ 0x18007A2FC (LdrpGetLoadAsEntry.c)
 *     LdrFindEntryForAddress @ 0x18007AA10 (LdrFindEntryForAddress.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     ZwQueryAttributesFile @ 0x1801607F0 (ZwQueryAttributesFile.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpIsReparsePoint(__int64 a1)
{
  unsigned int v1; // ebx
  wchar_t *Buffer; // rcx
  size_t v3; // rax
  void *v4; // rdi
  __int64 v5; // rdx
  PLDR_DATA_TABLE_ENTRY Entry[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v8; // [rsp+58h] [rbp-B0h] BYREF
  PVOID BaseAddress_8[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v10; // [rsp+78h] [rbp-90h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-80h] BYREF
  wchar_t *String[2]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v13; // [rsp+C8h] [rbp-40h]
  __int128 v14; // [rsp+D8h] [rbp-30h]
  _FILE_BASIC_INFORMATION FileInformation; // [rsp+E8h] [rbp-20h] BYREF

  Entry[0] = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v1 = -1073741823;
  v8 = 0LL;
  *(_OWORD *)BaseAddress_8 = 0LL;
  v10 = 0LL;
  memset(&FileInformation, 0, sizeof(FileInformation));
  *(_OWORD *)String = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( (a1 & 3) != 0 )
  {
    if ( (int)LdrpGetLoadAsEntry(a1, String) < 0 )
      return v1;
    Buffer = String[1];
  }
  else
  {
    if ( LdrFindEntryForAddress((PVOID)a1, Entry) < 0 )
      return v1;
    Buffer = Entry[0]->FullDllName.Buffer;
  }
  Entry[0] = 0LL;
  Entry[1] = (PLDR_DATA_TABLE_ENTRY)Buffer;
  if ( Buffer )
  {
    v3 = wcslen(Buffer);
    if ( v3 > 0x7FFE )
      return v1;
    LOWORD(Entry[0]) = 2 * v3;
    WORD1(Entry[0]) = 2 * v3 + 2;
  }
  if ( (int)RtlpDosPathNameToRelativeNtPathName(
              2,
              (unsigned __int16 *)Entry,
              0LL,
              (unsigned __int16 *)&v8,
              0LL,
              0LL,
              (__int64)BaseAddress_8) >= 0 )
  {
    v4 = (void *)*((_QWORD *)&v8 + 1);
    if ( LOWORD(BaseAddress_8[0]) )
    {
      v5 = v10;
      v8 = *(_OWORD *)BaseAddress_8;
    }
    else
    {
      v5 = 0LL;
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v8;
    ObjectAttributes.RootDirectory = (HANDLE)(v5 & -(__int64)(v4 != 0LL));
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwQueryAttributesFile(&ObjectAttributes, &FileInformation) >= 0
      && (FileInformation.FileAttributes & 0x400) != 0 )
    {
      v1 = 0;
    }
    if ( v4 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  }
  return v1;
}
