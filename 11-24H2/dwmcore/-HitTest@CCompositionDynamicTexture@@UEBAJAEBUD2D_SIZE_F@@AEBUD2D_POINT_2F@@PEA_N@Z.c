/*
 * XREFs of ?HitTest@CCompositionDynamicTexture@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180295660
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositionDynamicTexture::HitTest(
        CCompositionDynamicTexture *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  __int64 v4; // rcx

  *a4 = 0;
  v4 = *((_QWORD *)this + 9);
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64, const struct D2D_SIZE_F *, const struct D2D_POINT_2F *))(*(_QWORD *)v4 + 208LL))(
             v4,
             a2,
             a3);
  else
    return 0LL;
}
