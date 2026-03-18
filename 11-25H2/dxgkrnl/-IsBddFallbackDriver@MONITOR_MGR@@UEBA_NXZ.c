/*
 * XREFs of ?IsBddFallbackDriver@MONITOR_MGR@@UEBA_NXZ @ 0x140404370
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x14004F6E8 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 */

bool __fastcall MONITOR_MGR::IsBddFallbackDriver(MONITOR_MGR *this)
{
  return DXGADAPTER::IsBddFallbackDriver(*(DXGADAPTER **)(*((_QWORD *)this + 3) + 16LL));
}
