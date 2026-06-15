/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@UIModuleCommandResult@Devices@Media@Windows@@UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x14007A768
 * Callers:
 *     ?GetIids@ModuleCommandResult@Devices@Media@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x14007B680 (-GetIids@ModuleCommandResult@Devices@Media@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,0,Windows::Media::Devices::IModuleCommandResult,IWeakReferenceSource,Microsoft::WRL::FtmBase>::FillArrayWithIid(
        __int64 a1,
        unsigned int *a2,
        __int64 a3)
{
  __int64 v3; // rcx

  v3 = *a2;
  *(GUID *)(a3 + 16 * v3) = GUID_520d1eb4_1374_4c7d_b1e4_39dcdf3eae4e;
  *a2 = v3 + 1;
  return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::FillArrayWithIid(
           v3,
           a2,
           a3);
}
