/*
 * XREFs of ?DDCCIFreeMemory@@YAXPEAX@Z @ 0x140205248
 * Callers:
 *     ??_GCPhysicalMonitorHandle@@UEAAPEAXI@Z @ 0x1402050B0 (--_GCPhysicalMonitorHandle@@UEAAPEAXI@Z.c)
 *     ?DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ @ 0x140205138 (-DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ.c)
 *     ?Destroy@CPhysicalMonitorHandle@@UEAAJXZ @ 0x1402051E0 (-Destroy@CPhysicalMonitorHandle@@UEAAJXZ.c)
 *     ?DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ @ 0x14025C4B0 (-DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ.c)
 *     ?DdcciGetCapabilitiesStringFromRegistry@CPhysicalMonitorHandle@@AEAAJXZ @ 0x140265160 (-DdcciGetCapabilitiesStringFromRegistry@CPhysicalMonitorHandle@@AEAAJXZ.c)
 *     DDCCICleanUpWrap @ 0x140282640 (DDCCICleanUpWrap.c)
 * Callees:
 *     <none>
 */

void __fastcall DDCCIFreeMemory(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x63326947u);
}
