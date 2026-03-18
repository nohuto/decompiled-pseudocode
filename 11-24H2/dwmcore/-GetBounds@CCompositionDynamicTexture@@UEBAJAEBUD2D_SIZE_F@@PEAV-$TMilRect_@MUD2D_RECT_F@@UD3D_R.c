/*
 * XREFs of ?GetBounds@CCompositionDynamicTexture@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802955E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionDynamicTexture::GetBounds(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 72);
  result = 0LL;
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 184LL))(v3);
  *a3 = 0LL;
  a3[1] = 0LL;
  return result;
}
