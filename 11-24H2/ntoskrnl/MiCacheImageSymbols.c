/*
 * XREFs of MiCacheImageSymbols @ 0x140ABAE40
 * Callers:
 *     MiDriverLoadSucceeded @ 0x1406F74AC (MiDriverLoadSucceeded.c)
 *     MmLoadSystemImageEx @ 0x1409B7B70 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     RtlImageDirectoryEntryToData @ 0x1402EEB70 (RtlImageDirectoryEntryToData.c)
 *     RtlStringCbPrintfW @ 0x140404170 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     DbgLoadImageSymbolsUnicode @ 0x14049ED5C (DbgLoadImageSymbolsUnicode.c)
 *     _wcsnicmp @ 0x1404FBDB0 (_wcsnicmp.c)
 *     RtlGetNtSystemRoot @ 0x140A0AB50 (RtlGetNtSystemRoot.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiCacheImageSymbols(__int64 a1, UNICODE_STRING *a2, __int64 a3)
{
  __int64 *v6; // r14
  wchar_t *Pool; // rdi
  PWSTR NtSystemRoot; // rax
  NTSTATUS v9; // eax
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-50h] BYREF
  ULONG v11; // [rsp+A8h] [rbp+20h] BYREF

  v6 = (__int64 *)(a1 + 48);
  *(_QWORD *)&DestinationString.Length = a1 + 48;
  if ( RtlImageDirectoryEntryToData(*(PVOID *)(a1 + 48), 1u, 6u, &v11) )
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
        v9 = RtlStringCbPrintfW(Pool, 0x100uLL, L"%ws%wZ", NtSystemRoot + 2, &DestinationString);
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
