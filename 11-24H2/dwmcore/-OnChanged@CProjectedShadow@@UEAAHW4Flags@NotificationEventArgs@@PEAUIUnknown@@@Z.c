/*
 * XREFs of ?OnChanged@CProjectedShadow@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18021DFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004DD48 (-reset@-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?clear@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180110070 (-clear@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDrawListCa.c)
 */

__int64 __fastcall CProjectedShadow::OnChanged(__int64 a1, int a2, __int64 a3)
{
  if ( a3 && (!a2 || (unsigned int)(a2 - 5) <= 1) )
  {
    detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear((__int64 *)(a1 + 256));
    if ( a3 == a1 || a3 == *(_QWORD *)(a1 + 80) )
      wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::reset((CGlobalDrawingContext **)(a1 + 344));
  }
  return 0LL;
}
