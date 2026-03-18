/*
 * XREFs of IopDumpTraceCrashDumpDisabled @ 0x140590544
 * Callers:
 *     IopDisableCrashDump @ 0x140590258 (IopDisableCrashDump.c)
 * Callees:
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     IopDumpIsTracingEnabled @ 0x1404F8514 (IopDumpIsTracingEnabled.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

char IopDumpTraceCrashDumpDisabled()
{
  char result; // al
  __int64 v1; // [rsp+40h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+48h] [rbp-40h] BYREF
  __int64 *v3; // [rsp+68h] [rbp-20h]
  int v4; // [rsp+70h] [rbp-18h]
  int v5; // [rsp+74h] [rbp-14h]

  result = IopDumpIsTracingEnabled();
  if ( result )
    result = EtwWriteEx(IopDumpEtwRegHandle, &DUMP_EVENT_CRASHDUMP_DISABLED, 0LL, 0, 0LL, 0LL, 0, 0LL);
  if ( (unsigned int)dword_140E06DC8 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_140E06DC8, 0x400000000000LL);
    if ( result )
    {
      v5 = 0;
      v3 = &v1;
      v1 = 0x1000000LL;
      v4 = 8;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140E06DC8,
               (unsigned __int8 *)&byte_140044EFF,
               0LL,
               0LL,
               3u,
               &v2);
    }
  }
  return result;
}
