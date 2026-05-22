/*
 * XREFs of ?LogSendRemoteInsert@BamoList_VirtualTouchpadRect_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@AEAAXIAEBUVirtualTouchpadRect@@@Z @ 0x18013D900
 * Callers:
 *     ?RemoteInsert@BamoList_VirtualTouchpadRect_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJIAEBUVirtualTouchpadRect@@@Z @ 0x18013F540 (-RemoteInsert@BamoList_VirtualTouchpadRect_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microso.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x180001E60 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 *     ?GetItemId@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEBAIXZ @ 0x1800AAB44 (-GetItemId@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@.c)
 */

void __fastcall Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_StubImpl::LogSendRemoteInsert(
        Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_StubImpl *this,
        __int64 a2,
        const struct VirtualTouchpadRect *a3)
{
  __int64 v3; // rbx
  __int64 v4; // r8
  int v5; // r9d
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD v10[6]; // [rsp+40h] [rbp-18h] BYREF
  const struct VirtualTouchpadRect *v11; // [rsp+70h] [rbp+18h] BYREF
  int v12; // [rsp+78h] [rbp+20h] BYREF

  v11 = a3;
  v3 = (__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1);
  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v6 = *(_QWORD *)(v4 + 32);
    v7 = *(_QWORD *)(v4 + 24);
    LODWORD(v11) = v5;
    v12 = *(_DWORD *)(v6 + 36);
    v10[0] = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal::GetItemId((struct Microsoft::BamoImpl::ConnectionIndirector **)(v7 - 16));
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v3,
      (__int64)&unk_18021E44F,
      v8,
      v9,
      (__int64)v10,
      (__int64)&v12,
      (__int64)&v11);
  }
}
