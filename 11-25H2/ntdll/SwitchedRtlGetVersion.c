/*
 * XREFs of SwitchedRtlGetVersion @ 0x180038AB0
 * Callers:
 *     RtlSwitchedVVI @ 0x180038630 (RtlSwitchedVVI.c)
 * Callees:
 *     SwitchedRtlGetVersion_WinBLUE @ 0x180038D20 (SwitchedRtlGetVersion_WinBLUE.c)
 *     SbSelectProcedure @ 0x180038D30 (SbSelectProcedure.c)
 *     RtlGetNtProductType @ 0x1800397D0 (RtlGetNtProductType.c)
 *     RtlGetSuiteMask @ 0x180039850 (RtlGetSuiteMask.c)
 *     RtlStringCbCopyW @ 0x1800DE4E0 (RtlStringCbCopyW.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     ZwQueryLicenseValue @ 0x180165E10 (ZwQueryLicenseValue.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SwitchedRtlGetVersion(int *a1)
{
  struct _PEB *v2; // rdi
  __int64 (*v3)(void); // rax
  int Version_WinBLUE; // eax
  wchar_t *Buffer; // r8
  int v6; // esi
  size_t v7; // rax
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-38h] BYREF
  _NT_PRODUCT_TYPE NtProductType; // [rsp+70h] [rbp+8h] BYREF
  ULONG Type; // [rsp+78h] [rbp+10h] BYREF
  ULONG ResultDataSize; // [rsp+80h] [rbp+18h] BYREF
  int Data; // [rsp+88h] [rbp+20h] BYREF

  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  Type = 0;
  ResultDataSize = 0;
  Data = 0;
  v2 = NtCurrentPeb();
  NtProductType = 0;
  a1[1] = v2->OSMajorVersion;
  a1[2] = v2->OSMinorVersion;
  a1[3] = v2->OSBuildNumber;
  a1[4] = v2->OSPlatformId;
  v3 = (__int64 (*)(void))qword_1801D0808;
  if ( qword_1801D0808
    || (v3 = (__int64 (*)(void))SbSelectProcedure(2880154539LL, 0LL, "kLsE", 0LL), (qword_1801D0808 = (__int64)v3) != 0) )
  {
    if ( v3 == SwitchedRtlGetVersion_WinBLUE )
      Version_WinBLUE = SwitchedRtlGetVersion_WinBLUE();
    else
      Version_WinBLUE = v3();
    if ( Version_WinBLUE == 1 )
    {
      a1[2] = 2;
      a1[3] = 9200;
      a1[1] = 6;
    }
    else if ( Version_WinBLUE == 2 )
    {
      a1[2] = 3;
      a1[3] = 9600;
      a1[1] = 6;
    }
  }
  Buffer = v2->CSDVersion.Buffer;
  if ( !Buffer || !*Buffer || (int)RtlStringCbCopyW(a1 + 5, 256LL, Buffer) < 0 )
    *((_WORD *)a1 + 10) = 0;
  v6 = *a1;
  if ( ((*a1 - 284) & 0xFFFFFFF7) == 0 )
  {
    *((_WORD *)a1 + 138) = HIBYTE(v2->OSCSDVersion);
    *((_WORD *)a1 + 139) = (unsigned __int8)v2->OSCSDVersion;
    *((_WORD *)a1 + 140) = RtlGetSuiteMask();
    if ( v6 == 292 )
      a1[71] = RtlGetSuiteMask() & 0x1FFFF;
    *((_BYTE *)a1 + 282) = 0;
    if ( RtlGetNtProductType(&NtProductType) )
      *((_BYTE *)a1 + 282) = NtProductType;
    *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
    ValueName.Buffer = (wchar_t *)L"TerminalServices-RemoteConnectionManager-AllowAppServerMode";
    v7 = 2 * wcslen(L"TerminalServices-RemoteConnectionManager-AllowAppServerMode");
    if ( v7 >= 0xFFFE )
      LOWORD(v7) = -4;
    ValueName.Length = v7;
    ValueName.MaximumLength = v7 + 2;
    if ( ZwQueryLicenseValue(&ValueName, &Type, &Data, 4u, &ResultDataSize) < 0
      || Data != 1
      || Type != 4
      || ResultDataSize != 4 )
    {
      *((_WORD *)a1 + 140) &= ~0x10u;
      *((_WORD *)a1 + 140) |= 0x100u;
      if ( *a1 == 292 )
      {
        a1[71] &= 0xFFFDFFEF;
        a1[71] |= 0x100u;
      }
    }
  }
  return 0LL;
}
