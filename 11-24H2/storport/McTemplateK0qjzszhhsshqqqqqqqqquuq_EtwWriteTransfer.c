/*
 * XREFs of McTemplateK0qjzszhhsshqqqqqqqqquuq_EtwWriteTransfer @ 0x1400C2288
 * Callers:
 *     StorLogMFNDSetChildPFQoS @ 0x1400C6810 (StorLogMFNDSetChildPFQoS.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140024158 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzszhhsshqqqqqqqqquuq_EtwWriteTransfer(
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
        char a25)
{
  const wchar_t *v25; // rcx
  const char *v26; // rbx
  const char *v27; // r9
  const wchar_t *v28; // r10
  const char *v29; // r8
  int v30; // r11d
  __int64 v31; // rax
  __int64 v32; // rdx
  unsigned int v33; // edx
  __int64 v34; // rcx
  int v35; // ecx
  bool v36; // zf
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  int v40; // eax
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+38h] [rbp-D0h] BYREF
  int *v43; // [rsp+48h] [rbp-C0h]
  __int64 v44; // [rsp+50h] [rbp-B8h]
  __int64 v45; // [rsp+58h] [rbp-B0h]
  __int64 v46; // [rsp+60h] [rbp-A8h]
  const wchar_t *v47; // [rsp+68h] [rbp-A0h]
  __int64 v48; // [rsp+70h] [rbp-98h]
  const char *v49; // [rsp+78h] [rbp-90h]
  int v50; // [rsp+80h] [rbp-88h]
  int v51; // [rsp+84h] [rbp-84h]
  const wchar_t *v52; // [rsp+88h] [rbp-80h]
  int v53; // [rsp+90h] [rbp-78h]
  int v54; // [rsp+94h] [rbp-74h]
  char *v55; // [rsp+98h] [rbp-70h]
  __int64 v56; // [rsp+A0h] [rbp-68h]
  char *v57; // [rsp+A8h] [rbp-60h]
  __int64 v58; // [rsp+B0h] [rbp-58h]
  const char *v59; // [rsp+B8h] [rbp-50h]
  int v60; // [rsp+C0h] [rbp-48h]
  int v61; // [rsp+C4h] [rbp-44h]
  const char *v62; // [rsp+C8h] [rbp-40h]
  int v63; // [rsp+D0h] [rbp-38h]
  int v64; // [rsp+D4h] [rbp-34h]
  char *v65; // [rsp+D8h] [rbp-30h]
  __int64 v66; // [rsp+E0h] [rbp-28h]
  char *v67; // [rsp+E8h] [rbp-20h]
  __int64 v68; // [rsp+F0h] [rbp-18h]
  char *v69; // [rsp+F8h] [rbp-10h]
  __int64 v70; // [rsp+100h] [rbp-8h]
  char *v71; // [rsp+108h] [rbp+0h]
  __int64 v72; // [rsp+110h] [rbp+8h]
  char *v73; // [rsp+118h] [rbp+10h]
  __int64 v74; // [rsp+120h] [rbp+18h]
  char *v75; // [rsp+128h] [rbp+20h]
  __int64 v76; // [rsp+130h] [rbp+28h]
  char *v77; // [rsp+138h] [rbp+30h]
  __int64 v78; // [rsp+140h] [rbp+38h]
  char *v79; // [rsp+148h] [rbp+40h]
  __int64 v80; // [rsp+150h] [rbp+48h]
  char *v81; // [rsp+158h] [rbp+50h]
  __int64 v82; // [rsp+160h] [rbp+58h]
  char *v83; // [rsp+168h] [rbp+60h]
  __int64 v84; // [rsp+170h] [rbp+68h]
  char *v85; // [rsp+178h] [rbp+70h]
  __int64 v86; // [rsp+180h] [rbp+78h]
  char *v87; // [rsp+188h] [rbp+80h]
  __int64 v88; // [rsp+190h] [rbp+88h]
  char *v89; // [rsp+198h] [rbp+90h]
  __int64 v90; // [rsp+1A0h] [rbp+98h]
  int v91; // [rsp+1F0h] [rbp+E8h] BYREF

  v91 = a4;
  v25 = a6;
  v26 = a12;
  v27 = a11;
  v28 = a8;
  v29 = a7;
  v43 = &v91;
  v30 = 10;
  v45 = a5;
  v31 = -1LL;
  v44 = 4LL;
  v46 = 16LL;
  if ( a6 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( a6[v32] );
    v33 = 2 * v32 + 2;
  }
  else
  {
    v33 = 10;
  }
  v48 = v33;
  if ( !a6 )
    v25 = L"NULL";
  v47 = v25;
  if ( a7 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( a7[v34] );
    v35 = v34 + 1;
  }
  else
  {
    v35 = 5;
  }
  v50 = v35;
  v51 = 0;
  if ( !a7 )
    v29 = "NULL";
  v49 = v29;
  v36 = a8 == 0LL;
  if ( a8 )
  {
    v37 = -1LL;
    do
      ++v37;
    while ( a8[v37] );
    v30 = 2 * v37 + 2;
    v36 = a8 == 0LL;
  }
  v53 = v30;
  if ( v36 )
    v28 = L"NULL";
  v55 = &a9;
  v52 = v28;
  v57 = &a10;
  v54 = 0;
  v56 = 2LL;
  v58 = 2LL;
  if ( a11 )
  {
    v38 = -1LL;
    do
      ++v38;
    while ( a11[v38] );
    v39 = (unsigned int)(v38 + 1);
  }
  else
  {
    v39 = 5LL;
  }
  v60 = v39;
  v61 = 0;
  if ( !a11 )
    v27 = "NULL";
  v59 = v27;
  if ( a12 )
  {
    do
      ++v31;
    while ( a12[v31] );
    v40 = v31 + 1;
  }
  else
  {
    v40 = 5;
  }
  v63 = v40;
  v64 = 0;
  v65 = &a13;
  v66 = 2LL;
  v67 = &a14;
  if ( !a12 )
    v26 = "NULL";
  v62 = v26;
  v69 = &a15;
  v68 = 4LL;
  v71 = &a16;
  v70 = 4LL;
  v73 = &a17;
  v75 = &a18;
  v77 = &a19;
  v79 = &a20;
  v81 = &a21;
  v83 = &a22;
  v85 = &a23;
  v87 = &a24;
  v89 = &a25;
  v72 = 4LL;
  v74 = 4LL;
  v76 = 4LL;
  v78 = 4LL;
  v80 = 4LL;
  v82 = 4LL;
  v84 = 4LL;
  v86 = 1LL;
  v88 = 1LL;
  v90 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(v39, &EventMFNDSetChildPFQoS, 0LL, 0x17u, &v42);
}
