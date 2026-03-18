/*
 * XREFs of ?GetBounds@CSceneWorld@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18020AD00
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmptyDrawing@CBrush@@UEBA_NXZ @ 0x1800D10D0 (-IsEmptyDrawing@CBrush@@UEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSceneWorld::GetBounds(CBrush *a1, _DWORD *a2, __int64 a3)
{
  __int64 (*v5)(void); // rax
  char IsEmptyDrawing; // al
  int v7; // xmm0_4

  v5 = *(__int64 (**)(void))(*(_QWORD *)a1 + 216LL);
  if ( (char *)v5 == (char *)CBrush::IsEmptyDrawing )
    IsEmptyDrawing = CBrush::IsEmptyDrawing(a1);
  else
    IsEmptyDrawing = v5();
  *(_QWORD *)a3 = 0LL;
  if ( IsEmptyDrawing )
  {
    *(_DWORD *)(a3 + 8) = 0;
    v7 = 0;
  }
  else
  {
    *(_DWORD *)(a3 + 8) = *a2;
    v7 = a2[1];
  }
  *(_DWORD *)(a3 + 12) = v7;
  return 0LL;
}
