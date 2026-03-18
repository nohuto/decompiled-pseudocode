/*
 * XREFs of ?HitTest@CYCbCrSurface@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18029E5F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CYCbCrSurface::HitTest(
        CYCbCrSurface *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *((_QWORD *)this + 9);
  result = 0LL;
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64, const struct D2D_SIZE_F *, const struct D2D_POINT_2F *, bool *))(*(_QWORD *)v4 + 208LL))(
             v4,
             a2,
             a3,
             a4);
  *a4 = 0;
  return result;
}
