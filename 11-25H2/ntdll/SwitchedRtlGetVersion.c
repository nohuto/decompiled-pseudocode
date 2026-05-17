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
  __int64 v7; // rcx
  size_t v8; // rax
  _WORD v10[2]; // [rsp+30h] [rbp-38h] BYREF
  int v11; // [rsp+34h] [rbp-34h]
  const wchar_t *v12; // [rsp+38h] [rbp-30h]
  int v13; // [rsp+70h] [rbp+8h] BYREF
  int v14; // [rsp+78h] [rbp+10h] BYREF
  int v15; // [rsp+80h] [rbp+18h] BYREF
  int v16; // [rsp+88h] [rbp+20h] BYREF

  v11 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v2 = NtCurrentPeb();
  v13 = 0;
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
    *((_WORD *)a1 + 140) = RtlGetSuiteMask(255LL);
    if ( v6 == 292 )
      a1[71] = RtlGetSuiteMask(v7) & 0x1FFFF;
    *((_BYTE *)a1 + 282) = 0;
    if ( (unsigned __int8)RtlGetNtProductType(&v13) )
      *((_BYTE *)a1 + 282) = v13;
    v11 = 0;
    v12 = L"TerminalServices-RemoteConnectionManager-AllowAppServerMode";
    v8 = 2 * wcslen(L"TerminalServices-RemoteConnectionManager-AllowAppServerMode");
    if ( v8 >= 0xFFFE )
      LOWORD(v8) = -4;
    v10[0] = v8;
    v10[1] = v8 + 2;
    if ( (int)ZwQueryLicenseValue(v10, &v14, &v16, 4LL, &v15) < 0 || v16 != 1 || v14 != 4 || v15 != 4 )
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
