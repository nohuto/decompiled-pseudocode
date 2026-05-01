/*
 * XREFs of ??1PinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@QEAA@XZ @ 0x1805E3918
 * Callers:
 *     ??$_Assign@VPinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@@?$_Optional_construct_base@VPinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@@std@@QEAAX$$QEAVPinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@@Z @ 0x1805E117C (--$_Assign@VPinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@@-$_Optional_construct_base@.c)
 *     ??1?$_Optional_destruct_base@VPinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@$0A@@std@@QEAA@XZ @ 0x1805E3380 (--1-$_Optional_destruct_base@VPinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@$0A@@std@@.c)
 *     ?PinItemFromTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x1805E7AB0 (-PinItemFromTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITE.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1805E561C (-Destroy@-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_P.c)
 */

void __fastcall PinManagerTelemetry::PinManagerPinItemFromTrustedCaller::~PinManagerPinItemFromTrustedCaller(
        PinManagerTelemetry::PinManagerPinItemFromTrustedCaller *this)
{
  *(_QWORD *)this = &PinManagerTelemetry::PinManagerPinItemFromTrustedCaller::`vftable';
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
