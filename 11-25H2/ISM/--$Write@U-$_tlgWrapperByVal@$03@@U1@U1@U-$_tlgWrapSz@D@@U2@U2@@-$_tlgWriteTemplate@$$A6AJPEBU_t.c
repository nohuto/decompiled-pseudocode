/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapSz@D@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapSz@D@@44@Z @ 0x180002778
 * Callers:
 *     ?LogMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800C7444 (-LogMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180010FC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        const unsigned __int16 **a8,
        const unsigned __int16 **a9,
        const unsigned __int16 **a10)
{
  __int64 v11; // rcx
  const unsigned __int16 *v12; // r8
  __int64 v13; // rax
  int v14; // eax
  const unsigned __int16 *v15; // r8
  __int64 v16; // rax
  int v17; // eax
  const unsigned __int16 *v18; // r8
  int v19; // ecx
  _BYTE v21[32]; // [rsp+30h] [rbp-69h] BYREF
  __int64 v22; // [rsp+50h] [rbp-49h]
  __int64 v23; // [rsp+58h] [rbp-41h]
  __int64 v24; // [rsp+60h] [rbp-39h]
  __int64 v25; // [rsp+68h] [rbp-31h]
  __int64 v26; // [rsp+70h] [rbp-29h]
  __int64 v27; // [rsp+78h] [rbp-21h]
  const unsigned __int16 *v28; // [rsp+80h] [rbp-19h]
  int v29; // [rsp+88h] [rbp-11h]
  int v30; // [rsp+8Ch] [rbp-Dh]
  const unsigned __int16 *v31; // [rsp+90h] [rbp-9h]
  int v32; // [rsp+98h] [rbp-1h]
  int v33; // [rsp+9Ch] [rbp+3h]
  const unsigned __int16 *v34; // [rsp+A0h] [rbp+7h]
  int v35; // [rsp+A8h] [rbp+Fh]
  int v36; // [rsp+ACh] [rbp+13h]

  v11 = -1LL;
  v12 = *a10;
  if ( *a10 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( *((_BYTE *)v12 + v13) );
    v14 = v13 + 1;
  }
  else
  {
    v12 = &word_1801F55A8;
    v14 = 1;
  }
  v35 = v14;
  v34 = v12;
  v36 = 0;
  v15 = *a9;
  if ( *a9 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *((_BYTE *)v15 + v16) );
    v17 = v16 + 1;
  }
  else
  {
    v15 = &word_1801F55A8;
    v17 = 1;
  }
  v32 = v17;
  v31 = v15;
  v33 = 0;
  v18 = *a8;
  if ( *a8 )
  {
    do
      ++v11;
    while ( *((_BYTE *)v18 + v11) );
    v19 = v11 + 1;
  }
  else
  {
    v18 = &word_1801F55A8;
    v19 = 1;
  }
  v26 = a7;
  v24 = a6;
  v22 = a5;
  v28 = v18;
  v29 = v19;
  v30 = 0;
  v27 = 4LL;
  v25 = 4LL;
  v23 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 8, v21);
}
