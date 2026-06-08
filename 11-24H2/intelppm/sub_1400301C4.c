/*
 * XREFs of sub_1400301C4 @ 0x1400301C4
 * Callers:
 *     sub_140030B50 @ 0x140030B50 (sub_140030B50.c)
 *     sub_14004903C @ 0x14004903C (sub_14004903C.c)
 *     sub_14004A99C @ 0x14004A99C (sub_14004A99C.c)
 * Callees:
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1400301C4(bool *a1, bool *a2, bool *a3)
{
  bool v6; // bp
  bool v7; // di
  bool v8; // bl
  NTSTATUS result; // eax
  __int128 SystemInformation; // [rsp+20h] [rbp-48h] BYREF

  SystemInformation = 0LL;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  result = ZwQuerySystemInformation(SystemHypervisorInformation, &SystemInformation, 0x10u, 0LL);
  if ( result >= 0 )
  {
    result = DWORD2(SystemInformation);
    v7 = (WORD4(SystemInformation) & 0x400) != 0LL;
    v8 = (*((_QWORD *)&SystemInformation + 1) & 0x20000LL) != 0;
    v6 = (DWORD2(SystemInformation) & 0x10000000) != 0LL;
  }
  if ( a1 )
    *a1 = v7;
  if ( a2 )
    *a2 = v8;
  if ( a3 )
    *a3 = v6;
  return result;
}
