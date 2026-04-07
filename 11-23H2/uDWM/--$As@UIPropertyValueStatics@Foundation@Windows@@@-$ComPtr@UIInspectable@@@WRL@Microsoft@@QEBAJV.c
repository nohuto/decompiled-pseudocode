/*
 * XREFs of ??$As@UIPropertyValueStatics@Foundation@Windows@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18009E6EC
 * Callers:
 *     ?GetLuminosityOpacityReference@CAccentAcrylicBlurBehind@@AEAAJNPEAPEAU?$IReference@N@Foundation@Windows@@@Z @ 0x1800A02B0 (-GetLuminosityOpacityReference@CAccentAcrylicBlurBehind@@AEAAJNPEAPEAU-$IReference@N@Foundation@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008D08 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IInspectable>::As<Windows::Foundation::IPropertyValueStatics>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  return v4(v3, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, a2);
}
