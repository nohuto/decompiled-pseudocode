/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456@Z @ 0x140049CB8
 * Callers:
 *     ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x14004D0C4 (-ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x140016394 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        const unsigned __int16 **a8,
        __int64 a9,
        const unsigned __int16 **a10,
        __int64 a11,
        void **a12,
        __int64 a13,
        const unsigned __int16 **a14,
        __int64 a15,
        const unsigned __int16 **a16,
        void **a17,
        __int64 a18,
        const unsigned __int16 **a19,
        void **a20)
{
  __int64 v22; // rcx
  int v23; // r9d
  _WORD *v24; // rdx
  __int64 v25; // rax
  int v26; // eax
  const unsigned __int16 *v27; // r8
  __int64 v28; // rax
  int v29; // eax
  _WORD *v30; // r8
  __int64 v31; // rax
  int v32; // eax
  const unsigned __int16 *v33; // r8
  __int64 v34; // rax
  int v35; // eax
  const unsigned __int16 *v36; // r8
  __int64 v37; // rax
  int v38; // eax
  _WORD *v39; // r8
  __int64 v40; // rax
  const unsigned __int16 *v41; // r8
  __int64 v42; // rax
  int v43; // eax
  const unsigned __int16 *v44; // r8
  int v45; // ecx
  _BYTE v47[32]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v48; // [rsp+50h] [rbp-B0h]
  __int64 v49; // [rsp+58h] [rbp-A8h]
  __int64 v50; // [rsp+60h] [rbp-A0h]
  __int64 v51; // [rsp+68h] [rbp-98h]
  __int64 v52; // [rsp+70h] [rbp-90h]
  __int64 v53; // [rsp+78h] [rbp-88h]
  const unsigned __int16 *v54; // [rsp+80h] [rbp-80h]
  int v55; // [rsp+88h] [rbp-78h]
  int v56; // [rsp+8Ch] [rbp-74h]
  __int64 v57; // [rsp+90h] [rbp-70h]
  __int64 v58; // [rsp+98h] [rbp-68h]
  const unsigned __int16 *v59; // [rsp+A0h] [rbp-60h]
  int v60; // [rsp+A8h] [rbp-58h]
  int v61; // [rsp+ACh] [rbp-54h]
  __int64 v62; // [rsp+B0h] [rbp-50h]
  __int64 v63; // [rsp+B8h] [rbp-48h]
  _WORD *v64; // [rsp+C0h] [rbp-40h]
  int v65; // [rsp+C8h] [rbp-38h]
  int v66; // [rsp+CCh] [rbp-34h]
  __int64 v67; // [rsp+D0h] [rbp-30h]
  __int64 v68; // [rsp+D8h] [rbp-28h]
  const unsigned __int16 *v69; // [rsp+E0h] [rbp-20h]
  int v70; // [rsp+E8h] [rbp-18h]
  int v71; // [rsp+ECh] [rbp-14h]
  __int64 v72; // [rsp+F0h] [rbp-10h]
  __int64 v73; // [rsp+F8h] [rbp-8h]
  const unsigned __int16 *v74; // [rsp+100h] [rbp+0h]
  int v75; // [rsp+108h] [rbp+8h]
  int v76; // [rsp+10Ch] [rbp+Ch]
  _WORD *v77; // [rsp+110h] [rbp+10h]
  int v78; // [rsp+118h] [rbp+18h]
  int v79; // [rsp+11Ch] [rbp+1Ch]
  __int64 v80; // [rsp+120h] [rbp+20h]
  __int64 v81; // [rsp+128h] [rbp+28h]
  const unsigned __int16 *v82; // [rsp+130h] [rbp+30h]
  int v83; // [rsp+138h] [rbp+38h]
  int v84; // [rsp+13Ch] [rbp+3Ch]
  _WORD *v85; // [rsp+140h] [rbp+40h]
  int v86; // [rsp+148h] [rbp+48h]
  int v87; // [rsp+14Ch] [rbp+4Ch]

  v22 = -1LL;
  v23 = 2;
  v24 = *a20;
  if ( *a20 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( v24[v25] );
    v26 = 2 * v25 + 2;
  }
  else
  {
    v24 = &unk_1400A8518;
    v26 = 2;
  }
  v86 = v26;
  v85 = v24;
  v87 = 0;
  v27 = *a19;
  if ( *a19 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( *((_BYTE *)v27 + v28) );
    v29 = v28 + 1;
  }
  else
  {
    v27 = &word_1400A8088;
    v29 = 1;
  }
  v83 = v29;
  v80 = a18;
  v82 = v27;
  v84 = 0;
  v81 = 4LL;
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
    v30 = &unk_1400A8518;
    v32 = 2;
  }
  v78 = v32;
  v77 = v30;
  v79 = 0;
  v33 = *a16;
  if ( *a16 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( *((_BYTE *)v33 + v34) );
    v35 = v34 + 1;
  }
  else
  {
    v33 = &word_1400A8088;
    v35 = 1;
  }
  v75 = v35;
  v72 = a15;
  v74 = v33;
  v76 = 0;
  v73 = 4LL;
  v36 = *a14;
  if ( *a14 )
  {
    v37 = -1LL;
    do
      ++v37;
    while ( *((_BYTE *)v36 + v37) );
    v38 = v37 + 1;
  }
  else
  {
    v36 = &word_1400A8088;
    v38 = 1;
  }
  v70 = v38;
  v67 = a13;
  v69 = v36;
  v71 = 0;
  v68 = 4LL;
  v39 = *a12;
  if ( *a12 )
  {
    v40 = -1LL;
    do
      ++v40;
    while ( v39[v40] );
    v23 = 2 * v40 + 2;
  }
  else
  {
    v39 = &unk_1400A8518;
  }
  v62 = a11;
  v64 = v39;
  v65 = v23;
  v66 = 0;
  v41 = *a10;
  v63 = 4LL;
  if ( v41 )
  {
    v42 = -1LL;
    do
      ++v42;
    while ( *((_BYTE *)v41 + v42) );
    v43 = v42 + 1;
  }
  else
  {
    v41 = &word_1400A8088;
    v43 = 1;
  }
  v60 = v43;
  v57 = a9;
  v59 = v41;
  v61 = 0;
  v58 = 4LL;
  v44 = *a8;
  if ( *a8 )
  {
    do
      ++v22;
    while ( *((_BYTE *)v44 + v22) );
    v45 = v22 + 1;
  }
  else
  {
    v44 = &word_1400A8088;
    v45 = 1;
  }
  v52 = a7;
  v50 = a6;
  v48 = a5;
  v54 = v44;
  v55 = v45;
  v56 = 0;
  v53 = 4LL;
  v51 = 8LL;
  v49 = 8LL;
  return tlgWriteTransfer_EtwEventWriteTransfer(a1, a2, 0LL, 0LL, 18, (__int64)v47);
}
