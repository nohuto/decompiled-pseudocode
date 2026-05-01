/*
 * XREFs of ?IsOldFullScreenView@TabletModePositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x18051BCF4
 * Callers:
 *     ?TryClearOldFullScreenView@TabletModePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x180520028 (-TryClearOldFullScreenView@TabletModePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x180520704 (-ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@Tab.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18009B530 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 */

char __fastcall TabletModePositioner::IsOldFullScreenView(TabletModePositioner *this, struct IUnknown *a2)
{
  char v3; // bl
  struct IUnknown *v4; // rdx

  v3 = 0;
  v4 = (struct IUnknown *)*((_QWORD *)this + 34);
  if ( v4 )
    return SHIsSameObject(a2, v4);
  return v3;
}
