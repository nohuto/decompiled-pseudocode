/*
 * XREFs of ?GetCurrentRenderingRealization@CBitmapResource@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1801F1E80
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBitmapResource::GetCurrentRenderingRealization(
        CBitmapResource *this,
        struct IBitmapRealization **a2)
{
  struct IBitmapRealization *v2; // rcx
  unsigned int v3; // ebx
  void (*v4)(void); // rax

  v2 = (struct IBitmapRealization *)*((_QWORD *)this + 1);
  v3 = 0;
  if ( v2 )
  {
    *a2 = v2;
    v4 = *(void (**)(void))(*(_QWORD *)v2 + 8LL);
    if ( (char *)v4 == (char *)CMILRefCountImpl::AddReference )
      CMILRefCountImpl::AddReference(v2);
    else
      v4();
  }
  else
  {
    *a2 = 0LL;
    v3 = -2003292404;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292404, 0x66u, 0LL);
  }
  return v3;
}
