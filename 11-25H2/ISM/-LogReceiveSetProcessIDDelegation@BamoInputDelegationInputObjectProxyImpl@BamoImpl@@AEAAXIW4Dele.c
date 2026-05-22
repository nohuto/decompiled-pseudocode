/*
 * XREFs of ?LogReceiveSetProcessIDDelegation@BamoInputDelegationInputObjectProxyImpl@BamoImpl@@AEAAXIW4DelegateInputMode@Input@Internal@UI@Windows@@@Z @ 0x18013110C
 * Callers:
 *     ?Thunk_SetProcessIDDelegation_68@?$IInputDelegationInputObjectProxy_Receive@VBamoInputDelegationInputObjectProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801320B0 (-Thunk_SetProcessIDDelegation_68@-$IInputDelegationInputObjectProxy_Receive@VBamoInputDelegation.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x180001FC4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 */

void BamoImpl::BamoInputDelegationInputObjectProxyImpl::LogReceiveSetProcessIDDelegation()
{
  __int64 v0; // rcx
  __int64 v1; // r8
  __int64 v2; // r9
  int v3; // r10d
  __int64 v4; // rax
  int v5; // edx
  int v6; // [rsp+40h] [rbp-18h] BYREF
  int v7; // [rsp+44h] [rbp-14h] BYREF
  _DWORD v8[4]; // [rsp+48h] [rbp-10h] BYREF
  int v9; // [rsp+78h] [rbp+20h] BYREF

  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v4 = *(_QWORD *)(v2 + 16);
    v9 = v1;
    v6 = v3;
    v5 = *(_DWORD *)(v4 + 36);
    v8[0] = *(_DWORD *)(v2 + 24);
    v7 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v0,
      (__int64)&unk_180213909,
      v1,
      v2,
      (__int64)v8,
      (__int64)&v7,
      (__int64)&v6,
      (__int64)&v9);
  }
}
