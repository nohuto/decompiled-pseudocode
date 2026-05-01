/*
 * XREFs of ??1BroadcastDVRActiveAppInfo@@QEAA@XZ @ 0x1800BC1FC
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@UBroadcastDVRActiveAppInfo@@@std@@EEAAXXZ @ 0x18021DCA0 (-_Destroy@-$_Ref_count_obj2@UBroadcastDVRActiveAppInfo@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall BroadcastDVRActiveAppInfo::~BroadcastDVRActiveAppInfo(BroadcastDVRActiveAppInfo *this)
{
  std::wstring::_Tidy_deallocate((void **)this + 9);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 8);
  Windows::Internal::String::~String((HSTRING *)this + 6);
}
