/*
 * XREFs of EtwpValidateLoggerInfo @ 0x18008C848
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x18008C670 (EtwProcessPrivateLoggerRequest.c)
 * Callees:
 *     memcmp @ 0x1801676D0 (memcmp.c)
 */

__int64 __fastcall EtwpValidateLoggerInfo(_DWORD *a1)
{
  if ( a1 && *a1 >= 0xB0u && (a1[11] & 0x20000) != 0 )
    return memcmp(a1 + 6, &SystemTraceControlGuid, 0x10uLL) == 0 ? 0xD : 0;
  else
    return 13LL;
}
