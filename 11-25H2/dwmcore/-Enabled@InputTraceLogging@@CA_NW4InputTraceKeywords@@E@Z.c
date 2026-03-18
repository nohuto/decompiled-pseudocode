/*
 * XREFs of ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x180137A84
 * Callers:
 *     ?SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z @ 0x1800FB684 (-SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z.c)
 *     ??$InteractionConfigurationUpdate@UDwmTouchInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1801336CC (--$InteractionConfigurationUpdate@UDwmTouchInteractionConfigurationPrimitive@@@GestureTargeting@.c)
 *     ?DequeueFrame@GestureTargeting@InputTraceLogging@@SAXPEAVCManipulationFrame@@@Z @ 0x1801AF25C (-DequeueFrame@GestureTargeting@InputTraceLogging@@SAXPEAVCManipulationFrame@@@Z.c)
 *     ??$InteractionConfigurationUpdate@UDwmMouseInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1801C8B58 (--$InteractionConfigurationUpdate@UDwmMouseInteractionConfigurationPrimitive@@@GestureTargeting@.c)
 *     ??$InteractionConfigurationUpdate@UDwmMousewheelInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1801C91A0 (--$InteractionConfigurationUpdate@UDwmMousewheelInteractionConfigurationPrimitive@@@GestureTarge.c)
 *     ??$InteractionConfigurationUpdate@UDwmTouchpadInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1801C95D0 (--$InteractionConfigurationUpdate@UDwmTouchpadInteractionConfigurationPrimitive@@@GestureTargeti.c)
 * Callees:
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180137874 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall InputTraceLogging::Enabled(int a1, unsigned __int8 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  const struct _tlgProvider_t *v4; // rax
  char v5; // dl

  v2 = a2;
  v3 = a1;
  v4 = InputTraceLogging::Provider();
  v5 = 0;
  if ( v2 < *(_DWORD *)v4
    && (!v3 || (v3 & *((_QWORD *)v4 + 2)) != 0 && (v3 & *((_QWORD *)v4 + 3)) == *((_QWORD *)v4 + 3)) )
  {
    return 1;
  }
  return v5;
}
