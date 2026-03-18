/*
 * XREFs of ?MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ @ 0x18000C2D4
 * Callers:
 *     ?ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18000ACA0 (-ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV-$TMilRect_@MUD2D_RE.c)
 *     ?OnChanged@CCachedVisualImage@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18000C2B0 (-OnChanged@CCachedVisualImage@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessUpdate@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CACHEDVISUALIMAGE@@@Z @ 0x18006D1FC (-ProcessUpdate@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CACHEDVISUALIMAGE@@@Z.c)
 *     ?MarkAllBackdropVisualImagesDirty@CVisual@@QEBAXPEBVCVisualTree@@@Z @ 0x1801FFDC8 (-MarkAllBackdropVisualImagesDirty@CVisual@@QEBAXPEBVCVisualTree@@@Z.c)
 *     ?SetRootVisual@CCachedVisualImage@@IEAAJPEAVCVisual@@@Z @ 0x18028D324 (-SetRootVisual@CCachedVisualImage@@IEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?MarkDirty@CCachedTarget@CCachedVisualImage@@QEAAXXZ @ 0x18000C220 (-MarkDirty@CCachedTarget@CCachedVisualImage@@QEAAXXZ.c)
 *     ?IsValid@CCachedTarget@CCachedVisualImage@@QEBA_NXZ @ 0x18010C380 (-IsValid@CCachedTarget@CCachedVisualImage@@QEBA_NXZ.c)
 *     ?erase@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1801EACF4 (-erase@-$vector@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarge.c)
 */

void __fastcall CCachedVisualImage::MarkAllTargetsDirty(CCachedVisualImage *this)
{
  char *v1; // r14
  CCachedVisualImage::CCachedTarget **v3; // rbx
  CCachedVisualImage::CCachedTarget *v4; // rsi
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = (char *)this + 184;
  v3 = (CCachedVisualImage::CCachedTarget **)*((_QWORD *)this + 23);
  while ( v3 != *((CCachedVisualImage::CCachedTarget ***)this + 24) )
  {
    v4 = *v3;
    if ( CCachedVisualImage::CCachedTarget::IsValid(*v3) )
    {
      CCachedVisualImage::CCachedTarget::MarkDirty((CBackdropVisualImage **)v4);
      ++v3;
    }
    else
    {
      v3 = *(CCachedVisualImage::CCachedTarget ***)std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::erase(
                                                     v1,
                                                     &v5,
                                                     v3);
    }
  }
}
