/*
 * XREFs of IopLiveDumpTraceDumpDisabledOnBoot @ 0x14059A240
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1404F84C4 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTrace @ 0x14059F900 (IopLiveDumpTrace.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

char IopLiveDumpTraceDumpDisabledOnBoot()
{
  char result; // al
  char v1; // [rsp+30h] [rbp-19h] BYREF
  __int64 v2; // [rsp+38h] [rbp-11h] BYREF
  char *v3; // [rsp+40h] [rbp-9h] BYREF
  int v4; // [rsp+48h] [rbp-1h]
  int v5; // [rsp+4Ch] [rbp+3h]
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+50h] [rbp+7h] BYREF
  __int64 *v7; // [rsp+70h] [rbp+27h]
  int v8; // [rsp+78h] [rbp+2Fh]
  int v9; // [rsp+7Ch] [rbp+33h]
  char *v10; // [rsp+80h] [rbp+37h]
  int v11; // [rsp+88h] [rbp+3Fh]
  int v12; // [rsp+8Ch] [rbp+43h]

  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    v5 = 0;
    v3 = &AllowLiveDump;
    v4 = 4;
    result = IopLiveDumpTrace(LIVEDUMP_EVENT_LIVEDUMP_DISABLED_ON_BOOT_BY_POLICY, 1LL, &v3);
  }
  if ( (unsigned int)dword_140E06E80 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_140E06E80, 0x400000000000LL);
    if ( result )
    {
      v9 = 0;
      v12 = 0;
      v7 = &v2;
      v1 = AllowLiveDump;
      v2 = 0x1000000LL;
      v10 = &v1;
      v8 = 8;
      v11 = 1;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140E06E80,
               (unsigned __int8 *)byte_1400451F5,
               0LL,
               0LL,
               4u,
               &v6);
    }
  }
  return result;
}
