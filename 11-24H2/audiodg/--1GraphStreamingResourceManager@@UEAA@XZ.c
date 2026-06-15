/*
 * XREFs of ??1GraphStreamingResourceManager@@UEAA@XZ @ 0x140012D7C
 * Callers:
 *     ??_EGraphStreamingResourceManager@@UEAAPEAXI@Z @ 0x140012D40 (--_EGraphStreamingResourceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140012DD8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveAll@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAAXXZ @ 0x140012E08 (-RemoveAll@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@.c)
 *     ?RemoveAll@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAXXZ @ 0x140012EA0 (-RemoveAll@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElementT.c)
 */

void __fastcall GraphStreamingResourceManager::~GraphStreamingResourceManager(GraphStreamingResourceManager *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((char *)this + 280);
  ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::RemoveAll((char *)this + 208);
  ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::RemoveAll((char *)this + 136);
  ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::RemoveAll((char *)this + 64);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  *((_DWORD *)this + 5) = -1073741823;
}
