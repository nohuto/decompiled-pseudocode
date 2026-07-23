/*
 * XREFs of RtlpGetBootStatusPathFromRegistry @ 0x18013C964
 * Callers:
 *     RtlCreateBootStatusDataFile @ 0x18013C450 (RtlCreateBootStatusDataFile.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlInitUnicodeString @ 0x1800C7EE0 (RtlInitUnicodeString.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtOpenKey @ 0x180160290 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180160330 (NtQueryValueKey.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 __fastcall RtlpGetBootStatusPathFromRegistry(_QWORD *a1)
{
  NTSTATUS v2; // ebx
  NTSTATUS v3; // eax
  unsigned int *Heap; // rdi
  PVOID v5; // rax
  PVOID v6; // rsi
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+A8h] [rbp+38h] BYREF
  ULONG v11; // [rsp+B0h] [rbp+40h] BYREF
  HANDLE KeyHandle; // [rsp+B8h] [rbp+48h] BYREF

  v11 = 0;
  ResultLength = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SYSTEM\\CurrentControlSet\\Control");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v2 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"OsBootstatPath");
    v3 = NtQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    v2 = v3;
    if ( v3 == -1073741789 )
    {
      Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, ResultLength);
      if ( Heap )
      {
        v2 = NtQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, Heap, ResultLength, &v11);
        if ( v2 >= 0 )
        {
          v5 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Heap[2]);
          v6 = v5;
          if ( v5 )
          {
            memmove(v5, Heap + 3, Heap[2]);
            *a1 = v6;
          }
          else
          {
            v2 = -1073741801;
          }
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      }
      else
      {
        v2 = -1073741801;
      }
    }
    else if ( v3 >= 0 )
    {
      v2 = -1073741823;
    }
  }
  if ( KeyHandle )
    NtClose(KeyHandle);
  return (unsigned int)v2;
}
