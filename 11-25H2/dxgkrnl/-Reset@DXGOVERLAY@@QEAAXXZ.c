/*
 * XREFs of ?Reset@DXGOVERLAY@@QEAAXXZ @ 0x1401E2DF0
 * Callers:
 *     ?Reset@DXGDEVICE@@QEAAXE@Z @ 0x1401B9040 (-Reset@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall DXGOVERLAY::Reset(DXGOVERLAY *this)
{
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 226;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetAdapter()->IsCoreResourceExclusiveOwner()",
      226LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *((_DWORD *)this + 8) = -1;
  *((_DWORD *)this + 7) = 2;
}
