/*
 * XREFs of ?DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x14014D734
 * Callers:
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x140202400 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x140202D58 (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1402031E4 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x140208FBC (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCIn.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapSz@D@@@Z @ 0x140007A50 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapSz@D@@@-$_tlgWriteTempl.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     ?DropReasonToString@InputTraceLogging@@CAPEBDW4DropReason@Pointer@1@@Z @ 0x1401FB3A4 (-DropReasonToString@InputTraceLogging@@CAPEBDW4DropReason@Pointer@1@@Z.c)
 */

void InputTraceLogging::Pointer::DropInput()
{
  unsigned int v0; // r8d
  __int16 *v1; // r10
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 v4; // [rsp+40h] [rbp-28h] BYREF
  __int64 v5; // [rsp+48h] [rbp-20h] BYREF
  _QWORD v6[3]; // [rsp+50h] [rbp-18h] BYREF
  __int16 v7; // [rsp+88h] [rbp+20h] BYREF

  if ( (unsigned int)dword_14029AE30 > 4 && tlgKeywordOn((__int64)&dword_14029AE30, 32LL) )
  {
    v4 = InputTraceLogging::DropReasonToString(v0);
    v7 = *v1;
    v5 = *(_QWORD *)(v2 + 72);
    v6[0] = *(_QWORD *)(v2 + 216);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapSz<char>>(
      (__int64)&dword_14029AE30,
      (__int64)&unk_14027CB19,
      v3,
      v2,
      (__int64)v6,
      (__int64)&v5,
      (__int64)&v7,
      (void **)&v4);
  }
}
