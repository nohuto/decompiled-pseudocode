/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@77@Z @ 0x180004344
 * Callers:
 *     ?LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@JPEBGGGG@Z @ 0x1800E6EF8 (-LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180010FC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const unsigned __int16 **a6,
        __int64 a7,
        const WCHAR **a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  int v11; // r8d
  __int64 v13; // rcx
  const WCHAR *v14; // rdx
  __int64 v15; // rax
  const unsigned __int16 *v16; // rdx
  int v17; // ecx
  _BYTE v19[32]; // [rsp+30h] [rbp-81h] BYREF
  __int64 v20; // [rsp+50h] [rbp-61h]
  __int64 v21; // [rsp+58h] [rbp-59h]
  const unsigned __int16 *v22; // [rsp+60h] [rbp-51h]
  int v23; // [rsp+68h] [rbp-49h]
  int v24; // [rsp+6Ch] [rbp-45h]
  __int64 v25; // [rsp+70h] [rbp-41h]
  __int64 v26; // [rsp+78h] [rbp-39h]
  const WCHAR *v27; // [rsp+80h] [rbp-31h]
  int v28; // [rsp+88h] [rbp-29h]
  int v29; // [rsp+8Ch] [rbp-25h]
  __int64 v30; // [rsp+90h] [rbp-21h]
  __int64 v31; // [rsp+98h] [rbp-19h]
  __int64 v32; // [rsp+A0h] [rbp-11h]
  __int64 v33; // [rsp+A8h] [rbp-9h]
  __int64 v34; // [rsp+B0h] [rbp-1h]
  __int64 v35; // [rsp+B8h] [rbp+7h]

  v11 = 2;
  v34 = a11;
  v32 = a10;
  v13 = -1LL;
  v30 = a9;
  v35 = 2LL;
  v33 = 2LL;
  v31 = 2LL;
  v14 = *a8;
  if ( *a8 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( v14[v15] );
    v11 = 2 * v15 + 2;
  }
  else
  {
    v14 = &WindowName;
  }
  v25 = a7;
  v27 = v14;
  v28 = v11;
  v29 = 0;
  v16 = *a6;
  v26 = 4LL;
  if ( v16 )
  {
    do
      ++v13;
    while ( *((_BYTE *)v16 + v13) );
    v17 = v13 + 1;
  }
  else
  {
    v16 = &word_1801F55A8;
    v17 = 1;
  }
  v20 = a5;
  v22 = v16;
  v23 = v17;
  v24 = 0;
  v21 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(&dword_180244248, a2, 0LL, 0LL, 9, v19);
}
