/*
 * XREFs of ??$?RVHidChannelValueInfo@@$0A@@?$default_delete@$$BY0A@VHidChannelValueInfo@@@std@@QEBAXPEAVHidChannelValueInfo@@@Z @ 0x1800E8630
 * Callers:
 *     ?ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AEAV?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@PEAI@Z @ 0x18006FB80 (-ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AE.c)
 *     ??1?$unique_ptr@$$BY0A@VHidChannelValueInfo@@U?$default_delete@$$BY0A@VHidChannelValueInfo@@@std@@@std@@QEAA@XZ @ 0x1800E99D0 (--1-$unique_ptr@$$BY0A@VHidChannelValueInfo@@U-$default_delete@$$BY0A@VHidChannelValueInfo@@@std.c)
 * Callees:
 *     ??_V@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D674 (--_V@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18009D680 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall std::default_delete<HidChannelValueInfo [0]>::operator()<HidChannelValueInfo,0>(__int64 a1, char *a2)
{
  char *v2; // rbx

  if ( a2 )
  {
    v2 = a2 - 8;
    `eh vector destructor iterator'(
      a2,
      72LL,
      *((_QWORD *)a2 - 1),
      (void (__fastcall *)(char *))BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp);
    operator delete[](v2, (const struct std::nothrow_t *)(72LL * *(_QWORD *)v2 + 8));
  }
}
