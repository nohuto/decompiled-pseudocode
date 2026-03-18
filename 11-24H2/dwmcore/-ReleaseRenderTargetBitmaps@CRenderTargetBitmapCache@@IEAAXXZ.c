/*
 * XREFs of ?ReleaseRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ @ 0x1801CAE80
 * Callers:
 *     ?Trim@CD3DDevice@@QEAAXXZ @ 0x1801CA98C (-Trim@CD3DDevice@@QEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18007AA30 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 */

void __fastcall CRenderTargetBitmapCache::ReleaseRenderTargetBitmaps(CRenderTargetBitmapCache *this)
{
  __int64 i; // rdi
  CGlobalDrawingContext *v3; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 6); i = (unsigned int)(i + 1) )
  {
    v3 = *(CGlobalDrawingContext **)(*(_QWORD *)this + 8 * i);
    *((_BYTE *)v3 + 144) = 0;
    CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(v3);
  }
  *((_DWORD *)this + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this, 8u);
}
