/*
 * XREFs of ?GetDXGIResource@CD2DBitmap@@QEAAPEAUIDXGIResource@@XZ @ 0x1801972A4
 * Callers:
 *     ?EnsureDisplaySurface@CDxHandleBitmapRealization@@IEAAJXZ @ 0x180196DAC (-EnsureDisplaySurface@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ?GetDXGIResource@CDxHandleBitmapRealization@@UEAAPEAUIDXGIResource@@PEAI@Z @ 0x1801972F0 (-GetDXGIResource@CDxHandleBitmapRealization@@UEAAPEAUIDXGIResource@@PEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct IDXGIResource *__fastcall CD2DBitmap::GetDXGIResource(CD2DBitmap *this)
{
  char *v1; // rbx

  v1 = (char *)this + 120;
  if ( !*((_QWORD *)this + 15) && *((_QWORD *)this + 13) )
  {
    *(_QWORD *)v1 = 0LL;
    (***((void (__fastcall ****)(_QWORD, GUID *, char *))this + 13))(
      *((_QWORD *)this + 13),
      &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,
      v1);
  }
  return *(struct IDXGIResource **)v1;
}
