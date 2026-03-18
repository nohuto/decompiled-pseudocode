/*
 * XREFs of ?GetContentBounds@CRedirectVisual@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180208070
 * Callers:
 *     <none>
 * Callees:
 *     ?ComputeBounds@CRedirectedVisualContent@@QEAAXXZ @ 0x1802080D4 (-ComputeBounds@CRedirectedVisualContent@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRedirectVisual::GetContentBounds(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 256);
  if ( v2 )
  {
    CRedirectedVisualContent::ComputeBounds(*(CRedirectedVisualContent **)(a1 + 256));
    v5 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *, _QWORD *))(*(_QWORD *)v2 + 184LL))(v2, &v5, a2);
  }
  else
  {
    a2[1] = 0LL;
    *a2 = 0LL;
  }
  return 0LL;
}
