/*
 * XREFs of ?InteractionInputTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionInputType@@@Z @ 0x1801CA8CC
 * Callers:
 *     ??$InteractionConfigurationUpdate@UDwmTouchInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1801336CC (--$InteractionConfigurationUpdate@UDwmTouchInteractionConfigurationPrimitive@@@GestureTargeting@.c)
 *     ??$InteractionConfigurationUpdate@UDwmMouseInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1801C8B58 (--$InteractionConfigurationUpdate@UDwmMouseInteractionConfigurationPrimitive@@@GestureTargeting@.c)
 *     ??$InteractionConfigurationUpdate@UDwmMousewheelInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1801C91A0 (--$InteractionConfigurationUpdate@UDwmMousewheelInteractionConfigurationPrimitive@@@GestureTarge.c)
 *     ??$InteractionConfigurationUpdate@UDwmTouchpadInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1801C95D0 (--$InteractionConfigurationUpdate@UDwmTouchpadInteractionConfigurationPrimitive@@@GestureTargeti.c)
 *     ??$InteractionConfigurationUpdate@UDwmPenInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1801C9BC8 (--$InteractionConfigurationUpdate@UDwmPenInteractionConfigurationPrimitive@@@GestureTargeting@In.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::InteractionInputTypeToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return "Touch";
  v2 = v1 - 1;
  if ( !v2 )
    return "Touchpad";
  v3 = v2 - 1;
  if ( !v3 )
    return "Pen";
  v4 = v3 - 1;
  if ( !v4 )
    return "Mouse";
  if ( v4 == 1 )
    return "Mousewheel";
  return "UNKNOWN";
}
