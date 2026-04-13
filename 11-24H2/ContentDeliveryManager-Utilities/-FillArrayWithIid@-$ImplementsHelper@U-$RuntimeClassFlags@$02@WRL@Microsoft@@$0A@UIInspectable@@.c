/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VFtmBase@23@UIWeakReferenceSource@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x18008D988
 * Callers:
 *     ?GetIids@UniqueExtendedExecutionSession@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18008DD20 (-GetIids@UniqueExtendedExecutionSession@@UEAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,IInspectable,Microsoft::WRL::FtmBase,IWeakReferenceSource>::FillArrayWithIid(
        __int64 a1,
        unsigned int *a2,
        __int64 a3)
{
  __int64 v3; // rcx

  v3 = *a2;
  *(GUID *)(a3 + 16 * v3) = GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90;
  *a2 = v3 + 1;
  return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource>::FillArrayWithIid(
           v3,
           a2,
           a3);
}
