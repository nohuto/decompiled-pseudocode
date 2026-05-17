/*
 * XREFs of RtlGetVersion @ 0x180039460
 * Callers:
 *     SbSelectProcedure @ 0x180038D30 (SbSelectProcedure.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x180039D50 (RtlpGetDeviceFamilyInfoEnum.c)
 *     RtlVerifyVersionInfo @ 0x1800EC1C0 (RtlVerifyVersionInfo.c)
 * Callees:
 *     RtlGetNtProductType @ 0x1800397D0 (RtlGetNtProductType.c)
 *     RtlGetSuiteMask @ 0x180039850 (RtlGetSuiteMask.c)
 *     RtlAnsiStringToUnicodeString @ 0x18004BE00 (RtlAnsiStringToUnicodeString.c)
 *     RtlStringCbCopyW @ 0x1800DE4E0 (RtlStringCbCopyW.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     ZwQueryLicenseValue @ 0x180165E10 (ZwQueryLicenseValue.c)
 *     NtQuerySystemInformationEx @ 0x180165FD0 (NtQuerySystemInformationEx.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     strlen @ 0x180169260 (strlen.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlGetVersion(int *a1)
{
  unsigned int v1; // edi
  struct _PEB *v3; // r10
  wchar_t *Buffer; // r8
  int v5; // esi
  __int64 result; // rax
  __int64 v7; // rcx
  size_t v8; // rax
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  char *p_Str; // rcx
  size_t v16; // rax
  NTSTATUS v17; // eax
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+34h] [rbp-CCh] BYREF
  int v20; // [rsp+38h] [rbp-C8h] BYREF
  int v21; // [rsp+3Ch] [rbp-C4h] BYREF
  int v22; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v23[2]; // [rsp+48h] [rbp-B8h] BYREF
  int v24; // [rsp+4Ch] [rbp-B4h]
  const wchar_t *v25; // [rsp+50h] [rbp-B0h]
  STRING SourceString; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v28[2]; // [rsp+80h] [rbp-80h] BYREF
  __int16 v29; // [rsp+82h] [rbp-7Eh]
  int v30; // [rsp+84h] [rbp-7Ch]
  int v31; // [rsp+88h] [rbp-78h]
  int v32; // [rsp+8Ch] [rbp-74h]
  int v33; // [rsp+90h] [rbp-70h]
  char Str; // [rsp+94h] [rbp-6Ch] BYREF
  char v35; // [rsp+114h] [rbp+14h] BYREF
  char v36; // [rsp+194h] [rbp+94h] BYREF
  char v37; // [rsp+214h] [rbp+114h] BYREF
  char v38; // [rsp+294h] [rbp+194h] BYREF
  char v39; // [rsp+2AEh] [rbp+1AEh] BYREF
  int v40; // [rsp+2C0h] [rbp+1C0h]

  v1 = 0;
  v19 = 0;
  v24 = 0;
  v20 = 0;
  v18 = 0;
  v21 = 0;
  memset_thunk_772440563353939046(v28, 0, 0x244uLL);
  v3 = NtCurrentPeb();
  DestinationString = 0LL;
  a1[1] = v3->OSMajorVersion;
  a1[2] = v3->OSMinorVersion;
  a1[3] = v3->OSBuildNumber;
  a1[4] = v3->OSPlatformId;
  Buffer = v3->CSDVersion.Buffer;
  if ( !Buffer || !*Buffer || (int)RtlStringCbCopyW(a1 + 5, 256LL, Buffer) < 0 )
    *((_WORD *)a1 + 10) = 0;
  v5 = *a1;
  if ( ((*a1 - 284) & 0xFFFFFFE7) != 0 || v5 == 308 )
    return 0LL;
  *((_WORD *)a1 + 138) = HIBYTE(v3->OSCSDVersion);
  *((_WORD *)a1 + 139) = (unsigned __int8)v3->OSCSDVersion;
  *((_WORD *)a1 + 140) = RtlGetSuiteMask(255LL);
  if ( v5 == 292 )
    a1[71] = RtlGetSuiteMask(v7) & 0x1FFFF;
  *((_BYTE *)a1 + 282) = 0;
  if ( (unsigned __int8)RtlGetNtProductType(&v19) )
    *((_BYTE *)a1 + 282) = v19;
  v24 = 0;
  v25 = L"TerminalServices-RemoteConnectionManager-AllowAppServerMode";
  v8 = 2 * wcslen(L"TerminalServices-RemoteConnectionManager-AllowAppServerMode");
  if ( v8 >= 0xFFFE )
    LOWORD(v8) = -4;
  v23[0] = v8;
  v23[1] = v8 + 2;
  if ( (int)ZwQueryLicenseValue(v23, &v20, &v21, 4LL, &v18) < 0 || v21 != 1 || v20 != 4 || v18 != 4 )
  {
    *((_WORD *)a1 + 140) &= ~0x10u;
    *((_WORD *)a1 + 140) |= 0x100u;
    if ( *a1 == 292 )
      a1[71] = a1[71] & 0xFFFDFEEF | 0x100;
  }
  if ( *a1 != 300 )
    return 0LL;
  v22 = a1[73] & 0xFFF;
  result = ((__int64 (__fastcall *)(__int64, int *, __int64, _BYTE *, int, int *))NtQuerySystemInformationEx)(
             222LL,
             &v22,
             4LL,
             v28,
             580,
             &v18);
  if ( (int)result < 0 )
    return result;
  v9 = *((unsigned __int16 *)a1 + 146);
  a1[1] = v30;
  a1[2] = v31;
  a1[3] = v32;
  a1[4] = v33;
  v10 = v9 >> 12;
  *((_WORD *)a1 + 147) = v29;
  a1[74] = v40;
  if ( !v10 )
  {
    p_Str = &Str;
    goto LABEL_31;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    p_Str = &v38;
    goto LABEL_31;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    p_Str = &v35;
    goto LABEL_31;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    p_Str = &v39;
    goto LABEL_31;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    p_Str = &v36;
    goto LABEL_31;
  }
  if ( v14 != 1 )
    return 0LL;
  p_Str = &v37;
LABEL_31:
  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  SourceString.Buffer = p_Str;
  v16 = strlen(p_Str);
  DestinationString.MaximumLength = 256;
  if ( v16 >= 0xFFFF )
    LOWORD(v16) = -2;
  SourceString.Length = v16;
  DestinationString.Buffer = (wchar_t *)(a1 + 5);
  SourceString.MaximumLength = v16 + 1;
  v17 = RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 0);
  if ( v17 < 0 )
    return (unsigned int)v17;
  return v1;
}
