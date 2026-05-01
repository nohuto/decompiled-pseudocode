/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCShrinkButtonElement@@UIMultitaskingViewDragSource@@UISwitchItemThumbnailElement@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1804C1920
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCShrinkButtonElement@@UIMultitaskingViewDragSource@@UISwitchItemThumbnailElement@@@Details@WRL@Microsoft@@WBBA@EAAKXZ @ 0x1804C1940 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCShr_ea_1804C1940.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCShrinkButtonElement@@UIMultitaskingViewDragSource@@UISwitchItemThumbnailElement@@@Details@WRL@Microsoft@@WBBI@EAAKXZ @ 0x1804C1960 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCShr_ea_1804C1960.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CShrinkButtonElement,IMultitaskingViewDragSource,ISwitchItemThumbnailElement>::AddRef(
        __int64 a1,
        volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 292), a2);
}
