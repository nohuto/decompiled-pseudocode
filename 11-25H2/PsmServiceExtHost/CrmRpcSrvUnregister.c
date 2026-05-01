/*
 * XREFs of CrmRpcSrvUnregister @ 0x1800646A0
 * Callers:
 *     <none>
 * Callees:
 *     CrmSrvUnregister @ 0x1800646C4 (CrmSrvUnregister.c)
 */

__int64 __fastcall CrmRpcSrvUnregister(void **a1)
{
  CrmSrvUnregister(*a1);
  *a1 = 0LL;
  return 0LL;
}
