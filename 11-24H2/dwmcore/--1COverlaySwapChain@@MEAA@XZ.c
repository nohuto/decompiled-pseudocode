/*
 * XREFs of ??1COverlaySwapChain@@MEAA@XZ @ 0x1801F50FC
 * Callers:
 *     ??1CScribbleSwapChain@@MEAA@XZ @ 0x18024F1D0 (--1CScribbleSwapChain@@MEAA@XZ.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18003DFB0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801F5158 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall COverlaySwapChain::~COverlaySwapChain(FastRegion::CRegion **this)
{
  FastRegion::CRegion *v2; // rcx

  FastRegion::CRegion::FreeMemory(this + 23);
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(this + 8);
  v2 = this[5];
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (this[7] - v2) & 0xFFFFFFFFFFFFFFF8uLL);
    this[5] = 0LL;
    this[6] = 0LL;
    this[7] = 0LL;
  }
  CMILCOMBaseWeakRefSource<CMilObjectDeleter>::~CMILCOMBaseWeakRefSource<CMilObjectDeleter>((__int64)this);
}
