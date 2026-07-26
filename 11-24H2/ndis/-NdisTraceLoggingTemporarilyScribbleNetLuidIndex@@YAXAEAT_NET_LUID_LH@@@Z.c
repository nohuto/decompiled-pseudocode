/*
 * XREFs of ?NdisTraceLoggingTemporarilyScribbleNetLuidIndex@@YAXAEAT_NET_LUID_LH@@@Z @ 0x14013F42C
 * Callers:
 *     ?ndisTemporarilyScribbleNetLuidIndex@@YAXAEAVKRegKey@@AEAT_NET_LUID_LH@@@Z @ 0x140160A20 (-ndisTemporarilyScribbleNetLuidIndex@@YAXAEAVKRegKey@@AEAT_NET_LUID_LH@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1400029C8 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x1400713E0 (_tlgKeywordOn.c)
 */

void __fastcall NdisTraceLoggingTemporarilyScribbleNetLuidIndex(union _NET_LUID_LH *a1)
{
  __int64 v1; // rcx
  _QWORD *v2; // r8
  __int64 v3; // r9
  int v4; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)dword_14011A7E8 > 5 && tlgKeywordOn((__int64)&dword_14011A7E8, 0x200000000000LL) )
  {
    v4 = (*v2 >> 24) & 0xFFFFFF;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      v1,
      (__int64)&unk_14010231A,
      (__int64)v2,
      v3,
      (__int64)&v4);
  }
}
