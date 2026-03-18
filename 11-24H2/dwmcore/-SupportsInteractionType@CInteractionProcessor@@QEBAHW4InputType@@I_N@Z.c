/*
 * XREFs of ?SupportsInteractionType@CInteractionProcessor@@QEBAHW4InputType@@I_N@Z @ 0x180092D20
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x180091730 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800C1560 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?SupportsInteractionType@CInteractionRoot@@UEBAHW4InputType@@I_N@Z @ 0x1802578F0 (-SupportsInteractionType@CInteractionRoot@@UEBAHW4InputType@@I_N@Z.c)
 * Callees:
 *     ?ConfigurationListContainsType@?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@QEBAHIU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@0@Z @ 0x18008C6DC (-ConfigurationListContainsType@-$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimiti.c)
 *     _anonymous_namespace_::GetTemporaryConfigWithMask @ 0x1801D9404 (_anonymous_namespace_--GetTemporaryConfigWithMask.c)
 *     ?ConfigurationListContainsType@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEBAHIU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@0@Z @ 0x180257F94 (-ConfigurationListContainsType@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive.c)
 */

__int64 __fastcall CInteractionProcessor::SupportsInteractionType(__int64 a1, int a2, unsigned int a3, char a4)
{
  unsigned int v4; // r11d
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ecx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  unsigned int v16; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v17; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0;
  v17 = 0;
  v16 = 0;
  v9 = 0LL;
  v10 = 0LL;
  if ( a4 )
  {
    anonymous_namespace_::GetTemporaryConfigWithMask(a1 + 1272, &v17, &v16, 0LL);
    v10 = v16;
    v9 = v17;
  }
  if ( a2 == 5 )
  {
    v11 = *(_DWORD *)(a1 + 640) & 0xFFFF7FC0;
    if ( (*(_DWORD *)(a1 + 640) & 0x8000) != 0 )
      v11 = *(_DWORD *)(a1 + 640);
    LOBYTE(v4) = (v11 & a3) != 0;
    return v4;
  }
  else
  {
    v13 = a2 - 2;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          if ( v15 == 2 )
            return CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::ConfigurationListContainsType(
                     a1 + 480,
                     a3,
                     v9,
                     v10);
          else
            return 0LL;
        }
        else
        {
          return CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::ConfigurationListContainsType(
                   a1 + 320,
                   a3,
                   v9,
                   v10);
        }
      }
      else
      {
        return CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::ConfigurationListContainsType(
                 a1 + 160,
                 a3,
                 v9,
                 v10);
      }
    }
    else
    {
      return CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::ConfigurationListContainsType(
               a1,
               a3,
               v9,
               v10);
    }
  }
}
