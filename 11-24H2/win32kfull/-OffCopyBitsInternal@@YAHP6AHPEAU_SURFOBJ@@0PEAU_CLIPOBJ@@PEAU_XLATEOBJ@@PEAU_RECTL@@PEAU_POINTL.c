/*
 * XREFs of ?OffCopyBitsInternal@@YAHP6AHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z40401234@Z @ 0x140171568
 * Callers:
 *     ?bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140053DDC (-bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x14005474C (-bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PE.c)
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1400DF03C (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 *     ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x14032D444 (-vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?MulUpdateColors@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1403318A4 (-MulUpdateColors@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall OffCopyBitsInternal(
        int (*a1)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *),
        struct _POINTL *a2,
        struct _SURFOBJ *a3,
        struct _POINTL *a4,
        struct _SURFOBJ *a5,
        struct _CLIPOBJ *a6,
        struct _XLATEOBJ *a7,
        struct _RECTL *a8,
        struct _POINTL *a9)
{
  struct _SURFOBJ *v11; // r10
  struct _XLATEOBJ *v12; // r11
  LONG x; // esi
  LONG y; // edi
  int v15; // r8d
  int v16; // ecx
  unsigned int v17; // r14d
  LONG v18; // edi
  LONG v19; // esi
  struct _POINTL v21; // [rsp+40h] [rbp-41h] BYREF
  struct _POINTL v22; // [rsp+48h] [rbp-39h]
  _DWORD v23[2]; // [rsp+50h] [rbp-31h] BYREF
  struct _SURFOBJ *v24; // [rsp+58h] [rbp-29h]
  struct _XLATEOBJ *v25; // [rsp+60h] [rbp-21h]
  _DWORD v26[4]; // [rsp+68h] [rbp-19h] BYREF

  v11 = a5;
  v12 = a7;
  x = a2->x;
  y = a2->y;
  v22 = *a4;
  v24 = a5;
  v25 = a7;
  if ( a6 && (x || y) )
  {
    a6->rclBounds.left += x;
    a6->rclBounds.right += x;
    a6->rclBounds.top += y;
    a6->rclBounds.bottom += y;
    if ( a6->iDComplexity )
    {
      v21.x = x;
      v21.y = y;
      RGNOBJ::bOffset((RGNOBJ *)&a6[2].rclBounds.top, &v21);
      v11 = v24;
      v12 = v25;
    }
  }
  v15 = a9->y + v22.y;
  v26[0] = x + a8->left;
  v16 = x + a8->right;
  v23[1] = v15;
  v26[2] = v16;
  v26[1] = y + a8->top;
  v17 = 0;
  v26[3] = y + a8->bottom;
  v23[0] = a9->x + v22.x;
  if ( a1 )
    v17 = ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, _DWORD *, _DWORD *))a1)(
            a3,
            v11,
            a6,
            v12,
            v26,
            v23);
  if ( a6 )
  {
    v18 = -y;
    v19 = -x;
    if ( v19 || v18 )
    {
      a6->rclBounds.left += v19;
      a6->rclBounds.right += v19;
      a6->rclBounds.top += v18;
      a6->rclBounds.bottom += v18;
      if ( a6->iDComplexity )
      {
        v21.x = v19;
        v21.y = v18;
        RGNOBJ::bOffset((RGNOBJ *)&a6[2].rclBounds.top, &v21);
      }
    }
  }
  return v17;
}
