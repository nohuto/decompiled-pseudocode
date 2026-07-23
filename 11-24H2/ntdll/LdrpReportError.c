/*
 * XREFs of LdrpReportError @ 0x180032720
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x1800319F0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpProcessWork @ 0x18004E860 (LdrpProcessWork.c)
 *     LdrpSnapModule @ 0x18006CB10 (LdrpSnapModule.c)
 * Callees:
 *     RtlAnsiStringToUnicodeString @ 0x180039960 (RtlAnsiStringToUnicodeString.c)
 *     LdrpLogInternal @ 0x180040780 (LdrpLogInternal.c)
 *     RtlRaiseStatus @ 0x1800417E0 (RtlRaiseStatus.c)
 *     StringCbPrintfW @ 0x1800813B8 (StringCbPrintfW.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     NtRaiseHardError @ 0x180162EE0 (NtRaiseHardError.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     strlen @ 0x1801660A0 (strlen.c)
 */

void __fastcall LdrpReportError(__int128 *a1, char *a2, int a3)
{
  __int64 v3; // rdi
  __int128 *v5; // rsi
  unsigned __int8 v6; // r15
  size_t v7; // rax
  ULONG v8; // r14d
  ULONG v9; // r12d
  size_t v10; // rax
  size_t v11; // rax
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  __int64 Response; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v14; // [rsp+58h] [rbp-A8h] BYREF
  ANSI_STRING SourceString; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 Parameters; // [rsp+78h] [rbp-88h] BYREF
  wchar_t pszDest[8]; // [rsp+90h] [rbp-70h] BYREF
  char v18; // [rsp+A0h] [rbp-60h] BYREF

  v3 = a3;
  *(_QWORD *)&DestinationString.Length = 0LL;
  LODWORD(Response) = 0;
  v5 = a1;
  v14 = 0LL;
  if ( a1 )
  {
    v6 = 1;
  }
  else
  {
    DWORD1(v14) = 0;
    *((_QWORD *)&v14 + 1) = L"Unknown";
    v10 = 2 * wcslen(L"Unknown");
    v5 = &v14;
    if ( v10 >= 0xFFFE )
      LOWORD(v10) = -4;
    LOWORD(v14) = v10;
    WORD1(v14) = v10 + 2;
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
      DestinationString.Buffer = (wchar_t *)&v18;
      DestinationString.MaximumLength = 256;
      if ( RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 0) < 0 )
        DestinationString.Length = 0;
      v8 = 3;
      v9 = 3;
      LdrpLogInternal(
        "minkernel\\ldr\\ldrutil.c",
        890LL,
        "LdrpReportError",
        v6 ^ 1u,
        "Locating export \"%wZ\" for DLL \"%wZ\" failed with status: 0x%08lx.\n",
        &DestinationString,
        v5,
        -1073741511,
        *(_QWORD *)&DestinationString.Length,
        DestinationString.Buffer,
        Response,
        v14,
        *(_QWORD *)&SourceString.Length,
        SourceString.Buffer,
        &DestinationString,
        v5,
        v3);
      break;
    case 0xC0000138:
      StringCbPrintfW(pszDest, 0xEuLL, L"#%d", (unsigned __int16)a2);
      *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
      DestinationString.Buffer = pszDest;
      v11 = 2 * wcslen(pszDest);
      v9 = 2;
      Parameters = (unsigned __int64)a2;
      if ( v11 >= 0xFFFE )
        LOWORD(v11) = -4;
      DestinationString.Length = v11;
      DestinationString.MaximumLength = v11 + 2;
      v8 = 3;
      LdrpLogInternal(
        "minkernel\\ldr\\ldrutil.c",
        864LL,
        "LdrpReportError",
        v6 ^ 1u,
        "Locating export at ordinal %d for DLL \"%wZ\" failed with status: 0x%08lx.\n",
        (_DWORD)a2,
        v5,
        -1073741512,
        *(_QWORD *)&DestinationString.Length,
        DestinationString.Buffer,
        Response,
        v14,
        *(_QWORD *)&SourceString.Length,
        SourceString.Buffer,
        Parameters,
        v5,
        v3);
      break;
    case 0xC0000135:
      v9 = 1;
      *(_QWORD *)&DestinationString.Length = 0LL;
      DestinationString.Buffer = 0LL;
      v8 = 1;
      Parameters = (unsigned __int64)v5;
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
    if ( NtRaiseHardError(v3, v8, v9, &Parameters, 1u, (PULONG)&Response) >= 0 && LdrInitState != 3 )
      ++LdrpFatalHardErrorCount;
    if ( (unsigned int)(v3 + 1073741512) <= 1 )
      RtlRaiseStatus(v3);
  }
}
