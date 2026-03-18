/*
 * XREFs of ?Push@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z @ 0x180214F4C
 * Callers:
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180134654 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Grow@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x180214FCC (-Grow@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z.c)
 */

__int64 __fastcall CWatermarkStack<CVisual *,64,2,10>::Push(__int64 a1, _QWORD *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  unsigned int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 8) == *(_DWORD *)(a1 + 12)
    && (v4 = CWatermarkStack<CVisual *,64,2,10>::Grow(a1), v5 = v4, v4 < 0) )
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
    *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 8))++) = *a2;
    v6 = *(_DWORD *)(a1 + 20);
    if ( v6 <= *(_DWORD *)(a1 + 8) )
      v6 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 20) = v6;
    return 0LL;
  }
}
