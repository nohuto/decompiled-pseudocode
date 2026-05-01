/*
 * XREFs of ?HampUtilGetTempFilePath@@YAJPEBGKPEAG@Z @ 0x18007F44C
 * Callers:
 *     ?HampUtilCreateTempFile@@YAJPEBGKPEAPEAXPEAG@Z @ 0x18007F324 (-HampUtilCreateTempFile@@YAJPEBGKPEAPEAXPEAG@Z.c)
 *     ?HampUtilDeleteTempFile@@YAJPEBG@Z @ 0x18007F3F0 (-HampUtilDeleteTempFile@@YAJPEBG@Z.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18003D71C (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

DWORD __fastcall HampUtilGetTempFilePath(const unsigned __int16 *a1, __int64 a2, unsigned __int16 *a3)
{
  int TempPath2W; // eax

  TempPath2W = GetTempPath2W(522LL, a3);
  if ( TempPath2W )
    return RtlStringCchCopyW(&a3[TempPath2W], (unsigned int)(522 - TempPath2W), L"HamTerminateHang.dmp");
  if ( (int)GetLastError() > 0 )
    return (unsigned __int16)GetLastError() | 0xC0070000;
  return GetLastError();
}
