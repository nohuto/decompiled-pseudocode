/*
 * XREFs of UserSetDCVisRgn @ 0x1C004C660
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteObject @ 0x1C00472A0 (GreDeleteObject.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C004A2E0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     IsGetStyleWindowSupported @ 0x1C005BE50 (IsGetStyleWindowSupported.c)
 *     GreOffsetRgn @ 0x1C005BF60 (GreOffsetRgn.c)
 *     GreCombineRgn @ 0x1C005C1D0 (GreCombineRgn.c)
 *     CreateEmptyRgnPublic @ 0x1C005CAC0 (CreateEmptyRgnPublic.c)
 *     GreSetRectRgn @ 0x1C008A530 (GreSetRectRgn.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UserSetDCVisRgn(struct tagDCE *a1)
{
  _DWORD *v2; // rbx
  _QWORD *v3; // rsi
  HRGN EmptyRgnPublic; // rsi
  int v5; // ebp
  HRGN v6; // rcx
  int v7; // r9d
  HRGN v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  if ( !qword_1C0295AA8 || (int)qword_1C0295AA8() < 0 )
  {
    v2 = (_DWORD *)((char *)a1 + 64);
    v3 = (_QWORD *)((char *)a1 + 16);
LABEL_12:
    *v2 |= 0x10000000u;
    goto LABEL_6;
  }
  v2 = (_DWORD *)((char *)a1 + 64);
  v3 = (_QWORD *)((char *)a1 + 16);
  if ( !qword_1C0295AB0
    || !(unsigned int)qword_1C0295AB0(&v8, *((_QWORD *)a1 + 2), *((_QWORD *)a1 + 3), *((unsigned int *)a1 + 16)) )
  {
    goto LABEL_12;
  }
  *v2 &= ~0x10000000u;
LABEL_6:
  if ( *((_QWORD *)a1 + 6) > 2uLL
    && (int)IsGetStyleWindowSupported() >= 0
    && qword_1C0295AC0
    && qword_1C0295AC0(*v3, 2848LL) )
  {
    EmptyRgnPublic = (HRGN)CreateEmptyRgnPublic();
    GreCombineRgn(EmptyRgnPublic, *((HRGN *)a1 + 6), 0LL, 5);
    GreOffsetRgn(EmptyRgnPublic);
    v5 = 1;
    v2 = (_DWORD *)((char *)a1 + 64);
  }
  else
  {
    EmptyRgnPublic = (HRGN)*((_QWORD *)a1 + 6);
    v5 = 0;
  }
  if ( (*v2 & 0x80u) != 0 )
  {
    v6 = v8;
    if ( EmptyRgnPublic )
    {
      v7 = 1;
LABEL_19:
      GreCombineRgn(v6, v6, EmptyRgnPublic, v7);
      goto LABEL_10;
    }
  }
  else
  {
    if ( (*v2 & 0x40) == 0 )
      goto LABEL_10;
    v6 = v8;
    if ( EmptyRgnPublic != (HRGN)1 )
    {
      v7 = 4;
      goto LABEL_19;
    }
  }
  GreSetRectRgn(v6, 0);
LABEL_10:
  ResetOrg(v8, a1, 1);
  if ( v5 )
    GreDeleteObject((HPALETTE)EmptyRgnPublic);
}
