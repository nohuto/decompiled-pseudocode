/*
 * XREFs of ??1?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x1800A1D78
 * Callers:
 *     _AtmosCheck::PerformLicenseCheckInternalLegacy_::_1_::dtor$3 @ 0x1801686C2 (_AtmosCheck--PerformLicenseCheckInternalLegacy_--_1_--dtor$3.c)
 *     _AtmosCheck::PerformLicenseCheckForSpatialAudioSubtype_::_1_::dtor$1 @ 0x18016B85B (_AtmosCheck--PerformLicenseCheckForSpatialAudioSubtype_--_1_--dtor$1.c)
 *     _AtmosCheck::PerformLicenseCheckForEndpoint_::_1_::dtor$1 @ 0x1801704C5 (_AtmosCheck--PerformLicenseCheckForEndpoint_--_1_--dtor$1.c)
 *     _CMulticastSessionManager::GetMulticastProviders_::_1_::dtor$0 @ 0x180170513 (_CMulticastSessionManager--GetMulticastProviders_--_1_--dtor$0.c)
 *     _CMulticastSessionManager::GetMulticastSessions_::_1_::dtor$1 @ 0x180170525 (_CMulticastSessionManager--GetMulticastSessions_--_1_--dtor$1.c)
 *     _AtmosCheck::AddArrayToLicenseMap_::_1_::dtor$0 @ 0x1801724BB (_AtmosCheck--AddArrayToLicenseMap_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180021540 (--3@YAXPEAX@Z.c)
 */

void __fastcall wistd::unique_ptr<_MulticastSessionConfiguration [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>::~unique_ptr<_MulticastSessionConfiguration [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>(
        void **a1)
{
  void *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    operator delete(v1);
}
