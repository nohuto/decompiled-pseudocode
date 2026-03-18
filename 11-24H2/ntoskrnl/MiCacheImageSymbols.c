/*
 * XREFs of MiCacheImageSymbols @ 0x140ABFD60
 * Callers:
 *     MiDriverLoadSucceeded @ 0x1406F986C (MiDriverLoadSucceeded.c)
 *     MmLoadSystemImageEx @ 0x1409C87D8 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     RtlStringCbPrintfW @ 0x14040BC90 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     RtlImageDirectoryEntryToData @ 0x14042CAF0 (RtlImageDirectoryEntryToData.c)
 *     DbgLoadImageSymbolsUnicode @ 0x1404A3FCC (DbgLoadImageSymbolsUnicode.c)
 *     _wcsnicmp @ 0x1404FE4F0 (_wcsnicmp.c)
 *     RtlGetNtSystemRoot @ 0x140A0B910 (RtlGetNtSystemRoot.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiCacheImageSymbols(__int64 a1, UNICODE_STRING *a2, __int64 a3)
{
  __int64 *v6; // r14
  wchar_t *Pool; // rdi
  char *NtSystemRoot; // rax
  NTSTATUS v9; // eax
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-50h] BYREF
  int v11; // [rsp+A8h] [rbp+20h] BYREF

  v6 = (__int64 *)(a1 + 48);
  *(_QWORD *)&DestinationString.Length = a1 + 48;
  if ( RtlImageDirectoryEntryToData(*(_QWORD *)(a1 + 48), 1, 6u, &v11) )
  {
    DestinationString = 0LL;
    Pool = (wchar_t *)MiAllocatePool(0x100uLL, 0x100uLL, 1850502477);
    if ( Pool )
    {
      if ( a2->Length <= 0x16u || wcsnicmp(a2->Buffer, L"\\SystemRoot", 0xBuLL) )
      {
        v9 = RtlStringCbPrintfW(Pool, 0x100uLL, L"%wZ", a3);
      }
      else
      {
        DestinationString = *a2;
        DestinationString.Buffer = a2->Buffer + 11;
        DestinationString.Length -= 22;
        NtSystemRoot = RtlGetNtSystemRoot();
        v9 = RtlStringCbPrintfW(Pool, 0x100uLL, L"%ws%wZ", NtSystemRoot + 4, &DestinationString);
      }
      if ( v9 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, Pool);
        if ( (unsigned int)DbgLoadImageSymbolsUnicode(&DestinationString, *v6) == 1 )
          *(_DWORD *)(a1 + 104) |= 0x100000u;
      }
      ExFreePoolWithTag(Pool, 0);
    }
  }
}
