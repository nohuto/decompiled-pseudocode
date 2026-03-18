/*
 * XREFs of ?CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@_K@Z @ 0x1400F23A8
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1401F8908 (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapperByVal@$03@@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapperByVal@$03@@53@Z @ 0x140008074 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapperByVal@$03@@U3@U1@@-$.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x1400C175C (-IsMouseInputMessage@InputTraceLogging@@CA_NI@Z.c)
 *     IsPointerInputMessage @ 0x1400F25B4 (IsPointerInputMessage.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1400F7F10 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@43@Z @ 0x1400F8CF0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U1@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

void __fastcall InputTraceLogging::Delivery::CoalesceMessage(const struct tagQMSG *a1, __int64 a2)
{
  int v2; // ecx
  int v3; // r8d
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  int v7; // r8d
  __int64 v8; // r9
  __int64 v9; // r10
  int v10; // r8d
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // [rsp+50h] [rbp-20h] BYREF
  __int64 v14; // [rsp+58h] [rbp-18h] BYREF
  _QWORD v15[2]; // [rsp+60h] [rbp-10h] BYREF
  int v16; // [rsp+80h] [rbp+10h] BYREF
  __int64 v17; // [rsp+90h] [rbp+20h] BYREF
  __int64 v18; // [rsp+98h] [rbp+28h] BYREF

  if ( (unsigned int)IsPointerInputMessage(*((unsigned int *)a1 + 6), a2, *((unsigned int *)a1 + 6), a1) )
  {
    if ( (unsigned int)dword_14029AE30 > 4 && tlgKeywordOn((__int64)&dword_14029AE30, 16LL) )
    {
      LODWORD(v18) = *(unsigned __int16 *)(v5 + 34);
      v14 = *(_QWORD *)(v5 + 40);
      LOWORD(v16) = *(_WORD *)(v5 + 32);
      v15[0] = *(_QWORD *)(v5 + 144);
      v13 = v6;
      LODWORD(v17) = v4;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (__int64)&dword_14029AE30,
        (__int64)&unk_14027ACC1,
        v4,
        v5,
        (__int64)v15,
        (__int64)&v16,
        (__int64)&v14,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v13);
    }
  }
  else if ( (unsigned int)(v3 - 256) > 9 )
  {
    if ( InputTraceLogging::IsMouseInputMessage(v2)
      && (unsigned int)dword_14029AE30 > 4
      && tlgKeywordOn((__int64)&dword_14029AE30, 16LL) )
    {
      v18 = *(_QWORD *)(v11 + 144);
      v17 = v12;
      v16 = v10;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (unsigned int)&dword_14029AE30,
        (unsigned int)&unk_14027AD5B,
        v10,
        v11,
        (__int64)&v18,
        (__int64)&v16,
        (__int64)&v17);
    }
  }
  else if ( (unsigned int)dword_14029AE30 > 4 && tlgKeywordOn((__int64)&dword_14029AE30, 16LL) )
  {
    LODWORD(v17) = *(unsigned __int16 *)(v8 + 40);
    v15[0] = *(_QWORD *)(v8 + 32);
    v14 = *(_QWORD *)(v8 + 144);
    v18 = v9;
    v16 = v7;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_14029AE30,
      (unsigned int)&unk_14027AC34,
      v7,
      v8,
      (__int64)&v14,
      (__int64)v15,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v18);
  }
}
