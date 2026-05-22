/*
 * XREFs of ??$?RUParsedHidReportDescriptor@@$0A@@?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@QEBAXPEAUParsedHidReportDescriptor@@@Z @ 0x1800E7170
 * Callers:
 *     ?ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AEAV?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@PEAI@Z @ 0x18006FE50 (-ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AE.c)
 *     ??1?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@QEAA@XZ @ 0x18009BD30 (--1-$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U-$default_delete@$$BY0A@UParsedHidReportDesc.c)
 * Callees:
 *     ??_V@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D4A4 (--_V@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18009D4B0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::default_delete<ParsedHidReportDescriptor [0]>::operator()<ParsedHidReportDescriptor,0>(
        __int64 a1,
        char *a2)
{
  char *v2; // rbx

  if ( a2 )
  {
    v2 = a2 - 8;
    `eh vector destructor iterator'(
      a2,
      24LL,
      *((_QWORD *)a2 - 1),
      (void (__fastcall *)(char *))ParsedHidReportDescriptor::~ParsedHidReportDescriptor);
    operator delete[](v2, (const struct std::nothrow_t *)(24LL * *(_QWORD *)v2 + 8));
  }
}
