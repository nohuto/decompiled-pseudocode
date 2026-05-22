/*
 * XREFs of ??_V@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D674
 * Callers:
 *     ??_E?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x18009F918 (--_E-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     ??$?RUParsedHidReportDescriptor@@$0A@@?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@QEBAXPEAUParsedHidReportDescriptor@@@Z @ 0x1800E85E0 (--$-RUParsedHidReportDescriptor@@$0A@@-$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@.c)
 *     ??$?RVHidChannelValueInfo@@$0A@@?$default_delete@$$BY0A@VHidChannelValueInfo@@@std@@QEBAXPEAVHidChannelValueInfo@@@Z @ 0x1800E8630 (--$-RVHidChannelValueInfo@@$0A@@-$default_delete@$$BY0A@VHidChannelValueInfo@@@std@@QEBAXPEAVHid.c)
 *     _HidLampArrayDevice::ExtractReportDescriptorsFromPreparsedData_::_1_::dtor$3 @ 0x1801D3095 (_HidLampArrayDevice--ExtractReportDescriptorsFromPreparsedData_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall operator delete[](void *a1, const struct std::nothrow_t *a2)
{
  operator delete(a1, a2);
}
