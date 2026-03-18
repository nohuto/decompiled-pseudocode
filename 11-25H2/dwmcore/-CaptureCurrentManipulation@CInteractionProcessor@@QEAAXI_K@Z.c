/*
 * XREFs of ?CaptureCurrentManipulation@CInteractionProcessor@@QEAAXI_K@Z @ 0x180237E94
 * Callers:
 *     ?CaptureCurrentManipulation@CInteraction@@UEAAXI_K@Z @ 0x180259FC0 (-CaptureCurrentManipulation@CInteraction@@UEAAXI_K@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18000308C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x1801CAD80 (_tlgKeywordOn.c)
 */

void __fastcall CInteractionProcessor::CaptureCurrentManipulation(CInteractionProcessor *this, int a2, __int64 a3)
{
  __int64 v3; // rcx

  *((_BYTE *)this + 808) |= 0x20u;
  *((_DWORD *)this + 206) = a2;
  *((_QWORD *)this + 104) = a3;
  if ( (unsigned int)dword_180404D18 > 4 && tlgKeywordOn((__int64)&dword_180404D18, 2LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v3,
      (__int64)&unk_1803D6DF8);
}
