/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@54@Z @ 0x1800B2F54
 * Callers:
 *     ?StartActivity@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAAXPEBG0I@Z @ 0x1800B1CC0 (-StartActivity@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAAXPEBG0I@Z.c)
 *     ?StartActivity@PinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@QEAAXPEBG0W4PinManagerRequestPinItemResult@2@@Z @ 0x1805E9378 (-StartActivity@PinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@QEAAXPEBG0W4PinManagerReq.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        const GUID *a4,
        __int64 a5,
        __int64 a6,
        const WCHAR **a7,
        const WCHAR **a8,
        __int64 a9)
{
  __int64 v12; // rcx
  const WCHAR *v13; // rdx
  __int64 v14; // rax
  int v15; // eax
  const WCHAR *v16; // rdx
  int v17; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-51h] BYREF
  unsigned __int8 *v21; // [rsp+60h] [rbp-41h]
  int v22; // [rsp+68h] [rbp-39h]
  int v23; // [rsp+6Ch] [rbp-35h]
  __int64 v24; // [rsp+70h] [rbp-31h]
  __int64 v25; // [rsp+78h] [rbp-29h]
  __int64 v26; // [rsp+80h] [rbp-21h]
  __int64 v27; // [rsp+88h] [rbp-19h]
  const WCHAR *v28; // [rsp+90h] [rbp-11h]
  int v29; // [rsp+98h] [rbp-9h]
  int v30; // [rsp+9Ch] [rbp-5h]
  const WCHAR *v31; // [rsp+A0h] [rbp-1h]
  int v32; // [rsp+A8h] [rbp+7h]
  int v33; // [rsp+ACh] [rbp+Bh]
  __int64 v34; // [rsp+B0h] [rbp+Fh]
  __int64 v35; // [rsp+B8h] [rbp+17h]

  v34 = a9;
  v35 = 4LL;
  v12 = -1LL;
  v13 = *a8;
  if ( *a8 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v13 = &pvData;
    v15 = 2;
  }
  v32 = v15;
  v31 = v13;
  v33 = 0;
  v16 = *a7;
  if ( *a7 )
  {
    do
      ++v12;
    while ( v16[v12] );
    v17 = 2 * v12 + 2;
  }
  else
  {
    v16 = &pvData;
    v17 = 2;
  }
  v26 = a6;
  v24 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  v29 = v17;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = *(_QWORD *)(a1 + 8);
  v28 = v16;
  v30 = 0;
  v27 = 4LL;
  v25 = 8LL;
  UserData.Size = *(unsigned __int16 *)UserData.Ptr;
  v22 = *(unsigned __int16 *)(a2 + 11);
  v21 = a2 + 11;
  UserData.Reserved = 2;
  v23 = 1;
  return EventWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, a3, a4, 7u, &UserData);
}
