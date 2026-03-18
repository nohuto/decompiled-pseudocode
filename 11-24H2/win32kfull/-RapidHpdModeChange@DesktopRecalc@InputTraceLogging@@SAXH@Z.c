/*
 * XREFs of ?RapidHpdModeChange@DesktopRecalc@InputTraceLogging@@SAXH@Z @ 0x1402EB41C
 * Callers:
 *     ?OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_SET_DISPLAY_CONFIG_PARAMS_EX@@@Z @ 0x1401CAEC8 (-OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_S.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14017A844 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1401DE154 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

void __fastcall InputTraceLogging::DesktopRecalc::RapidHpdModeChange()
{
  __int64 v0; // r8
  __int64 v1; // r9
  int v2; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)dword_140398B80 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_140398B80, 0x80000LL) )
    {
      v2 = v1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        (__int64)&dword_140398B80,
        byte_1403694D5,
        v0,
        v1,
        (__int64)&v2);
    }
  }
}
