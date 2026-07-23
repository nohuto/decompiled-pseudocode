/*
 * XREFs of LdrpGetModuleName @ 0x18007D870
 * Callers:
 *     LdrQueryModuleInfoFromLdrEntry32 @ 0x18007C0F0 (LdrQueryModuleInfoFromLdrEntry32.c)
 *     LdrQueryModuleInfoFromLdrEntry @ 0x18007D4E0 (LdrQueryModuleInfoFromLdrEntry.c)
 * Callees:
 *     RtlReplaceSystemDirectoryInPath @ 0x18007C4E0 (RtlReplaceSystemDirectoryInPath.c)
 *     RtlWow64GetProcessMachines @ 0x18007C5A0 (RtlWow64GetProcessMachines.c)
 *     LdrpProtectedCopyMemory @ 0x18007DB20 (LdrpProtectedCopyMemory.c)
 *     RtlUnicodeStringToAnsiString @ 0x18007DE10 (RtlUnicodeStringToAnsiString.c)
 *     RtlGetNtSystemRoot @ 0x18007F510 (RtlGetNtSystemRoot.c)
 *     _wcsnicmp @ 0x180120FE0 (_wcsnicmp.c)
 *     ZwReadVirtualMemory @ 0x180160830 (ZwReadVirtualMemory.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

NTSTATUS __fastcall LdrpGetModuleName(__int64 *a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int16 v4; // di
  void *v6; // rcx
  void *v8; // rdx
  __int64 (__fastcall *v10)(int, int, int, int, PSIZE_T); // rax
  NTSTATUS result; // eax
  char *v12; // rax
  char *v13; // rcx
  __int16 v14; // dx
  __int16 v15; // r9
  bool v16; // zf
  const wchar_t *NtSystemRoot; // rax
  __int64 v18; // rcx
  size_t v19; // rbx
  __int64 v20; // rcx
  USHORT ProcessMachine[8]; // [rsp+30h] [rbp-D0h] BYREF
  ULONG_PTR NumberOfBytesRead[2]; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING SourceString; // [rsp+50h] [rbp-B0h] BYREF
  _STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t Buffer[264]; // [rsp+70h] [rbp-90h] BYREF

  v4 = 512;
  v6 = (void *)*a1;
  if ( *(_WORD *)a2 < 0x200u )
    v4 = *(_WORD *)a2;
  v8 = *(void **)(a2 + 8);
  v10 = (__int64 (__fastcall *)(int, int, int, int, PSIZE_T))a1[1];
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  ProcessMachine[0] = 0;
  NumberOfBytesRead[0] = 0LL;
  if ( v10 == RtlpQueryReadVirtualMemory )
  {
    result = ZwReadVirtualMemory(v6, v8, Buffer, v4, NumberOfBytesRead);
    if ( result < 0 )
      return result;
    if ( NumberOfBytesRead[0] == v4 )
      goto LABEL_6;
    result = -2147483635;
  }
  else if ( (char *)v10 == (char *)LdrpProtectedCopyMemory )
  {
    result = LdrpProtectedCopyMemory(v6, v8, Buffer, v4, NumberOfBytesRead);
  }
  else
  {
    result = v10((int)v6, (int)v8, (int)Buffer, v4, NumberOfBytesRead);
  }
  if ( result < 0 )
    return result;
  if ( NumberOfBytesRead[0] != v4 )
    return -2147483635;
LABEL_6:
  Buffer[256] = 0;
  if ( !a4 )
    goto LABEL_7;
  NtSystemRoot = RtlGetNtSystemRoot();
  v18 = -1LL;
  do
    ++v18;
  while ( NtSystemRoot[v18] );
  if ( !v18 )
    return -1073741595;
  v19 = v18 - 1;
  if ( NtSystemRoot[v18 - 1] != 92 )
    v19 = v18;
  if ( !wcsnicmp(Buffer, NtSystemRoot, v19) && !wcsnicmp(&Buffer[v19], L"\\system32", 9uLL) )
  {
    if ( v19 + 16 >= 0x101 )
      return -1073741595;
    v20 = *a1;
    if ( !*a1 )
      v20 = -1LL;
    if ( RtlWow64GetProcessMachines((HANDLE)v20, ProcessMachine, 0LL) < 0 )
      return -1073741595;
    SourceString.Buffer = Buffer;
    SourceString.MaximumLength = v4;
    SourceString.Length = v4;
    HIDWORD(NumberOfBytesRead[0]) = *(_DWORD *)(&SourceString.MaximumLength + 1);
    LOWORD(NumberOfBytesRead[0]) = v4 - 2 * v19;
    WORD1(NumberOfBytesRead[0]) = NumberOfBytesRead[0];
    NumberOfBytesRead[1] = (ULONG_PTR)&Buffer[v19];
    if ( (RtlReplaceSystemDirectoryInPath((PUNICODE_STRING)NumberOfBytesRead, 1u, ProcessMachine[0], 0) & 0x80000000) != 0 )
      return -1073741595;
  }
LABEL_7:
  SourceString.MaximumLength = v4;
  SourceString.Buffer = Buffer;
  SourceString.Length = v4;
  DestinationString.Buffer = (char *)(a3 + 40);
  *(_DWORD *)&DestinationString.Length = 0x1000000;
  result = RtlUnicodeStringToAnsiString(&DestinationString, &SourceString, 0);
  if ( result >= 0 )
  {
    v12 = &DestinationString.Buffer[DestinationString.Length];
    v13 = v12;
    v14 = LOWORD(DestinationString.Buffer) + DestinationString.Length;
    while ( 1 )
    {
      v15 = (__int16)v13;
      if ( v12 <= DestinationString.Buffer )
        break;
      v16 = *(v13 - 1) == 92;
      v12 = v13 - 1;
      v13 = v12;
      v14 = (__int16)v12;
      if ( v16 )
      {
        v14 = v15;
        break;
      }
    }
    *(_WORD *)(a3 + 38) = v14 - LOWORD(DestinationString.Buffer);
    return 0;
  }
  return result;
}
