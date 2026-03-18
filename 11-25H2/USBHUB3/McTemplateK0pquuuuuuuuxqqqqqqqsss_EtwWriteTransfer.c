/*
 * XREFs of McTemplateK0pquuuuuuuuxqqqqqqqsss_EtwWriteTransfer @ 0x140002164
 * Callers:
 *     HUBDRIVER_EtwRundownHub @ 0x140079248 (HUBDRIVER_EtwRundownHub.c)
 *     HUBFDO_EvtDevicePrepareHardware @ 0x14007B8E0 (HUBFDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140001A30 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140045CC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0pquuuuuuuuxqqqqqqqsss_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
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
        const char *a22,
        const char *a23,
        const char *a24)
{
  const char *v24; // r9
  const char *v26; // r8
  const char *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  int v31; // ecx
  __int64 v32; // rcx
  __int64 v33; // rcx
  int v34; // eax
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v37; // [rsp+40h] [rbp-C0h]
  __int64 v38; // [rsp+48h] [rbp-B8h]
  char *v39; // [rsp+50h] [rbp-B0h]
  __int64 v40; // [rsp+58h] [rbp-A8h]
  char *v41; // [rsp+60h] [rbp-A0h]
  __int64 v42; // [rsp+68h] [rbp-98h]
  char *v43; // [rsp+70h] [rbp-90h]
  __int64 v44; // [rsp+78h] [rbp-88h]
  char *v45; // [rsp+80h] [rbp-80h]
  __int64 v46; // [rsp+88h] [rbp-78h]
  char *v47; // [rsp+90h] [rbp-70h]
  __int64 v48; // [rsp+98h] [rbp-68h]
  char *v49; // [rsp+A0h] [rbp-60h]
  __int64 v50; // [rsp+A8h] [rbp-58h]
  char *v51; // [rsp+B0h] [rbp-50h]
  __int64 v52; // [rsp+B8h] [rbp-48h]
  char *v53; // [rsp+C0h] [rbp-40h]
  __int64 v54; // [rsp+C8h] [rbp-38h]
  char *v55; // [rsp+D0h] [rbp-30h]
  __int64 v56; // [rsp+D8h] [rbp-28h]
  char *v57; // [rsp+E0h] [rbp-20h]
  __int64 v58; // [rsp+E8h] [rbp-18h]
  char *v59; // [rsp+F0h] [rbp-10h]
  __int64 v60; // [rsp+F8h] [rbp-8h]
  char *v61; // [rsp+100h] [rbp+0h]
  __int64 v62; // [rsp+108h] [rbp+8h]
  char *v63; // [rsp+110h] [rbp+10h]
  __int64 v64; // [rsp+118h] [rbp+18h]
  char *v65; // [rsp+120h] [rbp+20h]
  __int64 v66; // [rsp+128h] [rbp+28h]
  char *v67; // [rsp+130h] [rbp+30h]
  __int64 v68; // [rsp+138h] [rbp+38h]
  char *v69; // [rsp+140h] [rbp+40h]
  __int64 v70; // [rsp+148h] [rbp+48h]
  char *v71; // [rsp+150h] [rbp+50h]
  __int64 v72; // [rsp+158h] [rbp+58h]
  const char *v73; // [rsp+160h] [rbp+60h]
  int v74; // [rsp+168h] [rbp+68h]
  int v75; // [rsp+16Ch] [rbp+6Ch]
  const char *v76; // [rsp+170h] [rbp+70h]
  int v77; // [rsp+178h] [rbp+78h]
  int v78; // [rsp+17Ch] [rbp+7Ch]
  const char *v79; // [rsp+180h] [rbp+80h]
  int v80; // [rsp+188h] [rbp+88h]
  int v81; // [rsp+18Ch] [rbp+8Ch]
  __int64 v82; // [rsp+1D8h] [rbp+D8h] BYREF

  v82 = a4;
  v24 = a22;
  v37 = &v82;
  v38 = 8LL;
  v39 = &a5;
  v26 = a24;
  v41 = &a6;
  v40 = 4LL;
  v43 = &a7;
  v28 = a23;
  v45 = &a8;
  v47 = &a9;
  v49 = &a10;
  v51 = &a11;
  v53 = &a12;
  v55 = &a13;
  v57 = &a14;
  v59 = &a15;
  v61 = &a16;
  v63 = &a17;
  v65 = &a18;
  v67 = &a19;
  v69 = &a20;
  v71 = &a21;
  v29 = -1LL;
  v42 = 1LL;
  v44 = 1LL;
  v46 = 1LL;
  v48 = 1LL;
  v50 = 1LL;
  v52 = 1LL;
  v54 = 1LL;
  v56 = 1LL;
  v58 = 8LL;
  v60 = 4LL;
  v62 = 4LL;
  v64 = 4LL;
  v66 = 4LL;
  v68 = 4LL;
  v70 = 4LL;
  v72 = 4LL;
  if ( a22 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( a22[v30] );
    v31 = v30 + 1;
  }
  else
  {
    v31 = 5;
  }
  v74 = v31;
  v75 = 0;
  if ( !a22 )
    v24 = "NULL";
  v73 = v24;
  if ( a23 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( a23[v32] );
    v33 = (unsigned int)(v32 + 1);
  }
  else
  {
    v33 = 5LL;
  }
  v77 = v33;
  v78 = 0;
  if ( !a23 )
    v28 = "NULL";
  v76 = v28;
  if ( a24 )
  {
    do
      ++v29;
    while ( a24[v29] );
    v34 = v29 + 1;
  }
  else
  {
    v34 = 5;
  }
  v80 = v34;
  v81 = 0;
  if ( !a24 )
    v26 = "NULL";
  v79 = v26;
  return McGenEventWrite_EtwWriteTransfer(v33, a2, a3, 0x16u, &v36);
}
