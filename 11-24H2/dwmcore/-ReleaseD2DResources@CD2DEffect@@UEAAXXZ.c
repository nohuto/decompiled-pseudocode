/*
 * XREFs of ?ReleaseD2DResources@CD2DEffect@@UEAAXXZ @ 0x1802CD080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CD2DEffect::ReleaseD2DResources(CD2DEffect *this)
{
  ReleaseInterface<IDXGIFactory7>((__int64 *)this + 9);
}
