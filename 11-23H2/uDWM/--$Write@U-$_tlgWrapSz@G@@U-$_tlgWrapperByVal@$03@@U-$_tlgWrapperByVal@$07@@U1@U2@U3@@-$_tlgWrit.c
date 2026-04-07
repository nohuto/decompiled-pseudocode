/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@345@Z @ 0x1800BC528
 * Callers:
 *     ?IsModeChangeToSecondScreenOnlyOrRevert@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180028708 (-IsModeChangeToSecondScreenOnlyOrRevert@CDisplayModeChangeHelper@@CA-AW4DisplayModeChangeResult@.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180011060 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        wchar_t **a5,
        __int64 a6,
        __int64 a7,
        wchar_t **a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v11; // rcx
  int v12; // r9d
  wchar_t *v13; // rdx
  __int64 v14; // rax
  int v15; // r8d
  wchar_t *v16; // rdx
  _BYTE v18[32]; // [rsp+30h] [rbp-69h] BYREF
  wchar_t *v19; // [rsp+50h] [rbp-49h]
  int v20; // [rsp+58h] [rbp-41h]
  int v21; // [rsp+5Ch] [rbp-3Dh]
  __int64 v22; // [rsp+60h] [rbp-39h]
  __int64 v23; // [rsp+68h] [rbp-31h]
  __int64 v24; // [rsp+70h] [rbp-29h]
  __int64 v25; // [rsp+78h] [rbp-21h]
  wchar_t *v26; // [rsp+80h] [rbp-19h]
  int v27; // [rsp+88h] [rbp-11h]
  int v28; // [rsp+8Ch] [rbp-Dh]
  __int64 v29; // [rsp+90h] [rbp-9h]
  __int64 v30; // [rsp+98h] [rbp-1h]
  __int64 v31; // [rsp+A0h] [rbp+7h]
  __int64 v32; // [rsp+A8h] [rbp+Fh]

  v31 = a10;
  v11 = -1LL;
  v29 = a9;
  v12 = 2;
  v32 = 8LL;
  v30 = 4LL;
  v13 = *a8;
  if ( *a8 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v13 = word_18011F0D4;
    v15 = 2;
  }
  v24 = a7;
  v22 = a6;
  v26 = v13;
  v27 = v15;
  v28 = 0;
  v16 = *a5;
  v25 = 8LL;
  v23 = 4LL;
  if ( v16 )
  {
    do
      ++v11;
    while ( v16[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v16 = word_18011F0D4;
  }
  v19 = v16;
  v20 = v12;
  v21 = 0;
  return tlgWriteTransfer_EtwEventWriteTransfer((__int64)&dword_180147058, a2, 0LL, 0LL, 8, (__int64)v18);
}
