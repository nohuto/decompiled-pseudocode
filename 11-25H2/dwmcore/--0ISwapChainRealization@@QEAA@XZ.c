/*
 * XREFs of ??0ISwapChainRealization@@QEAA@XZ @ 0x180102C1C
 * Callers:
 *     ??0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_N4PEAVCDecodeBitmap@@@Z @ 0x180102B18 (--0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@.c)
 *     ??0IYUVSwapChainRealization@@QEAA@XZ @ 0x18022C620 (--0IYUVSwapChainRealization@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

ISwapChainRealization *__fastcall ISwapChainRealization::ISwapChainRealization(ISwapChainRealization *this)
{
  *((_QWORD *)this + 2) = &Windows::Foundation::Collections::IMapView<_GUID,IInspectable *>::`vftable';
  return this;
}
