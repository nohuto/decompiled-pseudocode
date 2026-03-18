/*
 * XREFs of ?SupportsAllInteractions@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@SA_NAEBV?$DynArray@UDwmTouchpadInteractionConfigurationPrimitive@@$0A@@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@1@Z @ 0x180214020
 * Callers:
 *     ?CanSkipChildren@CInteractionProcessor@@QEBAHXZ @ 0x180213F5C (-CanSkipChildren@CInteractionProcessor@@QEBAHXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::SupportsAllInteractions(
        __int64 a1,
        int a2,
        int a3)
{
  char v3; // r9
  _DWORD *v4; // rcx

  v3 = 1;
  if ( *(_DWORD *)(a1 + 24) != 1 )
    return 0;
  v4 = *(_DWORD **)a1;
  if ( *v4 != 1 || v4[1] != -1 || (a3 & a2 | ~a3 & v4[2]) != 0xCFFFFFFF )
    return 0;
  return v3;
}
