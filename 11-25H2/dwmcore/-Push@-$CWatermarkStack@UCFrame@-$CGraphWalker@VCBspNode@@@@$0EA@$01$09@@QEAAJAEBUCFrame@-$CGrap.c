/*
 * XREFs of ?Push@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCBspNode@@@@$0EA@$01$09@@QEAAJAEBUCFrame@?$CGraphWalker@VCBspNode@@@@@Z @ 0x1801DF664
 * Callers:
 *     ?GotoPostChild@?$CGraphWalker@VCBspNode@@@@QEAAJPEAPEAVCBspNode@@@Z @ 0x180223E1C (-GotoPostChild@-$CGraphWalker@VCBspNode@@@@QEAAJPEAPEAVCBspNode@@@Z.c)
 *     ?GotoPreChild@?$CGraphWalker@VCBspNode@@@@QEAAJPEAPEAVCBspNode@@@Z @ 0x18022B730 (-GotoPreChild@-$CGraphWalker@VCBspNode@@@@QEAAJPEAPEAVCBspNode@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Grow@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCBspNode@@@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x1801DF6F0 (-Grow@-$CWatermarkStack@UCFrame@-$CGraphWalker@VCBspNode@@@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z.c)
 */

__int64 __fastcall CWatermarkStack<CGraphWalker<CBspNode>::CFrame,64,2,10>::Push(__int64 a1, _OWORD *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  unsigned int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 8) == *(_DWORD *)(a1 + 12)
    && (v4 = CWatermarkStack<CGraphWalker<CBspNode>::CFrame,64,2,10>::Grow(a1), v5 = v4, v4 < 0) )
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
    *(_OWORD *)(*(_QWORD *)a1 + 16LL * (unsigned int)(*(_DWORD *)(a1 + 8))++) = *a2;
    v7 = *(_DWORD *)(a1 + 20);
    if ( v7 <= *(_DWORD *)(a1 + 8) )
      v7 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 20) = v7;
    return 0LL;
  }
}
