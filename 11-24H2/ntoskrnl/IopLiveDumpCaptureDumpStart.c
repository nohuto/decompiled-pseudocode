/*
 * XREFs of IopLiveDumpCaptureDumpStart @ 0x140596EEC
 * Callers:
 *     IoCaptureLiveDump @ 0x1404DC764 (IoCaptureLiveDump.c)
 * Callees:
 *     IopLiveDumpIsTracingEnabled @ 0x1404F8284 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTrace @ 0x14059FFB0 (IopLiveDumpTrace.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char IopLiveDumpCaptureDumpStart()
{
  char result; // al
  __int64 v1; // rcx
  __int64 v2; // [rsp+20h] [rbp-38h] BYREF
  int v3; // [rsp+28h] [rbp-30h]
  int v4; // [rsp+2Ch] [rbp-2Ch]
  __int64 v5; // [rsp+30h] [rbp-28h]
  int v6; // [rsp+38h] [rbp-20h]
  int v7; // [rsp+3Ch] [rbp-1Ch]

  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    v4 = 0;
    v7 = 0;
    v2 = v1 + 24;
    v3 = 4;
    v6 = 4;
    v5 = v1 + 28;
    return IopLiveDumpTrace(LIVEDUMP_EVENT_CAPTURE_API_START, 2LL, &v2);
  }
  return result;
}
