/*
 * XREFs of ?HampUtilDeleteTempFile@@YAJPEBG@Z @ 0x18007EF30
 * Callers:
 *     ?HampHostReportTerminateHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x18007DB84 (-HampHostReportTerminateHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     ?HampManagerAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180080CE8 (-HampManagerAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     ?HampUtilGetTempFilePath@@YAJPEBGKPEAG@Z @ 0x18007EF8C (-HampUtilGetTempFilePath@@YAJPEBGKPEAG@Z.c)
 *     ?HampSystemDeleteFile@@YAJPEBG@Z @ 0x18008FD10 (-HampSystemDeleteFile@@YAJPEBG@Z.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall HampUtilDeleteTempFile(const unsigned __int16 *a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned __int16 v3[528]; // [rsp+20h] [rbp-438h] BYREF

  result = HampUtilGetTempFilePath(a1, a2, v3);
  if ( (int)result >= 0 )
  {
    result = HampSystemDeleteFile(v3);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
