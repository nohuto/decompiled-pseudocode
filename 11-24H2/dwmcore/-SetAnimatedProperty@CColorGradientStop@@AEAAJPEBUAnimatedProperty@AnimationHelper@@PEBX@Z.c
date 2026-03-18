/*
 * XREFs of ?SetAnimatedProperty@CColorGradientStop@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801F4010
 * Callers:
 *     _lambda_c7638020ca195b246d8130061949fe77_::_lambda_invoker_cdecl_ @ 0x18021D6D0 (_lambda_c7638020ca195b246d8130061949fe77_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18007F9F0 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FB20 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     memcmp_0 @ 0x1802DF6C8 (memcmp_0.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CColorGradientStop::SetAnimatedProperty(
        CColorGradientStop *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const void *a3)
{
  char *v4; // rbp
  __int64 (__fastcall *v7)(CColorGradientStop *, __int64, __int64); // rax

  v4 = (char *)this + *((_QWORD *)a2 + 1);
  if ( memcmp_0(v4, a3, *((_QWORD *)a2 + 2)) )
  {
    memcpy_0(v4, a3, *((_QWORD *)a2 + 2));
    CResource::InvalidateAnimationSources(this, *(_DWORD *)a2);
    v7 = *(__int64 (__fastcall **)(CColorGradientStop *, __int64, __int64))(*(_QWORD *)this + 80LL);
    if ( (char *)v7 == (char *)CResource::NotifyOnChanged )
      CResource::NotifyOnChanged(this, 10LL, (__int64)this);
    else
      v7(this, 10LL, (__int64)this);
  }
  return 0LL;
}
