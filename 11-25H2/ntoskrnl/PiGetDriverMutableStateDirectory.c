/*
 * XREFs of PiGetDriverMutableStateDirectory @ 0x140713AB8
 * Callers:
 *     IoGetDriverDirectory @ 0x140A54D40 (IoGetDriverDirectory.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintfEx @ 0x14049FEC0 (RtlUnicodeStringPrintfEx.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     PiOpenDirectoryWithRoot @ 0x140713C18 (PiOpenDirectoryWithRoot.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     IopAllocateUnicodeString @ 0x14096AEDC (IopAllocateUnicodeString.c)
 *     PiGetStateRootPath @ 0x1409B2F90 (PiGetStateRootPath.c)
 */

__int64 __fastcall PiGetDriverMutableStateDirectory(unsigned __int16 *a1, __int64 a2, char a3, _QWORD *a4)
{
  void *v6; // rdi
  NTSTATUS StateRootPath; // ebx
  __int64 v10; // rcx
  int v11; // r8d
  int v12; // r9d
  void *v14; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-28h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-18h] BYREF

  v14 = 0LL;
  DestinationString = 0LL;
  v6 = 0LL;
  UnicodeString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  StateRootPath = PiGetStateRootPath(
                    L"Win32ServiceStateRoot",
                    L"\\SystemRoot\\ServiceState",
                    LocationTypeFileSystem,
                    &DestinationString);
  if ( StateRootPath >= 0 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( *(_WORD *)(a2 + 2 * v10) );
    if ( DestinationString.Length + (unsigned int)*a1 + 4 + 2 * (_DWORD)v10 <= 0xFFFE )
    {
      StateRootPath = IopAllocateUnicodeString(&UnicodeString);
      if ( StateRootPath >= 0 )
      {
        StateRootPath = RtlUnicodeStringPrintfEx(
                          &UnicodeString,
                          0LL,
                          0x800u,
                          L"%wZ\\%wZ\\%ws",
                          &DestinationString,
                          a1,
                          a2);
        if ( StateRootPath >= 0 )
        {
          LOBYTE(v12) = a3;
          LOBYTE(v11) = 1;
          StateRootPath = PiOpenDirectoryWithRoot(
                            (unsigned int)&DestinationString,
                            (unsigned int)&UnicodeString,
                            v11,
                            v12,
                            (__int64)&v14);
          if ( StateRootPath < 0 )
            v6 = v14;
          else
            *a4 = v14;
        }
      }
    }
    else
    {
      StateRootPath = -2147483643;
    }
  }
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&UnicodeString);
  if ( v6 )
    ZwClose(v6);
  return (unsigned int)StateRootPath;
}
