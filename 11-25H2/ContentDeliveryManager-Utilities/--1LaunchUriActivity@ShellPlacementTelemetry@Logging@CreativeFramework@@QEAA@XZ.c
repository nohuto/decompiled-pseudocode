/*
 * XREFs of ??1LaunchUriActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ @ 0x18004C688
 * Callers:
 *     ?ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@W4EventNotificationType@2@@Z @ 0x180054AD0 (-ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEA.c)
 *     _ContentManagement::ContentManagementService::ProcessCreativeEvent_::_1_::dtor$1 @ 0x1800B882D (_ContentManagement--ContentManagementService--ProcessCreativeEvent_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18004E660 (-Destroy@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04$.c)
 */

void __fastcall CreativeFramework::Logging::ShellPlacementTelemetry::LaunchUriActivity::~LaunchUriActivity(
        CreativeFramework::Logging::ShellPlacementTelemetry::LaunchUriActivity *this)
{
  *(_QWORD *)this = &CreativeFramework::Logging::ShellPlacementTelemetry::LaunchUriActivity::`vftable';
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
