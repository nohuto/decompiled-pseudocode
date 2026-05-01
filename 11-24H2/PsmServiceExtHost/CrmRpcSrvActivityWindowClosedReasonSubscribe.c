/*
 * XREFs of CrmRpcSrvActivityWindowClosedReasonSubscribe @ 0x180030B10
 * Callers:
 *     <none>
 * Callees:
 *     CrmSrvActivityWindowClosedReasonSubscribe @ 0x180030B30 (CrmSrvActivityWindowClosedReasonSubscribe.c)
 */

__int64 CrmRpcSrvActivityWindowClosedReasonSubscribe()
{
  int v0; // ecx
  __int64 result; // rax

  v0 = CrmSrvActivityWindowClosedReasonSubscribe();
  result = 0LL;
  if ( v0 < 0 )
    return (unsigned int)v0;
  return result;
}
