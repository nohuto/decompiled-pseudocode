/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U3@U3@U3@U3@U3@U3@U?$_tlgWrapperByVal@$00@@U3@U2@U?$_tlgWrapperByVal@$01@@U3@U3@U?$_tlgWrapperByRef@$0BA@@@U3@U5@U3@U3@U3@U3@U6@U4@U3@U3@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4555555AEBU?$_tlgWrapperByVal@$00@@54AEBU?$_tlgWrapperByVal@$01@@55AEBU?$_tlgWrapperByRef@$0BA@@@575555865553@Z @ 0x18005B1B8
 * Callers:
 *     ?CaptureState@CVADServer@@QEAAXXZ @ 0x18005ADAC (-CaptureState@CVADServer@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const WCHAR **a6,
        __int64 a7,
        const WCHAR **a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        const WCHAR **a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 *a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        __int64 *a28,
        __int64 a29,
        __int64 a30,
        __int64 a31,
        __int64 a32,
        __int64 a33)
{
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  const WCHAR *v38; // rdx
  __int64 v39; // rax
  int v40; // eax
  const WCHAR *v41; // rdx
  __int64 v42; // rax
  int v43; // eax
  const WCHAR *v44; // rdx
  int v45; // ecx
  _DWORD v47[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v48; // [rsp+40h] [rbp-C0h]
  unsigned __int16 *v49; // [rsp+50h] [rbp-B0h]
  int v50; // [rsp+58h] [rbp-A8h]
  int v51; // [rsp+5Ch] [rbp-A4h]
  unsigned __int8 *v52; // [rsp+60h] [rbp-A0h]
  int v53; // [rsp+68h] [rbp-98h]
  int v54; // [rsp+6Ch] [rbp-94h]
  __int64 v55; // [rsp+70h] [rbp-90h]
  __int64 v56; // [rsp+78h] [rbp-88h]
  const WCHAR *v57; // [rsp+80h] [rbp-80h]
  int v58; // [rsp+88h] [rbp-78h]
  int v59; // [rsp+8Ch] [rbp-74h]
  __int64 v60; // [rsp+90h] [rbp-70h]
  __int64 v61; // [rsp+98h] [rbp-68h]
  const WCHAR *v62; // [rsp+A0h] [rbp-60h]
  int v63; // [rsp+A8h] [rbp-58h]
  int v64; // [rsp+ACh] [rbp-54h]
  __int64 v65; // [rsp+B0h] [rbp-50h]
  __int64 v66; // [rsp+B8h] [rbp-48h]
  __int64 v67; // [rsp+C0h] [rbp-40h]
  __int64 v68; // [rsp+C8h] [rbp-38h]
  __int64 v69; // [rsp+D0h] [rbp-30h]
  __int64 v70; // [rsp+D8h] [rbp-28h]
  __int64 v71; // [rsp+E0h] [rbp-20h]
  __int64 v72; // [rsp+E8h] [rbp-18h]
  __int64 v73; // [rsp+F0h] [rbp-10h]
  __int64 v74; // [rsp+F8h] [rbp-8h]
  __int64 v75; // [rsp+100h] [rbp+0h]
  __int64 v76; // [rsp+108h] [rbp+8h]
  __int64 v77; // [rsp+110h] [rbp+10h]
  __int64 v78; // [rsp+118h] [rbp+18h]
  __int64 v79; // [rsp+120h] [rbp+20h]
  __int64 v80; // [rsp+128h] [rbp+28h]
  const WCHAR *v81; // [rsp+130h] [rbp+30h]
  int v82; // [rsp+138h] [rbp+38h]
  int v83; // [rsp+13Ch] [rbp+3Ch]
  __int64 v84; // [rsp+140h] [rbp+40h]
  __int64 v85; // [rsp+148h] [rbp+48h]
  __int64 v86; // [rsp+150h] [rbp+50h]
  __int64 v87; // [rsp+158h] [rbp+58h]
  __int64 v88; // [rsp+160h] [rbp+60h]
  __int64 v89; // [rsp+168h] [rbp+68h]
  __int64 v90; // [rsp+170h] [rbp+70h]
  __int64 v91; // [rsp+178h] [rbp+78h]
  __int64 v92; // [rsp+180h] [rbp+80h]
  __int64 v93; // [rsp+188h] [rbp+88h]
  __int64 v94; // [rsp+190h] [rbp+90h]
  __int64 v95; // [rsp+198h] [rbp+98h]
  __int64 v96; // [rsp+1A0h] [rbp+A0h]
  __int64 v97; // [rsp+1A8h] [rbp+A8h]
  __int64 v98; // [rsp+1B0h] [rbp+B0h]
  __int64 v99; // [rsp+1B8h] [rbp+B8h]
  __int64 v100; // [rsp+1C0h] [rbp+C0h]
  __int64 v101; // [rsp+1C8h] [rbp+C8h]
  __int64 v102; // [rsp+1D0h] [rbp+D0h]
  __int64 v103; // [rsp+1D8h] [rbp+D8h]
  __int64 v104; // [rsp+1E0h] [rbp+E0h]
  __int64 v105; // [rsp+1E8h] [rbp+E8h]
  __int64 v106; // [rsp+1F0h] [rbp+F0h]
  __int64 v107; // [rsp+1F8h] [rbp+F8h]
  __int64 v108; // [rsp+200h] [rbp+100h]
  __int64 v109; // [rsp+208h] [rbp+108h]
  __int64 v110; // [rsp+210h] [rbp+110h]
  __int64 v111; // [rsp+218h] [rbp+118h]
  __int64 v112; // [rsp+220h] [rbp+120h]
  __int64 v113; // [rsp+228h] [rbp+128h]
  __int64 v114; // [rsp+230h] [rbp+130h]
  __int64 v115; // [rsp+238h] [rbp+138h]

  v114 = a33;
  v112 = a32;
  v110 = a31;
  v108 = a30;
  v106 = a29;
  v115 = 8LL;
  v113 = 4LL;
  v111 = 4LL;
  v35 = *a28;
  v102 = a27;
  v100 = a26;
  v98 = a25;
  v96 = a24;
  v94 = a23;
  v92 = a22;
  v104 = v35;
  v109 = 4LL;
  v107 = 1LL;
  v36 = *a21;
  v88 = a20;
  v86 = a19;
  v84 = a18;
  v90 = v36;
  v37 = -1LL;
  v105 = 16LL;
  v103 = 4LL;
  v38 = *a17;
  v101 = 4LL;
  v99 = 4LL;
  v97 = 4LL;
  v95 = 2LL;
  v93 = 4LL;
  v91 = 16LL;
  v89 = 4LL;
  v87 = 4LL;
  v85 = 2LL;
  if ( v38 )
  {
    v39 = -1LL;
    do
      ++v39;
    while ( v38[v39] );
    v40 = 2 * v39 + 2;
  }
  else
  {
    v38 = &LocaleName;
    v40 = 2;
  }
  v82 = v40;
  v79 = a16;
  v77 = a15;
  v75 = a14;
  v73 = a13;
  v71 = a12;
  v69 = a11;
  v67 = a10;
  v65 = a9;
  v81 = v38;
  v83 = 0;
  v80 = 4LL;
  v41 = *a8;
  v78 = 1LL;
  v76 = 4LL;
  v74 = 4LL;
  v72 = 4LL;
  v70 = 4LL;
  v68 = 4LL;
  v66 = 4LL;
  if ( v41 )
  {
    v42 = -1LL;
    do
      ++v42;
    while ( v41[v42] );
    v43 = 2 * v42 + 2;
  }
  else
  {
    v41 = &LocaleName;
    v43 = 2;
  }
  v63 = v43;
  v60 = a7;
  v62 = v41;
  v64 = 0;
  v61 = 4LL;
  v44 = *a6;
  if ( *a6 )
  {
    do
      ++v37;
    while ( v44[v37] );
    v45 = 2 * v37 + 2;
  }
  else
  {
    v44 = &LocaleName;
    v45 = 2;
  }
  v55 = a5;
  v47[0] = *a2 << 24;
  v58 = v45;
  v47[1] = *(unsigned __int16 *)(a2 + 1);
  v57 = v44;
  v59 = 0;
  v56 = 8LL;
  v48 = *(_QWORD *)(a2 + 3);
  v49 = *(unsigned __int16 **)(a1 + 8);
  v50 = *v49;
  v53 = *(unsigned __int16 *)(a2 + 11);
  v52 = a2 + 11;
  v51 = 2;
  v54 = 1;
  return EtwEventWriteTransfer(*(_QWORD *)(a1 + 32), v47, 0LL, 0LL);
}
