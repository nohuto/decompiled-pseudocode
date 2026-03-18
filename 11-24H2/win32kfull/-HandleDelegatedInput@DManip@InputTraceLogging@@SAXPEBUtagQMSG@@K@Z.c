/*
 * XREFs of ?HandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z @ 0x14008E28C
 * Callers:
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x14008E06C (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapSz@D@@@Z @ 0x140003878 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapperByVal@$03@@U3@U-$_tl.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@@Z @ 0x140003C64 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate.c)
 *     IsPointerInputMessage @ 0x14008EC20 (IsPointerInputMessage.c)
 *     ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x14008ED68 (-IsMouseInputMessage@InputTraceLogging@@CA_NI@Z.c)
 *     ?DelegationResponseToString@InputTraceLogging@@CAPEBDK@Z @ 0x14027A358 (-DelegationResponseToString@InputTraceLogging@@CAPEBDK@Z.c)
 */

void __fastcall InputTraceLogging::DManip::HandleDelegatedInput(const struct tagQMSG *a1)
{
  unsigned int v1; // ecx
  unsigned int v2; // r10d
  unsigned int v3; // r10d
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r8
  const char *v8; // [rsp+50h] [rbp-20h] BYREF
  __int64 v9; // [rsp+58h] [rbp-18h] BYREF
  __int64 v10; // [rsp+60h] [rbp-10h] BYREF
  int v11; // [rsp+80h] [rbp+10h] BYREF
  const char *v12; // [rsp+90h] [rbp+20h] BYREF
  __int64 v13; // [rsp+98h] [rbp+28h] BYREF

  if ( (unsigned int)IsPointerInputMessage(*((unsigned int *)a1 + 6)) )
  {
    if ( (unsigned int)dword_140398B80 > 4
      && (qword_140398B90 & 0x1000) != 0
      && (qword_140398B98 & 0x1000) == qword_140398B98 )
    {
      v8 = InputTraceLogging::DelegationResponseToString(v2);
      LODWORD(v13) = *(unsigned __int16 *)(v6 + 34);
      v9 = *(_QWORD *)(v6 + 40);
      LOWORD(v11) = *(_WORD *)(v6 + 32);
      v10 = *(_QWORD *)(v6 + 144);
      LODWORD(v12) = v7;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (__int64)&dword_140398B80,
        (__int64)&unk_140366461,
        v7,
        v6,
        (__int64)&v10,
        (__int64)&v11,
        (__int64)&v9,
        (__int64)&v13,
        (__int64)&v12,
        &v8);
    }
  }
  else if ( InputTraceLogging::IsMouseInputMessage(v1)
         && (unsigned int)dword_140398B80 > 4
         && (qword_140398B90 & 0x1000) != 0
         && (qword_140398B98 & 0x1000) == qword_140398B98 )
  {
    v12 = InputTraceLogging::DelegationResponseToString(v3);
    v13 = *(_QWORD *)(v4 + 144);
    v11 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (__int64)&dword_140398B80,
      (__int64)&unk_140366412,
      v5,
      v4,
      (__int64)&v13,
      (__int64)&v11,
      &v12);
  }
}
