/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@UIInspectable@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x180043358
 * Callers:
 *     ?FillArrayWithIid@?$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x180043318 (-FillArrayWithIid@-$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@@WRL@Microsoft@@IEAAXPEAKP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IInspectable>::FillArrayWithIid(
        __int64 a1,
        _DWORD *a2,
        __int64 a3)
{
  __int64 result; // rax

  result = 2LL * (unsigned int)*a2;
  *(GUID *)(a3 + 16LL * (unsigned int)(*a2)++) = GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90;
  return result;
}
