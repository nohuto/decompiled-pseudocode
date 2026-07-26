/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U3@U3@U3@U2@U3@U2@U2@U3@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U_tlgWrapperPtrSize@@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@455545445AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@555555555555AEBU_tlgWrapperPtrSize@@77@Z @ 0x140002150
 * Callers:
 *     ?NdisTraceLoggingCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@_KPEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@5@Z @ 0x1400752D0 (-NdisTraceLoggingCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@_KPEAU_NDI.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140045E80 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        unsigned __int16 **a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        __int64 a28,
        __int64 a29,
        __int64 *a30,
        __int64 *a31,
        __int64 *a32)
{
  unsigned __int16 *v32; // rax
  int v33; // ecx
  _BYTE v35[32]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v36; // [rsp+50h] [rbp-B0h]
  __int64 v37; // [rsp+58h] [rbp-A8h]
  __int64 v38; // [rsp+60h] [rbp-A0h]
  __int64 v39; // [rsp+68h] [rbp-98h]
  __int64 v40; // [rsp+70h] [rbp-90h]
  __int64 v41; // [rsp+78h] [rbp-88h]
  __int64 v42; // [rsp+80h] [rbp-80h]
  __int64 v43; // [rsp+88h] [rbp-78h]
  __int64 v44; // [rsp+90h] [rbp-70h]
  __int64 v45; // [rsp+98h] [rbp-68h]
  __int64 v46; // [rsp+A0h] [rbp-60h]
  __int64 v47; // [rsp+A8h] [rbp-58h]
  __int64 v48; // [rsp+B0h] [rbp-50h]
  __int64 v49; // [rsp+B8h] [rbp-48h]
  __int64 v50; // [rsp+C0h] [rbp-40h]
  __int64 v51; // [rsp+C8h] [rbp-38h]
  __int64 v52; // [rsp+D0h] [rbp-30h]
  __int64 v53; // [rsp+D8h] [rbp-28h]
  __int64 v54; // [rsp+E0h] [rbp-20h]
  __int64 v55; // [rsp+E8h] [rbp-18h]
  __int64 v56; // [rsp+F0h] [rbp-10h]
  __int64 v57; // [rsp+F8h] [rbp-8h]
  __int64 v58; // [rsp+100h] [rbp+0h]
  __int64 v59; // [rsp+108h] [rbp+8h]
  _DWORD *v60; // [rsp+110h] [rbp+10h]
  __int64 v61; // [rsp+118h] [rbp+18h]
  __int64 v62; // [rsp+120h] [rbp+20h]
  _DWORD v63[2]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v64; // [rsp+130h] [rbp+30h]
  __int64 v65; // [rsp+138h] [rbp+38h]
  __int64 v66; // [rsp+140h] [rbp+40h]
  __int64 v67; // [rsp+148h] [rbp+48h]
  __int64 v68; // [rsp+150h] [rbp+50h]
  __int64 v69; // [rsp+158h] [rbp+58h]
  __int64 v70; // [rsp+160h] [rbp+60h]
  __int64 v71; // [rsp+168h] [rbp+68h]
  __int64 v72; // [rsp+170h] [rbp+70h]
  __int64 v73; // [rsp+178h] [rbp+78h]
  __int64 v74; // [rsp+180h] [rbp+80h]
  __int64 v75; // [rsp+188h] [rbp+88h]
  __int64 v76; // [rsp+190h] [rbp+90h]
  __int64 v77; // [rsp+198h] [rbp+98h]
  __int64 v78; // [rsp+1A0h] [rbp+A0h]
  __int64 v79; // [rsp+1A8h] [rbp+A8h]
  __int64 v80; // [rsp+1B0h] [rbp+B0h]
  __int64 v81; // [rsp+1B8h] [rbp+B8h]
  __int64 v82; // [rsp+1C0h] [rbp+C0h]
  __int64 v83; // [rsp+1C8h] [rbp+C8h]
  __int64 v84; // [rsp+1D0h] [rbp+D0h]
  __int64 v85; // [rsp+1D8h] [rbp+D8h]
  __int64 v86; // [rsp+1E0h] [rbp+E0h]
  __int64 v87; // [rsp+1E8h] [rbp+E8h]
  __int64 v88; // [rsp+1F0h] [rbp+F0h]
  int v89; // [rsp+1F8h] [rbp+F8h]
  int v90; // [rsp+1FCh] [rbp+FCh]
  __int64 v91; // [rsp+200h] [rbp+100h]
  int v92; // [rsp+208h] [rbp+108h]
  int v93; // [rsp+20Ch] [rbp+10Ch]
  __int64 v94; // [rsp+210h] [rbp+110h]
  int v95; // [rsp+218h] [rbp+118h]
  int v96; // [rsp+21Ch] [rbp+11Ch]

  v96 = 0;
  v93 = 0;
  v90 = 0;
  v94 = *a32;
  v95 = *((_DWORD *)a32 + 2);
  v87 = 8LL;
  v85 = 8LL;
  v91 = *a31;
  v92 = *((_DWORD *)a31 + 2);
  v83 = 8LL;
  v81 = 8LL;
  v88 = *a30;
  v89 = *((_DWORD *)a30 + 2);
  v86 = a29;
  v84 = a28;
  v82 = a27;
  v80 = a26;
  v78 = a25;
  v76 = a24;
  v74 = a23;
  v72 = a22;
  v70 = a21;
  v68 = a20;
  v66 = a19;
  v64 = a18;
  v60 = v63;
  v79 = 8LL;
  v77 = 8LL;
  v75 = 8LL;
  v32 = *a17;
  v73 = 8LL;
  v71 = 8LL;
  v69 = 8LL;
  v67 = 8LL;
  v65 = 8LL;
  v61 = 2LL;
  v33 = *v32;
  v62 = *((_QWORD *)v32 + 1);
  v58 = a16;
  v56 = a15;
  v54 = a14;
  v52 = a13;
  v50 = a12;
  v63[0] = v33;
  v63[1] = 0;
  v59 = 8LL;
  v57 = 4LL;
  v55 = 4LL;
  v53 = 8LL;
  v51 = 4LL;
  v48 = a11;
  v46 = a10;
  v44 = a9;
  v42 = a8;
  v40 = a7;
  v38 = a6;
  v49 = 8LL;
  v47 = 8LL;
  v45 = 8LL;
  v36 = *a5;
  v43 = 4LL;
  v41 = 8LL;
  v39 = 4LL;
  v37 = 16LL;
  return tlgWriteTransfer_EtwWriteTransfer(&dword_14011A7E8, a2, 0LL, 0LL, 31, v35);
}
