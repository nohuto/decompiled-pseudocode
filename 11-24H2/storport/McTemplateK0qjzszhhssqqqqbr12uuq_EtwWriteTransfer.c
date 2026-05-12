/*
 * XREFs of McTemplateK0qjzszhhssqqqqbr12uuq_EtwWriteTransfer @ 0x1400C2AFC
 * Callers:
 *     StorLogMFNDQueryChildPFList @ 0x1400C52FC (StorLogMFNDQueryChildPFList.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140024158 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzszhhssqqqqbr12uuq_EtwWriteTransfer(
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
        int a16,
        __int64 a17,
        char a18,
        char a19,
        char a20)
{
  const wchar_t *v20; // rdx
  const char *v21; // rbx
  const char *v22; // r8
  const wchar_t *v23; // r10
  const char *v24; // r9
  int v25; // r11d
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned int v28; // ecx
  __int64 v29; // rcx
  int v30; // ecx
  bool v31; // zf
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  int v35; // eax
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+38h] [rbp-D0h] BYREF
  int *v38; // [rsp+48h] [rbp-C0h]
  __int64 v39; // [rsp+50h] [rbp-B8h]
  __int64 v40; // [rsp+58h] [rbp-B0h]
  __int64 v41; // [rsp+60h] [rbp-A8h]
  const wchar_t *v42; // [rsp+68h] [rbp-A0h]
  __int64 v43; // [rsp+70h] [rbp-98h]
  const char *v44; // [rsp+78h] [rbp-90h]
  int v45; // [rsp+80h] [rbp-88h]
  int v46; // [rsp+84h] [rbp-84h]
  const wchar_t *v47; // [rsp+88h] [rbp-80h]
  int v48; // [rsp+90h] [rbp-78h]
  int v49; // [rsp+94h] [rbp-74h]
  char *v50; // [rsp+98h] [rbp-70h]
  __int64 v51; // [rsp+A0h] [rbp-68h]
  char *v52; // [rsp+A8h] [rbp-60h]
  __int64 v53; // [rsp+B0h] [rbp-58h]
  const char *v54; // [rsp+B8h] [rbp-50h]
  int v55; // [rsp+C0h] [rbp-48h]
  int v56; // [rsp+C4h] [rbp-44h]
  const char *v57; // [rsp+C8h] [rbp-40h]
  int v58; // [rsp+D0h] [rbp-38h]
  int v59; // [rsp+D4h] [rbp-34h]
  char *v60; // [rsp+D8h] [rbp-30h]
  __int64 v61; // [rsp+E0h] [rbp-28h]
  char *v62; // [rsp+E8h] [rbp-20h]
  __int64 v63; // [rsp+F0h] [rbp-18h]
  char *v64; // [rsp+F8h] [rbp-10h]
  __int64 v65; // [rsp+100h] [rbp-8h]
  int *v66; // [rsp+108h] [rbp+0h]
  __int64 v67; // [rsp+110h] [rbp+8h]
  __int64 v68; // [rsp+118h] [rbp+10h]
  int v69; // [rsp+120h] [rbp+18h]
  int v70; // [rsp+124h] [rbp+1Ch]
  char *v71; // [rsp+128h] [rbp+20h]
  __int64 v72; // [rsp+130h] [rbp+28h]
  char *v73; // [rsp+138h] [rbp+30h]
  __int64 v74; // [rsp+140h] [rbp+38h]
  char *v75; // [rsp+148h] [rbp+40h]
  __int64 v76; // [rsp+150h] [rbp+48h]
  int v77; // [rsp+1A0h] [rbp+98h] BYREF

  v77 = a4;
  v20 = a6;
  v21 = a12;
  v22 = a11;
  v23 = a8;
  v24 = a7;
  v38 = &v77;
  v25 = 10;
  v40 = a5;
  v26 = -1LL;
  v39 = 4LL;
  v41 = 16LL;
  if ( a6 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( a6[v27] );
    v28 = 2 * v27 + 2;
  }
  else
  {
    v28 = 10;
  }
  v43 = v28;
  if ( !a6 )
    v20 = L"NULL";
  v42 = v20;
  if ( a7 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( a7[v29] );
    v30 = v29 + 1;
  }
  else
  {
    v30 = 5;
  }
  v45 = v30;
  v46 = 0;
  if ( !a7 )
    v24 = "NULL";
  v44 = v24;
  v31 = a8 == 0LL;
  if ( a8 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( a8[v32] );
    v25 = 2 * v32 + 2;
    v31 = a8 == 0LL;
  }
  v48 = v25;
  if ( v31 )
    v23 = L"NULL";
  v50 = &a9;
  v47 = v23;
  v52 = &a10;
  v49 = 0;
  v51 = 2LL;
  v53 = 2LL;
  if ( a11 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( a11[v33] );
    v34 = (unsigned int)(v33 + 1);
  }
  else
  {
    v34 = 5LL;
  }
  v55 = v34;
  v56 = 0;
  if ( !a11 )
    v22 = "NULL";
  v54 = v22;
  if ( a12 )
  {
    do
      ++v26;
    while ( a12[v26] );
    v35 = v26 + 1;
  }
  else
  {
    v35 = 5;
  }
  v58 = v35;
  v59 = 0;
  v60 = &a13;
  v61 = 4LL;
  v62 = &a14;
  if ( !a12 )
    v21 = "NULL";
  v57 = v21;
  v64 = &a15;
  v63 = 4LL;
  v66 = &a16;
  v68 = a17;
  v69 = a16;
  v71 = &a18;
  v73 = &a19;
  v75 = &a20;
  v65 = 4LL;
  v67 = 4LL;
  v70 = 0;
  v72 = 1LL;
  v74 = 1LL;
  v76 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(v34, &EventMFNDQueryChildPFList, 0LL, 0x12u, &v37);
}
