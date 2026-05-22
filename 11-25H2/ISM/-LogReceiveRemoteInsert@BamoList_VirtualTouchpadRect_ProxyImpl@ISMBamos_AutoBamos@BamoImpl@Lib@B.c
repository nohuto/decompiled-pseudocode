/*
 * XREFs of ?LogReceiveRemoteInsert@BamoList_VirtualTouchpadRect_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@AEAAXIAEBUVirtualTouchpadRect@@@Z @ 0x1801390CC
 * Callers:
 *     ?Thunk_RemoteInsert_441@?$IList_VirtualTouchpadRect_Proxy_Receive@VBamoList_VirtualTouchpadRect_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@SAJPEAXPEAPEAX@Z @ 0x180139970 (-Thunk_RemoteInsert_441@-$IList_VirtualTouchpadRect_Proxy_Receive@VBamoList_VirtualTouchpadRect_.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x180001E60 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 */

void __fastcall Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_ProxyImpl::LogReceiveRemoteInsert(
        Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_ProxyImpl *this,
        __int64 a2,
        const struct VirtualTouchpadRect *a3)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  int v7; // edx
  _DWORD v8[6]; // [rsp+40h] [rbp-18h] BYREF
  const struct VirtualTouchpadRect *v9; // [rsp+70h] [rbp+18h] BYREF
  int v10; // [rsp+78h] [rbp+20h] BYREF

  v9 = a3;
  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v6 = *(_QWORD *)(v4 + 16);
    LODWORD(v9) = v5;
    v7 = *(_DWORD *)(v6 + 36);
    v8[0] = *(_DWORD *)(v4 + 24);
    v10 = v7;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v3,
      (__int64)&unk_180214A81,
      v4,
      v5,
      (__int64)v8,
      (__int64)&v10,
      (__int64)&v9);
  }
}
