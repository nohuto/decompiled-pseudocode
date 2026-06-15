/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U1@U?$_tlgWrapperByVal@$01@@U1@U3@U3@U1@U3@U3@U_tlgWrapperBinary@@U3@U1@U3@U3@U1@U3@U3@U4@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@3AEBU?$_tlgWrapperByVal@$01@@355355AEBU_tlgWrapperBinary@@535535563@Z @ 0x180007C0C
 * Callers:
 *     _lambda_9ae8c4928910e969c2e408eee9d60c41_::operator() @ 0x180149F80 (_lambda_9ae8c4928910e969c2e408eee9d60c41_--operator().c)
 *     _lambda_d9c18f6fc2a9815de9706b623d63d839_::operator() @ 0x18014A1AC (_lambda_d9c18f6fc2a9815de9706b623d63d839_--operator().c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800469F0 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperBinary,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperBinary,_tlgWrapperByVal<4>>(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 *a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 *a23,
        __int64 a24)
{
  __int64 v24; // r8
  _BYTE v26[32]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+50h] [rbp-B0h]
  __int64 v28; // [rsp+58h] [rbp-A8h]
  __int64 v29; // [rsp+60h] [rbp-A0h]
  __int64 v30; // [rsp+68h] [rbp-98h]
  __int64 v31; // [rsp+70h] [rbp-90h]
  __int64 v32; // [rsp+78h] [rbp-88h]
  __int64 v33; // [rsp+80h] [rbp-80h]
  __int64 v34; // [rsp+88h] [rbp-78h]
  __int64 v35; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+98h] [rbp-68h]
  __int64 v37; // [rsp+A0h] [rbp-60h]
  __int64 v38; // [rsp+A8h] [rbp-58h]
  __int64 v39; // [rsp+B0h] [rbp-50h]
  __int64 v40; // [rsp+B8h] [rbp-48h]
  __int64 v41; // [rsp+C0h] [rbp-40h]
  __int64 v42; // [rsp+C8h] [rbp-38h]
  __int64 v43; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+D8h] [rbp-28h]
  __int64 v45; // [rsp+E0h] [rbp-20h]
  __int64 v46; // [rsp+E8h] [rbp-18h]
  _DWORD *v47; // [rsp+F0h] [rbp-10h]
  __int64 v48; // [rsp+F8h] [rbp-8h]
  __int64 v49; // [rsp+100h] [rbp+0h]
  _DWORD v50[2]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v51; // [rsp+110h] [rbp+10h]
  __int64 v52; // [rsp+118h] [rbp+18h]
  __int64 v53; // [rsp+120h] [rbp+20h]
  __int64 v54; // [rsp+128h] [rbp+28h]
  __int64 v55; // [rsp+130h] [rbp+30h]
  __int64 v56; // [rsp+138h] [rbp+38h]
  __int64 v57; // [rsp+140h] [rbp+40h]
  __int64 v58; // [rsp+148h] [rbp+48h]
  __int64 v59; // [rsp+150h] [rbp+50h]
  __int64 v60; // [rsp+158h] [rbp+58h]
  __int64 v61; // [rsp+160h] [rbp+60h]
  __int64 v62; // [rsp+168h] [rbp+68h]
  __int64 v63; // [rsp+170h] [rbp+70h]
  __int64 v64; // [rsp+178h] [rbp+78h]
  _DWORD *v65; // [rsp+180h] [rbp+80h]
  __int64 v66; // [rsp+188h] [rbp+88h]
  __int64 v67; // [rsp+190h] [rbp+90h]
  _DWORD v68[2]; // [rsp+198h] [rbp+98h] BYREF
  __int64 v69; // [rsp+1A0h] [rbp+A0h]
  __int64 v70; // [rsp+1A8h] [rbp+A8h]

  v69 = a24;
  v65 = v68;
  v70 = 4LL;
  v67 = *a23;
  v68[0] = *((unsigned __int16 *)a23 + 4);
  v63 = a22;
  v61 = a21;
  v59 = a20;
  v57 = a19;
  v55 = a18;
  v53 = a17;
  v51 = a16;
  v47 = v50;
  v49 = *a15;
  v50[0] = *((unsigned __int16 *)a15 + 4);
  v45 = a14;
  v43 = a13;
  v41 = a12;
  v39 = a11;
  v37 = a10;
  v35 = a9;
  v33 = a8;
  v31 = a7;
  v66 = 2LL;
  v68[1] = 0;
  v64 = 2LL;
  v24 = *a6;
  v27 = a5;
  v29 = v24;
  v62 = 2LL;
  v60 = 4LL;
  v58 = 2LL;
  v56 = 2LL;
  v54 = 4LL;
  v52 = 2LL;
  v48 = 2LL;
  v50[1] = 0;
  v46 = 2LL;
  v44 = 2LL;
  v42 = 4LL;
  v40 = 2LL;
  v38 = 2LL;
  v36 = 4LL;
  v34 = 2LL;
  v32 = 4LL;
  v30 = 16LL;
  v28 = 4LL;
  return tlgWriteTransfer_EtwEventWriteTransfer(a1, a2, 0, 0, 24, (__int64)v26);
}
