/*
 * XREFs of ??1CDeviceGraphObjectCacheManager@@UEAA@XZ @ 0x14006B338
 * Callers:
 *     ??_GCDeviceGraphObjectCacheManager@@UEAAPEAXI@Z @ 0x14006B410 (--_GCDeviceGraphObjectCacheManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@UIWeakReference@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@UIWeakReference@@@WRL@Microsoft@@@2@@ATL@@QEAAXXZ @ 0x14006B9A0 (-RemoveAll@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@UI.c)
 */

void __fastcall CDeviceGraphObjectCacheManager::~CDeviceGraphObjectCacheManager(CDeviceGraphObjectCacheManager *this)
{
  ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<IWeakReference>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<IWeakReference>>>::RemoveAll((char *)this + 24);
  *((_DWORD *)this + 5) = -1073741823;
}
