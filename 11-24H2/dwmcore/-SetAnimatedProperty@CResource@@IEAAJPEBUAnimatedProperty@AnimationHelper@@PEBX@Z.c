/*
 * XREFs of ?SetAnimatedProperty@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801813A8
 * Callers:
 *     _lambda_92c1352e395b0dee0bf92c01361ae6de_::_lambda_invoker_cdecl_ @ 0x180227C20 (_lambda_92c1352e395b0dee0bf92c01361ae6de_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18007F9F0 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800805D0 (-ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?NotifyOnChanged@CGeometry@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801821D0 (-NotifyOnChanged@CGeometry@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CResource::SetAnimatedProperty(
        CResource *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const void *a3)
{
  void (__fastcall *v5)(CResource *, _QWORD, _QWORD); // rax

  if ( CResource::ModifyProperty(this, a2, a3) )
  {
    CResource::InvalidateAnimationSources(this, *(_DWORD *)a2);
    v5 = *(void (__fastcall **)(CResource *, _QWORD, _QWORD))(*(_QWORD *)this + 80LL);
    if ( (char *)v5 == (char *)CGeometry::NotifyOnChanged )
      CGeometry::NotifyOnChanged(this, 0LL, 0LL);
    else
      v5(this, 0LL, 0LL);
  }
  return 0LL;
}
