/*
 * XREFs of ?Push@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z @ 0x18016A8E4
 * Callers:
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18008FA94 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z @ 0x180169048 (-CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?PreComputePostSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z @ 0x180169400 (-PreComputePostSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Grow@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x180200930 (-Grow@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z.c)
 */

__int64 __fastcall CWatermarkStack<CBspNode *,64,2,10>::Push(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // eax
  int v6; // eax
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 8) == *(_DWORD *)(a1 + 12)
    && (v6 = CWatermarkStack<CBspNode *,64,2,10>::Grow(a1), v7 = v6, v6 < 0) )
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
    *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 8))++) = *a2;
    v4 = *(_DWORD *)(a1 + 20);
    if ( v4 <= *(_DWORD *)(a1 + 8) )
      v4 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 20) = v4;
    return 0LL;
  }
}
