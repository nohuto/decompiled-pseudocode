/*
 * XREFs of RtlpGetCustomCultureRegKey @ 0x1800F78B4
 * Callers:
 *     RtlpIsCustomLocale @ 0x1800F77DC (RtlpIsCustomLocale.c)
 * Callees:
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtOpenKey @ 0x180161ED0 (NtOpenKey.c)
 */

__int64 RtlpGetCustomCultureRegKey()
{
  HANDLE Handle; // [rsp+30h] [rbp+8h] BYREF

  Handle = 0LL;
  if ( !gCustomCultureRegKey
    && (int)NtOpenKey(&Handle, 1LL, &`RtlpGetCustomCultureRegKey'::`2'::ObjAttribute) >= 0
    && _InterlockedCompareExchange64(&gCustomCultureRegKey, (signed __int64)Handle, 0LL) )
  {
    NtClose(Handle);
  }
  return gCustomCultureRegKey;
}
