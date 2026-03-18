/*
 * XREFs of ?Initialize@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAJPEAUIInteractionContextWrapper@@_N@Z @ 0x18008E924
 * Callers:
 *     ?Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@000_N@Z @ 0x18008D97C (-Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@000_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18008E308 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z @ 0x18008E3EC (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UDwmTouchpadInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmTouchpadInteractionConfigurationPrimitive@@I@Z @ 0x18008E9C0 (-AddMultipleAndSet@-$DynArray@UDwmTouchpadInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwm.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::Initialize(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD),
        char a3)
{
  char v3; // al
  int v6; // edi
  _DWORD v8[4]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_BYTE *)(a1 + 148);
  v8[0] = 0;
  v8[1] = 0;
  v8[2] = 0;
  *(_BYTE *)(a1 + 148) = (a3 << 6) | v3 & 0xBF;
  v6 = DynArray<DwmTouchpadInteractionConfigurationPrimitive,0>::AddMultipleAndSet(a1 + 88, v8, 1LL);
  if ( v6 < 0 )
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)a1);
  else
    Microsoft::WRL::ComPtr<CManipulationContext>::operator=((_QWORD *)a1, a2);
  return (unsigned int)v6;
}
