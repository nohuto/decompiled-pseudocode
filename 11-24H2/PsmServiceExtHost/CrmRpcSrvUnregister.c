/*
 * XREFs of CrmRpcSrvUnregister @ 0x180064620
 * Callers:
 *     <none>
 * Callees:
 *     CrmSrvUnregister @ 0x180064644 (CrmSrvUnregister.c)
 */

__int64 __fastcall CrmRpcSrvUnregister(void **a1)
{
  CrmSrvUnregister(*a1);
  *a1 = 0LL;
  return 0LL;
}
