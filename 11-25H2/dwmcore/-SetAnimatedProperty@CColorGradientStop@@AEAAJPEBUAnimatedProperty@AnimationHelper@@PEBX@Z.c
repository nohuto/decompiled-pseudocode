/*
 * XREFs of ?SetAnimatedProperty@CColorGradientStop@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180200700
 * Callers:
 *     _lambda_c7638020ca195b246d8130061949fe77_::_lambda_invoker_cdecl_ @ 0x180228F20 (_lambda_c7638020ca195b246d8130061949fe77_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800209D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800E4E40 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     memcmp_0 @ 0x1802E8968 (memcmp_0.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CColorGradientStop::SetAnimatedProperty(
        CColorGradientStop *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const void *a3)
{
  char *v4; // rbp
  __int64 (__fastcall *v7)(CColorGradientStop *, unsigned int, __int64); // rax

  v4 = (char *)this + *((_QWORD *)a2 + 1);
  if ( memcmp_0(v4, a3, *((_QWORD *)a2 + 2)) )
  {
    memcpy_0(v4, a3, *((_QWORD *)a2 + 2));
    CResource::InvalidateAnimationSources(this, *(unsigned int *)a2);
    v7 = *(__int64 (__fastcall **)(CColorGradientStop *, unsigned int, __int64))(*(_QWORD *)this + 80LL);
    if ( (char *)v7 == (char *)CResource::NotifyOnChanged )
      CResource::NotifyOnChanged(this, 0xAu, (__int64)this);
    else
      v7(this, 10u, (__int64)this);
  }
  return 0LL;
}
