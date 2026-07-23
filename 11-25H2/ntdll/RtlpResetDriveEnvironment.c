/*
 * XREFs of RtlpResetDriveEnvironment @ 0x1800AB008
 * Callers:
 *     RtlpReferenceCurrentDirectory @ 0x1800A1730 (RtlpReferenceCurrentDirectory.c)
 *     RtlpCheckRelativeDrive @ 0x1800AEF70 (RtlpCheckRelativeDrive.c)
 * Callees:
 *     RtlSetEnvironmentVar @ 0x1800AB3E0 (RtlSetEnvironmentVar.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RtlpResetDriveEnvironment(wchar_t a1)
{
  size_t v2; // rax
  unsigned __int64 v3; // rbx
  size_t v4; // rax
  wchar_t Value; // [rsp+30h] [rbp-20h] BYREF
  int v7; // [rsp+32h] [rbp-1Eh]
  __int16 v8; // [rsp+36h] [rbp-1Ah]
  wchar_t String[2]; // [rsp+38h] [rbp-18h] BYREF
  int v10; // [rsp+3Ch] [rbp-14h]

  String[1] = a1;
  v10 = 58;
  String[0] = 61;
  v2 = 2 * wcslen(String);
  Value = a1;
  v7 = 6029370;
  v8 = 0;
  if ( v2 >= 0xFFFE )
    LOWORD(v2) = -4;
  v3 = (unsigned __int16)v2;
  v4 = 2 * wcslen(&Value);
  if ( v4 >= 0xFFFE )
    LOWORD(v4) = -4;
  return RtlSetEnvironmentVar(0LL, String, v3 >> 1, &Value, (unsigned __int64)(unsigned __int16)v4 >> 1);
}
