/*
 * XREFs of ?DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z @ 0x18002B688
 * Callers:
 *     ?UpdateLayout@CCanvasVisual@@UEAAJ_N@Z @ 0x18002B530 (-UpdateLayout@CCanvasVisual@@UEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CVisual::DoCanvasLayout(
        const struct tagSIZE *a1,
        const struct _MARGINS *a2,
        const struct tagSIZE *a3,
        struct tagPOINT *a4,
        struct tagSIZE *a5)
{
  int cxLeftWidth; // r11d
  int cxRightWidth; // edi
  int cyBottomHeight; // ebx
  int cyTopHeight; // r10d
  __int64 v11; // rax
  char v12; // r8
  LONG cx; // ecx
  int v14; // ecx
  LONG cy; // eax
  int v16; // eax
  int v18; // eax
  int v19; // eax
  struct tagPOINT v20; // [rsp+0h] [rbp-28h]
  __int64 v21; // [rsp+38h] [rbp+10h]
  struct tagSIZE v22; // [rsp+38h] [rbp+10h]

  cxLeftWidth = a2->cxLeftWidth;
  cxRightWidth = a2->cxRightWidth;
  cyBottomHeight = a2->cyBottomHeight;
  cyTopHeight = a2->cyTopHeight;
  if ( *(_QWORD *)&a2->cxLeftWidth == 0x7FFFFFFF7FFFFFFFLL && cyTopHeight == 0x7FFFFFFF && cyBottomHeight == 0x7FFFFFFF )
    return 0;
  v11 = (__int64)*a3;
  v21 = (__int64)*a3;
  v12 = 1;
  if ( cxRightWidth == 0x7FFFFFFF )
  {
    v18 = 0;
    if ( cxLeftWidth != 0x7FFFFFFF )
      v18 = a2->cxLeftWidth;
    v20.x = v18;
  }
  else
  {
    cx = a1->cx;
    if ( cxLeftWidth != 0x7FFFFFFF )
    {
      v20.x = a2->cxLeftWidth;
      v14 = cx - cxRightWidth - cxLeftWidth;
      goto LABEL_5;
    }
    v20.x = cx - v11 - cxRightWidth;
  }
  v14 = v21;
LABEL_5:
  if ( cyBottomHeight == 0x7FFFFFFF )
  {
    v19 = 0;
    if ( cyTopHeight != 0x7FFFFFFF )
      v19 = a2->cyTopHeight;
    goto LABEL_25;
  }
  cy = a1->cy;
  if ( cyTopHeight == 0x7FFFFFFF )
  {
    v19 = cy - a3->cy - cyBottomHeight;
LABEL_25:
    v20.y = v19;
    v16 = HIDWORD(v21);
    goto LABEL_8;
  }
  v20.y = a2->cyTopHeight;
  v16 = cy - cyTopHeight - cyBottomHeight;
LABEL_8:
  if ( v14 <= 0 )
    v14 = 0;
  v22.cx = v14;
  if ( v16 <= 0 )
    v16 = 0;
  v22.cy = v16;
  *a5 = v22;
  *a4 = v20;
  return v12;
}
