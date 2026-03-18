/*
 * XREFs of ??0CCompositionSurface@@QEAA@XZ @ 0x14004A660
 * Callers:
 *     ?ObjectInit@CompositionSurfaceObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x14004A5D0 (-ObjectInit@CompositionSurfaceObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionO.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x140033510 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

CCompositionSurface *__fastcall CCompositionSurface::CCompositionSurface(CCompositionSurface *this)
{
  CCompositionSurface *result; // rax

  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &CCompositionSurface::`vftable';
  `vector constructor iterator'(
    (char *)this + 56,
    8LL,
    2LL,
    (void (__fastcall *)(char *))COldPresentRate::CInterval::CInterval);
  *((_DWORD *)this + 18) = 0;
  `vector constructor iterator'(
    (char *)this + 76,
    8LL,
    5LL,
    (void (__fastcall *)(char *))COldPresentRate::CInterval::CInterval);
  *((_DWORD *)this + 29) = 0;
  result = this;
  *((_QWORD *)this + 20) = 0LL;
  *((_BYTE *)this + 168) = 0;
  return result;
}
