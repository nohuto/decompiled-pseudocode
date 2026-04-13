/*
 * XREFs of ??1CreativeEventReportedCache@ContentManagement@@UEAA@XZ @ 0x18004C598
 * Callers:
 *     ??_GCreativeEventReportedCache@ContentManagement@@UEAAPEAXI@Z @ 0x18004DA30 (--_GCreativeEventReportedCache@ContentManagement@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18003D630 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

void __fastcall ContentManagement::CreativeEventReportedCache::~CreativeEventReportedCache(
        ContentManagement::CreativeEventReportedCache *this)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 96);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 72);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback>((__int64)this);
}
