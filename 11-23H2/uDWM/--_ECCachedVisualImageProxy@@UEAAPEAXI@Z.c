/*
 * XREFs of ??_ECCachedVisualImageProxy@@UEAAPEAXI@Z @ 0x18004DCD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585CC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CCachedVisualImageProxy *__fastcall CCachedVisualImageProxy::`vector deleting destructor'(
        CCachedVisualImageProxy *this,
        char a2)
{
  CBaseObject *v4; // rcx

  *(_QWORD *)this = &CTransform3dGroupProxy::`vftable';
  v4 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v4 )
    CBaseObject::Release(v4);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x18uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CCachedVisualImageProxy *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
