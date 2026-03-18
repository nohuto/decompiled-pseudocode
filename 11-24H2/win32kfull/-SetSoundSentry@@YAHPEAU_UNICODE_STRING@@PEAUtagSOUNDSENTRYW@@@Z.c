/*
 * XREFs of ?SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z @ 0x14028FFA4
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x14018F9C8 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1401CA8E8 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall SetSoundSentry(struct _UNICODE_STRING *a1, struct tagSOUNDSENTRYW *a2)
{
  int v4; // ebx
  int v5; // ebx
  unsigned __int16 v7[40]; // [rsp+20h] [rbp-78h] BYREF

  RtlStringCchPrintfW(v7, 40LL, L"%d", *((unsigned int *)a2 + 1));
  v4 = FastWriteProfileStringW(a1, 19LL, L"Flags", v7);
  RtlStringCchPrintfW(v7, 40LL, L"%d", *((unsigned int *)a2 + 2));
  v5 = FastWriteProfileStringW(a1, 19LL, L"TextEffect", v7) & v4;
  RtlStringCchPrintfW(v7, 40LL, L"%d", *((unsigned int *)a2 + 8));
  return v5 & (unsigned int)FastWriteProfileStringW(a1, 19LL, L"WindowsEffect", v7);
}
