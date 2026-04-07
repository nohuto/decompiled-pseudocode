/*
 * XREFs of ??1CDWriteText@@UEAA@XZ @ 0x18003082C
 * Callers:
 *     ??_GCDWriteText@@UEAAPEAXI@Z @ 0x180030790 (--_GCDWriteText@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008D08 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18001BFC0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031AE8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall CDWriteText::~CDWriteText(CDWriteText *this)
{
  std::wstring::_Tidy_deallocate((char *)this + 296);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 36);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 35);
  CSpriteVisual::~CSpriteVisual(this);
}
