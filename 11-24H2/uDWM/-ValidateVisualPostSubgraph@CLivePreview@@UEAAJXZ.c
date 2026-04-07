/*
 * XREFs of ?ValidateVisualPostSubgraph@CLivePreview@@UEAAJXZ @ 0x1800C7DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateVisualPostSubgraph@CVisual@@UEAAJXZ @ 0x180022710 (-ValidateVisualPostSubgraph@CVisual@@UEAAJXZ.c)
 *     ?UpdateRenderData@CRenderDataVisual@@UEAAJXZ @ 0x18003EFA0 (-UpdateRenderData@CRenderDataVisual@@UEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CLivePreview::ValidateVisualPostSubgraph(CLivePreview *this)
{
  int updated; // eax
  unsigned int v3; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  CVisual::ValidateVisualPostSubgraph(this);
  if ( (*((_BYTE *)this + 32) & 4) != 0 )
  {
    updated = CRenderDataVisual::UpdateRenderData((struct CRenderDataProxy **)this);
    v3 = updated;
    if ( updated < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x675,
        (__int64)"clientcore\\windows\\dwm\\udwm\\livepreview.cpp",
        (const char *)(unsigned int)updated);
      return v3;
    }
    *((_DWORD *)this + 8) &= ~4u;
  }
  return 0LL;
}
