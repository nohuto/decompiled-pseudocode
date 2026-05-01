/*
 * XREFs of CrmRegistrationFindActivity @ 0x180030DC0
 * Callers:
 *     CrmSrvActivityWindowClosedReasonSubscribe @ 0x180030B30 (CrmSrvActivityWindowClosedReasonSubscribe.c)
 *     CrmSrvActivityWindowClosedReasonUnsubscribe @ 0x1800695C8 (CrmSrvActivityWindowClosedReasonUnsubscribe.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall CrmRegistrationFindActivity(__int64 a1, __int64 a2)
{
  __int64 *result; // rax
  __int64 *v3; // rcx

  result = *(__int64 **)(a1 + 56);
  v3 = (__int64 *)(a1 + 56);
  while ( 1 )
  {
    if ( result == v3 )
      return 0LL;
    if ( result[7] == a2 )
      break;
    result = (__int64 *)*result;
  }
  if ( _InterlockedIncrement64(result + 2) <= 1 )
    __fastfail(0xEu);
  return result;
}
