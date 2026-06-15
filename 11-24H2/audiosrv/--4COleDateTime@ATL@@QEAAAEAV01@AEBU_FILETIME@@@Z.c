/*
 * XREFs of ??4COleDateTime@ATL@@QEAAAEAV01@AEBU_FILETIME@@@Z @ 0x1800C09C0
 * Callers:
 *     ?GetLastActivation@CAudioSession@@UEAAJPEAN@Z @ 0x1800C1FB0 (-GetLastActivation@CAudioSession@@UEAAJPEAN@Z.c)
 *     ?GetLastInactivation@CAudioSession@@UEAAJPEAN@Z @ 0x1800C2000 (-GetLastInactivation@CAudioSession@@UEAAJPEAN@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ?AtlConvertSystemTimeToVariantTime@ATL@@YAHAEBU_SYSTEMTIME@@PEAN@Z @ 0x1800C1194 (-AtlConvertSystemTimeToVariantTime@ATL@@YAHAEBU_SYSTEMTIME@@PEAN@Z.c)
 */

double *__fastcall ATL::COleDateTime::operator=(double *a1, FILETIME *lpFileTime)
{
  int v3; // ebx
  struct _FILETIME LocalFileTime; // [rsp+20h] [rbp-28h] BYREF
  struct _SYSTEMTIME SystemTime; // [rsp+28h] [rbp-20h] BYREF

  v3 = 0;
  LocalFileTime = 0LL;
  SystemTime = 0LL;
  if ( !FileTimeToLocalFileTime(lpFileTime, &LocalFileTime)
    || !FileTimeToSystemTime(&LocalFileTime, &SystemTime)
    || !(unsigned int)ATL::AtlConvertSystemTimeToVariantTime(&SystemTime, a1) )
  {
    v3 = 1;
  }
  *((_DWORD *)a1 + 2) = v3;
  return a1;
}
