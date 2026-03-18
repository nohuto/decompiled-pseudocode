/*
 * XREFs of ?HasValidRealization@CWindowBackgroundBitmapProducer@@QEBA_NAEBVRenderTargetInfo@@_N@Z @ 0x1801C80CC
 * Callers:
 *     ?HasValidRenderingRealization@CCachedWindowBackgroundTreatment@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x1801C7C30 (-HasValidRenderingRealization@CCachedWindowBackgroundTreatment@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 * Callees:
 *     ?IsValid@CRenderTargetBitmap@@UEBAJXZ @ 0x18001D570 (-IsValid@CRenderTargetBitmap@@UEBAJXZ.c)
 *     ?IsUsableOnTarget@CCachedRealization@CCachedImageProducer@@QEBA_NAEBVRenderTargetInfo@@_N@Z @ 0x1801C81A0 (-IsUsableOnTarget@CCachedRealization@CCachedImageProducer@@QEBA_NAEBVRenderTargetInfo@@_N@Z.c)
 *     ?AttributesMatch@CCachedRealization@CCachedImageProducer@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x1801C8384 (-AttributesMatch@CCachedRealization@CCachedImageProducer@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CWindowBackgroundBitmapProducer::HasValidRealization(
        CWindowBackgroundBitmapProducer *this,
        const struct RenderTargetInfo *a2,
        char a3)
{
  CCachedImageProducer::CCachedRealization **v4; // rbx
  CCachedImageProducer::CCachedRealization **v6; // r14
  char v7; // di
  char v8; // r15
  CRenderTargetBitmap *v9; // rcx
  __int64 (__fastcall *v10)(CRenderTargetBitmap *); // rax
  int v11; // eax

  v4 = (CCachedImageProducer::CCachedRealization **)*((_QWORD *)this + 4);
  v6 = (CCachedImageProducer::CCachedRealization **)*((_QWORD *)this + 5);
  v7 = 0;
  v8 = *((_BYTE *)g_pComposition + 6466);
  while ( 1 )
  {
    if ( v4 == v6 )
      return 0;
    v9 = *(CRenderTargetBitmap **)*v4;
    v10 = *(__int64 (__fastcall **)(CRenderTargetBitmap *))(*(_QWORD *)v9 + 24LL);
    v11 = v10 == CRenderTargetBitmap::IsValid ? CRenderTargetBitmap::IsValid(v9) : ((__int64 (*)(void))v10)();
    if ( v11 >= 0
      && CCachedImageProducer::CCachedRealization::IsUsableOnTarget(*v4, a2, v8)
      && CCachedImageProducer::CCachedRealization::AttributesMatch(*v4, a2) )
    {
      break;
    }
    ++v4;
  }
  if ( !*v4 )
    return 0;
  if ( !a3 || *((_QWORD *)*v4 + 1) )
    return 1;
  return v7;
}
