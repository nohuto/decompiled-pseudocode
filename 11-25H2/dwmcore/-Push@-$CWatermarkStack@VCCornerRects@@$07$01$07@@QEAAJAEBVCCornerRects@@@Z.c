/*
 * XREFs of ?Push@?$CWatermarkStack@VCCornerRects@@$07$01$07@@QEAAJAEBVCCornerRects@@@Z @ 0x18027265C
 * Callers:
 *     ?Push@COccluderClipStack@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCShapePtr@@AEBVCMILMatrix@@@Z @ 0x180272704 (-Push@COccluderClipStack@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Grow@?$CWatermarkStack@VCCornerRects@@$07$01$07@@AEAAJ_KIIPEAPEAX@Z @ 0x1802723BC (-Grow@-$CWatermarkStack@VCCornerRects@@$07$01$07@@AEAAJ_KIIPEAPEAX@Z.c)
 */

__int64 __fastcall CWatermarkStack<CCornerRects,8,2,8>::Push(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  unsigned int v7; // edi
  __int64 v9; // rcx
  unsigned int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 8) == *(_DWORD *)(a1 + 12)
    && (v6 = CWatermarkStack<CCornerRects,8,2,8>::Grow(a1, a2, a3, a4, (const void **)a1), v7 = v6, v6 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)(unsigned int)v6);
    return v7;
  }
  else
  {
    v9 = *(_QWORD *)a1 + 68LL * *(unsigned int *)(a1 + 8);
    *(_OWORD *)v9 = *a2;
    *(_OWORD *)(v9 + 16) = a2[1];
    *(_OWORD *)(v9 + 32) = a2[2];
    *(_OWORD *)(v9 + 48) = a2[3];
    *(_BYTE *)(v9 + 64) = *((_BYTE *)a2 + 64);
    ++*(_DWORD *)(a1 + 8);
    v10 = *(_DWORD *)(a1 + 20);
    if ( v10 <= *(_DWORD *)(a1 + 8) )
      v10 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 20) = v10;
    return 0LL;
  }
}
