/*
 * XREFs of ?ndisPcwGetECInstanceName@@YAJPEAXKPEAU_UNICODE_STRING@@@Z @ 0x140148AFC
 * Callers:
 *     ?NdisPDStartEC@@YAJPEAUPD_CLIENT_HANDLE__@@PEAPEAUPD_EC_HANDLE__@@@Z @ 0x140147100 (-NdisPDStartEC@@YAJPEAUPD_CLIENT_HANDLE__@@PEAPEAUPD_EC_HANDLE__@@@Z.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1400830E0 (-RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 */

__int64 __fastcall ndisPcwGetECInstanceName(char *a1, int a2, struct _UNICODE_STRING *a3)
{
  char *v4; // r9
  __int64 result; // rax
  unsigned int v6; // ebx
  WCHAR SourceString[264]; // [rsp+30h] [rbp-228h] BYREF

  if ( *a1 == 3 )
  {
    v4 = a1 + 808;
  }
  else if ( *a1 == 4 )
  {
    v4 = a1 + 344;
  }
  else
  {
    v4 = 0LL;
  }
  result = RtlStringCbPrintfW((wchar_t *)SourceString, 0x202uLL, L"%wZ: EC %u", v4, a2);
  v6 = result;
  if ( (int)result >= 0 )
  {
    if ( !RtlCreateUnicodeString(a3, SourceString) )
      return (unsigned int)-1073741670;
    return v6;
  }
  return result;
}
