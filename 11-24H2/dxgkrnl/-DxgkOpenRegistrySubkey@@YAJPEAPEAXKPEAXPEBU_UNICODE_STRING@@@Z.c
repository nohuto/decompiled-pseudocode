/*
 * XREFs of ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x14004BEC4
 * Callers:
 *     ?MonitorInitializeGlobal@@YAJXZ @ 0x14026EA80 (-MonitorInitializeGlobal@@YAJXZ.c)
 *     ?_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z @ 0x140274BAC (-_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z.c)
 *     ?LoadDescriptorOverridesFromRegistry@EdidMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry@2@@Z @ 0x14027E170 (-LoadDescriptorOverridesFromRegistry@EdidMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry.c)
 *     ?OpenGlobalGraphicsDriverKey@DXGMONITOR@@UEBAJ_NPEAPEAX@Z @ 0x14027E580 (-OpenGlobalGraphicsDriverKey@DXGMONITOR@@UEBAJ_NPEAPEAX@Z.c)
 *     ?LoadDescriptorOverridesFromRegistry@DisplayIdMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry@2@@Z @ 0x140281080 (-LoadDescriptorOverridesFromRegistry@DisplayIdMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorReg.c)
 *     ?RetrieveMonitorFrequencyRangeFromRegistry@MonitorModes@DxgMonitor@@QEAAJXZ @ 0x14028BA08 (-RetrieveMonitorFrequencyRangeFromRegistry@MonitorModes@DxgMonitor@@QEAAJXZ.c)
 *     ?_ProcessMonitorResolutionKey@MonitorModes@DxgMonitor@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x14028BC08 (-_ProcessMonitorResolutionKey@MonitorModes@DxgMonitor@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z.c)
 *     _pLoadAdditinalMode @ 0x1402E3480 (_pLoadAdditinalMode.c)
 *     ?OpenMonitorDataStore@DXGMONITOR@@UEBAJ_NPEAPEAX@Z @ 0x1403DCE70 (-OpenMonitorDataStore@DXGMONITOR@@UEBAJ_NPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DxgkOpenRegistrySubkey(void **a1, ACCESS_MASK a2, void *a3, struct _UNICODE_STRING *a4)
{
  struct _OBJECT_ATTRIBUTES v5; // [rsp+20h] [rbp-38h] BYREF

  if ( !a1 )
    return -1073741811;
  *(&v5.Length + 1) = 0;
  memset(&v5.Attributes + 1, 0, 20);
  v5.RootDirectory = a3;
  v5.Length = 48;
  v5.Attributes = 576;
  v5.ObjectName = a4;
  return ZwOpenKey(a1, a2, &v5);
}
