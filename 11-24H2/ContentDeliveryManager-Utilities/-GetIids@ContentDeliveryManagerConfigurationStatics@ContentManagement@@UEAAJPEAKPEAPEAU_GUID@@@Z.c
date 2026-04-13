/*
 * XREFs of ?GetIids@ContentDeliveryManagerConfigurationStatics@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800438D0
 * Callers:
 *     ?GetIids@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIContentDeliveryManagerConfiguration@ContentManagement@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180043940 (-GetIids@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIContentDeliveryManagerConfi.c)
 * Callees:
 *     ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@UIContentDeliveryManagerConfiguration@ContentManagement@@@23@VNil@Details@23@V6723@V6723@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x180043680 (-FillArrayWithIid@-$ImplementsHelper@U-$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFa.c)
 */

__int64 __fastcall ContentManagement::ContentDeliveryManagerConfigurationStatics::GetIids(
        ContentManagement::ContentDeliveryManagerConfigurationStatics *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rcx
  LPVOID v7; // r8
  struct _GUID *v8; // r8
  unsigned int v10; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v7 = CoTaskMemAlloc(0x20uLL);
  if ( v7 )
  {
    v10 = 0;
    Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,ContentManagement::IContentDeliveryManagerConfiguration>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::FillArrayWithIid(
      v6,
      &v10,
      (__int64)v7);
    *a2 = 2;
    *a3 = v8;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
