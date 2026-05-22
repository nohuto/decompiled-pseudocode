/*
 * XREFs of _HidLampArrayDevice::ExtractReportDescriptorsFromPreparsedData_::_1_::dtor$2 @ 0x1801CBBD1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HidLampArrayDevice::ExtractReportDescriptorsFromPreparsedData_::_1_::dtor_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  return std::unique_ptr<ParsedHidReportDescriptor [0]>::~unique_ptr<ParsedHidReportDescriptor [0]>(
           (_QWORD *)(a2 + 48),
           a2,
           a3,
           a4);
}
