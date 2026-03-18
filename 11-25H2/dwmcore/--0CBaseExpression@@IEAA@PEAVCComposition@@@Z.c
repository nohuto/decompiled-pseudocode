/*
 * XREFs of ??0CBaseExpression@@IEAA@PEAVCComposition@@@Z @ 0x1800F08A0
 * Callers:
 *     ??0CScrollAnimation@@QEAA@PEAVCComposition@@@Z @ 0x1800F07F4 (--0CScrollAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CConditionalExpression@@QEAA@PEAVCComposition@@@Z @ 0x1800F083C (--0CConditionalExpression@@QEAA@PEAVCComposition@@@Z.c)
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180110938 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ??0CExpression@@QEAA@PEAVCComposition@@@Z @ 0x1801127A4 (--0CExpression@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z @ 0x18011284C (--0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CNaturalAnimation@@QEAA@PEAVCComposition@@@Z @ 0x18027F158 (--0CNaturalAnimation@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18025D108 (memset_0.c)
 */

CBaseExpression *__fastcall CBaseExpression::CBaseExpression(CBaseExpression *this, struct CComposition *a2)
{
  *(_QWORD *)this = &CBaseAnimation::`vftable'{for `IAnimationResource'};
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  memset_0((char *)this + 80, 0, 0x40uLL);
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 38) = 0;
  *((_BYTE *)this + 224) |= 1u;
  *((_QWORD *)this + 21) = -1LL;
  *((_QWORD *)this + 22) = -1LL;
  *((_QWORD *)this + 26) = -1LL;
  *((_DWORD *)this + 66) = 0;
  *((_QWORD *)this + 30) = (char *)this + 272;
  *((_QWORD *)this + 31) = (char *)this + 272;
  *((_DWORD *)this + 64) = 2;
  *((_DWORD *)this + 65) = 2;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = &CSparseStorage::s_defaultEmptyAllocatedStorage;
  return this;
}
