/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140052980
 * Callers:
 *     ndisEtwCaptureMiniportDriverData @ 0x1400967F8 (ndisEtwCaptureMiniportDriverData.c)
 *     ?ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x140136CE4 (-ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisMAllowSilentReenumerate@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14013E934 (-ndisMAllowSilentReenumerate@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ReadGuid@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAU_GUID@@@Z @ 0x140143134 (-ReadGuid@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAU_GUID@@@Z.c)
 *     ?ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@@Z @ 0x1401431F0 (-ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$KArray@V-$unique_ptr@UKSt.c)
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1401436E0 (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ndisBindReadFilterDriverFromV3Registry @ 0x140143820 (ndisBindReadFilterDriverFromV3Registry.c)
 *     ?ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x140143B48 (-ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     netsetupEnumerateObjectIds__lambda_3ed15a572a362cb111cc1d3010d8268d___ @ 0x140143FDC (netsetupEnumerateObjectIds__lambda_3ed15a572a362cb111cc1d3010d8268d___.c)
 *     _lambda_3ed15a572a362cb111cc1d3010d8268d_::operator() @ 0x140144134 (_lambda_3ed15a572a362cb111cc1d3010d8268d_--operator().c)
 *     netsetupEnumerateObjectIds__lambda_4b6b787b7067933e1bc6a008e906fab6___ @ 0x140144740 (netsetupEnumerateObjectIds__lambda_4b6b787b7067933e1bc6a008e906fab6___.c)
 *     netsetupEnumerateObjectIds__lambda_5d80e7093cc36aceb5a46cb23d7a8b09___ @ 0x140144898 (netsetupEnumerateObjectIds__lambda_5d80e7093cc36aceb5a46cb23d7a8b09___.c)
 *     netsetupEnumerateObjectIds__lambda_7c777a259d431027593b89f579a3c058___ @ 0x1401449F0 (netsetupEnumerateObjectIds__lambda_7c777a259d431027593b89f579a3c058___.c)
 *     netsetupEnumerateObjectIds__lambda_db34444a9d2aed31789eacdbaf52f617___ @ 0x140144B48 (netsetupEnumerateObjectIds__lambda_db34444a9d2aed31789eacdbaf52f617___.c)
 *     ndisIsBindPathEnabled @ 0x140146180 (ndisIsBindPathEnabled.c)
 *     ndisLoadNamedFilterAltitudes @ 0x14014649C (ndisLoadNamedFilterAltitudes.c)
 *     ?ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x140146624 (-ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z.c)
 *     ndisReadNicBindProperties @ 0x1401467B4 (ndisReadNicBindProperties.c)
 *     ?ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x140146924 (-ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z.c)
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x1401479DC (ndisIfUpdateIfBlockFromPersistedState.c)
 *     GetModuleParameters @ 0x14014AE30 (GetModuleParameters.c)
 *     ndisBindBuilderLoadSettings @ 0x14018DE7C (ndisBindBuilderLoadSettings.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
        void **a1)
{
  void *v1; // rcx
  NTSTATUS result; // eax

  v1 = *a1;
  if ( v1 )
    return ZwClose(v1);
  return result;
}
