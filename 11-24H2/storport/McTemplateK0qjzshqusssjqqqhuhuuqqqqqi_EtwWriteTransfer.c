/*
 * XREFs of McTemplateK0qjzshqusssjqqqhuhuuqqqqqi_EtwWriteTransfer @ 0x1400AAF20
 * Callers:
 *     StorpTelemetryNvmeSendNamespaceUniqueErrorData @ 0x1400B8BCC (StorpTelemetryNvmeSendNamespaceUniqueErrorData.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140024158 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzshqusssjqqqhuhuuqqqqqi_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        char a8,
        char a9,
        char a10,
        const char *a11,
        const char *a12,
        const char *a13,
        __int64 a14,
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
        char a26,
        char a27,
        char a28)
{
  const wchar_t *v28; // rcx
  const char *v29; // r11
  const char *v30; // r8
  const char *v31; // r9
  const char *v32; // r10
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned int v35; // edx
  __int64 v36; // rcx
  int v37; // ecx
  __int64 v38; // rcx
  int v39; // ecx
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
  char *v54; // [rsp+88h] [rbp-80h]
  __int64 v55; // [rsp+90h] [rbp-78h]
  char *v56; // [rsp+98h] [rbp-70h]
  __int64 v57; // [rsp+A0h] [rbp-68h]
  char *v58; // [rsp+A8h] [rbp-60h]
  __int64 v59; // [rsp+B0h] [rbp-58h]
  const char *v60; // [rsp+B8h] [rbp-50h]
  int v61; // [rsp+C0h] [rbp-48h]
  int v62; // [rsp+C4h] [rbp-44h]
  const char *v63; // [rsp+C8h] [rbp-40h]
  int v64; // [rsp+D0h] [rbp-38h]
  int v65; // [rsp+D4h] [rbp-34h]
  const char *v66; // [rsp+D8h] [rbp-30h]
  int v67; // [rsp+E0h] [rbp-28h]
  int v68; // [rsp+E4h] [rbp-24h]
  __int64 v69; // [rsp+E8h] [rbp-20h]
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
  char *v93; // [rsp+1A8h] [rbp+A0h]
  __int64 v94; // [rsp+1B0h] [rbp+A8h]
  char *v95; // [rsp+1B8h] [rbp+B0h]
  __int64 v96; // [rsp+1C0h] [rbp+B8h]
  char *v97; // [rsp+1C8h] [rbp+C0h]
  __int64 v98; // [rsp+1D0h] [rbp+C8h]
  int v99; // [rsp+220h] [rbp+118h] BYREF

  v99 = a4;
  v28 = a6;
  v29 = a13;
  v30 = a12;
  v31 = a11;
  v32 = a7;
  v45 = &v99;
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
    v28 = L"NULL";
  v49 = v28;
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
  v54 = &a8;
  v55 = 2LL;
  if ( !a7 )
    v32 = "NULL";
  v56 = &a9;
  v51 = v32;
  v58 = &a10;
  v57 = 4LL;
  v59 = 1LL;
  if ( a11 )
  {
    v38 = -1LL;
    do
      ++v38;
    while ( a11[v38] );
    v39 = v38 + 1;
  }
  else
  {
    v39 = 5;
  }
  v61 = v39;
  v62 = 0;
  if ( !a11 )
    v31 = "NULL";
  v60 = v31;
  if ( a12 )
  {
    v40 = -1LL;
    do
      ++v40;
    while ( a12[v40] );
    v41 = (unsigned int)(v40 + 1);
  }
  else
  {
    v41 = 5LL;
  }
  v64 = v41;
  v65 = 0;
  if ( !a12 )
    v30 = "NULL";
  v63 = v30;
  if ( a13 )
  {
    do
      ++v33;
    while ( a13[v33] );
    v42 = v33 + 1;
  }
  else
  {
    v42 = 5;
  }
  v67 = v42;
  v69 = a14;
  if ( !a13 )
    v29 = "NULL";
  v80 = 1LL;
  v71 = &a15;
  v84 = 1LL;
  v73 = &a16;
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
  v95 = &a27;
  v97 = &a28;
  v86 = 1LL;
  v66 = v29;
  v68 = 0;
  v70 = 16LL;
  v72 = 4LL;
  v74 = 4LL;
  v76 = 4LL;
  v78 = 2LL;
  v82 = 2LL;
  v88 = 4LL;
  v90 = 4LL;
  v92 = 4LL;
  v94 = 4LL;
  v96 = 4LL;
  v98 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(v41, &EventNVMeNamespaceUniqueErrorData, 0LL, 0x1Au, &v44);
}
