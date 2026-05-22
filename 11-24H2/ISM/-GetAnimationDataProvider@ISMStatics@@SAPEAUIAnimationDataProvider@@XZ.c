/*
 * XREFs of ?GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ @ 0x18009BFDC
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18004F884 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?FeedAnimationDataIfNeeded@GestureHandler@@AEAAX_N@Z @ 0x180058940 (-FeedAnimationDataIfNeeded@GestureHandler@@AEAAX_N@Z.c)
 *     ?StartAnimation@GestureHandler@@QEAAXAEAV?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@_N@Z @ 0x180146DA8 (-StartAnimation@GestureHandler@@QEAAXAEAV-$unordered_set@IU-$hash@I@std@@U-$equal_to@I@2@V-$allo.c)
 *     ?StartAnimation@GestureHandler@@QEAAXI_N@Z @ 0x180146F24 (-StartAnimation@GestureHandler@@QEAAXI_N@Z.c)
 *     ?FeedAnimationDataIfNeeded@DragNDropProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z @ 0x18014B6E0 (-FeedAnimationDataIfNeeded@DragNDropProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z.c)
 *     ?StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x18014DA34 (-StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?FeedAnimationDataIfNeeded@ResizeProcessor@@AEAAXKUtagPOINT@@@Z @ 0x180150AF0 (-FeedAnimationDataIfNeeded@ResizeProcessor@@AEAAXKUtagPOINT@@@Z.c)
 *     ?StartAnimation@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x180151F6C (-StartAnimation@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 *     ?FeedAnimationDataIfNeeded@EdgyProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z @ 0x1801541D8 (-FeedAnimationDataIfNeeded@EdgyProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z.c)
 *     ?StartAnimation@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180155800 (-StartAnimation@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Create@AnimationDataProvider@@SA?AV?$ComPtr@UIAnimationDataProvider@@@WRL@Microsoft@@XZ @ 0x18008E3BC (-Create@AnimationDataProvider@@SA-AV-$ComPtr@UIAnimationDataProvider@@@WRL@Microsoft@@XZ.c)
 */

struct IAnimationDataProvider *ISMStatics::GetAnimationDataProvider(void)
{
  struct IAnimationDataProvider *result; // rax
  __int64 *v1; // rax
  struct IAnimationDataProvider *v2; // rcx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  result = ISMStatics::s_animationDataProvider;
  if ( !ISMStatics::s_animationDataProvider )
  {
    v1 = AnimationDataProvider::Create(&v3);
    v2 = (struct IAnimationDataProvider *)*v1;
    *v1 = 0LL;
    ISMStatics::s_animationDataProvider = v2;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v3);
    return ISMStatics::s_animationDataProvider;
  }
  return result;
}
