/*
 * XREFs of ?TryRepinAllDirectFlipAllocations@ADAPTER_RENDER@@QEAAXXZ @ 0x14034B4DC
 * Callers:
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1402BA244 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140026F40 (-IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?TryRepinAllDirectFlipAllocations@DXGDEVICE@@QEAAXXZ @ 0x14034B5A8 (-TryRepinAllDirectFlipAllocations@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_RENDER::TryRepinAllDirectFlipAllocations(DXGDEVICE **this)
{
  DXGDEVICE *i; // rbx
  DXGDEVICE **v3; // rdi
  DXGDEVICE *j; // rbx

  if ( !ADAPTER_RENDER::IsCoreResourceExclusiveOwner((ADAPTER_RENDER *)this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2273;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsCoreResourceExclusiveOwner()", 2273LL, 0LL, 0LL, 0LL, 0LL);
  }
  for ( i = this[18]; i != (DXGDEVICE *)(this + 18) && i; i = *(DXGDEVICE **)i )
    DXGDEVICE::TryRepinAllDirectFlipAllocations(i);
  v3 = this + 20;
  for ( j = *v3; j != (DXGDEVICE *)v3 && j; j = *(DXGDEVICE **)j )
    DXGDEVICE::TryRepinAllDirectFlipAllocations(j);
}
