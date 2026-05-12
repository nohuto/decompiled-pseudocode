/*
 * XREFs of McTemplateK0quuujjzsszstxqqbr14uhqbr18_EtwWriteTransfer @ 0x1400AEDA8
 * Callers:
 *     StorpTelemetrySendUnitNvmeHealthInfo @ 0x140039030 (StorpTelemetrySendUnitNvmeHealthInfo.c)
 *     StorpTelemetrySendAdapterNvmeHealthInfo @ 0x1400B9438 (StorpTelemetrySendAdapterNvmeHealthInfo.c)
 *     StorGetAndLogNVMeSmartHealthInfoWorkRoutine @ 0x1400C3E80 (StorGetAndLogNVMeSmartHealthInfoWorkRoutine.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140024158 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0quuujjzsszstxqqbr14uhqbr18_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        const wchar_t *a10,
        const char *a11,
        const char *a12,
        const wchar_t *a13,
        const char *a14,
        char a15,
        char a16,
        char a17,
        int a18,
        __int64 a19,
        char a20,
        char a21,
        int a22,
        __int64 a23)
{
  const wchar_t *v23; // rdx
  const char *v24; // rbx
  const wchar_t *v25; // r9
  const char *v26; // r10
  const char *v27; // r8
  int v28; // r11d
  __int64 v29; // rax
  __int64 v30; // rcx
  int v31; // ecx
  __int64 v32; // rcx
  int v33; // ecx
  __int64 v34; // rcx
  __int64 v35; // rcx
  bool v36; // zf
  int v37; // eax
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+38h] [rbp-D0h] BYREF
  int *v40; // [rsp+48h] [rbp-C0h]
  __int64 v41; // [rsp+50h] [rbp-B8h]
  char *v42; // [rsp+58h] [rbp-B0h]
  __int64 v43; // [rsp+60h] [rbp-A8h]
  char *v44; // [rsp+68h] [rbp-A0h]
  __int64 v45; // [rsp+70h] [rbp-98h]
  char *v46; // [rsp+78h] [rbp-90h]
  __int64 v47; // [rsp+80h] [rbp-88h]
  __int64 v48; // [rsp+88h] [rbp-80h]
  __int64 v49; // [rsp+90h] [rbp-78h]
  __int64 v50; // [rsp+98h] [rbp-70h]
  __int64 v51; // [rsp+A0h] [rbp-68h]
  const wchar_t *v52; // [rsp+A8h] [rbp-60h]
  int v53; // [rsp+B0h] [rbp-58h]
  int v54; // [rsp+B4h] [rbp-54h]
  const char *v55; // [rsp+B8h] [rbp-50h]
  int v56; // [rsp+C0h] [rbp-48h]
  int v57; // [rsp+C4h] [rbp-44h]
  const char *v58; // [rsp+C8h] [rbp-40h]
  int v59; // [rsp+D0h] [rbp-38h]
  int v60; // [rsp+D4h] [rbp-34h]
  const wchar_t *v61; // [rsp+D8h] [rbp-30h]
  int v62; // [rsp+E0h] [rbp-28h]
  int v63; // [rsp+E4h] [rbp-24h]
  const char *v64; // [rsp+E8h] [rbp-20h]
  int v65; // [rsp+F0h] [rbp-18h]
  int v66; // [rsp+F4h] [rbp-14h]
  char *v67; // [rsp+F8h] [rbp-10h]
  __int64 v68; // [rsp+100h] [rbp-8h]
  char *v69; // [rsp+108h] [rbp+0h]
  __int64 v70; // [rsp+110h] [rbp+8h]
  char *v71; // [rsp+118h] [rbp+10h]
  __int64 v72; // [rsp+120h] [rbp+18h]
  int *v73; // [rsp+128h] [rbp+20h]
  __int64 v74; // [rsp+130h] [rbp+28h]
  __int64 v75; // [rsp+138h] [rbp+30h]
  int v76; // [rsp+140h] [rbp+38h]
  int v77; // [rsp+144h] [rbp+3Ch]
  char *v78; // [rsp+148h] [rbp+40h]
  __int64 v79; // [rsp+150h] [rbp+48h]
  char *v80; // [rsp+158h] [rbp+50h]
  __int64 v81; // [rsp+160h] [rbp+58h]
  int *v82; // [rsp+168h] [rbp+60h]
  __int64 v83; // [rsp+170h] [rbp+68h]
  __int64 v84; // [rsp+178h] [rbp+70h]
  int v85; // [rsp+180h] [rbp+78h]
  int v86; // [rsp+184h] [rbp+7Ch]
  int v87; // [rsp+1E0h] [rbp+D8h] BYREF

  v87 = a4;
  v23 = a10;
  v24 = a14;
  v25 = a13;
  v26 = a12;
  v27 = a11;
  v40 = &v87;
  v41 = 4LL;
  v42 = &a5;
  v28 = 10;
  v43 = 1LL;
  v44 = &a6;
  v46 = &a7;
  v48 = a8;
  v50 = a9;
  v29 = -1LL;
  v45 = 1LL;
  v47 = 1LL;
  v49 = 16LL;
  v51 = 16LL;
  if ( a10 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( a10[v30] );
    v31 = 2 * v30 + 2;
  }
  else
  {
    v31 = 10;
  }
  v53 = v31;
  v54 = 0;
  if ( !a10 )
    v23 = L"NULL";
  v52 = v23;
  if ( a11 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( a11[v32] );
    v33 = v32 + 1;
  }
  else
  {
    v33 = 5;
  }
  v56 = v33;
  v57 = 0;
  if ( !a11 )
    v27 = "NULL";
  v55 = v27;
  if ( a12 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( a12[v34] );
    v35 = (unsigned int)(v34 + 1);
  }
  else
  {
    v35 = 5LL;
  }
  v59 = v35;
  v60 = 0;
  if ( !a12 )
    v26 = "NULL";
  v58 = v26;
  v36 = a13 == 0LL;
  if ( a13 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( a13[v35] );
    v28 = 2 * v35 + 2;
    v36 = a13 == 0LL;
  }
  if ( v36 )
    v25 = L"NULL";
  v62 = v28;
  v61 = v25;
  v63 = 0;
  if ( a14 )
  {
    do
      ++v29;
    while ( a14[v29] );
    v37 = v29 + 1;
  }
  else
  {
    v37 = 5;
  }
  v65 = v37;
  v66 = 0;
  v67 = &a15;
  v68 = 4LL;
  v69 = &a16;
  if ( !a14 )
    v24 = "NULL";
  v64 = v24;
  v71 = &a17;
  v70 = 8LL;
  v73 = &a18;
  v75 = a19;
  v76 = a18;
  v78 = &a20;
  v80 = &a21;
  v82 = &a22;
  v84 = a23;
  v85 = a22;
  v72 = 4LL;
  v74 = 4LL;
  v77 = 0;
  v79 = 1LL;
  v81 = 2LL;
  v83 = 4LL;
  v86 = 0;
  return McGenEventWrite_EtwWriteTransfer(v35, &EventUnitNvmeHealthLog, 0LL, 0x15u, &v39);
}
