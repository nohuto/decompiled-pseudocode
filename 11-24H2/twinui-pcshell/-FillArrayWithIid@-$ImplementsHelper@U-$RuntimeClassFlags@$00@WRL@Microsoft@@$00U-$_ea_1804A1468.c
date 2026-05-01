/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00U?$ImplementsMarker@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIIconLoadingFunctions@@VFtmBase@23@@WRL@Microsoft@@@Details@23@UIWeakReferenceSource@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x1804A1468
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIIconLoadingFunctions@@VFtmBase@23@@23@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1804A1610 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$Im_ea_1804A1610.c)
 * Callees:
 *     ?FillArrayWithIid@?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIIconLoadingFunctions@@VFtmBase@23@@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x1804A1428 (-FillArrayWithIid@-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIIconLoadingFunctions@@V.c)
 */

__int64 Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IIconLoadingFunctions,Microsoft::WRL::FtmBase>>,IWeakReferenceSource>::FillArrayWithIid()
{
  unsigned int *v0; // rdx
  int v1; // r9d
  __int64 v2; // r8
  __int64 result; // rax

  Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IIconLoadingFunctions,Microsoft::WRL::FtmBase>::FillArrayWithIid();
  v1 = *v0;
  *(GUID *)(v2 + 16LL * *v0) = _uuidof__AUIWeakReferenceSource_Details_Platform__;
  result = (unsigned int)(v1 + 1);
  *v0 = result;
  return result;
}
