/*
 * XREFs of PopCheckAndClearBootError @ 0x140C1C52C
 * Callers:
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     PopTraceBootError @ 0x1405D14F8 (PopTraceBootError.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlGetSystemBootStatus @ 0x140773B00 (RtlGetSystemBootStatus.c)
 *     RtlSetSystemBootStatus @ 0x140A69F60 (RtlSetSystemBootStatus.c)
 */

int PopCheckAndClearBootError()
{
  int result; // eax
  __int128 DataBuffer; // [rsp+20h] [rbp-28h] BYREF
  int v2; // [rsp+30h] [rbp-18h]

  v2 = 0;
  DataBuffer = 0LL;
  result = RtlGetSystemBootStatus(RtlBsdItemErrorInfo, &DataBuffer, 0x14u, 0LL);
  if ( result >= 0 )
  {
    if ( HIDWORD(DataBuffer) )
    {
      PopTraceBootError();
      v2 = 0;
      DataBuffer = 0LL;
      return RtlSetSystemBootStatus(RtlBsdItemErrorInfo, &DataBuffer, 0x14u, 0LL);
    }
  }
  return result;
}
