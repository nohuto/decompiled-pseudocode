/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U2@U2@U2@U?$_tlgWrapSz@G@@U1@U2@U2@U2@U4@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@3444AEBU?$_tlgWrapSz@G@@344464@Z @ 0x140005230
 * Callers:
 *     ?DestroyActivePairing@DISPLAY_MUX_PAIRING@@AEAAXW4DISPLAY_MUX_PAIRING_DESTROYED_REASON@@@Z @ 0x1400840A0 (-DestroyActivePairing@DISPLAY_MUX_PAIRING@@AEAAXW4DISPLAY_MUX_PAIRING_DESTROYED_REASON@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400401E4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
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
        void **a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        void **a17,
        __int64 a18)
{
  __int64 v19; // rcx
  _WORD *v20; // rdx
  __int64 v21; // rax
  int v22; // eax
  _WORD *v23; // rdx
  int v24; // ecx
  unsigned __int16 *v25; // rax
  int v26; // ecx
  _BYTE v28[32]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+50h] [rbp-B0h]
  __int64 v30; // [rsp+58h] [rbp-A8h]
  __int64 v31; // [rsp+60h] [rbp-A0h]
  __int64 v32; // [rsp+68h] [rbp-98h]
  _DWORD *v33; // [rsp+70h] [rbp-90h]
  __int64 v34; // [rsp+78h] [rbp-88h]
  __int64 v35; // [rsp+80h] [rbp-80h]
  _DWORD v36[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v37; // [rsp+90h] [rbp-70h]
  __int64 v38; // [rsp+98h] [rbp-68h]
  __int64 v39; // [rsp+A0h] [rbp-60h]
  __int64 v40; // [rsp+A8h] [rbp-58h]
  __int64 v41; // [rsp+B0h] [rbp-50h]
  __int64 v42; // [rsp+B8h] [rbp-48h]
  __int64 v43; // [rsp+C0h] [rbp-40h]
  __int64 v44; // [rsp+C8h] [rbp-38h]
  _WORD *v45; // [rsp+D0h] [rbp-30h]
  int v46; // [rsp+D8h] [rbp-28h]
  int v47; // [rsp+DCh] [rbp-24h]
  __int64 v48; // [rsp+E0h] [rbp-20h]
  __int64 v49; // [rsp+E8h] [rbp-18h]
  __int64 v50; // [rsp+F0h] [rbp-10h]
  __int64 v51; // [rsp+F8h] [rbp-8h]
  __int64 v52; // [rsp+100h] [rbp+0h]
  __int64 v53; // [rsp+108h] [rbp+8h]
  __int64 v54; // [rsp+110h] [rbp+10h]
  __int64 v55; // [rsp+118h] [rbp+18h]
  _WORD *v56; // [rsp+120h] [rbp+20h]
  int v57; // [rsp+128h] [rbp+28h]
  int v58; // [rsp+12Ch] [rbp+2Ch]
  __int64 v59; // [rsp+130h] [rbp+30h]
  __int64 v60; // [rsp+138h] [rbp+38h]

  v59 = a18;
  v19 = -1LL;
  v60 = 4LL;
  v20 = *a17;
  if ( *a17 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( v20[v21] );
    v22 = 2 * v21 + 2;
  }
  else
  {
    v20 = &unk_1400C6B88;
    v22 = 2;
  }
  v57 = v22;
  v54 = a16;
  v52 = a15;
  v50 = a14;
  v48 = a13;
  v56 = v20;
  v58 = 0;
  v55 = 4LL;
  v23 = *a12;
  v53 = 4LL;
  v51 = 4LL;
  v49 = 8LL;
  if ( v23 )
  {
    do
      ++v19;
    while ( v23[v19] );
    v24 = 2 * v19 + 2;
  }
  else
  {
    v23 = &unk_1400C6B88;
    v24 = 2;
  }
  v43 = a11;
  v41 = a10;
  v39 = a9;
  v37 = a8;
  v33 = v36;
  v45 = v23;
  v46 = v24;
  v47 = 0;
  v25 = *a7;
  v44 = 4LL;
  v42 = 4LL;
  v40 = 4LL;
  v38 = 8LL;
  v34 = 2LL;
  v26 = *v25;
  v35 = *((_QWORD *)v25 + 1);
  v31 = a6;
  v29 = a5;
  v36[0] = v26;
  v36[1] = 0;
  v32 = 4LL;
  v30 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(&dword_14015E5A8, a2, 0LL, 0LL, 17, v28);
}
