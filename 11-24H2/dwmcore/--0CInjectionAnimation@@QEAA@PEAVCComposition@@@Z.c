/*
 * XREFs of ??0CInjectionAnimation@@QEAA@PEAVCComposition@@@Z @ 0x18029C18C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800DB07C (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CBaseExpression@@IEAA@PEAVCComposition@@@Z @ 0x1801E0DF8 (--0CBaseExpression@@IEAA@PEAVCComposition@@@Z.c)
 */

CInjectionAnimation *__fastcall CInjectionAnimation::CInjectionAnimation(
        CInjectionAnimation *this,
        struct CComposition *a2)
{
  CBaseExpression::CBaseExpression(this, a2);
  *(_QWORD *)this = &CInjectionAnimation::`vftable';
  *((_QWORD *)this + 40) = 0LL;
  *(_QWORD *)((char *)this + 332) = 0LL;
  return this;
}
