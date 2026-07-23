/*
 * XREFs of McTemplateK0zzjzzztzdzztdzz_EtwWriteTransfer @ 0x1402B8AB0
 * Callers:
 *     PiDevCfgLogDeviceConfigured @ 0x140ABF650 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1402B8E28 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateK0zzjzzztzdzztdzz_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        __int64 a6,
        const wchar_t *a7,
        const wchar_t *a8,
        const wchar_t *a9,
        char a10,
        const wchar_t *a11,
        char a12,
        const wchar_t *a13,
        const wchar_t *a14,
        char a15,
        char a16,
        const wchar_t *a17,
        const wchar_t *a18)
{
  const wchar_t *v18; // r12
  __int64 v19; // rcx
  const wchar_t *v20; // r15
  const wchar_t *v22; // r14
  int v23; // edx
  const wchar_t *v24; // rsi
  const wchar_t *v25; // rbx
  const wchar_t *v26; // r11
  const wchar_t *v27; // r10
  const wchar_t *v28; // r8
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rax
  int v40; // eax
  __int64 v41; // rax
  int v42; // eax
  __int64 v43; // rax
  int v44; // eax
  const wchar_t *v45; // rdi
  __int64 v46; // rax
  int v47; // eax
  bool v48; // zf
  _BYTE v50[16]; // [rsp+38h] [rbp-D0h] BYREF
  const wchar_t *v51; // [rsp+48h] [rbp-C0h]
  int v52; // [rsp+50h] [rbp-B8h]
  int v53; // [rsp+54h] [rbp-B4h]
  const wchar_t *v54; // [rsp+58h] [rbp-B0h]
  int v55; // [rsp+60h] [rbp-A8h]
  int v56; // [rsp+64h] [rbp-A4h]
  __int64 v57; // [rsp+68h] [rbp-A0h]
  __int64 v58; // [rsp+70h] [rbp-98h]
  const wchar_t *v59; // [rsp+78h] [rbp-90h]
  int v60; // [rsp+80h] [rbp-88h]
  int v61; // [rsp+84h] [rbp-84h]
  const wchar_t *v62; // [rsp+88h] [rbp-80h]
  int v63; // [rsp+90h] [rbp-78h]
  int v64; // [rsp+94h] [rbp-74h]
  const wchar_t *v65; // [rsp+98h] [rbp-70h]
  int v66; // [rsp+A0h] [rbp-68h]
  int v67; // [rsp+A4h] [rbp-64h]
  char *v68; // [rsp+A8h] [rbp-60h]
  __int64 v69; // [rsp+B0h] [rbp-58h]
  const wchar_t *v70; // [rsp+B8h] [rbp-50h]
  int v71; // [rsp+C0h] [rbp-48h]
  int v72; // [rsp+C4h] [rbp-44h]
  char *v73; // [rsp+C8h] [rbp-40h]
  __int64 v74; // [rsp+D0h] [rbp-38h]
  const wchar_t *v75; // [rsp+D8h] [rbp-30h]
  int v76; // [rsp+E0h] [rbp-28h]
  int v77; // [rsp+E4h] [rbp-24h]
  const wchar_t *v78; // [rsp+E8h] [rbp-20h]
  int v79; // [rsp+F0h] [rbp-18h]
  int v80; // [rsp+F4h] [rbp-14h]
  char *v81; // [rsp+F8h] [rbp-10h]
  __int64 v82; // [rsp+100h] [rbp-8h]
  char *v83; // [rsp+108h] [rbp+0h]
  __int64 v84; // [rsp+110h] [rbp+8h]
  const wchar_t *v85; // [rsp+118h] [rbp+10h]
  int v86; // [rsp+120h] [rbp+18h]
  int v87; // [rsp+124h] [rbp+1Ch]
  const wchar_t *v88; // [rsp+128h] [rbp+20h]
  int v89; // [rsp+130h] [rbp+28h]
  int v90; // [rsp+134h] [rbp+2Ch]

  v18 = a18;
  v19 = -1LL;
  v20 = a14;
  v22 = a13;
  v23 = 10;
  v24 = a11;
  v25 = a9;
  v26 = a8;
  v27 = a7;
  v28 = a5;
  if ( a4 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( a4[v29] );
    v18 = a18;
    v30 = 2 * v29 + 2;
  }
  else
  {
    v30 = 10;
  }
  v52 = v30;
  if ( !a4 )
    a4 = L"NULL";
  v51 = a4;
  v53 = 0;
  if ( a5 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( a5[v31] );
    v32 = 2 * v31 + 2;
  }
  else
  {
    v32 = 10;
  }
  v55 = v32;
  if ( !a5 )
    v28 = L"NULL";
  v56 = 0;
  v54 = v28;
  v57 = a6;
  v58 = 16LL;
  if ( a7 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( a7[v33] );
    v34 = 2 * v33 + 2;
  }
  else
  {
    v34 = 10;
  }
  v60 = v34;
  v61 = 0;
  if ( !a7 )
    v27 = L"NULL";
  v59 = v27;
  if ( a8 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( a8[v35] );
    v36 = 2 * v35 + 2;
  }
  else
  {
    v36 = 10;
  }
  v63 = v36;
  v64 = 0;
  if ( !a8 )
    v26 = L"NULL";
  v62 = v26;
  if ( a9 )
  {
    v37 = -1LL;
    do
      ++v37;
    while ( a9[v37] );
    v38 = 2 * v37 + 2;
  }
  else
  {
    v38 = 10;
  }
  v66 = v38;
  v67 = 0;
  if ( !a9 )
    v25 = L"NULL";
  v68 = &a10;
  v65 = v25;
  v69 = 4LL;
  if ( a11 )
  {
    v39 = -1LL;
    do
      ++v39;
    while ( a11[v39] );
    v40 = 2 * v39 + 2;
  }
  else
  {
    v40 = 10;
  }
  v71 = v40;
  v72 = 0;
  if ( !a11 )
    v24 = L"NULL";
  v73 = &a12;
  v70 = v24;
  v74 = 4LL;
  if ( a13 )
  {
    v41 = -1LL;
    do
      ++v41;
    while ( a13[v41] );
    v42 = 2 * v41 + 2;
  }
  else
  {
    v42 = 10;
  }
  v76 = v42;
  v77 = 0;
  if ( !a13 )
    v22 = L"NULL";
  v75 = v22;
  if ( a14 )
  {
    v43 = -1LL;
    do
      ++v43;
    while ( a14[v43] );
    v44 = 2 * v43 + 2;
  }
  else
  {
    v44 = 10;
  }
  v45 = a17;
  v79 = v44;
  if ( !a14 )
    v20 = L"NULL";
  v81 = &a15;
  v78 = v20;
  v83 = &a16;
  v80 = 0;
  v82 = 4LL;
  v84 = 4LL;
  if ( a17 )
  {
    v46 = -1LL;
    do
      ++v46;
    while ( a17[v46] );
    v47 = 2 * v46 + 2;
  }
  else
  {
    v47 = 10;
  }
  v86 = v47;
  v87 = 0;
  if ( !a17 )
    v45 = L"NULL";
  v85 = v45;
  v48 = v18 == 0LL;
  if ( v18 )
  {
    do
      ++v19;
    while ( v18[v19] );
    v23 = 2 * v19 + 2;
    v48 = v18 == 0LL;
  }
  if ( v48 )
    v18 = L"NULL";
  v89 = v23;
  v90 = 0;
  v88 = v18;
  return McGenEventWrite_EtwWriteTransfer(&MS_KernelPnP_Provider_Context, a2, 0LL, 16LL, v50);
}
