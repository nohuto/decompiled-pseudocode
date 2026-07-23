/*
 * XREFs of PiBuildAndOpenDeviceDirectoryPath @ 0x14071CE34
 * Callers:
 *     IoGetDeviceDirectory @ 0x14071CA80 (IoGetDeviceDirectory.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintfEx @ 0x140499DB0 (RtlUnicodeStringPrintfEx.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     PiOpenDirectoryWithRoot @ 0x14071D8A8 (PiOpenDirectoryWithRoot.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     IopAllocateUnicodeString @ 0x1409BB8B4 (IopAllocateUnicodeString.c)
 */

__int64 __fastcall PiBuildAndOpenDeviceDirectoryPath(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        __int64 a3,
        char a4,
        _QWORD *a5)
{
  void *v7; // rdi
  __int64 v10; // r9
  NTSTATUS v11; // ebx
  int v12; // r8d
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  void *v15; // [rsp+80h] [rbp+8h] BYREF

  DestinationString = 0LL;
  v7 = 0LL;
  v15 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v10 = -1LL;
  do
    ++v10;
  while ( *(_WORD *)(a3 + 2 * v10) );
  if ( *a2 + (unsigned int)*a1 + 20 + 2 * (_DWORD)v10 <= 0xFFFE )
  {
    v11 = IopAllocateUnicodeString(&DestinationString);
    if ( v11 >= 0 )
    {
      v11 = RtlUnicodeStringPrintfEx(&DestinationString, 0LL, 0x800u, L"%wZ\\%ws\\%wZ\\%ws", a1, L"Devices", a2, a3);
      if ( v11 >= 0 )
      {
        LOBYTE(v12) = a4;
        v11 = PiOpenDirectoryWithRoot((_DWORD)a1, (unsigned int)&DestinationString, v12, 0, (__int64)&v15);
        if ( v11 < 0 )
          v7 = v15;
        else
          *a5 = v15;
      }
    }
  }
  else
  {
    v11 = -2147483643;
  }
  RtlFreeAnsiString(&DestinationString);
  if ( v7 )
    ZwClose(v7);
  return (unsigned int)v11;
}
