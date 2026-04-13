/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@54@Z @ 0x180002718
 * Callers:
 *     ?StartActivity@CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEBG0I@Z @ 0x180058108 (-StartActivity@CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEB.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001CB8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        const GUID *a4,
        __int64 a5,
        __int64 a6,
        const wchar_t **a7,
        const wchar_t **a8,
        __int64 a9)
{
  __int64 v11; // rcx
  int v13; // r8d
  const wchar_t *v14; // rdx
  __int64 v15; // rax
  int v16; // eax
  const wchar_t *v17; // rdx
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+30h] [rbp-61h] BYREF
  __int64 v20; // [rsp+50h] [rbp-41h]
  __int64 v21; // [rsp+58h] [rbp-39h]
  __int64 v22; // [rsp+60h] [rbp-31h]
  __int64 v23; // [rsp+68h] [rbp-29h]
  const wchar_t *v24; // [rsp+70h] [rbp-21h]
  int v25; // [rsp+78h] [rbp-19h]
  int v26; // [rsp+7Ch] [rbp-15h]
  const wchar_t *v27; // [rsp+80h] [rbp-11h]
  int v28; // [rsp+88h] [rbp-9h]
  int v29; // [rsp+8Ch] [rbp-5h]
  __int64 v30; // [rsp+90h] [rbp-1h]
  __int64 v31; // [rsp+98h] [rbp+7h]

  v30 = a9;
  v11 = -1LL;
  v31 = 4LL;
  v13 = 2;
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
    v14 = &word_1800E78BC;
    v16 = 2;
  }
  v28 = v16;
  v27 = v14;
  v29 = 0;
  v17 = *a7;
  if ( *a7 )
  {
    do
      ++v11;
    while ( v17[v11] );
    v13 = 2 * v11 + 2;
  }
  else
  {
    v17 = &word_1800E78BC;
  }
  v22 = a6;
  v20 = a5;
  v24 = v17;
  v25 = v13;
  v26 = 0;
  v23 = 4LL;
  v21 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, a4, 7u, &v19);
}
