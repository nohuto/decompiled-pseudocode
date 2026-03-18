/*
 * XREFs of ?Push@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEAAJAEBUHeatMapOptions@CComposition@@@Z @ 0x18024D368
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083CD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Grow@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@AEAAJ_KIIPEAPEAX@Z @ 0x1802656C0 (-Grow@-$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@AEAAJ_KIIPEAPEAX@Z.c)
 */

__int64 __fastcall CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::Push(__int64 *a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // edi
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *((_DWORD *)a1 + 2) == *((_DWORD *)a1 + 3)
    && (v4 = CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::Grow(a1), v5 = v4, v4 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)(unsigned int)v4);
    return v5;
  }
  else
  {
    v7 = 3LL * *((unsigned int *)a1 + 2);
    v8 = *a1;
    *(_OWORD *)(v8 + 8 * v7) = *(_OWORD *)a2;
    *(_QWORD *)(v8 + 8 * v7 + 16) = *(_QWORD *)(a2 + 16);
    ++*((_DWORD *)a1 + 2);
    v9 = *((_DWORD *)a1 + 5);
    if ( v9 <= *((_DWORD *)a1 + 2) )
      v9 = *((_DWORD *)a1 + 2);
    *((_DWORD *)a1 + 5) = v9;
    return 0LL;
  }
}
