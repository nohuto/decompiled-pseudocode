/*
 * XREFs of ??1CRedirectedVisualContent@@MEAA@XZ @ 0x1800C06FC
 * Callers:
 *     ??_ECRedirectedVisualContent@@MEAAPEAXI@Z @ 0x1800C06B0 (--_ECRedirectedVisualContent@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180023388 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall CRedirectedVisualContent::~CRedirectedVisualContent(CRedirectedVisualContent *this)
{
  __int64 *v2; // rbx

  v2 = (__int64 *)((char *)this + 72);
  *(_QWORD *)this = &CRedirectedVisualContent::`vftable';
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 9));
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v2);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 10);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v2);
  CResource::~CResource(this);
}
