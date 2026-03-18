/*
 * XREFs of ??0CBackdropVisualImage@@AEAA@PEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_N@Z @ 0x1800079E0
 * Callers:
 *     ?Create@CBackdropVisualImage@@SAJPEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_NPEAPEAV1@@Z @ 0x180007900 (-Create@CBackdropVisualImage@@SAJPEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_NPEAPEAV1@.c)
 * Callees:
 *     ??0?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@AEBV01@@Z @ 0x1800083C0 (--0-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreePathUnit@CVisu.c)
 *     ??0CCachedVisualImage@@IEAA@PEAVCComposition@@_N@Z @ 0x18006D8D0 (--0CCachedVisualImage@@IEAA@PEAVCComposition@@_N@Z.c)
 */

CBackdropVisualImage *__fastcall CBackdropVisualImage::CBackdropVisualImage(
        CBackdropVisualImage *this,
        struct CComposition *a2,
        const struct CVisual *a3,
        const struct CVisualTreePath *a4,
        bool a5)
{
  __int64 v7; // r11

  CCachedVisualImage::CCachedVisualImage(this, a2, 0);
  *((_QWORD *)this + 258) = v7;
  *((_QWORD *)this + 9) = &CBackdropVisualImage::`vftable'{for `IBitmapResource'};
  *(_QWORD *)this = &CBackdropVisualImage::`vftable'{for `CResource'};
  *((_QWORD *)this + 10) = &CBackdropVisualImage::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 11) = &CCachedVisualImage::`vftable'{for `IDeviceResourceNotify'};
  detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>(
    (char *)this + 2072,
    a4);
  *((_OWORD *)this + 133) = DirectX::g_XMZero;
  *((_DWORD *)this + 536) = 1065353216;
  *((_DWORD *)this + 537) = 1065353216;
  *((_DWORD *)this + 538) = 1065353216;
  *((_DWORD *)this + 539) = 1065353216;
  *((_QWORD *)this + 270) = 2LL;
  *((_DWORD *)this + 542) = 2048;
  *(_QWORD *)((char *)this + 2180) = 0LL;
  *(_QWORD *)((char *)this + 2196) = 0LL;
  *((_QWORD *)this + 276) = 0LL;
  *((_QWORD *)this + 277) = 0LL;
  *((_QWORD *)this + 278) = 0LL;
  *(_QWORD *)((char *)this + 2172) = 1065353216LL;
  *(_QWORD *)((char *)this + 2188) = 1065353216LL;
  *((_DWORD *)this + 551) = 1065353216;
  *((_QWORD *)this + 279) = 0LL;
  *((_WORD *)this + 1120) = 0;
  *((_BYTE *)this + 2242) = a5;
  return this;
}
