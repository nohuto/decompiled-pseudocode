/*
 * XREFs of ?GetDXGIResource@CDxHandleBitmapRealization@@UEAAPEAUIDXGIResource@@PEAI@Z @ 0x18018A260
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDXGIResource@CD2DBitmap@@QEAAPEAUIDXGIResource@@XZ @ 0x18018A210 (-GetDXGIResource@CD2DBitmap@@QEAAPEAUIDXGIResource@@XZ.c)
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x18018B180 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct IDXGIResource *__fastcall CDxHandleBitmapRealization::GetDXGIResource(
        CDxHandleBitmapRealization *this,
        unsigned int *a2)
{
  CDxHandleBitmapRealization *v4; // rcx
  __int64 (*v5)(void); // rax
  int v6; // eax

  v4 = (CDxHandleBitmapRealization *)((char *)this - 344);
  v5 = *(__int64 (**)(void))(*(_QWORD *)v4 + 72LL);
  if ( (char *)v5 == (char *)CDxHandleBitmapRealization::EnsureD2DBitmap )
    v6 = CDxHandleBitmapRealization::EnsureD2DBitmap(v4);
  else
    v6 = v5();
  if ( v6 < 0 )
    return 0LL;
  if ( a2 )
    *a2 = *(_DWORD *)(*((_QWORD *)this + 4) + 232LL);
  return CD2DBitmap::GetDXGIResource(*((CD2DBitmap **)this + 4));
}
