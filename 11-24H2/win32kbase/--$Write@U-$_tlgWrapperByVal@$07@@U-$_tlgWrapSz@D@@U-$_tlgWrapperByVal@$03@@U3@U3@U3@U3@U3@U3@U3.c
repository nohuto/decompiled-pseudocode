/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U4@U1@U2@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@5555555555AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@63455555555555555555@Z @ 0x1400B0318
 * Callers:
 *     ?RimDevicePointerData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1400AFDD8 (-RimDevicePointerData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400B0708 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void **a6,
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
        __int64 a17,
        unsigned __int16 **a18,
        unsigned __int16 **a19,
        __int64 a20,
        void **a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        __int64 a28,
        __int64 a29,
        __int64 a30,
        __int64 a31,
        __int64 a32,
        __int64 a33,
        __int64 a34,
        __int64 a35,
        __int64 a36,
        __int64 a37,
        __int64 a38)
{
  __int64 v40; // rdx
  _BYTE *v41; // rcx
  __int64 v42; // rax
  int v43; // eax
  unsigned __int16 *v44; // rax
  int v45; // ecx
  int v46; // ecx
  _BYTE *v47; // rcx
  int v48; // edx
  _BYTE v50[32]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v51; // [rsp+50h] [rbp-B0h]
  __int64 v52; // [rsp+58h] [rbp-A8h]
  _BYTE *v53; // [rsp+60h] [rbp-A0h]
  int v54; // [rsp+68h] [rbp-98h]
  int v55; // [rsp+6Ch] [rbp-94h]
  __int64 v56; // [rsp+70h] [rbp-90h]
  __int64 v57; // [rsp+78h] [rbp-88h]
  __int64 v58; // [rsp+80h] [rbp-80h]
  __int64 v59; // [rsp+88h] [rbp-78h]
  __int64 v60; // [rsp+90h] [rbp-70h]
  __int64 v61; // [rsp+98h] [rbp-68h]
  __int64 v62; // [rsp+A0h] [rbp-60h]
  __int64 v63; // [rsp+A8h] [rbp-58h]
  __int64 v64; // [rsp+B0h] [rbp-50h]
  __int64 v65; // [rsp+B8h] [rbp-48h]
  __int64 v66; // [rsp+C0h] [rbp-40h]
  __int64 v67; // [rsp+C8h] [rbp-38h]
  __int64 v68; // [rsp+D0h] [rbp-30h]
  __int64 v69; // [rsp+D8h] [rbp-28h]
  __int64 v70; // [rsp+E0h] [rbp-20h]
  __int64 v71; // [rsp+E8h] [rbp-18h]
  __int64 v72; // [rsp+F0h] [rbp-10h]
  __int64 v73; // [rsp+F8h] [rbp-8h]
  __int64 v74; // [rsp+100h] [rbp+0h]
  __int64 v75; // [rsp+108h] [rbp+8h]
  __int64 v76; // [rsp+110h] [rbp+10h]
  __int64 v77; // [rsp+118h] [rbp+18h]
  _DWORD *v78; // [rsp+120h] [rbp+20h]
  __int64 v79; // [rsp+128h] [rbp+28h]
  __int64 v80; // [rsp+130h] [rbp+30h]
  _DWORD v81[2]; // [rsp+138h] [rbp+38h] BYREF
  _DWORD *v82; // [rsp+140h] [rbp+40h]
  __int64 v83; // [rsp+148h] [rbp+48h]
  __int64 v84; // [rsp+150h] [rbp+50h]
  _DWORD v85[2]; // [rsp+158h] [rbp+58h] BYREF
  __int64 v86; // [rsp+160h] [rbp+60h]
  __int64 v87; // [rsp+168h] [rbp+68h]
  _BYTE *v88; // [rsp+170h] [rbp+70h]
  int v89; // [rsp+178h] [rbp+78h]
  int v90; // [rsp+17Ch] [rbp+7Ch]
  __int64 v91; // [rsp+180h] [rbp+80h]
  __int64 v92; // [rsp+188h] [rbp+88h]
  __int64 v93; // [rsp+190h] [rbp+90h]
  __int64 v94; // [rsp+198h] [rbp+98h]
  __int64 v95; // [rsp+1A0h] [rbp+A0h]
  __int64 v96; // [rsp+1A8h] [rbp+A8h]
  __int64 v97; // [rsp+1B0h] [rbp+B0h]
  __int64 v98; // [rsp+1B8h] [rbp+B8h]
  __int64 v99; // [rsp+1C0h] [rbp+C0h]
  __int64 v100; // [rsp+1C8h] [rbp+C8h]
  __int64 v101; // [rsp+1D0h] [rbp+D0h]
  __int64 v102; // [rsp+1D8h] [rbp+D8h]
  __int64 v103; // [rsp+1E0h] [rbp+E0h]
  __int64 v104; // [rsp+1E8h] [rbp+E8h]
  __int64 v105; // [rsp+1F0h] [rbp+F0h]
  __int64 v106; // [rsp+1F8h] [rbp+F8h]
  __int64 v107; // [rsp+200h] [rbp+100h]
  __int64 v108; // [rsp+208h] [rbp+108h]
  __int64 v109; // [rsp+210h] [rbp+110h]
  __int64 v110; // [rsp+218h] [rbp+118h]
  __int64 v111; // [rsp+220h] [rbp+120h]
  __int64 v112; // [rsp+228h] [rbp+128h]
  __int64 v113; // [rsp+230h] [rbp+130h]
  __int64 v114; // [rsp+238h] [rbp+138h]
  __int64 v115; // [rsp+240h] [rbp+140h]
  __int64 v116; // [rsp+248h] [rbp+148h]
  __int64 v117; // [rsp+250h] [rbp+150h]
  __int64 v118; // [rsp+258h] [rbp+158h]
  __int64 v119; // [rsp+260h] [rbp+160h]
  __int64 v120; // [rsp+268h] [rbp+168h]
  __int64 v121; // [rsp+270h] [rbp+170h]
  __int64 v122; // [rsp+278h] [rbp+178h]
  __int64 v123; // [rsp+280h] [rbp+180h]
  __int64 v124; // [rsp+288h] [rbp+188h]

  v123 = a38;
  v121 = a37;
  v40 = -1LL;
  v119 = a36;
  v117 = a35;
  v115 = a34;
  v113 = a33;
  v111 = a32;
  v109 = a31;
  v107 = a30;
  v105 = a29;
  v103 = a28;
  v101 = a27;
  v99 = a26;
  v97 = a25;
  v95 = a24;
  v93 = a23;
  v91 = a22;
  v124 = 4LL;
  v122 = 4LL;
  v120 = 4LL;
  v41 = *a21;
  v118 = 4LL;
  v116 = 4LL;
  v114 = 4LL;
  v112 = 4LL;
  v110 = 4LL;
  v108 = 4LL;
  v106 = 4LL;
  v104 = 4LL;
  v102 = 4LL;
  v100 = 4LL;
  v98 = 4LL;
  v96 = 4LL;
  v94 = 4LL;
  v92 = 4LL;
  if ( v41 )
  {
    v42 = -1LL;
    do
      ++v42;
    while ( v41[v42] );
    v43 = v42 + 1;
  }
  else
  {
    v41 = &unk_14025D828;
    v43 = 1;
  }
  v89 = v43;
  v86 = a20;
  v82 = v85;
  v88 = v41;
  v90 = 0;
  v87 = 8LL;
  v44 = *a19;
  v83 = 2LL;
  v45 = *v44;
  v84 = *((_QWORD *)v44 + 1);
  v78 = v81;
  v85[0] = v45;
  v85[1] = 0;
  v79 = 2LL;
  v46 = **a18;
  v80 = *((_QWORD *)*a18 + 1);
  v76 = a17;
  v74 = a16;
  v72 = a15;
  v70 = a14;
  v68 = a13;
  v66 = a12;
  v64 = a11;
  v62 = a10;
  v60 = a9;
  v58 = a8;
  v56 = a7;
  v81[0] = v46;
  v81[1] = 0;
  v77 = 4LL;
  v47 = *a6;
  v75 = 4LL;
  v73 = 4LL;
  v71 = 4LL;
  v69 = 4LL;
  v67 = 4LL;
  v65 = 4LL;
  v63 = 4LL;
  v61 = 4LL;
  v59 = 4LL;
  v57 = 4LL;
  if ( v47 )
  {
    do
      ++v40;
    while ( v47[v40] );
    v48 = v40 + 1;
  }
  else
  {
    v47 = &unk_14025D828;
    v48 = 1;
  }
  v51 = a5;
  v53 = v47;
  v54 = v48;
  v55 = 0;
  v52 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 38, v50);
}
