/*
 * XREFs of LdrpGetModuleName @ 0x18006A990
 * Callers:
 *     LdrQueryModuleInfoFromLdrEntry32 @ 0x180069210 (LdrQueryModuleInfoFromLdrEntry32.c)
 *     LdrQueryModuleInfoFromLdrEntry @ 0x18006A600 (LdrQueryModuleInfoFromLdrEntry.c)
 * Callees:
 *     RtlReplaceSystemDirectoryInPath @ 0x180069600 (RtlReplaceSystemDirectoryInPath.c)
 *     RtlWow64GetProcessMachines @ 0x1800696C0 (RtlWow64GetProcessMachines.c)
 *     LdrpProtectedCopyMemory @ 0x18006AC40 (LdrpProtectedCopyMemory.c)
 *     RtlUnicodeStringToAnsiString @ 0x18006AF30 (RtlUnicodeStringToAnsiString.c)
 *     RtlGetNtSystemRoot @ 0x18006C630 (RtlGetNtSystemRoot.c)
 *     _wcsnicmp @ 0x180124890 (_wcsnicmp.c)
 *     ZwReadVirtualMemory @ 0x180163A00 (ZwReadVirtualMemory.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

NTSTATUS __fastcall LdrpGetModuleName(__int64 *a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int16 v4; // di
  __int64 v6; // rcx
  __int64 v8; // rdx
  __int64 (__fastcall *v10)(int, int, int, int, __int64); // rax
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
  unsigned __int16 v21[8]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v22[2]; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING SourceString; // [rsp+50h] [rbp-B0h] BYREF
  STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t String1[264]; // [rsp+70h] [rbp-90h] BYREF

  v4 = 512;
  v6 = *a1;
  if ( *(_WORD *)a2 < 0x200u )
    v4 = *(_WORD *)a2;
  v8 = *(_QWORD *)(a2 + 8);
  v10 = (__int64 (__fastcall *)(int, int, int, int, __int64))a1[1];
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  v21[0] = 0;
  v22[0] = 0LL;
  if ( v10 == RtlpQueryReadVirtualMemory )
  {
    result = ZwReadVirtualMemory(v6, v8, String1, v4, v22);
    if ( result < 0 )
      return result;
    if ( v22[0] == v4 )
      goto LABEL_6;
    result = -2147483635;
  }
  else if ( (char *)v10 == (char *)LdrpProtectedCopyMemory )
  {
    result = LdrpProtectedCopyMemory(v6, v8, String1, v4, v22);
  }
  else
  {
    result = v10(v6, v8, (int)String1, v4, (__int64)v22);
  }
  if ( result < 0 )
    return result;
  if ( v22[0] != v4 )
    return -2147483635;
LABEL_6:
  String1[256] = 0;
  if ( !a4 )
    goto LABEL_7;
  NtSystemRoot = (const wchar_t *)RtlGetNtSystemRoot();
  v18 = -1LL;
  do
    ++v18;
  while ( NtSystemRoot[v18] );
  if ( !v18 )
    return -1073741595;
  v19 = v18 - 1;
  if ( NtSystemRoot[v18 - 1] != 92 )
    v19 = v18;
  if ( !wcsnicmp(String1, NtSystemRoot, v19) && !wcsnicmp(&String1[v19], L"\\system32", 9uLL) )
  {
    if ( v19 + 16 >= 0x101 )
      return -1073741595;
    v20 = *a1;
    if ( !*a1 )
      v20 = -1LL;
    if ( (int)RtlWow64GetProcessMachines(v20, v21, 0LL) < 0 )
      return -1073741595;
    SourceString.Buffer = String1;
    SourceString.MaximumLength = v4;
    SourceString.Length = v4;
    HIDWORD(v22[0]) = *(_DWORD *)(&SourceString.MaximumLength + 1);
    LOWORD(v22[0]) = v4 - 2 * v19;
    WORD1(v22[0]) = v22[0];
    v22[1] = &String1[v19];
    if ( (int)RtlReplaceSystemDirectoryInPath((unsigned __int16 *)v22, 1u, v21[0], 0) < 0 )
      return -1073741595;
  }
LABEL_7:
  SourceString.MaximumLength = v4;
  SourceString.Buffer = String1;
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
