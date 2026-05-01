/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@543@Z @ 0x1801C04E8
 * Callers:
 *     ?StartActivity@Show@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z @ 0x1800B10EC (-StartActivity@Show@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z.c)
 *     ?StartActivity@RemoveKeepAlive@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z @ 0x1806818A0 (-StartActivity@RemoveKeepAlive@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        const GUID *a4,
        __int64 a5,
        __int64 a6,
        const WCHAR **a7,
        const WCHAR **a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v13; // rcx
  const WCHAR *v14; // rdx
  __int64 v15; // rax
  int v16; // eax
  const WCHAR *v17; // rdx
  int v18; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-81h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-69h] BYREF
  unsigned __int8 *v22; // [rsp+60h] [rbp-59h]
  int v23; // [rsp+68h] [rbp-51h]
  int v24; // [rsp+6Ch] [rbp-4Dh]
  __int64 v25; // [rsp+70h] [rbp-49h]
  __int64 v26; // [rsp+78h] [rbp-41h]
  __int64 v27; // [rsp+80h] [rbp-39h]
  __int64 v28; // [rsp+88h] [rbp-31h]
  const WCHAR *v29; // [rsp+90h] [rbp-29h]
  int v30; // [rsp+98h] [rbp-21h]
  int v31; // [rsp+9Ch] [rbp-1Dh]
  const WCHAR *v32; // [rsp+A0h] [rbp-19h]
  int v33; // [rsp+A8h] [rbp-11h]
  int v34; // [rsp+ACh] [rbp-Dh]
  __int64 v35; // [rsp+B0h] [rbp-9h]
  __int64 v36; // [rsp+B8h] [rbp-1h]
  __int64 v37; // [rsp+C0h] [rbp+7h]
  __int64 v38; // [rsp+C8h] [rbp+Fh]

  v37 = a10;
  v35 = a9;
  v13 = -1LL;
  v38 = 8LL;
  v36 = 4LL;
  v14 = *a8;
  if ( *a8 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( v14[v15] );
    v16 = 2 * v15 + 2;
  }
  else
  {
    v14 = &pvData;
    v16 = 2;
  }
  v33 = v16;
  v32 = v14;
  v34 = 0;
  v17 = *a7;
  if ( *a7 )
  {
    do
      ++v13;
    while ( v17[v13] );
    v18 = 2 * v13 + 2;
  }
  else
  {
    v17 = &pvData;
    v18 = 2;
  }
  v27 = a6;
  v25 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  v30 = v18;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = *(_QWORD *)(a1 + 8);
  v29 = v17;
  v31 = 0;
  v28 = 4LL;
  v26 = 8LL;
  UserData.Size = *(unsigned __int16 *)UserData.Ptr;
  v23 = *(unsigned __int16 *)(a2 + 11);
  v22 = a2 + 11;
  UserData.Reserved = 2;
  v24 = 1;
  return EventWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, a3, a4, 8u, &UserData);
}
