/*
 * XREFs of RtlCreateBootStatusDataFile @ 0x18013F990
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlInitUnicodeString @ 0x1800A8A00 (RtlInitUnicodeString.c)
 *     RtlIsStateSeparationEnabled @ 0x1800EBA90 (RtlIsStateSeparationEnabled.c)
 *     RtlRestoreBootStatusDefaults @ 0x18013FD20 (RtlRestoreBootStatusDefaults.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x18013FEA4 (RtlpGetBootStatusPathFromRegistry.c)
 *     NtWriteFile @ 0x180163320 (NtWriteFile.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwCreateFile @ 0x180163CC0 (ZwCreateFile.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS RtlCreateBootStatusDataFile(void)
{
  wchar_t *v0; // rcx
  char v1; // di
  wchar_t *v2; // rdx
  BOOLEAN IsStateSeparationEnabled; // al
  int v4; // ebx
  PVOID Heap; // rax
  void *v6; // rsi
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-19h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-9h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp+7h] BYREF
  HANDLE FileHandle; // [rsp+E0h] [rbp+67h] BYREF
  PVOID BaseAddress; // [rsp+E8h] [rbp+6Fh] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+F0h] [rbp+77h] BYREF

  v1 = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  BaseAddress = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  if ( v0 )
  {
    v2 = v0;
  }
  else if ( (int)RtlpGetBootStatusPathFromRegistry(&BaseAddress) < 0 )
  {
    IsStateSeparationEnabled = RtlIsStateSeparationEnabled();
    v2 = L"\\OSDataRoot\\Windows\\bootstat.dat";
    if ( !IsStateSeparationEnabled )
      v2 = (wchar_t *)L"\\SystemRoot\\bootstat.dat";
    BaseAddress = v2;
  }
  else
  {
    v2 = (wchar_t *)BaseAddress;
    v1 = 1;
  }
  RtlInitUnicodeString(&DestinationString, v2);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ByteOffset.QuadPart = 67584LL;
  v4 = ZwCreateFile(&FileHandle, 0x12019Fu, &ObjectAttributes, &IoStatusBlock, &ByteOffset, 4u, 0, 2u, 0x8020u, 0LL, 0);
  if ( v4 >= 0 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x10800uLL);
    v6 = Heap;
    if ( Heap )
    {
      memset_thunk_772440563353939046(Heap, 254, 0x10800uLL);
      ByteOffset.QuadPart = 0LL;
      v4 = NtWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, v6, 0x10800u, &ByteOffset, 0LL);
      if ( v4 >= 0 )
        v4 = RtlRestoreBootStatusDefaults(FileHandle);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
    }
    else
    {
      v4 = -1073741801;
    }
  }
  if ( FileHandle )
    NtClose(FileHandle);
  if ( v1 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  return v4;
}
