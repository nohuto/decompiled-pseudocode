/*
 * XREFs of ?IsHardwareProtected@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x180042BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsHardwareProtected@CD2DBitmap@@UEBA_NXZ @ 0x180042C10 (-IsHardwareProtected@CD2DBitmap@@UEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CDxHandleBitmapRealization::IsHardwareProtected(CDxHandleBitmapRealization *this)
{
  CD2DBitmap *v1; // rcx
  char v2; // bl
  __int64 (*v3)(void); // rax
  char IsHardwareProtected; // al

  v1 = (CD2DBitmap *)*((_QWORD *)this + 6);
  v2 = 0;
  if ( v1 )
  {
    v3 = *(__int64 (**)(void))(*(_QWORD *)v1 + 56LL);
    if ( (char *)v3 == (char *)CD2DBitmap::IsHardwareProtected )
      IsHardwareProtected = CD2DBitmap::IsHardwareProtected(v1);
    else
      IsHardwareProtected = v3();
    if ( IsHardwareProtected )
      return 1;
  }
  return v2;
}
