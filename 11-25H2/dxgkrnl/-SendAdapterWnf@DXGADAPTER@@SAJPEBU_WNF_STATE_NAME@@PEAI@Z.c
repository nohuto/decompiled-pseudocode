/*
 * XREFs of ?SendAdapterWnf@DXGADAPTER@@SAJPEBU_WNF_STATE_NAME@@PEAI@Z @ 0x1400666C4
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x14018C23C (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGADAPTER::SendAdapterWnf(const struct _WNF_STATE_NAME *a1, unsigned int *a2)
{
  return ZwUpdateWnfStateData(a1, 0LL, 0LL, 0LL, a2, 0, 0);
}
