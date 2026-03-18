/*
 * XREFs of ?SetAnimatedProperty@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18020C018
 * Callers:
 *     _lambda_92c1352e395b0dee0bf92c01361ae6de_::_lambda_invoker_cdecl_ @ 0x180233540 (_lambda_92c1352e395b0dee0bf92c01361ae6de_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?NotifyOnChanged@CGeometry@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800231F0 (-NotifyOnChanged@CGeometry@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800E4E40 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800E5C50 (-ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CResource::SetAnimatedProperty(
        CResource *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const void *a3)
{
  __int64 (__fastcall *v5)(CResource *, unsigned int, CMaskBrush *); // rax

  if ( CResource::ModifyProperty(this, a2, a3) )
  {
    CResource::InvalidateAnimationSources(this, *(unsigned int *)a2);
    v5 = *(__int64 (__fastcall **)(CResource *, unsigned int, CMaskBrush *))(*(_QWORD *)this + 80LL);
    if ( (char *)v5 == (char *)CGeometry::NotifyOnChanged )
      CGeometry::NotifyOnChanged(this, 0, 0LL);
    else
      v5(this, 0, 0LL);
  }
  return 0LL;
}
