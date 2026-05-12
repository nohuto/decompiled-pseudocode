/*
 * XREFs of McTemplateK0qjzszhhsshqqxxxxhhuuxhqbr22_EtwWriteTransfer @ 0x1400C257C
 * Callers:
 *     StorLogMFNDCCQoSStatisticsInfo @ 0x1400C4798 (StorLogMFNDCCQoSStatisticsInfo.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140024158 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzszhhsshqqxxxxhhuuxhqbr22_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        const wchar_t *a8,
        char a9,
        char a10,
        const char *a11,
        const char *a12,
        char a13,
        char a14,
        char a15,
        char a16,
        char a17,
        char a18,
        char a19,
        char a20,
        char a21,
        char a22,
        char a23,
        char a24,
        char a25,
        int a26,
        __int64 a27)
{
  const wchar_t *v27; // rcx
  const char *v28; // rbx
  const char *v29; // r8
  const wchar_t *v30; // r10
  const char *v31; // rdx
  int v32; // r11d
  __int64 v33; // rax
  __int64 v34; // r9
  unsigned int v35; // r9d
  __int64 v36; // rcx
  int v37; // ecx
  bool v38; // zf
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  int v42; // eax
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+38h] [rbp-D0h] BYREF
  int *v45; // [rsp+48h] [rbp-C0h]
  __int64 v46; // [rsp+50h] [rbp-B8h]
  __int64 v47; // [rsp+58h] [rbp-B0h]
  __int64 v48; // [rsp+60h] [rbp-A8h]
  const wchar_t *v49; // [rsp+68h] [rbp-A0h]
  __int64 v50; // [rsp+70h] [rbp-98h]
  const char *v51; // [rsp+78h] [rbp-90h]
  int v52; // [rsp+80h] [rbp-88h]
  int v53; // [rsp+84h] [rbp-84h]
  const wchar_t *v54; // [rsp+88h] [rbp-80h]
  int v55; // [rsp+90h] [rbp-78h]
  int v56; // [rsp+94h] [rbp-74h]
  char *v57; // [rsp+98h] [rbp-70h]
  __int64 v58; // [rsp+A0h] [rbp-68h]
  char *v59; // [rsp+A8h] [rbp-60h]
  __int64 v60; // [rsp+B0h] [rbp-58h]
  const char *v61; // [rsp+B8h] [rbp-50h]
  int v62; // [rsp+C0h] [rbp-48h]
  int v63; // [rsp+C4h] [rbp-44h]
  const char *v64; // [rsp+C8h] [rbp-40h]
  int v65; // [rsp+D0h] [rbp-38h]
  int v66; // [rsp+D4h] [rbp-34h]
  char *v67; // [rsp+D8h] [rbp-30h]
  __int64 v68; // [rsp+E0h] [rbp-28h]
  char *v69; // [rsp+E8h] [rbp-20h]
  __int64 v70; // [rsp+F0h] [rbp-18h]
  char *v71; // [rsp+F8h] [rbp-10h]
  __int64 v72; // [rsp+100h] [rbp-8h]
  char *v73; // [rsp+108h] [rbp+0h]
  __int64 v74; // [rsp+110h] [rbp+8h]
  char *v75; // [rsp+118h] [rbp+10h]
  __int64 v76; // [rsp+120h] [rbp+18h]
  char *v77; // [rsp+128h] [rbp+20h]
  __int64 v78; // [rsp+130h] [rbp+28h]
  char *v79; // [rsp+138h] [rbp+30h]
  __int64 v80; // [rsp+140h] [rbp+38h]
  char *v81; // [rsp+148h] [rbp+40h]
  __int64 v82; // [rsp+150h] [rbp+48h]
  char *v83; // [rsp+158h] [rbp+50h]
  __int64 v84; // [rsp+160h] [rbp+58h]
  char *v85; // [rsp+168h] [rbp+60h]
  __int64 v86; // [rsp+170h] [rbp+68h]
  char *v87; // [rsp+178h] [rbp+70h]
  __int64 v88; // [rsp+180h] [rbp+78h]
  char *v89; // [rsp+188h] [rbp+80h]
  __int64 v90; // [rsp+190h] [rbp+88h]
  char *v91; // [rsp+198h] [rbp+90h]
  __int64 v92; // [rsp+1A0h] [rbp+98h]
  int *v93; // [rsp+1A8h] [rbp+A0h]
  __int64 v94; // [rsp+1B0h] [rbp+A8h]
  __int64 v95; // [rsp+1B8h] [rbp+B0h]
  int v96; // [rsp+1C0h] [rbp+B8h]
  int v97; // [rsp+1C4h] [rbp+BCh]
  int v98; // [rsp+210h] [rbp+108h] BYREF

  v98 = a4;
  v27 = a6;
  v28 = a12;
  v29 = a11;
  v30 = a8;
  v31 = a7;
  v45 = &v98;
  v32 = 10;
  v47 = a5;
  v33 = -1LL;
  v46 = 4LL;
  v48 = 16LL;
  if ( a6 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( a6[v34] );
    v35 = 2 * v34 + 2;
  }
  else
  {
    v35 = 10;
  }
  v50 = v35;
  if ( !a6 )
    v27 = L"NULL";
  v49 = v27;
  if ( a7 )
  {
    v36 = -1LL;
    do
      ++v36;
    while ( a7[v36] );
    v37 = v36 + 1;
  }
  else
  {
    v37 = 5;
  }
  v52 = v37;
  v53 = 0;
  if ( !a7 )
    v31 = "NULL";
  v51 = v31;
  v38 = a8 == 0LL;
  if ( a8 )
  {
    v39 = -1LL;
    do
      ++v39;
    while ( a8[v39] );
    v32 = 2 * v39 + 2;
    v38 = a8 == 0LL;
  }
  v55 = v32;
  if ( v38 )
    v30 = L"NULL";
  v57 = &a9;
  v54 = v30;
  v59 = &a10;
  v56 = 0;
  v58 = 2LL;
  v60 = 2LL;
  if ( a11 )
  {
    v40 = -1LL;
    do
      ++v40;
    while ( a11[v40] );
    v41 = (unsigned int)(v40 + 1);
  }
  else
  {
    v41 = 5LL;
  }
  v62 = v41;
  v63 = 0;
  if ( !a11 )
    v29 = "NULL";
  v61 = v29;
  if ( a12 )
  {
    do
      ++v33;
    while ( a12[v33] );
    v42 = v33 + 1;
  }
  else
  {
    v42 = 5;
  }
  v65 = v42;
  v66 = 0;
  v67 = &a13;
  v68 = 2LL;
  v69 = &a14;
  if ( !a12 )
    v28 = "NULL";
  v64 = v28;
  v71 = &a15;
  v70 = 4LL;
  v73 = &a16;
  v72 = 4LL;
  v75 = &a17;
  v77 = &a18;
  v79 = &a19;
  v81 = &a20;
  v83 = &a21;
  v85 = &a22;
  v87 = &a23;
  v89 = &a24;
  v91 = &a25;
  v93 = &a26;
  v95 = a27;
  v96 = a26;
  v74 = 8LL;
  v76 = 8LL;
  v78 = 8LL;
  v80 = 8LL;
  v82 = 2LL;
  v84 = 2LL;
  v86 = 1LL;
  v88 = 1LL;
  v90 = 8LL;
  v92 = 2LL;
  v94 = 4LL;
  v97 = 0;
  return McGenEventWrite_EtwWriteTransfer(v41, &EventMFNDCCQoSStatisticsInfo, 0LL, 0x19u, &v44);
}
