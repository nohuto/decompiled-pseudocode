/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U2@U?$_tlgWrapSz@G@@U4@U4@U4@U4@U4@U4@U4@U4@U2@U2@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@44AEBU?$_tlgWrapSz@G@@6666666644344@Z @ 0x140128BA4
 * Callers:
 *     ?HitTestRequest@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestRequest@@@Z @ 0x1400F5238 (-HitTestRequest@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestRequest@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400B0708 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void **a7,
        __int64 a8,
        __int64 a9,
        const WCHAR **a10,
        const WCHAR **a11,
        const WCHAR **a12,
        const WCHAR **a13,
        const WCHAR **a14,
        const WCHAR **a15,
        const WCHAR **a16,
        const WCHAR **a17,
        const WCHAR **a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23)
{
  __int64 v24; // rcx
  int v26; // edx
  const WCHAR *v27; // r8
  __int64 v28; // rax
  int v29; // eax
  const WCHAR *v30; // r8
  __int64 v31; // rax
  int v32; // eax
  const WCHAR *v33; // r8
  __int64 v34; // rax
  int v35; // eax
  const WCHAR *v36; // r8
  __int64 v37; // rax
  int v38; // eax
  const WCHAR *v39; // r8
  __int64 v40; // rax
  int v41; // eax
  const WCHAR *v42; // r8
  __int64 v43; // rax
  int v44; // eax
  const WCHAR *v45; // r8
  __int64 v46; // rax
  int v47; // eax
  const WCHAR *v48; // r8
  __int64 v49; // rax
  int v50; // eax
  const WCHAR *v51; // r8
  __int64 v52; // rdx
  _BYTE *v53; // rdx
  int v54; // ecx
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v57; // [rsp+50h] [rbp-B0h]
  __int64 v58; // [rsp+58h] [rbp-A8h]
  __int64 v59; // [rsp+60h] [rbp-A0h]
  __int64 v60; // [rsp+68h] [rbp-98h]
  _BYTE *v61; // [rsp+70h] [rbp-90h]
  int v62; // [rsp+78h] [rbp-88h]
  int v63; // [rsp+7Ch] [rbp-84h]
  __int64 v64; // [rsp+80h] [rbp-80h]
  __int64 v65; // [rsp+88h] [rbp-78h]
  __int64 v66; // [rsp+90h] [rbp-70h]
  __int64 v67; // [rsp+98h] [rbp-68h]
  const WCHAR *v68; // [rsp+A0h] [rbp-60h]
  int v69; // [rsp+A8h] [rbp-58h]
  int v70; // [rsp+ACh] [rbp-54h]
  const WCHAR *v71; // [rsp+B0h] [rbp-50h]
  int v72; // [rsp+B8h] [rbp-48h]
  int v73; // [rsp+BCh] [rbp-44h]
  const WCHAR *v74; // [rsp+C0h] [rbp-40h]
  int v75; // [rsp+C8h] [rbp-38h]
  int v76; // [rsp+CCh] [rbp-34h]
  const WCHAR *v77; // [rsp+D0h] [rbp-30h]
  int v78; // [rsp+D8h] [rbp-28h]
  int v79; // [rsp+DCh] [rbp-24h]
  const WCHAR *v80; // [rsp+E0h] [rbp-20h]
  int v81; // [rsp+E8h] [rbp-18h]
  int v82; // [rsp+ECh] [rbp-14h]
  const WCHAR *v83; // [rsp+F0h] [rbp-10h]
  int v84; // [rsp+F8h] [rbp-8h]
  int v85; // [rsp+FCh] [rbp-4h]
  const WCHAR *v86; // [rsp+100h] [rbp+0h]
  int v87; // [rsp+108h] [rbp+8h]
  int v88; // [rsp+10Ch] [rbp+Ch]
  const WCHAR *v89; // [rsp+110h] [rbp+10h]
  int v90; // [rsp+118h] [rbp+18h]
  int v91; // [rsp+11Ch] [rbp+1Ch]
  const WCHAR *v92; // [rsp+120h] [rbp+20h]
  int v93; // [rsp+128h] [rbp+28h]
  int v94; // [rsp+12Ch] [rbp+2Ch]
  __int64 v95; // [rsp+130h] [rbp+30h]
  __int64 v96; // [rsp+138h] [rbp+38h]
  __int64 v97; // [rsp+140h] [rbp+40h]
  __int64 v98; // [rsp+148h] [rbp+48h]
  __int64 v99; // [rsp+150h] [rbp+50h]
  __int64 v100; // [rsp+158h] [rbp+58h]
  __int64 v101; // [rsp+160h] [rbp+60h]
  __int64 v102; // [rsp+168h] [rbp+68h]
  __int64 v103; // [rsp+170h] [rbp+70h]
  __int64 v104; // [rsp+178h] [rbp+78h]

  v103 = a23;
  v101 = a22;
  v24 = -1LL;
  v99 = a21;
  v26 = 2;
  v97 = a20;
  v95 = a19;
  v104 = 4LL;
  v102 = 4LL;
  v100 = 8LL;
  v27 = *a18;
  v98 = 4LL;
  v96 = 4LL;
  if ( v27 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( v27[v28] );
    v29 = 2 * v28 + 2;
  }
  else
  {
    v27 = &word_14025E168;
    v29 = 2;
  }
  v93 = v29;
  v92 = v27;
  v94 = 0;
  v30 = *a17;
  if ( *a17 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( v30[v31] );
    v32 = 2 * v31 + 2;
  }
  else
  {
    v30 = &word_14025E168;
    v32 = 2;
  }
  v90 = v32;
  v89 = v30;
  v91 = 0;
  v33 = *a16;
  if ( *a16 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( v33[v34] );
    v35 = 2 * v34 + 2;
  }
  else
  {
    v33 = &word_14025E168;
    v35 = 2;
  }
  v87 = v35;
  v86 = v33;
  v88 = 0;
  v36 = *a15;
  if ( *a15 )
  {
    v37 = -1LL;
    do
      ++v37;
    while ( v36[v37] );
    v38 = 2 * v37 + 2;
  }
  else
  {
    v36 = &word_14025E168;
    v38 = 2;
  }
  v84 = v38;
  v83 = v36;
  v85 = 0;
  v39 = *a14;
  if ( *a14 )
  {
    v40 = -1LL;
    do
      ++v40;
    while ( v39[v40] );
    v41 = 2 * v40 + 2;
  }
  else
  {
    v39 = &word_14025E168;
    v41 = 2;
  }
  v81 = v41;
  v80 = v39;
  v82 = 0;
  v42 = *a13;
  if ( *a13 )
  {
    v43 = -1LL;
    do
      ++v43;
    while ( v42[v43] );
    v44 = 2 * v43 + 2;
  }
  else
  {
    v42 = &word_14025E168;
    v44 = 2;
  }
  v78 = v44;
  v77 = v42;
  v79 = 0;
  v45 = *a12;
  if ( *a12 )
  {
    v46 = -1LL;
    do
      ++v46;
    while ( v45[v46] );
    v47 = 2 * v46 + 2;
  }
  else
  {
    v45 = &word_14025E168;
    v47 = 2;
  }
  v75 = v47;
  v74 = v45;
  v76 = 0;
  v48 = *a11;
  if ( *a11 )
  {
    v49 = -1LL;
    do
      ++v49;
    while ( v48[v49] );
    v50 = 2 * v49 + 2;
  }
  else
  {
    v48 = &word_14025E168;
    v50 = 2;
  }
  v72 = v50;
  v71 = v48;
  v73 = 0;
  v51 = *a10;
  if ( *a10 )
  {
    v52 = -1LL;
    do
      ++v52;
    while ( v51[v52] );
    v26 = 2 * v52 + 2;
  }
  else
  {
    v51 = &word_14025E168;
  }
  v66 = a9;
  v64 = a8;
  v69 = v26;
  v68 = v51;
  v70 = 0;
  v53 = *a7;
  v67 = 4LL;
  v65 = 4LL;
  if ( v53 )
  {
    do
      ++v24;
    while ( v53[v24] );
    v54 = v24 + 1;
  }
  else
  {
    v53 = &unk_14025D828;
    v54 = 1;
  }
  v59 = a6;
  v57 = a5;
  v61 = v53;
  v62 = v54;
  v63 = 0;
  v60 = 4LL;
  v58 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 0x15u, &v56);
}
