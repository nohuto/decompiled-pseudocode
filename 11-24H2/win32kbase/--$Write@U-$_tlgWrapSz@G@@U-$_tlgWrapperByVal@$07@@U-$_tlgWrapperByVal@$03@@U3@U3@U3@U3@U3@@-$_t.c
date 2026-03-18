/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@55555@Z @ 0x140005F18
 * Callers:
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x1401EC448 (RIMDeviceClassNotifyAsyncWorkItem.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400B0708 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        const WCHAR **a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  const WCHAR *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  _BYTE v16[32]; // [rsp+30h] [rbp-99h] BYREF
  const WCHAR *v17; // [rsp+50h] [rbp-79h]
  int v18; // [rsp+58h] [rbp-71h]
  int v19; // [rsp+5Ch] [rbp-6Dh]
  __int64 v20; // [rsp+60h] [rbp-69h]
  __int64 v21; // [rsp+68h] [rbp-61h]
  __int64 v22; // [rsp+70h] [rbp-59h]
  __int64 v23; // [rsp+78h] [rbp-51h]
  __int64 v24; // [rsp+80h] [rbp-49h]
  __int64 v25; // [rsp+88h] [rbp-41h]
  __int64 v26; // [rsp+90h] [rbp-39h]
  __int64 v27; // [rsp+98h] [rbp-31h]
  __int64 v28; // [rsp+A0h] [rbp-29h]
  __int64 v29; // [rsp+A8h] [rbp-21h]
  __int64 v30; // [rsp+B0h] [rbp-19h]
  __int64 v31; // [rsp+B8h] [rbp-11h]
  __int64 v32; // [rsp+C0h] [rbp-9h]
  __int64 v33; // [rsp+C8h] [rbp-1h]

  v32 = a12;
  v30 = a11;
  v28 = a10;
  v26 = a9;
  v24 = a8;
  v22 = a7;
  v20 = a6;
  v33 = 4LL;
  v31 = 4LL;
  v29 = 4LL;
  v12 = *a5;
  v27 = 4LL;
  v25 = 4LL;
  v23 = 4LL;
  v21 = 8LL;
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
    v12 = &word_14025E168;
    v14 = 2;
  }
  v18 = v14;
  v17 = v12;
  v19 = 0;
  return tlgWriteTransfer_EtwWriteTransfer(&dword_14029AF48, a2, 0LL, 0LL, 10, v16);
}
