/*
 * XREFs of ?WakeRit@Win32k@InputTraceLogging@@SAXK@Z @ 0x140203CA4
 * Callers:
 *     RawInputThread @ 0x140230DC0 (RawInputThread.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x140203D08 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?RitWakeReasonToString@InputTraceLogging@@CAPEBDK@Z @ 0x140273A58 (-RitWakeReasonToString@InputTraceLogging@@CAPEBDK@Z.c)
 */

void __fastcall InputTraceLogging::Win32k::WakeRit(unsigned int a1)
{
  const char *v1; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)dword_140398B80 > 4 && (qword_140398B90 & 2) != 0 && (qword_140398B98 & 2) == qword_140398B98 )
  {
    v1 = InputTraceLogging::RitWakeReasonToString(a1);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      (unsigned int)&dword_140398B80,
      (unsigned int)&unk_140364BEB,
      0,
      0,
      (__int64)&v1);
  }
}
