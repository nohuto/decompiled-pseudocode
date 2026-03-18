/*
 * XREFs of McTemplateK0pqhhhqqqqqqhhqhqqqqqqqssshhh_EtwWriteTransfer @ 0x14001CDD0
 * Callers:
 *     HUBPDO_ReportDeviceFailure @ 0x14001A920 (HUBPDO_ReportDeviceFailure.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140001A30 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140045CC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0pqhhhqqqqqqhhqhqqqqqqqssshhh_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
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
        const char *a26,
        const char *a27,
        const char *a28,
        char a29,
        char a30,
        char a31)
{
  const char *v31; // r9
  const char *v32; // rdx
  const char *v34; // r8
  __int64 v35; // rax
  __int64 v36; // rcx
  int v37; // ecx
  __int64 v38; // rcx
  __int64 v39; // rcx
  int v40; // eax
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+38h] [rbp-D0h] BYREF
  __int64 *v43; // [rsp+48h] [rbp-C0h]
  __int64 v44; // [rsp+50h] [rbp-B8h]
  char *v45; // [rsp+58h] [rbp-B0h]
  __int64 v46; // [rsp+60h] [rbp-A8h]
  char *v47; // [rsp+68h] [rbp-A0h]
  __int64 v48; // [rsp+70h] [rbp-98h]
  char *v49; // [rsp+78h] [rbp-90h]
  __int64 v50; // [rsp+80h] [rbp-88h]
  char *v51; // [rsp+88h] [rbp-80h]
  __int64 v52; // [rsp+90h] [rbp-78h]
  char *v53; // [rsp+98h] [rbp-70h]
  __int64 v54; // [rsp+A0h] [rbp-68h]
  char *v55; // [rsp+A8h] [rbp-60h]
  __int64 v56; // [rsp+B0h] [rbp-58h]
  char *v57; // [rsp+B8h] [rbp-50h]
  __int64 v58; // [rsp+C0h] [rbp-48h]
  char *v59; // [rsp+C8h] [rbp-40h]
  __int64 v60; // [rsp+D0h] [rbp-38h]
  char *v61; // [rsp+D8h] [rbp-30h]
  __int64 v62; // [rsp+E0h] [rbp-28h]
  char *v63; // [rsp+E8h] [rbp-20h]
  __int64 v64; // [rsp+F0h] [rbp-18h]
  char *v65; // [rsp+F8h] [rbp-10h]
  __int64 v66; // [rsp+100h] [rbp-8h]
  char *v67; // [rsp+108h] [rbp+0h]
  __int64 v68; // [rsp+110h] [rbp+8h]
  char *v69; // [rsp+118h] [rbp+10h]
  __int64 v70; // [rsp+120h] [rbp+18h]
  char *v71; // [rsp+128h] [rbp+20h]
  __int64 v72; // [rsp+130h] [rbp+28h]
  char *v73; // [rsp+138h] [rbp+30h]
  __int64 v74; // [rsp+140h] [rbp+38h]
  char *v75; // [rsp+148h] [rbp+40h]
  __int64 v76; // [rsp+150h] [rbp+48h]
  char *v77; // [rsp+158h] [rbp+50h]
  __int64 v78; // [rsp+160h] [rbp+58h]
  char *v79; // [rsp+168h] [rbp+60h]
  __int64 v80; // [rsp+170h] [rbp+68h]
  char *v81; // [rsp+178h] [rbp+70h]
  __int64 v82; // [rsp+180h] [rbp+78h]
  char *v83; // [rsp+188h] [rbp+80h]
  __int64 v84; // [rsp+190h] [rbp+88h]
  char *v85; // [rsp+198h] [rbp+90h]
  __int64 v86; // [rsp+1A0h] [rbp+98h]
  const char *v87; // [rsp+1A8h] [rbp+A0h]
  int v88; // [rsp+1B0h] [rbp+A8h]
  int v89; // [rsp+1B4h] [rbp+ACh]
  const char *v90; // [rsp+1B8h] [rbp+B0h]
  int v91; // [rsp+1C0h] [rbp+B8h]
  int v92; // [rsp+1C4h] [rbp+BCh]
  const char *v93; // [rsp+1C8h] [rbp+C0h]
  int v94; // [rsp+1D0h] [rbp+C8h]
  int v95; // [rsp+1D4h] [rbp+CCh]
  char *v96; // [rsp+1D8h] [rbp+D0h]
  __int64 v97; // [rsp+1E0h] [rbp+D8h]
  char *v98; // [rsp+1E8h] [rbp+E0h]
  __int64 v99; // [rsp+1F0h] [rbp+E8h]
  char *v100; // [rsp+1F8h] [rbp+F0h]
  __int64 v101; // [rsp+200h] [rbp+F8h]
  __int64 v102; // [rsp+240h] [rbp+138h] BYREF

  v102 = a4;
  v31 = a26;
  v32 = a27;
  v43 = &v102;
  v34 = a28;
  v45 = &a5;
  v47 = &a6;
  v49 = &a7;
  v51 = &a8;
  v53 = &a9;
  v55 = &a10;
  v57 = &a11;
  v59 = &a12;
  v61 = &a13;
  v63 = &a14;
  v65 = &a15;
  v67 = &a16;
  v69 = &a17;
  v71 = &a18;
  v73 = &a19;
  v75 = &a20;
  v77 = &a21;
  v79 = &a22;
  v81 = &a23;
  v83 = &a24;
  v85 = &a25;
  v35 = -1LL;
  v44 = 8LL;
  v46 = 4LL;
  v48 = 2LL;
  v50 = 2LL;
  v52 = 2LL;
  v54 = 4LL;
  v56 = 4LL;
  v58 = 4LL;
  v60 = 4LL;
  v62 = 4LL;
  v64 = 4LL;
  v66 = 2LL;
  v68 = 2LL;
  v70 = 4LL;
  v72 = 2LL;
  v74 = 4LL;
  v76 = 4LL;
  v78 = 4LL;
  v80 = 4LL;
  v82 = 4LL;
  v84 = 4LL;
  v86 = 4LL;
  if ( a26 )
  {
    v36 = -1LL;
    do
      ++v36;
    while ( a26[v36] );
    v37 = v36 + 1;
  }
  else
  {
    v37 = 5;
  }
  v88 = v37;
  v89 = 0;
  if ( !a26 )
    v31 = "NULL";
  v87 = v31;
  if ( a27 )
  {
    v38 = -1LL;
    do
      ++v38;
    while ( a27[v38] );
    v39 = (unsigned int)(v38 + 1);
  }
  else
  {
    v39 = 5LL;
  }
  v91 = v39;
  v92 = 0;
  if ( !a27 )
    v32 = "NULL";
  v90 = v32;
  if ( a28 )
  {
    do
      ++v35;
    while ( a28[v35] );
    v40 = v35 + 1;
  }
  else
  {
    v40 = 5;
  }
  v94 = v40;
  v95 = 0;
  v97 = 2LL;
  v96 = &a29;
  if ( !a28 )
    v34 = "NULL";
  v93 = v34;
  v98 = &a30;
  v99 = 2LL;
  v100 = &a31;
  v101 = 2LL;
  return McGenEventWrite_EtwWriteTransfer(v39, &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_FAILURE, a3, 0x1Du, &v42);
}
