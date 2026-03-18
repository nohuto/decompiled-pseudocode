/*
 * XREFs of ?GetSize@CAtlasBitmapResource@@UEBA?AUD2D_SIZE_U@@XZ @ 0x180208DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSize@CRenderTargetBitmap@@UEBA?AUD2D_SIZE_U@@XZ @ 0x1800DBCF0 (-GetSize@CRenderTargetBitmap@@UEBA-AUD2D_SIZE_U@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct D2D_SIZE_U __fastcall CAtlasBitmapResource::GetSize(CAtlasBitmapResource *this, __int64 a2)
{
  __int64 v2; // rax
  CRenderTargetBitmap *v4; // rcx
  void (*v5)(void); // rax

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    v4 = (CRenderTargetBitmap *)(*(_QWORD *)(v2 + 8) + 8LL);
    v5 = *(void (**)(void))(*(_QWORD *)v4 + 32LL);
    if ( (char *)v5 == (char *)CRenderTargetBitmap::GetSize )
      CRenderTargetBitmap::GetSize(v4, (_QWORD *)a2);
    else
      v5();
  }
  else
  {
    *(_DWORD *)a2 = 1;
    *(_DWORD *)(a2 + 4) = 1;
  }
  return (struct D2D_SIZE_U)a2;
}
