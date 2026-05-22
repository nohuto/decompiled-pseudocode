/*
 * XREFs of ??1?$unique_ptr@$$BY0A@VHidChannelValueInfo@@U?$default_delete@$$BY0A@VHidChannelValueInfo@@@std@@@std@@QEAA@XZ @ 0x1800E99D0
 * Callers:
 *     ??1ParsedHidReportDescriptor@@QEAA@XZ @ 0x1800E9A00 (--1ParsedHidReportDescriptor@@QEAA@XZ.c)
 * Callees:
 *     ??$?RVHidChannelValueInfo@@$0A@@?$default_delete@$$BY0A@VHidChannelValueInfo@@@std@@QEBAXPEAVHidChannelValueInfo@@@Z @ 0x1800E8630 (--$-RVHidChannelValueInfo@@$0A@@-$default_delete@$$BY0A@VHidChannelValueInfo@@@std@@QEBAXPEAVHid.c)
 */

void __fastcall std::unique_ptr<HidChannelValueInfo [0]>::~unique_ptr<HidChannelValueInfo [0]>(char **a1)
{
  if ( *a1 )
    std::default_delete<HidChannelValueInfo [0]>::operator()<HidChannelValueInfo,0>((__int64)a1, *a1);
}
