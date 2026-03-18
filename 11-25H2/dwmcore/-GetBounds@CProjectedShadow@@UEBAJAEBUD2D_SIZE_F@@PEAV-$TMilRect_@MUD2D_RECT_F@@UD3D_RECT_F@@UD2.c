/*
 * XREFs of ?GetBounds@CProjectedShadow@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180231B00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProjectedShadow::GetBounds(__int64 a1, _DWORD *a2, __int64 a3)
{
  char v5; // al
  int v6; // xmm0_4

  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 216LL))(a1);
  *(_QWORD *)a3 = 0LL;
  if ( v5 )
  {
    *(_DWORD *)(a3 + 8) = 0;
    v6 = 0;
  }
  else
  {
    *(_DWORD *)(a3 + 8) = *a2;
    v6 = a2[1];
  }
  *(_DWORD *)(a3 + 12) = v6;
  return 0LL;
}
