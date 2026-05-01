/*
 * XREFs of __anonymous_namespace_::CreateGraphicsCaptureItem_::_1_::dtor$1 @ 0x1805F7C6D
 * Callers:
 *     <none>
 * Callees:
 *     ??1GraphicsCaptureItem@Capture@Graphics@Windows@winrt@@QEAA@XZ @ 0x1805F7A80 (--1GraphicsCaptureItem@Capture@Graphics@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall _anonymous_namespace_::CreateGraphicsCaptureItem_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    winrt::Windows::Graphics::Capture::GraphicsCaptureItem::~GraphicsCaptureItem(*(winrt::Windows::Graphics::Capture::GraphicsCaptureItem **)(a2 + 80));
  }
}
