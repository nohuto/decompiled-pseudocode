/*
 * XREFs of McTemplateK0pzquuqqqqqqsssxqqqxx_EtwWriteTransfer @ 0x14004F8F4
 * Callers:
 *     Etw_ReportFatalError @ 0x14004F288 (Etw_ReportFatalError.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14000C8C0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0pzquuqqqqqqsssxqqqxx_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        const wchar_t *a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        const char *a15,
        const char *a16,
        const char *a17,
        char a18,
        char a19,
        char a20,
        char a21,
        char a22,
        char a23)
{
  const wchar_t *v23; // r9
  const char *v24; // r10
  const char *v25; // rdx
  const char *v26; // r8
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned int v29; // ecx
  __int64 v30; // rcx
  int v31; // ecx
  __int64 v32; // rcx
  __int64 v33; // rcx
  int v34; // eax
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+38h] [rbp-D0h] BYREF
  __int64 *v37; // [rsp+48h] [rbp-C0h]
  __int64 v38; // [rsp+50h] [rbp-B8h]
  const wchar_t *v39; // [rsp+58h] [rbp-B0h]
  __int64 v40; // [rsp+60h] [rbp-A8h]
  char *v41; // [rsp+68h] [rbp-A0h]
  __int64 v42; // [rsp+70h] [rbp-98h]
  char *v43; // [rsp+78h] [rbp-90h]
  __int64 v44; // [rsp+80h] [rbp-88h]
  char *v45; // [rsp+88h] [rbp-80h]
  __int64 v46; // [rsp+90h] [rbp-78h]
  char *v47; // [rsp+98h] [rbp-70h]
  __int64 v48; // [rsp+A0h] [rbp-68h]
  char *v49; // [rsp+A8h] [rbp-60h]
  __int64 v50; // [rsp+B0h] [rbp-58h]
  char *v51; // [rsp+B8h] [rbp-50h]
  __int64 v52; // [rsp+C0h] [rbp-48h]
  char *v53; // [rsp+C8h] [rbp-40h]
  __int64 v54; // [rsp+D0h] [rbp-38h]
  char *v55; // [rsp+D8h] [rbp-30h]
  __int64 v56; // [rsp+E0h] [rbp-28h]
  char *v57; // [rsp+E8h] [rbp-20h]
  __int64 v58; // [rsp+F0h] [rbp-18h]
  const char *v59; // [rsp+F8h] [rbp-10h]
  int v60; // [rsp+100h] [rbp-8h]
  int v61; // [rsp+104h] [rbp-4h]
  const char *v62; // [rsp+108h] [rbp+0h]
  int v63; // [rsp+110h] [rbp+8h]
  int v64; // [rsp+114h] [rbp+Ch]
  const char *v65; // [rsp+118h] [rbp+10h]
  int v66; // [rsp+120h] [rbp+18h]
  int v67; // [rsp+124h] [rbp+1Ch]
  char *v68; // [rsp+128h] [rbp+20h]
  __int64 v69; // [rsp+130h] [rbp+28h]
  char *v70; // [rsp+138h] [rbp+30h]
  __int64 v71; // [rsp+140h] [rbp+38h]
  char *v72; // [rsp+148h] [rbp+40h]
  __int64 v73; // [rsp+150h] [rbp+48h]
  char *v74; // [rsp+158h] [rbp+50h]
  __int64 v75; // [rsp+160h] [rbp+58h]
  char *v76; // [rsp+168h] [rbp+60h]
  __int64 v77; // [rsp+170h] [rbp+68h]
  char *v78; // [rsp+178h] [rbp+70h]
  __int64 v79; // [rsp+180h] [rbp+78h]
  __int64 v80; // [rsp+1C0h] [rbp+B8h] BYREF

  v80 = a4;
  v23 = a5;
  v24 = a17;
  v25 = a16;
  v26 = a15;
  v37 = &v80;
  v27 = -1LL;
  v38 = 8LL;
  if ( a5 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( a5[v28] );
    v29 = 2 * v28 + 2;
  }
  else
  {
    v29 = 10;
  }
  v40 = v29;
  v42 = 4LL;
  v41 = &a6;
  if ( !a5 )
    v23 = L"NULL";
  v39 = v23;
  v44 = 1LL;
  v43 = &a7;
  v45 = &a8;
  v47 = &a9;
  v49 = &a10;
  v51 = &a11;
  v53 = &a12;
  v55 = &a13;
  v57 = &a14;
  v46 = 1LL;
  v48 = 4LL;
  v50 = 4LL;
  v52 = 4LL;
  v54 = 4LL;
  v56 = 4LL;
  v58 = 4LL;
  if ( a15 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( a15[v30] );
    v31 = v30 + 1;
  }
  else
  {
    v31 = 5;
  }
  v60 = v31;
  v61 = 0;
  if ( !a15 )
    v26 = "NULL";
  v59 = v26;
  if ( a16 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( a16[v32] );
    v33 = (unsigned int)(v32 + 1);
  }
  else
  {
    v33 = 5LL;
  }
  v63 = v33;
  v64 = 0;
  if ( !a16 )
    v25 = "NULL";
  v62 = v25;
  if ( a17 )
  {
    do
      ++v27;
    while ( a17[v27] );
    v34 = v27 + 1;
  }
  else
  {
    v34 = 5;
  }
  v66 = v34;
  v67 = 0;
  v68 = &a18;
  v69 = 8LL;
  v70 = &a19;
  if ( !a17 )
    v24 = "NULL";
  v65 = v24;
  v72 = &a20;
  v71 = 4LL;
  v74 = &a21;
  v73 = 4LL;
  v76 = &a22;
  v78 = &a23;
  v75 = 4LL;
  v77 = 8LL;
  v79 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(v33, &USBXHCI_ETW_EVENT_CONTROLLER_FATAL_ERROR, 0LL, 0x15u, &v36);
}
