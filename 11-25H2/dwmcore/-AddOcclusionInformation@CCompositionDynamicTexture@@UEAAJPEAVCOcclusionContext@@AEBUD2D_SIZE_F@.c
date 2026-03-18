/*
 * XREFs of ?AddOcclusionInformation@CCompositionDynamicTexture@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x1802A0EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionDynamicTexture::AddOcclusionInformation(
        CCompositionDynamicTexture *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)this + 9);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64, struct COcclusionContext *, const struct D2D_SIZE_F *))(*(_QWORD *)v3 + 192LL))(
             v3,
             a2,
             a3);
  else
    return 0LL;
}
