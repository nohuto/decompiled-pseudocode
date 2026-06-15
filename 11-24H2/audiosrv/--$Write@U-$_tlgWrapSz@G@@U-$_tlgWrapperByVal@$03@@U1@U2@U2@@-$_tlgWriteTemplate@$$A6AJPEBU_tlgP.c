/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@344@Z @ 0x180003B9C
 * Callers:
 *     ?Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEBGPEAUIPartsList@@@Z @ 0x180101EF8 (-Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEBGPEAUIPartsList@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800469F0 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        const WCHAR **a5,
        __int64 a6,
        const WCHAR **a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v11; // rcx
  int v12; // r8d
  const WCHAR *v13; // rdx
  __int64 v14; // rax
  int v15; // eax
  const WCHAR *v16; // rdx
  _BYTE v18[32]; // [rsp+30h] [rbp-51h] BYREF
  const WCHAR *v19; // [rsp+50h] [rbp-31h]
  int v20; // [rsp+58h] [rbp-29h]
  int v21; // [rsp+5Ch] [rbp-25h]
  __int64 v22; // [rsp+60h] [rbp-21h]
  __int64 v23; // [rsp+68h] [rbp-19h]
  const WCHAR *v24; // [rsp+70h] [rbp-11h]
  int v25; // [rsp+78h] [rbp-9h]
  int v26; // [rsp+7Ch] [rbp-5h]
  __int64 v27; // [rsp+80h] [rbp-1h]
  __int64 v28; // [rsp+88h] [rbp+7h]
  __int64 v29; // [rsp+90h] [rbp+Fh]
  __int64 v30; // [rsp+98h] [rbp+17h]

  v29 = a9;
  v27 = a8;
  v11 = -1LL;
  v12 = 2;
  v30 = 4LL;
  v28 = 4LL;
  v13 = *a7;
  if ( *a7 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v13 = &LocaleName;
    v15 = 2;
  }
  v25 = v15;
  v22 = a6;
  v24 = v13;
  v26 = 0;
  v23 = 4LL;
  v16 = *a5;
  if ( *a5 )
  {
    do
      ++v11;
    while ( v16[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v16 = &LocaleName;
  }
  v19 = v16;
  v20 = v12;
  v21 = 0;
  return tlgWriteTransfer_EtwEventWriteTransfer(a1, a2, 0, 0, 7, (__int64)v18);
}
