/*
 * XREFs of ?CopyForGetRawInputBuffer@RawInput@InputTraceLogging@@SAXPEAUtagHIDDATA@@@Z @ 0x14002C180
 * Callers:
 *     ?GRIB_CopyHidData@@YAIQEAUtagHIDDATA@@PEAI1PEAPEAUtagRAWINPUT@@I@Z @ 0x14002C3BC (-GRIB_CopyHidData@@YAIQEAUtagHIDDATA@@PEAI1PEAPEAUtagRAWINPUT@@I@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140003A40 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U2@U2@U?$_tlgWrapperByVal@$03@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@44AEBU?$_tlgWrapperByVal@$03@@55@Z @ 0x14000424C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U2@U2@U-$_tlgWrapperByVal@$03@@U3@U3@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x140004314 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWr.c)
 *     ?Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z @ 0x14002C0A4 (-Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x14011917C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x14017A844 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::RawInput::CopyForGetRawInputBuffer(struct tagHIDDATA *a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // r11
  int v4; // r10d
  _WORD *v5; // r9
  __int64 v6; // r9
  int v7; // r8d
  __int64 *v8; // r9
  __int64 *v9; // r9
  int v10; // r10d
  int v11; // [rsp+98h] [rbp+18h] BYREF
  __int64 v12; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v13; // [rsp+A8h] [rbp+28h] BYREF

  if ( InputTraceLogging::Enabled(0x40000, 0) )
  {
    v4 = *(_DWORD *)(v2 + 56);
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        if ( (unsigned int)dword_140398B80 > 4 && (unsigned __int8)tlgKeywordOn(&dword_140398B80, v3, v1, v2) )
        {
          LODWORD(v12) = *(_DWORD *)(v6 + 92);
          LODWORD(v13) = *(_DWORD *)(v6 + 88);
          LOWORD(v11) = *(_WORD *)(v6 + 82);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (__int64)&dword_140398B80,
            (__int64)&unk_140366D05);
        }
      }
      else if ( v4 == 2 )
      {
        if ( (unsigned int)dword_140398B80 > 4 && (unsigned __int8)tlgKeywordOn(&dword_140398B80, v3, v1, v2) )
        {
          v11 = *((_DWORD *)v8 + 21);
          LODWORD(v12) = *((_DWORD *)v8 + 20);
          v13 = *v8;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (unsigned int)&dword_140398B80,
            (unsigned int)&unk_140366BEC,
            v7,
            (_DWORD)v8,
            (__int64)&v13,
            (__int64)&v12,
            (__int64)&v11);
        }
      }
      else if ( (unsigned int)dword_140398B80 > 4 && (unsigned __int8)tlgKeywordOn(&dword_140398B80, v3, v1, v2) )
      {
        v12 = *v9;
        v11 = v10;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          (__int64)&dword_140398B80,
          (__int64)&unk_140366C38);
      }
    }
    else if ( (unsigned int)dword_140398B80 > 4 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_140398B80, v3, v1, v2) )
      {
        LOWORD(v11) = v5[43];
        LOWORD(v12) = v5[42];
        LOWORD(v13) = v5[40];
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (__int64)&dword_140398B80,
          (__int64)&unk_140366C81);
      }
    }
  }
}
