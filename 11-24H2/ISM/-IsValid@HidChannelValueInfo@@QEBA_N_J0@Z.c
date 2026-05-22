/*
 * XREFs of ?IsValid@HidChannelValueInfo@@QEBA_N_J0@Z @ 0x1800EEDF0
 * Callers:
 *     ?IsChannelsValid@HidLampMultiUpdateReportParser@@CA_NAEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@_J1PEAH@Z @ 0x1800999D0 (-IsChannelsValid@HidLampMultiUpdateReportParser@@CA_NAEAV-$vector@VHidChannelValueInfo@@V-$alloc.c)
 *     ?IsParserValid@HidLampArrayAttributesReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z @ 0x1800EC6CC (-IsParserValid@HidLampArrayAttributesReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z.c)
 *     ?IsParserValid@HidLampAttributesRequestReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z @ 0x1800ECCC8 (-IsParserValid@HidLampAttributesRequestReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z.c)
 *     ?IsParserValid@HidLampAttributesResponseReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z @ 0x1800ED298 (-IsParserValid@HidLampAttributesResponseReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z.c)
 *     ?TryCreateAndInitialize@HidLampAttributesResponseReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800ED42C (-TryCreateAndInitialize@HidLampAttributesResponseReportParser@@SAJPEBGAEBUHardwareAttributes@@PE.c)
 *     ?IsParserValid@HidLampMultiUpdateReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEAV1@@Z @ 0x1800EDBE0 (-IsParserValid@HidLampMultiUpdateReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEAV1@@Z.c)
 *     ?IsParserValid@HidLampRangeUpdateReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z @ 0x1800EE458 (-IsParserValid@HidLampRangeUpdateReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z.c)
 *     ?TryCreateAndInitialize@HidLampRangeUpdateReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800EE69C (-TryCreateAndInitialize@HidLampRangeUpdateReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParse.c)
 *     ?IsParserValid@HidLampArrayControlReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z @ 0x1800EEB74 (-IsParserValid@HidLampArrayControlReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall HidChannelValueInfo::IsValid(HidChannelValueInfo *this, __int64 a2, __int64 a3)
{
  bool result; // al

  result = 0;
  if ( *((_DWORD *)this + 1) && *(_DWORD *)this && !*((_QWORD *)this + 3) && *((_QWORD *)this + 4) <= a3 )
    return *((_QWORD *)this + 4) > 0LL;
  return result;
}
