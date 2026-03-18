/*
 * XREFs of ?IsOpaqueRect@CGradientBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x1802081E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CGradientBrush::IsOpaqueRect(CGradientBrush *this, const struct D2D_SIZE_F *a2, struct D2D_RECT_F *a3)
{
  bool result; // al
  FLOAT width; // xmm0_4
  FLOAT height; // xmm1_4

  if ( !*((_BYTE *)this + 233)
    || !*((_BYTE *)this + 234)
    || (*(unsigned __int8 (__fastcall **)(CGradientBrush *))(*(_QWORD *)this + 216LL))(this) )
  {
    return 0;
  }
  width = a2->width;
  result = 1;
  height = a2->height;
  a3->left = 0.0;
  a3->top = 0.0;
  a3->right = width;
  a3->bottom = height;
  return result;
}
