/*
 * XREFs of ?IsOpaqueRect@CClipBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x1802942B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CClipBrush::IsOpaqueRect(CClipBrush *this, const struct D2D_SIZE_F *a2, struct D2D_RECT_F *a3)
{
  __int64 v3; // rcx
  char v4; // bl

  v3 = *((_QWORD *)this + 13);
  v4 = 0;
  if ( v3 )
    return (*(unsigned __int8 (__fastcall **)(__int64, const struct D2D_SIZE_F *, struct D2D_RECT_F *))(*(_QWORD *)v3 + 320LL))(
             v3,
             a2,
             a3) != 0;
  return v4;
}
