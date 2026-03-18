/*
 * XREFs of ?ConfigurationListContainsType@?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@QEBAHIU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@0@Z @ 0x1801DE168
 * Callers:
 *     ?SupportsInteractionType@CInteractionProcessor@@QEBAHW4InputType@@I_N@Z @ 0x180137940 (-SupportsInteractionType@CInteractionProcessor@@QEBAHW4InputType@@I_N@Z.c)
 *     ?SupportsInteractionType@CInteraction@@UEBAHW4InputType@@I_N@Z @ 0x1801DE070 (-SupportsInteractionType@CInteraction@@UEBAHW4InputType@@I_N@Z.c)
 *     ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x1801F1FB8 (-AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::ConfigurationListContainsType(
        __int64 a1,
        int a2,
        int a3,
        int a4)
{
  __int64 i; // r11

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 112); i = (unsigned int)(i + 1) )
  {
    if ( ((a4 & a3 | ~a4 & *(_DWORD *)(*(_QWORD *)(a1 + 88) + 12 * i + 8)) & a2) != 0 )
      return 1LL;
  }
  return 0LL;
}
