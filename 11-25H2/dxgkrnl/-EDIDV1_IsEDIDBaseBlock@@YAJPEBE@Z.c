/*
 * XREFs of ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x14003C7AC
 * Callers:
 *     ?CreateFromSingleEdidBlob@EdidMonitorDescriptor@DxgMonitor@@SAJAEAU_DXGK_MONITOR_DESCRIPTOR@@AEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@Z @ 0x1402784B8 (-CreateFromSingleEdidBlob@EdidMonitorDescriptor@DxgMonitor@@SAJAEAU_DXGK_MONITOR_DESCRIPTOR@@AEA.c)
 *     ?GetCrc@EdidMonitorDescriptor@DxgMonitor@@UEBAEXZ @ 0x1402789D0 (-GetCrc@EdidMonitorDescriptor@DxgMonitor@@UEBAEXZ.c)
 *     ?AppendSerialNumber@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z @ 0x1403E7E00 (-AppendSerialNumber@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z.c)
 *     ?OnInitializeSimulatedMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x1403EB07C (-OnInitializeSimulatedMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ.c)
 *     ?CreateFromDescriptors@EdidMonitorDescriptor@DxgMonitor@@SAJ$$QEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@AEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@4@@Z @ 0x1403EB2C4 (-CreateFromDescriptors@EdidMonitorDescriptor@DxgMonitor@@SAJ$$QEAV-$unique_ptr@UWmiMonitorDescri.c)
 *     ?AppendProductCodeId@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z @ 0x1403EE480 (-AppendProductCodeId@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z.c)
 *     ?GetManufactureDate@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAEAEAG@Z @ 0x1403F21E0 (-GetManufactureDate@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAEAEAG@Z.c)
 *     ?AppendManufacturerName@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z @ 0x1403F6160 (-AppendManufacturerName@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ?Validate@EDID_PARSER@MonDescParser@@QEBAJ_N@Z @ 0x14003CE10 (-Validate@EDID_PARSER@MonDescParser@@QEBAJ_N@Z.c)
 */

__int64 __fastcall EDIDV1_IsEDIDBaseBlock(const unsigned __int8 *a1)
{
  __int64 v1; // rdx
  int v3; // r8d
  int v4; // ecx
  _QWORD v6[10]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v7; // [rsp+70h] [rbp-18h]

  v1 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  v7 = 0LL;
  v3 = 0;
  do
  {
    v4 = v3++;
    v6[v1] = &a1[v4 << 7];
    v1 = ++v7;
  }
  while ( !v3 );
  return MonDescParser::EDID_PARSER::Validate((MonDescParser::EDID_PARSER *)v6, v1);
}
