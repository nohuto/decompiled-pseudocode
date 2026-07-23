/*
 * XREFs of RtlpGetCustomCultureRegKey @ 0x1800F9514
 * Callers:
 *     RtlpIsCustomLocale @ 0x1800F943C (RtlpIsCustomLocale.c)
 * Callees:
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenKey @ 0x180163460 (NtOpenKey.c)
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
