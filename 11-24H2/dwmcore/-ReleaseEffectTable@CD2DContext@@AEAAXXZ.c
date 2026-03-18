/*
 * XREFs of ?ReleaseEffectTable@CD2DContext@@AEAAXXZ @ 0x1801CAED4
 * Callers:
 *     ?PopulateEffectTable@CD2DContext@@AEAAJXZ @ 0x1801BE8C4 (-PopulateEffectTable@CD2DContext@@AEAAJXZ.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x1801CA824 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterface@UIDXGIFactory7@@@@YAXAEAPEAUIDXGIFactory7@@@Z @ 0x1801240CC (--$ReleaseInterface@UIDXGIFactory7@@@@YAXAEAPEAUIDXGIFactory7@@@Z.c)
 */

void __fastcall CD2DContext::ReleaseEffectTable(CD2DContext *this)
{
  __int64 *v1; // rbx
  __int64 v2; // rdi

  v1 = (__int64 *)((char *)this + 216);
  v2 = 8LL;
  do
  {
    ReleaseInterface<IDXGIFactory7>(v1++);
    --v2;
  }
  while ( v2 );
}
