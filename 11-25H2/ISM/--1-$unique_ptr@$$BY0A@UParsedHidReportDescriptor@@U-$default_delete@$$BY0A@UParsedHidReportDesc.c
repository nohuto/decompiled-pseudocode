/*
 * XREFs of ??1?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@QEAA@XZ @ 0x18009BD30
 * Callers:
 *     ?ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AEAV?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@PEAI@Z @ 0x18006FE50 (-ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AE.c)
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800E8A00 (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 *     _HidLampArrayDevice::ExtractReportDescriptorsFromPreparsedData_::_1_::dtor$2 @ 0x1801CBBD1 (_HidLampArrayDevice--ExtractReportDescriptorsFromPreparsedData_--_1_--dtor$2.c)
 * Callees:
 *     ??$?RUParsedHidReportDescriptor@@$0A@@?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@QEBAXPEAUParsedHidReportDescriptor@@@Z @ 0x1800E7170 (--$-RUParsedHidReportDescriptor@@$0A@@-$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@.c)
 */

__int64 __fastcall std::unique_ptr<ParsedHidReportDescriptor [0]>::~unique_ptr<ParsedHidReportDescriptor [0]>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<ParsedHidReportDescriptor [0]>::operator()<ParsedHidReportDescriptor,0>(a1, *a1, a3, a4);
  return result;
}
