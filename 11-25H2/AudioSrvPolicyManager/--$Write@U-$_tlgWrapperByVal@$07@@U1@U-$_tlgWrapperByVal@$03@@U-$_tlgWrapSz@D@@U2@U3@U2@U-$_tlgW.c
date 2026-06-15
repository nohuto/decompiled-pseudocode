/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456@Z @ 0x180001008
 * Callers:
 *     ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x18002BB58 (-ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180020100 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
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
  __int64 v21; // rcx
  _WORD *v23; // r8
  __int64 v24; // rax
  int v25; // eax
  const unsigned __int16 *v26; // rdx
  __int64 v27; // rax
  int v28; // eax
  _WORD *v29; // rdx
  __int64 v30; // rax
  int v31; // eax
  const unsigned __int16 *v32; // rdx
  __int64 v33; // rax
  int v34; // eax
  const unsigned __int16 *v35; // rdx
  __int64 v36; // rax
  int v37; // eax
  _WORD *v38; // rdx
  __int64 v39; // rax
  int v40; // eax
  const unsigned __int16 *v41; // rdx
  __int64 v42; // rax
  int v43; // eax
  const unsigned __int16 *v44; // rdx
  int v45; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 *v49; // [rsp+60h] [rbp-A0h]
  int v50; // [rsp+68h] [rbp-98h]
  int v51; // [rsp+6Ch] [rbp-94h]
  __int64 v52; // [rsp+70h] [rbp-90h]
  __int64 v53; // [rsp+78h] [rbp-88h]
  __int64 v54; // [rsp+80h] [rbp-80h]
  __int64 v55; // [rsp+88h] [rbp-78h]
  __int64 v56; // [rsp+90h] [rbp-70h]
  __int64 v57; // [rsp+98h] [rbp-68h]
  const unsigned __int16 *v58; // [rsp+A0h] [rbp-60h]
  int v59; // [rsp+A8h] [rbp-58h]
  int v60; // [rsp+ACh] [rbp-54h]
  __int64 v61; // [rsp+B0h] [rbp-50h]
  __int64 v62; // [rsp+B8h] [rbp-48h]
  const unsigned __int16 *v63; // [rsp+C0h] [rbp-40h]
  int v64; // [rsp+C8h] [rbp-38h]
  int v65; // [rsp+CCh] [rbp-34h]
  __int64 v66; // [rsp+D0h] [rbp-30h]
  __int64 v67; // [rsp+D8h] [rbp-28h]
  _WORD *v68; // [rsp+E0h] [rbp-20h]
  int v69; // [rsp+E8h] [rbp-18h]
  int v70; // [rsp+ECh] [rbp-14h]
  __int64 v71; // [rsp+F0h] [rbp-10h]
  __int64 v72; // [rsp+F8h] [rbp-8h]
  const unsigned __int16 *v73; // [rsp+100h] [rbp+0h]
  int v74; // [rsp+108h] [rbp+8h]
  int v75; // [rsp+10Ch] [rbp+Ch]
  __int64 v76; // [rsp+110h] [rbp+10h]
  __int64 v77; // [rsp+118h] [rbp+18h]
  const unsigned __int16 *v78; // [rsp+120h] [rbp+20h]
  int v79; // [rsp+128h] [rbp+28h]
  int v80; // [rsp+12Ch] [rbp+2Ch]
  _WORD *v81; // [rsp+130h] [rbp+30h]
  int v82; // [rsp+138h] [rbp+38h]
  int v83; // [rsp+13Ch] [rbp+3Ch]
  __int64 v84; // [rsp+140h] [rbp+40h]
  __int64 v85; // [rsp+148h] [rbp+48h]
  const unsigned __int16 *v86; // [rsp+150h] [rbp+50h]
  int v87; // [rsp+158h] [rbp+58h]
  int v88; // [rsp+15Ch] [rbp+5Ch]
  _WORD *v89; // [rsp+160h] [rbp+60h]
  int v90; // [rsp+168h] [rbp+68h]
  int v91; // [rsp+16Ch] [rbp+6Ch]

  v21 = -1LL;
  v23 = *a20;
  if ( *a20 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( v23[v24] );
    v25 = 2 * v24 + 2;
  }
  else
  {
    v23 = &unk_180056790;
    v25 = 2;
  }
  v90 = v25;
  v89 = v23;
  v91 = 0;
  v26 = *a19;
  if ( *a19 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( *((_BYTE *)v26 + v27) );
    v28 = v27 + 1;
  }
  else
  {
    v26 = &word_1800568F8;
    v28 = 1;
  }
  v87 = v28;
  v84 = a18;
  v86 = v26;
  v88 = 0;
  v85 = 4LL;
  v29 = *a17;
  if ( *a17 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( v29[v30] );
    v31 = 2 * v30 + 2;
  }
  else
  {
    v29 = &unk_180056790;
    v31 = 2;
  }
  v82 = v31;
  v81 = v29;
  v83 = 0;
  v32 = *a16;
  if ( *a16 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( *((_BYTE *)v32 + v33) );
    v34 = v33 + 1;
  }
  else
  {
    v32 = &word_1800568F8;
    v34 = 1;
  }
  v79 = v34;
  v76 = a15;
  v78 = v32;
  v80 = 0;
  v77 = 4LL;
  v35 = *a14;
  if ( *a14 )
  {
    v36 = -1LL;
    do
      ++v36;
    while ( *((_BYTE *)v35 + v36) );
    v37 = v36 + 1;
  }
  else
  {
    v35 = &word_1800568F8;
    v37 = 1;
  }
  v74 = v37;
  v71 = a13;
  v73 = v35;
  v75 = 0;
  v72 = 4LL;
  v38 = *a12;
  if ( *a12 )
  {
    v39 = -1LL;
    do
      ++v39;
    while ( v38[v39] );
    v40 = 2 * v39 + 2;
  }
  else
  {
    v38 = &unk_180056790;
    v40 = 2;
  }
  v69 = v40;
  v66 = a11;
  v68 = v38;
  v70 = 0;
  v67 = 4LL;
  v41 = *a10;
  if ( *a10 )
  {
    v42 = -1LL;
    do
      ++v42;
    while ( *((_BYTE *)v41 + v42) );
    v43 = v42 + 1;
  }
  else
  {
    v41 = &word_1800568F8;
    v43 = 1;
  }
  v64 = v43;
  v61 = a9;
  v63 = v41;
  v65 = 0;
  v62 = 4LL;
  v44 = *a8;
  if ( *a8 )
  {
    do
      ++v21;
    while ( *((_BYTE *)v44 + v21) );
    v45 = v21 + 1;
  }
  else
  {
    v44 = &word_1800568F8;
    v45 = 1;
  }
  v56 = a7;
  v54 = a6;
  v52 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  v59 = v45;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = *(_QWORD *)(a1 + 8);
  v58 = v44;
  v60 = 0;
  v57 = 4LL;
  v55 = 8LL;
  v53 = 8LL;
  UserData.Size = *(unsigned __int16 *)UserData.Ptr;
  v50 = *(unsigned __int16 *)(a2 + 11);
  v49 = a2 + 11;
  UserData.Reserved = 2;
  v51 = 1;
  return EventWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, 0LL, 0LL, 0x12u, &UserData);
}
