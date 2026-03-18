/*
 * XREFs of OffLineTo @ 0x140052D30
 * Callers:
 *     ?MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x140051B60 (-MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?SpLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1400564D0 (-SpLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     EngLineTo @ 0x140007EE0 (EngLineTo.c)
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x140054E20 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall OffLineTo(
        __int64 (__fastcall *a1)(SURFOBJ *, struct _CLIPOBJ *, BRUSHOBJ *, _QWORD, int, int, int, RECTL *, MIX),
        int *a2,
        SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        BRUSHOBJ *a5,
        int a6,
        int a7,
        int a8,
        LONG a9,
        RECTL *a10,
        MIX mix)
{
  int v11; // edi
  int v14; // ebx
  RECTL *prclBounds; // rsi
  int v16; // edx
  unsigned int v17; // r15d
  unsigned int v18; // ebp
  __int128 v22; // [rsp+68h] [rbp-60h] BYREF
  LONG y2; // [rsp+110h] [rbp+48h]

  v11 = a2[1];
  v14 = *a2;
  prclBounds = a10;
  CLIPOBJ_vOffset(a4, *a2, v11);
  v16 = v11 + a9;
  v17 = v14 + a6;
  y2 = v11 + a9;
  v22 = 0LL;
  if ( a10 )
  {
    LODWORD(v22) = v14 + a10->left;
    DWORD2(v22) = v14 + a10->right;
    DWORD1(v22) = v11 + a10->top;
    prclBounds = (RECTL *)&v22;
    HIDWORD(v22) = v11 + a10->bottom;
  }
  v18 = a1(a3, a4, a5, v17, v11 + a7, v14 + a8, v16, prclBounds, mix);
  if ( !v18 )
    v18 = EngLineTo(a3, a4, a5, v17, v11 + a7, v14 + a8, y2, prclBounds, mix);
  CLIPOBJ_vOffset(a4, -v14, -v11);
  return v18;
}
