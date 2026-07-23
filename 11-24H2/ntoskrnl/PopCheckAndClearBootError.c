/*
 * XREFs of PopCheckAndClearBootError @ 0x140C2F74C
 * Callers:
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     PopTraceBootError @ 0x1405D346C (PopTraceBootError.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlGetSystemBootStatus @ 0x140782CE0 (RtlGetSystemBootStatus.c)
 *     RtlSetSystemBootStatus @ 0x140A65AF0 (RtlSetSystemBootStatus.c)
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
