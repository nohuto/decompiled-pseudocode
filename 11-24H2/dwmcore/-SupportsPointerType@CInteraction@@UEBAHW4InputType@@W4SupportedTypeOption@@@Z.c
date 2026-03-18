/*
 * XREFs of ?SupportsPointerType@CInteraction@@UEBAHW4InputType@@W4SupportedTypeOption@@@Z @ 0x180092AE0
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x180091730 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800C1560 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x18008C684 (-AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ.c)
 *     ?TypeSupported@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEBAHW4SupportedTypeOption@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@1@Z @ 0x180094524 (-TypeSupported@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@.c)
 *     ?TypeSupported@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEBAHW4SupportedTypeOption@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@1@Z @ 0x180095E40 (-TypeSupported@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFlagsEn.c)
 *     ?TypeSupported@?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@QEBAHW4SupportedTypeOption@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@1@Z @ 0x180096614 (-TypeSupported@-$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U-$TMILFlags.c)
 *     ?TypeSupported@?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEBAHW4SupportedTypeOption@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@1@Z @ 0x1801FAF88 (-TypeSupported@-$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall CInteraction::SupportsPointerType(__int64 a1, int a2, unsigned int a3)
{
  unsigned int v3; // esi
  CInteractionProcessor *v5; // rbp
  unsigned int v6; // ebx
  _DWORD *v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // r8
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // [rsp+20h] [rbp-38h] BYREF
  __int128 v19; // [rsp+24h] [rbp-34h]
  int v20; // [rsp+34h] [rbp-24h]

  v3 = 0;
  if ( a2 != 7 )
  {
    v5 = (CInteractionProcessor *)(a1 + 288);
    v6 = 0;
    v7 = (_DWORD *)(a1 + 1564);
    v8 = 0;
    v9 = 3LL;
    do
    {
      if ( *((_BYTE *)v7 - 4) )
      {
        v6 |= v7[1] & *v7;
        v8 |= v7[1];
      }
      v7 += 3;
      --v9;
    }
    while ( v9 );
    v10 = a2 - 2;
    if ( !v10 )
      return (unsigned int)CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::TypeSupported(
                             v5,
                             a3,
                             v6,
                             v8);
    v11 = v10 - 1;
    if ( !v11 )
      return (unsigned int)CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::TypeSupported(
                             (char *)v5 + 160,
                             a3,
                             v6,
                             v8);
    v12 = v11 - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( !v13 )
      {
        LOBYTE(v3) = *((_DWORD *)v5 + 160) != 0;
        return v3;
      }
      if ( v13 != 1 )
        return v3;
      return (unsigned int)CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::TypeSupported(
                             (char *)v5 + 480,
                             a3,
                             v6,
                             v8);
    }
    if ( CInteractionProcessor::AllowPenGestureDetection(v5) )
      return (unsigned int)CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::TypeSupported(
                             (char *)v5 + 320,
                             a3,
                             v6,
                             v8);
    return 1;
  }
  v16 = *(_QWORD *)(a1 + 40);
  if ( v16 )
  {
    v17 = *(_QWORD *)(v16 + 64);
    if ( v17 )
    {
      v18 = 24;
      v19 = 0LL;
      v20 = 0;
      if ( (int)NtQueryCompositionInputSink(v17, &v18) >= 0 )
      {
        if ( v20 )
          return 1;
      }
    }
  }
  return v3;
}
