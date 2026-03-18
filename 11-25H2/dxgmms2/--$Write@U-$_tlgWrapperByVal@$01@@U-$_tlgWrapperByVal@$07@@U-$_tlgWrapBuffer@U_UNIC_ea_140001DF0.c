/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$03@@U2@U2@U4@U4@U4@U2@U4@U4@U4@U4@U4@U2@U?$_tlgWrapSz@D@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$03@@446664666664AEBU?$_tlgWrapSz@D@@6@Z @ 0x140001DF0
 * Callers:
 *     VidSchiProcessHwQueuePageFaultedDpc @ 0x140049CC8 (VidSchiProcessHwQueuePageFaultedDpc.c)
 *     LogPageFaultInformation @ 0x14004F71C (LogPageFaultInformation.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140040BE0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
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
        __int64 a18,
        __int64 a19,
        __int64 a20,
        void **a21,
        __int64 a22)
{
  _BYTE *v22; // rcx
  __int64 v23; // rax
  int v24; // eax
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
  __int64 v45; // [rsp+D0h] [rbp-30h]
  __int64 v46; // [rsp+D8h] [rbp-28h]
  __int64 v47; // [rsp+E0h] [rbp-20h]
  __int64 v48; // [rsp+E8h] [rbp-18h]
  __int64 v49; // [rsp+F0h] [rbp-10h]
  __int64 v50; // [rsp+F8h] [rbp-8h]
  __int64 v51; // [rsp+100h] [rbp+0h]
  __int64 v52; // [rsp+108h] [rbp+8h]
  __int64 v53; // [rsp+110h] [rbp+10h]
  __int64 v54; // [rsp+118h] [rbp+18h]
  __int64 v55; // [rsp+120h] [rbp+20h]
  __int64 v56; // [rsp+128h] [rbp+28h]
  __int64 v57; // [rsp+130h] [rbp+30h]
  __int64 v58; // [rsp+138h] [rbp+38h]
  __int64 v59; // [rsp+140h] [rbp+40h]
  __int64 v60; // [rsp+148h] [rbp+48h]
  __int64 v61; // [rsp+150h] [rbp+50h]
  __int64 v62; // [rsp+158h] [rbp+58h]
  _BYTE *v63; // [rsp+160h] [rbp+60h]
  int v64; // [rsp+168h] [rbp+68h]
  int v65; // [rsp+16Ch] [rbp+6Ch]
  __int64 v66; // [rsp+170h] [rbp+70h]
  __int64 v67; // [rsp+178h] [rbp+78h]

  v66 = a22;
  v67 = 4LL;
  v22 = *a21;
  if ( *a21 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( v22[v23] );
    v24 = v23 + 1;
  }
  else
  {
    v22 = &unk_14006265C;
    v24 = 1;
  }
  v64 = v24;
  v61 = a20;
  v59 = a19;
  v57 = a18;
  v55 = a17;
  v53 = a16;
  v51 = a15;
  v49 = a14;
  v47 = a13;
  v45 = a12;
  v43 = a11;
  v41 = a10;
  v39 = a9;
  v37 = a8;
  v33 = v36;
  v63 = v22;
  v65 = 0;
  v62 = 8LL;
  v25 = *a7;
  v60 = 4LL;
  v58 = 4LL;
  v56 = 4LL;
  v54 = 4LL;
  v52 = 4LL;
  v50 = 8LL;
  v48 = 4LL;
  v46 = 4LL;
  v44 = 4LL;
  v42 = 8LL;
  v40 = 8LL;
  v38 = 4LL;
  v34 = 2LL;
  v26 = *v25;
  v35 = *((_QWORD *)v25 + 1);
  v31 = a6;
  v29 = a5;
  v36[0] = v26;
  v36[1] = 0;
  v32 = 8LL;
  v30 = 2LL;
  return tlgWriteTransfer_EtwWriteTransfer(&dword_140081048, a2, 0LL, 0LL, 21, v28);
}
