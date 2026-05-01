/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U4@U4@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@663@Z @ 0x1801C9B8C
 * Callers:
 *     ??$Shell_BroadcastDVRComponent_SendShellNotificationToDVR@AEAKAEAPEBGAEAPEAXAEA_NAEA_NAEA_NAEAK@GameDVRTraceProvider@@SAXAEAKAEAPEBGAEAPEAXAEA_N330@Z @ 0x180059EF8 (--$Shell_BroadcastDVRComponent_SendShellNotificationToDVR@AEAKAEAPEBGAEAPEAXAEA_NAEA_NAEA_NAEAK@.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const WCHAR **a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  const WCHAR *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-99h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-81h] BYREF
  unsigned __int8 *v18; // [rsp+60h] [rbp-71h]
  int v19; // [rsp+68h] [rbp-69h]
  int v20; // [rsp+6Ch] [rbp-65h]
  __int64 v21; // [rsp+70h] [rbp-61h]
  __int64 v22; // [rsp+78h] [rbp-59h]
  const WCHAR *v23; // [rsp+80h] [rbp-51h]
  int v24; // [rsp+88h] [rbp-49h]
  int v25; // [rsp+8Ch] [rbp-45h]
  __int64 v26; // [rsp+90h] [rbp-41h]
  __int64 v27; // [rsp+98h] [rbp-39h]
  __int64 v28; // [rsp+A0h] [rbp-31h]
  __int64 v29; // [rsp+A8h] [rbp-29h]
  __int64 v30; // [rsp+B0h] [rbp-21h]
  __int64 v31; // [rsp+B8h] [rbp-19h]
  __int64 v32; // [rsp+C0h] [rbp-11h]
  __int64 v33; // [rsp+C8h] [rbp-9h]
  __int64 v34; // [rsp+D0h] [rbp-1h]
  __int64 v35; // [rsp+D8h] [rbp+7h]

  v34 = a11;
  v32 = a10;
  v30 = a9;
  v28 = a8;
  v26 = a7;
  v35 = 4LL;
  v33 = 1LL;
  v31 = 1LL;
  v12 = *a6;
  v29 = 1LL;
  v27 = 8LL;
  if ( v12 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( v12[v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v12 = &pvData;
    v14 = 2;
  }
  v24 = v14;
  v21 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  v23 = v12;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = *(_QWORD *)(a1 + 8);
  v25 = 0;
  v22 = 4LL;
  UserData.Size = *(unsigned __int16 *)UserData.Ptr;
  v19 = *(unsigned __int16 *)(a2 + 11);
  v18 = a2 + 11;
  v20 = 1;
  UserData.Reserved = 2;
  return EventWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, 0LL, 0LL, 9u, &UserData);
}
