/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333333@Z @ 0x18006A0F0
 * Callers:
 *     ?MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PostStabilization_@ISMTracing@@QEAAXPEAULegacyInputInfo@@@Z @ 0x1800111D0 (-MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PostStabilization_@ISMTracing@@QEAAXPEA.c)
 *     ?MPCHolographicInputManager_PrepAndStabilizeTargetingRay_InHeadSpace_@ISMTracing@@QEAAXPEAULegacyInputInfo@@@Z @ 0x180014240 (-MPCHolographicInputManager_PrepAndStabilizeTargetingRay_InHeadSpace_@ISMTracing@@QEAAXPEAULegac.c)
 *     ?MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PreStabilization_@ISMTracing@@QEAAXPEAULegacyInputInfo@@@Z @ 0x18006A014 (-MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PreStabilization_@ISMTracing@@QEAAXPEAU.c)
 *     ?MPCGestureHandler_PointerUpdated_@ISMTracing@@QEAAXJJIKKKK@Z @ 0x1800BE474 (-MPCGestureHandler_PointerUpdated_@ISMTracing@@QEAAXJJIKKKK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-99h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-81h] BYREF
  unsigned __int8 *v14; // [rsp+60h] [rbp-71h]
  int v15; // [rsp+68h] [rbp-69h]
  int v16; // [rsp+6Ch] [rbp-65h]
  __int64 v17; // [rsp+70h] [rbp-61h]
  __int64 v18; // [rsp+78h] [rbp-59h]
  __int64 v19; // [rsp+80h] [rbp-51h]
  __int64 v20; // [rsp+88h] [rbp-49h]
  __int64 v21; // [rsp+90h] [rbp-41h]
  __int64 v22; // [rsp+98h] [rbp-39h]
  __int64 v23; // [rsp+A0h] [rbp-31h]
  __int64 v24; // [rsp+A8h] [rbp-29h]
  __int64 v25; // [rsp+B0h] [rbp-21h]
  __int64 v26; // [rsp+B8h] [rbp-19h]
  __int64 v27; // [rsp+C0h] [rbp-11h]
  __int64 v28; // [rsp+C8h] [rbp-9h]
  __int64 v29; // [rsp+D0h] [rbp-1h]
  __int64 v30; // [rsp+D8h] [rbp+7h]

  v29 = a11;
  v27 = a10;
  v25 = a9;
  v23 = a8;
  v21 = a7;
  v19 = a6;
  v17 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = *(_QWORD *)(a1 + 8);
  v30 = 4LL;
  v28 = 4LL;
  v26 = 4LL;
  v24 = 4LL;
  v22 = 4LL;
  v20 = 4LL;
  v18 = 4LL;
  UserData.Size = *(unsigned __int16 *)UserData.Ptr;
  v15 = *(unsigned __int16 *)(a2 + 11);
  v14 = a2 + 11;
  UserData.Reserved = 2;
  v16 = 1;
  return EventWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, 0LL, 0LL, 9u, &UserData);
}
