/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@U1@U1@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@53355@Z @ 0x180005814
 * Callers:
 *     ?Scribble@CSuperWetInkScribbleBase@@UEAAJPEAUID3D12GraphicsCommandList@@PEAUID3D12Resource@@PEAUIDCompositionDirectInkSuperWetRenderer@@PEAW4D3D12_RESOURCE_STATES@@PEAUComputeScribbleLatencyData@@PEAUtagRECT@@@Z @ 0x18021B8B0 (-Scribble@CSuperWetInkScribbleBase@@UEAAJPEAUID3D12GraphicsCommandList@@PEAUID3D12Resource@@PEAU.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18017E6B4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  __int64 v8; // rax

  if ( *a8 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( *(_WORD *)(*a8 + 2 * v8) );
  }
  return tlgWriteTransfer_EventWriteTransfer(&dword_180404CE0, a2, 0LL);
}
