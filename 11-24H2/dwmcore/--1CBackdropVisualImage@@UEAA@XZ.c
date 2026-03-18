/*
 * XREFs of ??1CBackdropVisualImage@@UEAA@XZ @ 0x18021177C
 * Callers:
 *     ??_GCBackdropVisualImage@@UEAAPEAXI@Z @ 0x180211730 (--_GCBackdropVisualImage@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180009360 (--1-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreePathUnit@CVisu.c)
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x18000A7D0 (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18000AAA0 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@std@@@std@@YAXPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@0@QEAU10@AEAV?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@0@@Z @ 0x1801C7AD0 (--$_Destroy_range@V-$allocator@U-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@std@@@std@@YAXP.c)
 *     ??1?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@QEAA@XZ @ 0x1801D252C (--1-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@.c)
 *     ?size@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@QEBA_KXZ @ 0x1801D26BC (-size@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCach.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802422DC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall CBackdropVisualImage::~CBackdropVisualImage(CBackdropVisualImage *this)
{
  char *v2; // rsi
  const char *v3; // r9
  void **v4; // rbx
  void **v5; // rax
  _QWORD *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char *v8; // [rsp+30h] [rbp+8h] BYREF
  char *v9; // [rsp+38h] [rbp+10h] BYREF

  *(_QWORD *)this = &CBackdropVisualImage::`vftable'{for `CResource'};
  v2 = (char *)this + 2160;
  *((_QWORD *)this + 9) = &CBackdropVisualImage::`vftable'{for `IBitmapResource'};
  *((_QWORD *)this + 10) = &CBackdropVisualImage::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 11) = &CCachedVisualImage::`vftable'{for `IDeviceResourceNotify'};
  if ( detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *>>::size((__int64)this + 2160) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1A,
      (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\resources\\BackdropVisualImage.h",
      v3);
  v4 = (void **)DwmDbg::DbgString::DbgString(&v8, word_18032AF78);
  v5 = (void **)DwmDbg::DbgString::DbgString(&v9, "BVI-Destroy");
  CBackdropVisualImage::LogEtwEvent((__int64)this, v5, v4);
  v6 = (_QWORD *)*((_QWORD *)this + 276);
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<std::pair<CVisual const *,CVisualTreePath const>>>(v6, *((_QWORD **)this + 277));
    std::_Deallocate<16,0>(
      *((_QWORD **)this + 276),
      (*((_QWORD *)this + 278) - *((_QWORD *)this + 276)) & 0xFFFFFFFFFFFFFFC0uLL);
    *((_QWORD *)this + 276) = 0LL;
    *((_QWORD *)this + 277) = 0LL;
    *((_QWORD *)this + 278) = 0LL;
  }
  detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *>>::~vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *>>((__int64)v2);
  detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::~vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>((__int64)this + 2072);
  CCachedVisualImage::~CCachedVisualImage(this);
}
