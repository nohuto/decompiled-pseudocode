/*
 * XREFs of ?CallLowLevelHooks@Keyboard@InputTraceLogging@@SAXK@Z @ 0x1401DE0F4
 * Callers:
 *     EditionKeyEventLLHook @ 0x1402487E0 (EditionKeyEventLLHook.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1401DE154 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

void __fastcall InputTraceLogging::Keyboard::CallLowLevelHooks(int a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)dword_140398B80 > 4
    && (qword_140398B90 & 0x4000) != 0
    && (qword_140398B98 & 0x4000) == qword_140398B98 )
  {
    v4 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (unsigned int)&dword_140398B80,
      (unsigned int)&unk_14036725E,
      0x4000,
      a4,
      (__int64)&v4);
  }
}
