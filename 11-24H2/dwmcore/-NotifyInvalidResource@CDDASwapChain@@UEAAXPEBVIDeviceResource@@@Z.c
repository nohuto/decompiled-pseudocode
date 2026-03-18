/*
 * XREFs of ?NotifyInvalidResource@CDDASwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802C8660
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDDASwapChain::NotifyInvalidResource(unsigned __int64 this, const struct IDeviceResource *a2)
{
  __int64 *v2; // rbx
  _QWORD *v3; // rdi

  v2 = (__int64 *)(this + 16);
  v3 = (_QWORD *)(this - 48);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(this + 16) + 80LL))(
    *(_QWORD *)(this + 16),
    this & ((unsigned __int128)-(__int128)(this - 48) >> 64));
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v2);
  CDeviceResourceT<CMILCOMBaseT<ISwapChain,IDeviceResource,CMilObjectDeleter>>::NotifyInvalid(v3);
}
