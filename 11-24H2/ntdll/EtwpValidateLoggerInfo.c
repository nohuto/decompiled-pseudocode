/*
 * XREFs of EtwpValidateLoggerInfo @ 0x1800A8308
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x1800A8130 (EtwProcessPrivateLoggerRequest.c)
 * Callees:
 *     memcmp @ 0x180165A90 (memcmp.c)
 */

__int64 __fastcall EtwpValidateLoggerInfo(_DWORD *a1)
{
  if ( a1 && *a1 >= 0xB0u && (a1[11] & 0x20000) != 0 )
    return memcmp(a1 + 6, &SystemTraceControlGuid, 0x10uLL) == 0 ? 0xD : 0;
  else
    return 13LL;
}
