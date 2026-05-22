/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSz@D@@@Z @ 0x180001150
 * Callers:
 *     ?OnFocusRequest@ContextualProcessing@InputTraceLogging@@SAXPEBGW4ContextualProcessorState@@@Z @ 0x180017568 (-OnFocusRequest@ContextualProcessing@InputTraceLogging@@SAXPEBGW4ContextualProcessorState@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180011720 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        const WCHAR **a5,
        const unsigned __int16 **a6)
{
  __int64 v8; // rdx
  const unsigned __int16 *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  const WCHAR *v12; // rcx
  int v13; // edx
  _BYTE v15[32]; // [rsp+30h] [rbp-58h] BYREF
  const WCHAR *v16; // [rsp+50h] [rbp-38h]
  int v17; // [rsp+58h] [rbp-30h]
  int v18; // [rsp+5Ch] [rbp-2Ch]
  const unsigned __int16 *v19; // [rsp+60h] [rbp-28h]
  int v20; // [rsp+68h] [rbp-20h]
  int v21; // [rsp+6Ch] [rbp-1Ch]

  v8 = -1LL;
  v9 = *a6;
  if ( *a6 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( *((_BYTE *)v9 + v10) );
    v11 = v10 + 1;
  }
  else
  {
    v9 = &word_1801FDBB0;
    v11 = 1;
  }
  v20 = v11;
  v19 = v9;
  v21 = 0;
  v12 = *a5;
  if ( *a5 )
  {
    do
      ++v8;
    while ( v12[v8] );
    v13 = 2 * v8 + 2;
  }
  else
  {
    v12 = &WindowName;
    v13 = 2;
  }
  v16 = v12;
  v17 = v13;
  v18 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 4, v15);
}
