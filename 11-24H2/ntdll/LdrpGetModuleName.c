/*
 * XREFs of LdrpGetModuleName @ 0x1800B0FD0
 * Callers:
 *     LdrQueryModuleInfoFromLdrEntry32 @ 0x1800AF850 (LdrQueryModuleInfoFromLdrEntry32.c)
 *     LdrQueryModuleInfoFromLdrEntry @ 0x1800B0C40 (LdrQueryModuleInfoFromLdrEntry.c)
 * Callees:
 *     RtlReplaceSystemDirectoryInPath @ 0x1800AFC40 (RtlReplaceSystemDirectoryInPath.c)
 *     RtlWow64GetProcessMachines @ 0x1800AFD00 (RtlWow64GetProcessMachines.c)
 *     LdrpProtectedCopyMemory @ 0x1800B1280 (LdrpProtectedCopyMemory.c)
 *     RtlUnicodeStringToAnsiString @ 0x1800B1570 (RtlUnicodeStringToAnsiString.c)
 *     RtlGetNtSystemRoot @ 0x1800B2C70 (RtlGetNtSystemRoot.c)
 *     _wcsnicmp @ 0x180122DB0 (_wcsnicmp.c)
 *     ZwReadVirtualMemory @ 0x180162470 (ZwReadVirtualMemory.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

NTSTATUS __fastcall LdrpGetModuleName(__int64 *a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int16 v4; // di
  __int64 v6; // rcx
  __int64 v8; // rdx
  __int64 (__fastcall *v10)(int, int, int, int, __int64); // rax
  NTSTATUS result; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  char *v15; // rax
  char *v16; // rcx
  __int16 v17; // dx
  __int16 v18; // r9
  bool v19; // zf
  const wchar_t *NtSystemRoot; // rax
  __int64 v21; // rcx
  size_t v22; // rbx
  __int64 v23; // rcx
  unsigned __int16 v24[8]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v25[2]; // [rsp+40h] [rbp-C0h] BYREF
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
  v24[0] = 0;
  v25[0] = 0LL;
  if ( v10 == RtlpQueryReadVirtualMemory )
  {
    result = ZwReadVirtualMemory(v6, v8, String1, v4, v25);
    if ( result < 0 )
      return result;
    if ( v25[0] == v4 )
      goto LABEL_6;
    result = -2147483635;
  }
  else if ( (char *)v10 == (char *)LdrpProtectedCopyMemory )
  {
    result = LdrpProtectedCopyMemory(v6, v8, String1, v4, v25);
  }
  else
  {
    result = v10(v6, v8, (int)String1, v4, (__int64)v25);
  }
  if ( result < 0 )
    return result;
  if ( v25[0] != v4 )
    return -2147483635;
LABEL_6:
  String1[256] = 0;
  if ( !a4 )
    goto LABEL_7;
  NtSystemRoot = (const wchar_t *)RtlGetNtSystemRoot(v13, v12, v14);
  v21 = -1LL;
  do
    ++v21;
  while ( NtSystemRoot[v21] );
  if ( !v21 )
    return -1073741595;
  v22 = v21 - 1;
  if ( NtSystemRoot[v21 - 1] != 92 )
    v22 = v21;
  if ( !wcsnicmp(String1, NtSystemRoot, v22) && !wcsnicmp(&String1[v22], L"\\system32", 9uLL) )
  {
    if ( v22 + 16 >= 0x101 )
      return -1073741595;
    v23 = *a1;
    if ( !*a1 )
      v23 = -1LL;
    if ( (int)RtlWow64GetProcessMachines(v23, v24, 0LL) < 0 )
      return -1073741595;
    SourceString.Buffer = String1;
    SourceString.MaximumLength = v4;
    SourceString.Length = v4;
    HIDWORD(v25[0]) = *(_DWORD *)(&SourceString.MaximumLength + 1);
    LOWORD(v25[0]) = v4 - 2 * v22;
    WORD1(v25[0]) = v25[0];
    v25[1] = &String1[v22];
    if ( (int)RtlReplaceSystemDirectoryInPath((unsigned __int16 *)v25, 1u, v24[0], 0) < 0 )
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
    v15 = &DestinationString.Buffer[DestinationString.Length];
    v16 = v15;
    v17 = LOWORD(DestinationString.Buffer) + DestinationString.Length;
    while ( 1 )
    {
      v18 = (__int16)v16;
      if ( v15 <= DestinationString.Buffer )
        break;
      v19 = *(v16 - 1) == 92;
      v15 = v16 - 1;
      v16 = v15;
      v17 = (__int16)v15;
      if ( v19 )
      {
        v17 = v18;
        break;
      }
    }
    *(_WORD *)(a3 + 38) = v17 - LOWORD(DestinationString.Buffer);
    return 0;
  }
  return result;
}
