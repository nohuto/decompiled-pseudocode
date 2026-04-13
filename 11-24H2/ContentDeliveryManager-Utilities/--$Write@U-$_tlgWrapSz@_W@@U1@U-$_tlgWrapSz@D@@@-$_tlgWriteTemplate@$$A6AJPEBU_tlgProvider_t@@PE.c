/*
 * XREFs of ??$Write@U?$_tlgWrapSz@_W@@U1@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@_W@@3AEBU?$_tlgWrapSz@D@@@Z @ 0x180003D90
 * Callers:
 *     ??$TaskUnregistered@PEB_WAEAY0CH@_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEB_WAEAY0CH@_WPEBD@Z @ 0x1800B5294 (--$TaskUnregistered@PEB_WAEAY0CH@_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryMa.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001CB8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<wchar_t>,_tlgWrapSz<wchar_t>,_tlgWrapSz<char>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const wchar_t **a5,
        const wchar_t **a6,
        const wchar_t **a7)
{
  __int64 v9; // rcx
  const wchar_t *v10; // rdx
  __int64 v11; // rax
  int v12; // eax
  int v13; // r8d
  const wchar_t *v14; // rdx
  __int64 v15; // rax
  int v16; // eax
  const wchar_t *v17; // rdx
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+30h] [rbp-68h] BYREF
  const wchar_t *v20; // [rsp+50h] [rbp-48h]
  int v21; // [rsp+58h] [rbp-40h]
  int v22; // [rsp+5Ch] [rbp-3Ch]
  const wchar_t *v23; // [rsp+60h] [rbp-38h]
  int v24; // [rsp+68h] [rbp-30h]
  int v25; // [rsp+6Ch] [rbp-2Ch]
  const wchar_t *v26; // [rsp+70h] [rbp-28h]
  int v27; // [rsp+78h] [rbp-20h]
  int v28; // [rsp+7Ch] [rbp-1Ch]

  v9 = -1LL;
  v10 = *a7;
  if ( *a7 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( *((_BYTE *)v10 + v11) );
    v12 = v11 + 1;
  }
  else
  {
    v10 = &word_1800E78B8;
    v12 = 1;
  }
  v27 = v12;
  v13 = 2;
  v26 = v10;
  v28 = 0;
  v14 = *a6;
  if ( *a6 )
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
  v24 = v16;
  v23 = v14;
  v25 = 0;
  v17 = *a5;
  if ( *a5 )
  {
    do
      ++v9;
    while ( v17[v9] );
    v13 = 2 * v9 + 2;
  }
  else
  {
    v17 = &word_1800E78BC;
  }
  v20 = v17;
  v21 = v13;
  v22 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 5u, &v19);
}
