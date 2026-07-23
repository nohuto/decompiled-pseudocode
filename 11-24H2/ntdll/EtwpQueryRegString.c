/*
 * XREFs of EtwpQueryRegString @ 0x180081A24
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x180080610 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpAddDebugInfoEvents @ 0x18008145C (EtwpAddDebugInfoEvents.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtOpenKey @ 0x180160290 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180160330 (NtQueryValueKey.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 __fastcall EtwpQueryRegString(const wchar_t *a1, wchar_t *a2, void *a3, ULONG a4)
{
  size_t v6; // rax
  NTSTATUS v7; // ebx
  unsigned __int64 v8; // rax
  ULONG Length; // ebx
  unsigned int *Heap; // rdi
  size_t v12; // rax
  _QWORD v13[2]; // [rsp+30h] [rbp-50h] BYREF
  _UNICODE_STRING ValueName; // [rsp+40h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+B0h] [rbp+30h] BYREF
  ULONG ResultLength; // [rsp+C8h] [rbp+48h] BYREF

  ResultLength = a4;
  KeyHandle = 0LL;
  v13[0] = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  v13[1] = a1;
  if ( a1 )
  {
    v6 = 2 * wcslen(a1);
    if ( v6 >= 0xFFFE )
      LOWORD(v6) = -4;
    LOWORD(v13[0]) = v6;
    WORD1(v13[0]) = v6 + 2;
  }
  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v13;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  v7 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v7 >= 0 )
  {
    v8 = 2LL * ResultLength;
    if ( v8 > 0xFFFFFFFF || (Length = v8 + 12, (int)v8 + 12 < (unsigned int)v8) )
    {
      NtClose(KeyHandle);
      return 3221225621LL;
    }
    Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Length);
    if ( Heap )
    {
      *(_QWORD *)&ValueName.Length = 0LL;
      ValueName.Buffer = a2;
      if ( a2 )
      {
        v12 = 2 * wcslen(a2);
        if ( v12 >= 0xFFFE )
          LOWORD(v12) = -4;
        ValueName.Length = v12;
        ValueName.MaximumLength = v12 + 2;
      }
      v7 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Heap, Length, &ResultLength);
      if ( v7 >= 0 )
        memmove(a3, Heap + 3, Heap[2]);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    }
    else
    {
      v7 = -1073741801;
    }
    NtClose(KeyHandle);
  }
  return (unsigned int)v7;
}
