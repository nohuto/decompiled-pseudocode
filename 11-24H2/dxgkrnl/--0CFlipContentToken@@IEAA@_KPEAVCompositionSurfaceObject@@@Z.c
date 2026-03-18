/*
 * XREFs of ??0CFlipContentToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z @ 0x140038F94
 * Callers:
 *     ?CreateCompleted@CFlipContentToken@@SAJ_KIPEBUtagRECT@@PEAVCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x1400A1548 (-CreateCompleted@CFlipContentToken@@SAJ_KIPEBUtagRECT@@PEAVCompositionSurfaceObject@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z @ 0x140039010 (--0CToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z.c)
 *     memset @ 0x1400A2000 (memset.c)
 */

CFlipContentToken *__fastcall CFlipContentToken::CFlipContentToken(
        CFlipContentToken *this,
        unsigned __int64 a2,
        struct CompositionSurfaceObject *a3)
{
  CToken::CToken(this, a2, a3);
  *((_BYTE *)this + 224) &= ~1u;
  *(_QWORD *)this = &CFlipContentToken::`vftable';
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 58) = 0;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *(_OWORD *)((char *)this + 136) = 0LL;
  memset((char *)this + 152, 0, 0x48uLL);
  return this;
}
