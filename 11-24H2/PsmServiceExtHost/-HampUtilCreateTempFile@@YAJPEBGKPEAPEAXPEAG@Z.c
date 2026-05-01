/*
 * XREFs of ?HampUtilCreateTempFile@@YAJPEBGKPEAPEAXPEAG@Z @ 0x18007F324
 * Callers:
 *     ?HampHostReportTerminateHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x18007DF0C (-HampHostReportTerminateHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18003D71C (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?HampUtilGetTempFilePath@@YAJPEBGKPEAG@Z @ 0x18007F44C (-HampUtilGetTempFilePath@@YAJPEBGKPEAG@Z.c)
 *     ?HampSystemCreateFile@@YAJPEBGKKPEAU_SECURITY_ATTRIBUTES@@KKPEAPEAX@Z @ 0x1800900E0 (-HampSystemCreateFile@@YAJPEBGKKPEAU_SECURITY_ATTRIBUTES@@KKPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall HampUtilCreateTempFile(const unsigned __int16 *a1, unsigned int a2, void **a3, unsigned __int16 *a4)
{
  unsigned int v6; // edx
  int TempFilePath; // ebx
  unsigned int v8; // r8d
  struct _SECURITY_ATTRIBUTES *v9; // r9
  __int64 v10; // rdi
  unsigned int v12; // [rsp+20h] [rbp-468h]
  unsigned int v13; // [rsp+28h] [rbp-460h]
  void *v14; // [rsp+40h] [rbp-448h] BYREF
  unsigned __int16 v15[528]; // [rsp+50h] [rbp-438h] BYREF

  v14 = (void *)-1LL;
  TempFilePath = HampUtilGetTempFilePath(a1, a2, v15);
  if ( TempFilePath >= 0 )
  {
    TempFilePath = HampSystemCreateFile(v15, v6, v8, v9, v12, v13, &v14);
    if ( TempFilePath < 0 )
    {
      v10 = (__int64)v14;
    }
    else
    {
      *a3 = v14;
      v10 = -1LL;
      if ( a4 )
        RtlStringCchCopyW(a4, 522LL, v15);
      TempFilePath = 0;
    }
    if ( v10 != -1 )
      NtClose((HANDLE)v10);
  }
  return (unsigned int)TempFilePath;
}
