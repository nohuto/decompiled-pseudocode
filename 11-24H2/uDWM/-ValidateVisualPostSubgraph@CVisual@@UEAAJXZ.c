/*
 * XREFs of ?ValidateVisualPostSubgraph@CVisual@@UEAAJXZ @ 0x180022710
 * Callers:
 *     ?ValidateVisualPostSubgraph@CAtlasedRectsVisual@@UEAAJXZ @ 0x180022680 (-ValidateVisualPostSubgraph@CAtlasedRectsVisual@@UEAAJXZ.c)
 *     ?ValidateVisualPostSubgraph@CLivePreview@@UEAAJXZ @ 0x1800C7DF0 (-ValidateVisualPostSubgraph@CLivePreview@@UEAAJXZ.c)
 * Callees:
 *     ?UpdateHidden@CVisual@@AEAAJXZ @ 0x18007787C (-UpdateHidden@CVisual@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CVisual::ValidateVisualPostSubgraph(CVisual *this)
{
  int updated; // eax
  unsigned int v4; // edi
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*((_DWORD *)this + 8) & 0x200) == 0 )
    return 0LL;
  updated = CVisual::UpdateHidden(this);
  v4 = updated;
  if ( updated >= 0 )
  {
    *((_DWORD *)this + 8) &= ~0x200u;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAA,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
    (const char *)(unsigned int)updated,
    v5);
  return v4;
}
