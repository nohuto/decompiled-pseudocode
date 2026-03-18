/*
 * XREFs of ?Discard@CompositionTokenObject@@QEAAXXZ @ 0x1400332AC
 * Callers:
 *     ?ReleaseCompositionHandleTokensToFrame@CTokenManager@@IEAAXPEAVCCompositionFrame@@@Z @ 0x140033140 (-ReleaseCompositionHandleTokensToFrame@CTokenManager@@IEAAXPEAVCCompositionFrame@@@Z.c)
 *     ?DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x14009A078 (-DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall CompositionTokenObject::Discard(CompositionTokenObject *this)
{
  (*(void (__fastcall **)(char *))(*((_QWORD *)this + 5) + 56LL))((char *)this + 40);
}
