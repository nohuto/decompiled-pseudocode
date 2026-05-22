/*
 * XREFs of ??$As@UIInputDeviceInfoStore@@@?$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputDeviceInfoStore@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004D3E8
 * Callers:
 *     ?IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z @ 0x18004CD58 (-IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z.c)
 *     ?CreateKeyboardInputInfo@Win32kInterop@@AEAA_NPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@PEAUKeyboardInputInfo@@@Z @ 0x18004CF70 (-CreateKeyboardInputInfo@Win32kInterop@@AEAA_NPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@PEAUKeyboardInput.c)
 *     ?OnKeyboardKeyPress@MPCHolographicInputManager@@QEAAXK@Z @ 0x1800BB03C (-OnKeyboardKeyPress@MPCHolographicInputManager@@QEAAXK@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ISystemInputRouter>::As<IInputDeviceInfoStore>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
  return v4(v3, &GUID_b9402cea_5976_45e1_baa3_22754843b1af, a2);
}
