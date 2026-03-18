/*
 * XREFs of ??0CDrawListBitmap@@QEAA@AEBV0@@Z @ 0x1801D101C
 * Callers:
 *     ??0CSurfaceDrawListBrush@@IEAA@AEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@_N@Z @ 0x1800BA7D0 (--0CSurfaceDrawListBrush@@IEAA@AEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@_N@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CDrawListBitmap *__fastcall CDrawListBitmap::CDrawListBitmap(CDrawListBitmap *this, CMILRefCountImpl **a2)
{
  CMILRefCountImpl *v4; // rcx
  void (*v5)(void); // rax
  CMILRefCountImpl *v6; // rcx

  v4 = *a2;
  *(_QWORD *)this = *a2;
  if ( v4 )
  {
    v5 = *(void (**)(void))(*(_QWORD *)v4 + 8LL);
    if ( (char *)v5 == (char *)CMILRefCountImpl::AddReference )
      CMILRefCountImpl::AddReference(v4);
    else
      v5();
  }
  v6 = a2[1];
  *((_QWORD *)this + 1) = v6;
  if ( v6 )
    (*(void (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v6 + 8LL))(v6);
  *((_BYTE *)this + 16) = *((_BYTE *)a2 + 16);
  return this;
}
