/*
 * XREFs of ??1CWorkFifo@@QEAA@XZ @ 0x18011FCF0
 * Callers:
 *     ??1CSpatialAudioResourceManager@Sarm@@UEAA@XZ @ 0x18011FC28 (--1CSpatialAudioResourceManager@Sarm@@UEAA@XZ.c)
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$6 @ 0x1801711A3 (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$6.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18001A1A0 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ?Shutdown@CWorkFifo@@QEAAXXZ @ 0x180122594 (-Shutdown@CWorkFifo@@QEAAXXZ.c)
 */

void __fastcall CWorkFifo::~CWorkFifo(CWorkFifo *this)
{
  CWorkFifo::Shutdown(this);
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ((void **)this + 22);
  _Mtx_destroy_in_situ((CWorkFifo *)((char *)this + 144));
  std::deque<std::shared_ptr<CWorkFifo::WorkItem>>::~deque<std::shared_ptr<CWorkFifo::WorkItem>>((char **)this + 12);
}
