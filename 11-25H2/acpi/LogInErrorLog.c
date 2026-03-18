/*
 * XREFs of LogInErrorLog @ 0x14006BFC8
 * Callers:
 *     DelayedLogInErrorLog @ 0x14006BA40 (DelayedLogInErrorLog.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140041DB4 (RtlStringCchPrintfW.c)
 *     ACPIWriteEventLogEntry @ 0x140053A50 (ACPIWriteEventLogEntry.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 */

void __fastcall LogInErrorLog(char a1, unsigned int a2, unsigned int a3)
{
  int v4; // eax
  int v5; // ecx
  __int16 *v6[3]; // [rsp+30h] [rbp-78h] BYREF
  wchar_t pszDest[12]; // [rsp+48h] [rbp-60h] BYREF
  wchar_t v8[24]; // [rsp+60h] [rbp-48h] BYREF

  if ( gpBadIOErrorLogDoneList )
  {
    v4 = *((_DWORD *)gpBadIOErrorLogDoneList + a3);
    v5 = 2 - (a1 != 0);
    if ( (v4 & v5) == 0 )
    {
      *((_DWORD *)gpBadIOErrorLogDoneList + a3) = v5 | v4;
      RtlStringCchPrintfW(pszDest, 0xBuLL, L"0x%x", a2);
      RtlStringCchPrintfW(v8, 0x18uLL, L"0x%x - 0x%x");
      v6[0] = L"AMLI";
      v6[1] = (__int16 *)pszDest;
      v6[2] = (__int16 *)v8;
      ACPIWriteEventLogEntry(-(a1 != 0) - 1073414139, v6, 3u);
    }
  }
}
