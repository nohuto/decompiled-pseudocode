/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIIconLoadingFunctions@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x1804A14C0
 * Callers:
 *     ?FillArrayWithIid@?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIIconLoadingFunctions@@VFtmBase@23@@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x1804A1428 (-FillArrayWithIid@-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIIconLoadingFunctions@@V.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IIconLoadingFunctions,Microsoft::WRL::FtmBase>::FillArrayWithIid(
        __int64 a1,
        unsigned int *a2,
        __int64 a3)
{
  int v3; // ecx
  __int64 result; // rax

  v3 = *a2;
  *(GUID *)(a3 + 16LL * *a2) = GUID_4e5c2650_fef0_4f4e_ac85_827929037acf;
  result = (unsigned int)(v3 + 1);
  *a2 = result;
  return result;
}
