/*
 * XREFs of RtlpGetCustomCultureRegKey @ 0x1800F242C
 * Callers:
 *     RtlpIsCustomLocale @ 0x1800F2354 (RtlpIsCustomLocale.c)
 * Callees:
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtOpenKey @ 0x180160290 (NtOpenKey.c)
 */

__int64 RtlpGetCustomCultureRegKey()
{
  HANDLE KeyHandle; // [rsp+30h] [rbp+8h] BYREF

  KeyHandle = 0LL;
  if ( !gCustomCultureRegKey
    && NtOpenKey(&KeyHandle, 1u, (POBJECT_ATTRIBUTES)&`RtlpGetCustomCultureRegKey'::`2'::ObjAttribute) >= 0
    && _InterlockedCompareExchange64(&gCustomCultureRegKey, (signed __int64)KeyHandle, 0LL) )
  {
    NtClose(KeyHandle);
  }
  return gCustomCultureRegKey;
}
