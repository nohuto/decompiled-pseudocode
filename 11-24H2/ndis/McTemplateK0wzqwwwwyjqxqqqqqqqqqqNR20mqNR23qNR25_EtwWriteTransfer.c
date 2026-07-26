/*
 * XREFs of McTemplateK0wzqwwwwyjqxqqqqqqqqqqNR20mqNR23qNR25_EtwWriteTransfer @ 0x1400977C8
 * Callers:
 *     ndisEtwWriteMiniportRundown @ 0x140096F84 (ndisEtwWriteMiniportRundown.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140038B00 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0wzqwwwwyjqxqqqqqqqqqqNR20mqNR23qNR25_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        __int16 a4,
        __int64 a5,
        const wchar_t *a6,
        char a7,
        __int16 a8,
        __int64 a9,
        __int16 a10,
        __int64 a11,
        __int16 a12,
        __int64 a13,
        __int16 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        char a18,
        char a19,
        char a20,
        char a21,
        char a22,
        char a23,
        char a24,
        char a25,
        char a26,
        char a27,
        char a28,
        int a29,
        __int64 a30,
        __int64 a31,
        __int64 a32,
        int a33,
        __int64 a34,
        __int64 a35,
        int a36,
        __int64 a37,
        __int64 a38)
{
  const wchar_t *v38; // rcx
  __int64 v39; // rax
  int v40; // eax
  _EVENT_DATA_DESCRIPTOR v42; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD *v43; // [rsp+40h] [rbp-C0h]
  __int64 v44; // [rsp+48h] [rbp-B8h]
  __int64 v45; // [rsp+50h] [rbp-B0h]
  _DWORD v46[2]; // [rsp+58h] [rbp-A8h] BYREF
  const wchar_t *v47; // [rsp+60h] [rbp-A0h]
  int v48; // [rsp+68h] [rbp-98h]
  int v49; // [rsp+6Ch] [rbp-94h]
  char *v50; // [rsp+70h] [rbp-90h]
  __int64 v51; // [rsp+78h] [rbp-88h]
  _DWORD *v52; // [rsp+80h] [rbp-80h]
  __int64 v53; // [rsp+88h] [rbp-78h]
  __int64 v54; // [rsp+90h] [rbp-70h]
  _DWORD v55[2]; // [rsp+98h] [rbp-68h] BYREF
  _DWORD *v56; // [rsp+A0h] [rbp-60h]
  __int64 v57; // [rsp+A8h] [rbp-58h]
  __int64 v58; // [rsp+B0h] [rbp-50h]
  _DWORD v59[2]; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD *v60; // [rsp+C0h] [rbp-40h]
  __int64 v61; // [rsp+C8h] [rbp-38h]
  __int64 v62; // [rsp+D0h] [rbp-30h]
  _DWORD v63[2]; // [rsp+D8h] [rbp-28h] BYREF
  _DWORD *v64; // [rsp+E0h] [rbp-20h]
  __int64 v65; // [rsp+E8h] [rbp-18h]
  __int64 v66; // [rsp+F0h] [rbp-10h]
  _DWORD v67[2]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v68; // [rsp+100h] [rbp+0h]
  __int64 v69; // [rsp+108h] [rbp+8h]
  __int64 v70; // [rsp+110h] [rbp+10h]
  __int64 v71; // [rsp+118h] [rbp+18h]
  char *v72; // [rsp+120h] [rbp+20h]
  __int64 v73; // [rsp+128h] [rbp+28h]
  char *v74; // [rsp+130h] [rbp+30h]
  __int64 v75; // [rsp+138h] [rbp+38h]
  char *v76; // [rsp+140h] [rbp+40h]
  __int64 v77; // [rsp+148h] [rbp+48h]
  char *v78; // [rsp+150h] [rbp+50h]
  __int64 v79; // [rsp+158h] [rbp+58h]
  char *v80; // [rsp+160h] [rbp+60h]
  __int64 v81; // [rsp+168h] [rbp+68h]
  char *v82; // [rsp+170h] [rbp+70h]
  __int64 v83; // [rsp+178h] [rbp+78h]
  char *v84; // [rsp+180h] [rbp+80h]
  __int64 v85; // [rsp+188h] [rbp+88h]
  char *v86; // [rsp+190h] [rbp+90h]
  __int64 v87; // [rsp+198h] [rbp+98h]
  char *v88; // [rsp+1A0h] [rbp+A0h]
  __int64 v89; // [rsp+1A8h] [rbp+A8h]
  char *v90; // [rsp+1B0h] [rbp+B0h]
  __int64 v91; // [rsp+1B8h] [rbp+B8h]
  char *v92; // [rsp+1C0h] [rbp+C0h]
  __int64 v93; // [rsp+1C8h] [rbp+C8h]
  int *v94; // [rsp+1D0h] [rbp+D0h]
  __int64 v95; // [rsp+1D8h] [rbp+D8h]
  __int64 v96; // [rsp+1E0h] [rbp+E0h]
  int v97; // [rsp+1E8h] [rbp+E8h]
  int v98; // [rsp+1ECh] [rbp+ECh]
  __int64 v99; // [rsp+1F0h] [rbp+F0h]
  __int64 v100; // [rsp+1F8h] [rbp+F8h]
  int *v101; // [rsp+200h] [rbp+100h]
  __int64 v102; // [rsp+208h] [rbp+108h]
  __int64 v103; // [rsp+210h] [rbp+110h]
  int v104; // [rsp+218h] [rbp+118h]
  int v105; // [rsp+21Ch] [rbp+11Ch]
  int *v106; // [rsp+220h] [rbp+120h]
  __int64 v107; // [rsp+228h] [rbp+128h]
  __int64 v108; // [rsp+230h] [rbp+130h]
  int v109; // [rsp+238h] [rbp+138h]
  int v110; // [rsp+23Ch] [rbp+13Ch]

  v38 = a6;
  v43 = v46;
  v45 = a5;
  v46[0] = (unsigned __int16)(2 * a4);
  v44 = 2LL;
  v46[1] = 0;
  if ( a6 )
  {
    v39 = -1LL;
    do
      ++v39;
    while ( a6[v39] );
    v40 = 2 * v39 + 2;
  }
  else
  {
    v40 = 10;
  }
  v48 = v40;
  v49 = 0;
  v50 = &a7;
  v51 = 4LL;
  v52 = v55;
  if ( !a6 )
    v38 = L"NULL";
  v54 = a9;
  v47 = v38;
  v55[0] = (unsigned __int16)(2 * a8);
  v56 = v59;
  v58 = a11;
  v53 = 2LL;
  v59[0] = (unsigned __int16)(2 * a10);
  v60 = v63;
  v62 = a13;
  v55[1] = 0;
  v63[0] = (unsigned __int16)(2 * a12);
  v64 = v67;
  v66 = a15;
  v57 = 2LL;
  v67[0] = (unsigned __int16)(2 * a14);
  v68 = a16;
  v70 = a17;
  v72 = &a18;
  v74 = &a19;
  v76 = &a20;
  v78 = &a21;
  v80 = &a22;
  v82 = &a23;
  v84 = &a24;
  v86 = &a25;
  v88 = &a26;
  v59[1] = 0;
  v61 = 2LL;
  v63[1] = 0;
  v65 = 2LL;
  v67[1] = 0;
  v69 = 16LL;
  v71 = 16LL;
  v73 = 4LL;
  v75 = 8LL;
  v77 = 4LL;
  v79 = 4LL;
  v81 = 4LL;
  v83 = 4LL;
  v85 = 4LL;
  v87 = 4LL;
  v89 = 4LL;
  v90 = &a27;
  v91 = 4LL;
  v92 = &a28;
  v93 = 4LL;
  v94 = &a29;
  v96 = a31;
  v97 = 4 * a29;
  v99 = a32;
  v101 = &a33;
  v103 = a35;
  v95 = 4LL;
  v98 = 0;
  v100 = 8LL;
  v102 = 4LL;
  v104 = 44 * a33;
  v106 = &a36;
  v108 = a38;
  v105 = 0;
  v107 = 4LL;
  v110 = 0;
  v109 = 44 * a36;
  return McGenEventWrite_EtwWriteTransfer(NDIS_PROVIDER_ID_Context, &MiniportRundown, a3, 0x21u, &v42);
}
