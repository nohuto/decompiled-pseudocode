/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@34@Z @ 0x140004500
 * Callers:
 *     ?FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z @ 0x1402319DC (-FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400407F4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void **a7,
        __int64 a8,
        void **a9)
{
  __int64 v10; // rcx
  int v11; // r8d
  _WORD *v12; // rdx
  __int64 v13; // rax
  int v14; // eax
  _WORD *v15; // rdx
  _BYTE v17[32]; // [rsp+30h] [rbp-51h] BYREF
  __int64 v18; // [rsp+50h] [rbp-31h]
  __int64 v19; // [rsp+58h] [rbp-29h]
  __int64 v20; // [rsp+60h] [rbp-21h]
  __int64 v21; // [rsp+68h] [rbp-19h]
  _WORD *v22; // [rsp+70h] [rbp-11h]
  int v23; // [rsp+78h] [rbp-9h]
  int v24; // [rsp+7Ch] [rbp-5h]
  __int64 v25; // [rsp+80h] [rbp-1h]
  __int64 v26; // [rsp+88h] [rbp+7h]
  _WORD *v27; // [rsp+90h] [rbp+Fh]
  int v28; // [rsp+98h] [rbp+17h]
  int v29; // [rsp+9Ch] [rbp+1Bh]

  v10 = -1LL;
  v11 = 2;
  v12 = *a9;
  if ( *a9 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( v12[v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v12 = &unk_1400C5C48;
    v14 = 2;
  }
  v28 = v14;
  v25 = a8;
  v27 = v12;
  v29 = 0;
  v26 = 4LL;
  v15 = *a7;
  if ( *a7 )
  {
    do
      ++v10;
    while ( v15[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v15 = &unk_1400C5C48;
  }
  v20 = a6;
  v18 = a5;
  v22 = v15;
  v23 = v11;
  v24 = 0;
  v21 = 4LL;
  v19 = 4LL;
  return tlgWriteTransfer_EtwWriteTransfer(&dword_14015B660, a2, 0LL, 0LL, 7, v17);
}
