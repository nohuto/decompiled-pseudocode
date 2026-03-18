/*
 * XREFs of ??0ISwapChainRealization@@QEAA@XZ @ 0x1801A6AE0
 * Callers:
 *     ??0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_N4PEAVCDecodeBitmap@@@Z @ 0x1801A69DC (--0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@.c)
 *     ??0IYUVSwapChainRealization@@QEAA@XZ @ 0x1801A7678 (--0IYUVSwapChainRealization@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

ISwapChainRealization *__fastcall ISwapChainRealization::ISwapChainRealization(ISwapChainRealization *this)
{
  *((_QWORD *)this + 2) = &Windows::Foundation::Collections::IMapView<_GUID,IInspectable *>::`vftable';
  return this;
}
