/*
 * XREFs of ?PnpEventRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x140072A90
 * Callers:
 *     <none>
 * Callees:
 *     ?ChildListNotifyRemove@FxPkgPnp@@QEAAXPEAJ@Z @ 0x140072AC8 (-ChildListNotifyRemove@FxPkgPnp@@QEAAXPEAJ@Z.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventRemoved(FxPkgPnp *This)
{
  int *p_m_PendingChildCount; // rbx
  __int64 result; // rax

  p_m_PendingChildCount = &This->m_PendingChildCount;
  FxPkgPnp::ChildListNotifyRemove(This, &This->m_PendingChildCount);
  result = 310LL;
  if ( _InterlockedExchangeAdd(p_m_PendingChildCount, 0xFFFFFFFF) > 1 )
    return 293LL;
  return result;
}
