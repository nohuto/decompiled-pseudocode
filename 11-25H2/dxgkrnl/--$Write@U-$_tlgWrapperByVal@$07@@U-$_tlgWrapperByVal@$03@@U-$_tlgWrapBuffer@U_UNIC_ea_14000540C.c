/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$00@@U2@U2@U2@U2@U2@U1@U2@U2@U2@U?$_tlgWrapSz@G@@U1@U2@U2@U2@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$00@@444443444AEBU?$_tlgWrapSz@G@@34447@Z @ 0x14000540C
 * Callers:
 *     ?LogMuxPairingStateTelemetry@DISPLAY_MUX_PAIRING@@AEBAXW4DISPLAYCONFIG_DISPLAYMUX_PAIRING_STATUS@@J_N@Z @ 0x1400850CC (-LogMuxPairingStateTelemetry@DISPLAY_MUX_PAIRING@@AEBAXW4DISPLAYCONFIG_DISPLAYMUX_PAIRING_STATUS.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400407F4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int16 **a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        void **a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        void **a23)
{
  __int64 v24; // rcx
  _WORD *v25; // rdx
  __int64 v26; // rax
  int v27; // eax
  _WORD *v28; // rdx
  int v29; // ecx
  unsigned __int16 *v30; // rax
  int v31; // ecx
  _BYTE v33[32]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+50h] [rbp-B0h]
  __int64 v35; // [rsp+58h] [rbp-A8h]
  __int64 v36; // [rsp+60h] [rbp-A0h]
  __int64 v37; // [rsp+68h] [rbp-98h]
  _DWORD *v38; // [rsp+70h] [rbp-90h]
  __int64 v39; // [rsp+78h] [rbp-88h]
  __int64 v40; // [rsp+80h] [rbp-80h]
  _DWORD v41[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v42; // [rsp+90h] [rbp-70h]
  __int64 v43; // [rsp+98h] [rbp-68h]
  __int64 v44; // [rsp+A0h] [rbp-60h]
  __int64 v45; // [rsp+A8h] [rbp-58h]
  __int64 v46; // [rsp+B0h] [rbp-50h]
  __int64 v47; // [rsp+B8h] [rbp-48h]
  __int64 v48; // [rsp+C0h] [rbp-40h]
  __int64 v49; // [rsp+C8h] [rbp-38h]
  __int64 v50; // [rsp+D0h] [rbp-30h]
  __int64 v51; // [rsp+D8h] [rbp-28h]
  __int64 v52; // [rsp+E0h] [rbp-20h]
  __int64 v53; // [rsp+E8h] [rbp-18h]
  __int64 v54; // [rsp+F0h] [rbp-10h]
  __int64 v55; // [rsp+F8h] [rbp-8h]
  __int64 v56; // [rsp+100h] [rbp+0h]
  __int64 v57; // [rsp+108h] [rbp+8h]
  __int64 v58; // [rsp+110h] [rbp+10h]
  __int64 v59; // [rsp+118h] [rbp+18h]
  __int64 v60; // [rsp+120h] [rbp+20h]
  __int64 v61; // [rsp+128h] [rbp+28h]
  _WORD *v62; // [rsp+130h] [rbp+30h]
  int v63; // [rsp+138h] [rbp+38h]
  int v64; // [rsp+13Ch] [rbp+3Ch]
  __int64 v65; // [rsp+140h] [rbp+40h]
  __int64 v66; // [rsp+148h] [rbp+48h]
  __int64 v67; // [rsp+150h] [rbp+50h]
  __int64 v68; // [rsp+158h] [rbp+58h]
  __int64 v69; // [rsp+160h] [rbp+60h]
  __int64 v70; // [rsp+168h] [rbp+68h]
  __int64 v71; // [rsp+170h] [rbp+70h]
  __int64 v72; // [rsp+178h] [rbp+78h]
  _WORD *v73; // [rsp+180h] [rbp+80h]
  int v74; // [rsp+188h] [rbp+88h]
  int v75; // [rsp+18Ch] [rbp+8Ch]

  v24 = -1LL;
  v25 = *a23;
  if ( *a23 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( v25[v26] );
    v27 = 2 * v26 + 2;
  }
  else
  {
    v25 = &unk_1400C5C48;
    v27 = 2;
  }
  v74 = v27;
  v71 = a22;
  v69 = a21;
  v67 = a20;
  v65 = a19;
  v73 = v25;
  v75 = 0;
  v72 = 4LL;
  v28 = *a18;
  v70 = 4LL;
  v68 = 4LL;
  v66 = 8LL;
  if ( v28 )
  {
    do
      ++v24;
    while ( v28[v24] );
    v29 = 2 * v24 + 2;
  }
  else
  {
    v28 = &unk_1400C5C48;
    v29 = 2;
  }
  v60 = a17;
  v58 = a16;
  v56 = a15;
  v54 = a14;
  v52 = a13;
  v50 = a12;
  v48 = a11;
  v46 = a10;
  v44 = a9;
  v42 = a8;
  v38 = v41;
  v62 = v28;
  v63 = v29;
  v64 = 0;
  v30 = *a7;
  v61 = 4LL;
  v59 = 4LL;
  v57 = 4LL;
  v55 = 8LL;
  v53 = 4LL;
  v51 = 4LL;
  v49 = 4LL;
  v47 = 4LL;
  v45 = 4LL;
  v43 = 1LL;
  v39 = 2LL;
  v31 = *v30;
  v40 = *((_QWORD *)v30 + 1);
  v36 = a6;
  v34 = a5;
  v41[0] = v31;
  v41[1] = 0;
  v37 = 4LL;
  v35 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(&dword_14015B5B8, a2, 0LL, 0LL, 22, v33);
}
