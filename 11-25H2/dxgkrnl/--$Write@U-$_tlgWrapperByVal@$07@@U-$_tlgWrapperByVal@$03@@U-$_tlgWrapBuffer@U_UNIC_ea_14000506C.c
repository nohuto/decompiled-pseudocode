/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U2@U2@U2@U?$_tlgWrapSz@G@@U1@U2@U2@U2@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@3444AEBU?$_tlgWrapSz@G@@34446@Z @ 0x14000506C
 * Callers:
 *     ?CheckForNewMuxPairing@DISPLAY_MUX_PAIRING@@AEAAJXZ @ 0x140082EB4 (-CheckForNewMuxPairing@DISPLAY_MUX_PAIRING@@AEAAJXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400407F4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
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
        void **a17)
{
  __int64 v18; // rcx
  _WORD *v19; // rdx
  __int64 v20; // rax
  int v21; // eax
  _WORD *v22; // rdx
  int v23; // ecx
  unsigned __int16 *v24; // rax
  int v25; // ecx
  _BYTE v27[32]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v28; // [rsp+50h] [rbp-B0h]
  __int64 v29; // [rsp+58h] [rbp-A8h]
  __int64 v30; // [rsp+60h] [rbp-A0h]
  __int64 v31; // [rsp+68h] [rbp-98h]
  _DWORD *v32; // [rsp+70h] [rbp-90h]
  __int64 v33; // [rsp+78h] [rbp-88h]
  __int64 v34; // [rsp+80h] [rbp-80h]
  _DWORD v35[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v36; // [rsp+90h] [rbp-70h]
  __int64 v37; // [rsp+98h] [rbp-68h]
  __int64 v38; // [rsp+A0h] [rbp-60h]
  __int64 v39; // [rsp+A8h] [rbp-58h]
  __int64 v40; // [rsp+B0h] [rbp-50h]
  __int64 v41; // [rsp+B8h] [rbp-48h]
  __int64 v42; // [rsp+C0h] [rbp-40h]
  __int64 v43; // [rsp+C8h] [rbp-38h]
  _WORD *v44; // [rsp+D0h] [rbp-30h]
  int v45; // [rsp+D8h] [rbp-28h]
  int v46; // [rsp+DCh] [rbp-24h]
  __int64 v47; // [rsp+E0h] [rbp-20h]
  __int64 v48; // [rsp+E8h] [rbp-18h]
  __int64 v49; // [rsp+F0h] [rbp-10h]
  __int64 v50; // [rsp+F8h] [rbp-8h]
  __int64 v51; // [rsp+100h] [rbp+0h]
  __int64 v52; // [rsp+108h] [rbp+8h]
  __int64 v53; // [rsp+110h] [rbp+10h]
  __int64 v54; // [rsp+118h] [rbp+18h]
  _WORD *v55; // [rsp+120h] [rbp+20h]
  int v56; // [rsp+128h] [rbp+28h]
  int v57; // [rsp+12Ch] [rbp+2Ch]

  v18 = -1LL;
  v19 = *a17;
  if ( *a17 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( v19[v20] );
    v21 = 2 * v20 + 2;
  }
  else
  {
    v19 = &unk_1400C5C48;
    v21 = 2;
  }
  v56 = v21;
  v53 = a16;
  v51 = a15;
  v49 = a14;
  v47 = a13;
  v55 = v19;
  v57 = 0;
  v54 = 4LL;
  v22 = *a12;
  v52 = 4LL;
  v50 = 4LL;
  v48 = 8LL;
  if ( v22 )
  {
    do
      ++v18;
    while ( v22[v18] );
    v23 = 2 * v18 + 2;
  }
  else
  {
    v22 = &unk_1400C5C48;
    v23 = 2;
  }
  v42 = a11;
  v40 = a10;
  v38 = a9;
  v36 = a8;
  v32 = v35;
  v44 = v22;
  v45 = v23;
  v46 = 0;
  v24 = *a7;
  v43 = 4LL;
  v41 = 4LL;
  v39 = 4LL;
  v37 = 8LL;
  v33 = 2LL;
  v25 = *v24;
  v34 = *((_QWORD *)v24 + 1);
  v30 = a6;
  v28 = a5;
  v35[0] = v25;
  v35[1] = 0;
  v31 = 4LL;
  v29 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(&dword_14015B5B8, a2, 0LL, 0LL, 16, v27);
}
