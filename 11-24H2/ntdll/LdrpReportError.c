/*
 * XREFs of LdrpReportError @ 0x180005D20
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x180004FF0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpProcessWork @ 0x180021E60 (LdrpProcessWork.c)
 *     LdrpSnapModule @ 0x180056F30 (LdrpSnapModule.c)
 * Callees:
 *     RtlAnsiStringToUnicodeString @ 0x18000CF60 (RtlAnsiStringToUnicodeString.c)
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     RtlRaiseStatus @ 0x180014DE0 (RtlRaiseStatus.c)
 *     StringCbPrintfW @ 0x1800B4B18 (StringCbPrintfW.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 *     NtRaiseHardError @ 0x180164B20 (NtRaiseHardError.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     strlen @ 0x180167CE0 (strlen.c)
 */

void __fastcall LdrpReportError(__int128 *a1, char *a2, int a3)
{
  __int64 v3; // rdi
  __int128 *v5; // rsi
  unsigned __int8 v6; // r15
  size_t v7; // rax
  unsigned int v8; // r14d
  unsigned int v9; // r12d
  char *Format; // rax
  int v11; // edx
  size_t v12; // rax
  size_t v13; // rax
  UNICODE_STRING *p_DestinationString; // [rsp+28h] [rbp-D8h]
  __int128 *v15; // [rsp+30h] [rbp-D0h]
  int v16; // [rsp+38h] [rbp-C8h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  int v18; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v19; // [rsp+58h] [rbp-A8h] BYREF
  STRING SourceString; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v21[3]; // [rsp+78h] [rbp-88h] BYREF
  wchar_t pszDest[8]; // [rsp+90h] [rbp-70h] BYREF
  char v23; // [rsp+A0h] [rbp-60h] BYREF

  v3 = a3;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v18 = 0;
  v5 = a1;
  v19 = 0LL;
  if ( a1 )
  {
    v6 = 1;
  }
  else
  {
    DWORD1(v19) = 0;
    *((_QWORD *)&v19 + 1) = L"Unknown";
    v12 = 2 * wcslen(L"Unknown");
    v5 = &v19;
    if ( v12 >= 0xFFFE )
      LOWORD(v12) = -4;
    LOWORD(v19) = v12;
    WORD1(v19) = v12 + 2;
    v6 = 0;
  }
  switch ( (_DWORD)v3 )
  {
    case 0xC0000139:
      *(_QWORD *)&SourceString.Length = 0LL;
      SourceString.Buffer = a2;
      if ( a2 )
      {
        v7 = strlen(a2);
        if ( v7 >= 0xFFFF )
          LOWORD(v7) = -2;
        SourceString.Length = v7;
        SourceString.MaximumLength = v7 + 1;
      }
      DestinationString.Buffer = (wchar_t *)&v23;
      DestinationString.MaximumLength = 256;
      if ( RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 0) < 0 )
        DestinationString.Length = 0;
      v16 = -1073741511;
      v21[0] = &DestinationString;
      v8 = 3;
      v15 = v5;
      p_DestinationString = &DestinationString;
      v9 = 3;
      Format = "Locating export \"%wZ\" for DLL \"%wZ\" failed with status: 0x%08lx.\n";
      v11 = 890;
LABEL_11:
      v21[1] = v5;
      v21[2] = v3;
      LdrpLogInternal(
        (int)"minkernel\\ldr\\ldrutil.c",
        v11,
        (int)"LdrpReportError",
        v6 ^ 1,
        Format,
        (char)p_DestinationString);
      break;
    case 0xC0000138:
      StringCbPrintfW(pszDest, 0xEuLL, L"#%d", (unsigned __int16)a2);
      *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
      DestinationString.Buffer = pszDest;
      v13 = 2 * wcslen(pszDest);
      v16 = -1073741512;
      v15 = v5;
      v9 = 2;
      v21[0] = a2;
      if ( v13 >= 0xFFFE )
        LOWORD(v13) = -4;
      LOBYTE(p_DestinationString) = (_BYTE)a2;
      DestinationString.Length = v13;
      v11 = 864;
      DestinationString.MaximumLength = v13 + 2;
      v8 = 3;
      Format = "Locating export at ordinal %d for DLL \"%wZ\" failed with status: 0x%08lx.\n";
      goto LABEL_11;
    case 0xC0000135:
      v9 = 1;
      *(_QWORD *)&DestinationString.Length = 0LL;
      DestinationString.Buffer = 0LL;
      v8 = 1;
      v21[0] = v5;
      break;
    default:
      *(_QWORD *)&DestinationString.Length = 0LL;
      DestinationString.Buffer = 0LL;
      v8 = 3;
      v9 = 3;
      break;
  }
  if ( v6 )
  {
    if ( (int)NtRaiseHardError((unsigned int)v3, v8, v9, v21, 1, &v18, v15, v16, *(_QWORD *)&DestinationString.Length) >= 0
      && LdrInitState != 3 )
    {
      ++LdrpFatalHardErrorCount;
    }
    if ( (unsigned int)(v3 + 1073741512) <= 1 )
      RtlRaiseStatus((unsigned int)v3);
  }
}
