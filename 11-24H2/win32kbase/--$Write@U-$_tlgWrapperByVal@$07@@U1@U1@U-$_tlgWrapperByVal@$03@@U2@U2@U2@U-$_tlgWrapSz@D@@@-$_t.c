/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$03@@444AEBU?$_tlgWrapSz@D@@@Z @ 0x140056754
 * Callers:
 *     ?DropCompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMHOLDINGFRAME@@_NW4InputTracing_RimCompletionReason@@@Z @ 0x1400564D8 (-DropCompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMHOLDINGFRAME@@_NW4InputTracing_R.c)
 *     ?CompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4InputTracing_RimCompletionReason@@@Z @ 0x1400565EC (-CompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4InputTracing_RimCom.c)
 * Callees:
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
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
        __int64 a11,
        void **a12)
{
  _BYTE *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-B1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-99h] BYREF
  unsigned __int8 *v19; // [rsp+60h] [rbp-89h]
  int v20; // [rsp+68h] [rbp-81h]
  int v21; // [rsp+6Ch] [rbp-7Dh]
  __int64 v22; // [rsp+70h] [rbp-79h]
  __int64 v23; // [rsp+78h] [rbp-71h]
  __int64 v24; // [rsp+80h] [rbp-69h]
  __int64 v25; // [rsp+88h] [rbp-61h]
  __int64 v26; // [rsp+90h] [rbp-59h]
  __int64 v27; // [rsp+98h] [rbp-51h]
  __int64 v28; // [rsp+A0h] [rbp-49h]
  __int64 v29; // [rsp+A8h] [rbp-41h]
  __int64 v30; // [rsp+B0h] [rbp-39h]
  __int64 v31; // [rsp+B8h] [rbp-31h]
  __int64 v32; // [rsp+C0h] [rbp-29h]
  __int64 v33; // [rsp+C8h] [rbp-21h]
  __int64 v34; // [rsp+D0h] [rbp-19h]
  __int64 v35; // [rsp+D8h] [rbp-11h]
  _BYTE *v36; // [rsp+E0h] [rbp-9h]
  int v37; // [rsp+E8h] [rbp-1h]
  int v38; // [rsp+ECh] [rbp+3h]

  v13 = *a12;
  if ( *a12 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    v15 = v14 + 1;
  }
  else
  {
    v13 = &unk_14025D828;
    v15 = 1;
  }
  v37 = v15;
  v34 = a11;
  v32 = a10;
  v30 = a9;
  v28 = a8;
  v26 = a7;
  v24 = a6;
  v22 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  v36 = v13;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  v27 = 8LL;
  v25 = 8LL;
  v23 = 8LL;
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = *(_QWORD *)(a1 + 8);
  v38 = 0;
  v35 = 4LL;
  v33 = 4LL;
  v31 = 4LL;
  v29 = 4LL;
  UserData.Size = *(unsigned __int16 *)UserData.Ptr;
  v20 = *(unsigned __int16 *)(a2 + 11);
  v19 = a2 + 11;
  UserData.Reserved = 2;
  v21 = 1;
  return EtwWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, 0LL, 0LL, 0xAu, &UserData);
}
