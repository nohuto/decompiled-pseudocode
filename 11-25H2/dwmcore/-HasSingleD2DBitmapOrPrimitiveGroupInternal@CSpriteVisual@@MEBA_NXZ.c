/*
 * XREFs of ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CSpriteVisual@@MEBA_NXZ @ 0x18012E990
 * Callers:
 *     ?HasSingleD2DBitmapOrPrimitiveGroup@CVisual@@QEBA_NXZ @ 0x18012E924 (-HasSingleD2DBitmapOrPrimitiveGroup@CVisual@@QEBA_NXZ.c)
 * Callees:
 *     ?IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012D970 (-IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CSpriteVisual::HasSingleD2DBitmapOrPrimitiveGroupInternal(CSpriteVisual *this)
{
  int v1; // ebx
  __int64 v3; // rcx
  int v4; // eax
  bool (__fastcall *v6)(__int64, unsigned __int64); // rax

  v1 = 0;
  v3 = *((_QWORD *)this + 32);
  if ( v3 )
  {
    v6 = *(bool (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v3 + 64LL);
    if ( v6 == CColorBrush::IsOfType ? CColorBrush::IsOfType(v3, 0x11uLL) : v6(v3, 17uLL) )
      v1 = 1;
  }
  v4 = v1 + 1;
  if ( (**((_DWORD **)this + 29) & 0x20000) == 0 )
    v4 = v1;
  return v4 == 1;
}
