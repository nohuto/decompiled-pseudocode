/*
 * XREFs of _anonymous_namespace_::VectorInsideAngleThreshold @ 0x18017E2E0
 * Callers:
 *     ??$CalculateDetectedInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@PEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH23@Z @ 0x18017CD80 (--$CalculateDetectedInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4.c)
 *     ??$CalculateDetectedInteractions@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@PEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH23@Z @ 0x18017D5B4 (--$CalculateDetectedInteractions@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFlagsEnum.c)
 *     _anonymous_namespace_::CanAddThisColumnVectorToMatrix @ 0x18017DFE8 (_anonymous_namespace_--CanAddThisColumnVectorToMatrix.c)
 *     ??$CalculateDetectedInteractions@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@PEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH23@Z @ 0x180203C44 (--$CalculateDetectedInteractions@UDwmPenInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4Fl.c)
 *     ??$CalculateDetectedInteractions@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@PEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH23@Z @ 0x18021B18C (--$CalculateDetectedInteractions@UDwmMousewheelInteractionConfigurationPrimitive@@U-$TMILFlagsEn.c)
 * Callees:
 *     ?D3DXVector3Angle@@YAMAEBUD2DVector3@@0@Z @ 0x18017E33C (-D3DXVector3Angle@@YAMAEBUD2DVector3@@0@Z.c)
 */

bool __fastcall anonymous_namespace_::VectorInsideAngleThreshold(
        const struct D2DVector3 *a1,
        const struct D2DVector3 *a2)
{
  float v2; // xmm0_4

  v2 = D3DXVector3Angle(a1, a2);
  return COERCE_FLOAT(LODWORD(v2) & _xmm) < 0.17453
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(v2 - 3.1415927) & _xmm) < 0.17453
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(v2 + 3.1415927) & _xmm) < 0.17453;
}
