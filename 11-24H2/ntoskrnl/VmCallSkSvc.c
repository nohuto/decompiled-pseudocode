/*
 * XREFs of VmCallSkSvc @ 0x14064A310
 * Callers:
 *     <none>
 * Callees:
 *     VslSvcEnterIumSecureMode @ 0x14058E774 (VslSvcEnterIumSecureMode.c)
 */

__int64 __fastcall VmCallSkSvc(__int128 *a1)
{
  return VslSvcEnterIumSecureMode(a1);
}
