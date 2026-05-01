/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UICoreWindowFactory@Core@UI@Windows@@U?$CloakedIid@VCWrlLightweightHandlerServer@@@23@U?$CloakedIid@UIConfigureWindowFactory@@@23@U?$CloakedIid@UICoreWindowFactoryPriv@@@23@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x1806C76FC
 * Callers:
 *     ?FillArrayWithIid@?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UICoreWindowFactory@Core@UI@Windows@@U?$CloakedIid@VCWrlLightweightHandlerServer@@@23@U?$CloakedIid@UIConfigureWindowFactory@@@23@U?$CloakedIid@UICoreWindowFactoryPriv@@@23@@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x1806C76F0 (-FillArrayWithIid@-$Implements@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UICoreWindowFactory@Core@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::UI::Core::ICoreWindowFactory,Microsoft::WRL::CloakedIid<CWrlLightweightHandlerServer>,Microsoft::WRL::CloakedIid<IConfigureWindowFactory>,Microsoft::WRL::CloakedIid<ICoreWindowFactoryPriv>>::FillArrayWithIid(
        __int64 a1,
        unsigned int *a2,
        __int64 a3)
{
  int v3; // ecx
  __int64 result; // rax

  v3 = *a2;
  *(GUID *)(a3 + 16LL * *a2) = GUID_cd292360_2763_4085_8a9f_74b224a29175;
  result = (unsigned int)(v3 + 1);
  *a2 = result;
  return result;
}
