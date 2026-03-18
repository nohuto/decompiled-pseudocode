/*
 * XREFs of ?Stop@DXGOVERLAY@@QEAAXXZ @ 0x1401E2E78
 * Callers:
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1401B927C (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Destroy@DXGOVERLAY@@QEAAXXZ @ 0x1401E2280 (-Destroy@DXGOVERLAY@@QEAAXXZ.c)
 */

void __fastcall DXGOVERLAY::Stop(DXGOVERLAY *this)
{
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 250;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetAdapter()->IsCoreResourceExclusiveOwner()",
      250LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGOVERLAY::Destroy(this);
  *((_DWORD *)this + 7) = 3;
}
