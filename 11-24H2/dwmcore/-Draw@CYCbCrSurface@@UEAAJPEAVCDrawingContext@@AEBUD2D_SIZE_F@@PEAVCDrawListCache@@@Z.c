/*
 * XREFs of ?Draw@CYCbCrSurface@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180292C30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CYCbCrSurface::Draw(
        CYCbCrSurface *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r8

  result = 0LL;
  v6 = *((_QWORD *)this + 9);
  if ( v6 )
  {
    v7 = *((_QWORD *)this + 10);
    if ( v7 )
      return (*(__int64 (__fastcall **)(char *, __int64, __int64, _QWORD))(*((_QWORD *)a2 + 2) + 72LL))(
               (char *)a2 + 16,
               v6,
               v7,
               *((unsigned int *)this + 22));
  }
  return result;
}
