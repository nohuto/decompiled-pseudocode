/*
 * XREFs of ?RegisterRawInputDevice@RawInput@InputTraceLogging@@SAXPEBUtagRAWINPUTDEVICE@@@Z @ 0x14012DC8C
 * Callers:
 *     _RegisterRawInputDevices @ 0x14012FA44 (_RegisterRawInputDevices.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x140002E64 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@5@Z @ 0x140003070 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U3@@-$_tlgWr.c)
 *     _tlgKeywordOn @ 0x14017A844 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::RawInput::RegisterRawInputDevice(
        const struct tagRAWINPUTDEVICE *a1,
        __int64 a2,
        __int64 a3)
{
  __int16 v3; // ax
  void *v4; // rdx

  if ( *(_WORD *)a1 != 1 )
    goto LABEL_18;
  v3 = *((_WORD *)a1 + 1);
  if ( v3 == 2 )
  {
    if ( (unsigned int)dword_140398B80 > 4
      && (qword_140398B90 & 0x40000) != 0
      && (qword_140398B98 & 0x40000) == qword_140398B98 )
    {
      v4 = &unk_140364B09;
LABEL_7:
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (__int64)&dword_140398B80,
        (__int64)v4);
      return;
    }
    return;
  }
  if ( v3 != 6 )
  {
LABEL_18:
    if ( (unsigned int)dword_140398B80 > 4 && (unsigned __int8)tlgKeywordOn(&dword_140398B80, 0x40000LL, a3, a1) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
        (__int64)&dword_140398B80,
        (__int64)&unk_140364B4E);
    return;
  }
  if ( (unsigned int)dword_140398B80 > 4 && (unsigned __int8)tlgKeywordOn(&dword_140398B80, 0x40000LL, a3, a1) )
  {
    v4 = &unk_140364BA3;
    goto LABEL_7;
  }
}
