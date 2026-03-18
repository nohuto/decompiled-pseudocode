/*
 * XREFs of ?W32kCddStrokePathApiExt@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@KPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x14010EB70
 * Callers:
 *     <none>
 * Callees:
 *     W32kCddStrokePath @ 0x14010EC34 (W32kCddStrokePath.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall W32kCddStrokePathApiExt(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        struct _BRUSHOBJ *a5,
        struct _POINTL *a6,
        struct _LINEATTRS *a7,
        unsigned int a8,
        struct _W32KCDD_ENG_CALLBACKS *a9)
{
  int v9; // edi
  int v10; // esi
  int v11; // ebp
  int v12; // r14d
  unsigned int v13; // ebx
  int (*v14)(void); // rax

  v9 = (int)a4;
  v10 = (int)a3;
  v11 = (int)a2;
  v12 = (int)a1;
  v13 = 0;
  v14 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24) + 528LL);
  if ( v14 && v14() >= 0 )
    return (unsigned int)W32kCddStrokePath(v12, v11, v10, v9, (__int64)a5, (__int64)a6, (__int64)a7, a8, (__int64)a9);
  return v13;
}
