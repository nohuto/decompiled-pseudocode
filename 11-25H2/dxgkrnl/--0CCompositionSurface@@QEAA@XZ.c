/*
 * XREFs of ??0CCompositionSurface@@QEAA@XZ @ 0x140047C8C
 * Callers:
 *     ?ObjectInit@CompositionSurfaceObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x140047C00 (-ObjectInit@CompositionSurfaceObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionO.c)
 * Callees:
 *     ??0CInterval@CPresentRate@@QEAA@XZ @ 0x140047D00 (--0CInterval@CPresentRate@@QEAA@XZ.c)
 */

CCompositionSurface *__fastcall CCompositionSurface::CCompositionSurface(CCompositionSurface *this)
{
  CPresentRate::CInterval *v1; // rdi
  __int64 v3; // rsi
  CCompositionSurface *result; // rax

  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  v1 = (CCompositionSurface *)((char *)this + 56);
  *(_QWORD *)this = &CCompositionSurface::`vftable';
  v3 = 2LL;
  do
  {
    CPresentRate::CInterval::CInterval(v1);
    v1 = (CPresentRate::CInterval *)((char *)v1 + 8);
    --v3;
  }
  while ( v3 );
  *((_DWORD *)this + 18) = 0;
  result = this;
  *((_QWORD *)this + 15) = 0LL;
  *((_BYTE *)this + 128) = 0;
  return result;
}
