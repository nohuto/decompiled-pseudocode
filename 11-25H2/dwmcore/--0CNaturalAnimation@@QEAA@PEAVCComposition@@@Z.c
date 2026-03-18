/*
 * XREFs of ??0CNaturalAnimation@@QEAA@PEAVCComposition@@@Z @ 0x18027F158
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180110938 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CBaseExpression@@IEAA@PEAVCComposition@@@Z @ 0x1800F08A0 (--0CBaseExpression@@IEAA@PEAVCComposition@@@Z.c)
 *     ?ClearState@CNaturalAnimation@@AEAAXXZ @ 0x1802A9C1C (-ClearState@CNaturalAnimation@@AEAAXXZ.c)
 */

CNaturalAnimation *__fastcall CNaturalAnimation::CNaturalAnimation(CNaturalAnimation *this, struct CComposition *a2)
{
  CBaseExpression::CBaseExpression(this, a2);
  *(_QWORD *)this = &CNaturalAnimation::`vftable';
  *((_QWORD *)this + 40) = 0LL;
  *((_DWORD *)this + 82) = 0;
  *(_QWORD *)((char *)this + 332) = 0LL;
  *((_DWORD *)this + 85) = 0;
  *((_QWORD *)this + 43) = 0LL;
  *((_DWORD *)this + 88) = 0;
  *(_QWORD *)((char *)this + 356) = 0LL;
  *((_DWORD *)this + 91) = 0;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_BYTE *)this + 572) |= 0x44u;
  CNaturalAnimation::ClearState(this);
  return this;
}
