/*
 * XREFs of ?Reset@DXGOVERLAY@@QEAAXXZ @ 0x1401E8020
 * Callers:
 *     ?Reset@DXGDEVICE@@QEAAXE@Z @ 0x1401BB7FC (-Reset@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall DXGOVERLAY::Reset(DXGOVERLAY *this)
{
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 226;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
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
