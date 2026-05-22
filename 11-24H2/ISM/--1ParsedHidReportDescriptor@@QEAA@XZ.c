/*
 * XREFs of ??1ParsedHidReportDescriptor@@QEAA@XZ @ 0x1800E9A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ParsedHidReportDescriptor::~ParsedHidReportDescriptor(char **this)
{
  std::unique_ptr<HidChannelValueInfo [0]>::~unique_ptr<HidChannelValueInfo [0]>(this + 2);
}
