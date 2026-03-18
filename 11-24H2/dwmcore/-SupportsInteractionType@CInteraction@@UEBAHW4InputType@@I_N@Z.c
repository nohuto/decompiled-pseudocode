/*
 * XREFs of ?SupportsInteractionType@CInteraction@@UEBAHW4InputType@@I_N@Z @ 0x1801CE580
 * Callers:
 *     <none>
 * Callees:
 *     ?ConfigurationListContainsType@?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@QEBAHIU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@0@Z @ 0x18008C6DC (-ConfigurationListContainsType@-$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimiti.c)
 *     _anonymous_namespace_::GetTemporaryConfigWithMask @ 0x1801D9404 (_anonymous_namespace_--GetTemporaryConfigWithMask.c)
 *     ?ConfigurationListContainsType@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEBAHIU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@0@Z @ 0x180257F94 (-ConfigurationListContainsType@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive.c)
 */

__int64 __fastcall CInteraction::SupportsInteractionType(__int64 a1, int a2, unsigned int a3, char a4)
{
  int v6; // r11d
  unsigned int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // r11d
  int v12; // r11d
  int v13; // r11d
  int v14; // r11d
  unsigned int v15; // ecx
  _DWORD v18[6]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v19; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  if ( a2 != 7 )
  {
    v7 = 0;
    v8 = a1 + 288;
    v19 = 0;
    v9 = 0LL;
    v18[0] = 0;
    v10 = 0LL;
    if ( a4 )
    {
      anonymous_namespace_::GetTemporaryConfigWithMask(a1 + 1560, &v19, v18, 0LL);
      v10 = v18[0];
      v9 = v19;
    }
    v11 = v6 - 2;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( !v14 )
          {
            v15 = *(_DWORD *)(v8 + 640) & 0xFFFF7FC0;
            if ( (*(_DWORD *)(v8 + 640) & 0x8000) != 0 )
              v15 = *(_DWORD *)(v8 + 640);
            LOBYTE(v7) = (v15 & a3) != 0;
            return v7;
          }
          if ( v14 != 1 )
            return v7;
          return (unsigned int)CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::ConfigurationListContainsType(
                                 v8 + 480,
                                 a3,
                                 v9,
                                 v10);
        }
        else
        {
          return (unsigned int)CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::ConfigurationListContainsType(
                                 v8 + 320,
                                 a3,
                                 v9,
                                 v10);
        }
      }
      else
      {
        return (unsigned int)CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::ConfigurationListContainsType(
                               v8 + 160,
                               a3,
                               v9,
                               v10);
      }
    }
    else
    {
      return (unsigned int)CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::ConfigurationListContainsType(
                             v8,
                             a3,
                             v9,
                             v10);
    }
  }
  return 0LL;
}
