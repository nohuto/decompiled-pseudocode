/*
 * XREFs of sub_180001DD8 @ 0x180001DD8
 * Callers:
 *     sub_1800218F0 @ 0x1800218F0 (sub_1800218F0.c)
 * Callees:
 *     sub_180001548 @ 0x180001548 (sub_180001548.c)
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 */

ULONG __fastcall sub_180001DD8(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 *a7,
        __int64 *a8,
        void **a9,
        void **a10,
        __int64 a11,
        void **a12,
        void **a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        void **a25)
{
  __int64 v25; // r8
  _BYTE *v26; // rcx
  __int64 v27; // rax
  int v28; // eax
  _BYTE *v29; // rcx
  __int64 v30; // rax
  int v31; // eax
  _BYTE *v32; // rcx
  __int64 v33; // rax
  int v34; // eax
  _BYTE *v35; // rcx
  __int64 v36; // rax
  int v37; // eax
  _BYTE *v38; // rcx
  __int64 v39; // rax
  int v40; // eax
  __int64 v41; // rcx
  _BYTE *v42; // rcx
  int v43; // r8d
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE *v46; // [rsp+50h] [rbp-B0h]
  int v47; // [rsp+58h] [rbp-A8h]
  int v48; // [rsp+5Ch] [rbp-A4h]
  __int64 v49; // [rsp+60h] [rbp-A0h]
  __int64 v50; // [rsp+68h] [rbp-98h]
  __int64 v51; // [rsp+70h] [rbp-90h]
  __int64 v52; // [rsp+78h] [rbp-88h]
  __int64 v53; // [rsp+80h] [rbp-80h]
  __int64 v54; // [rsp+88h] [rbp-78h]
  _BYTE *v55; // [rsp+90h] [rbp-70h]
  int v56; // [rsp+98h] [rbp-68h]
  int v57; // [rsp+9Ch] [rbp-64h]
  _BYTE *v58; // [rsp+A0h] [rbp-60h]
  int v59; // [rsp+A8h] [rbp-58h]
  int v60; // [rsp+ACh] [rbp-54h]
  __int64 v61; // [rsp+B0h] [rbp-50h]
  __int64 v62; // [rsp+B8h] [rbp-48h]
  _BYTE *v63; // [rsp+C0h] [rbp-40h]
  int v64; // [rsp+C8h] [rbp-38h]
  int v65; // [rsp+CCh] [rbp-34h]
  _BYTE *v66; // [rsp+D0h] [rbp-30h]
  int v67; // [rsp+D8h] [rbp-28h]
  int v68; // [rsp+DCh] [rbp-24h]
  __int64 v69; // [rsp+E0h] [rbp-20h]
  __int64 v70; // [rsp+E8h] [rbp-18h]
  __int64 v71; // [rsp+F0h] [rbp-10h]
  __int64 v72; // [rsp+F8h] [rbp-8h]
  __int64 v73; // [rsp+100h] [rbp+0h]
  __int64 v74; // [rsp+108h] [rbp+8h]
  __int64 v75; // [rsp+110h] [rbp+10h]
  __int64 v76; // [rsp+118h] [rbp+18h]
  __int64 v77; // [rsp+120h] [rbp+20h]
  __int64 v78; // [rsp+128h] [rbp+28h]
  __int64 v79; // [rsp+130h] [rbp+30h]
  __int64 v80; // [rsp+138h] [rbp+38h]
  __int64 v81; // [rsp+140h] [rbp+40h]
  __int64 v82; // [rsp+148h] [rbp+48h]
  __int64 v83; // [rsp+150h] [rbp+50h]
  __int64 v84; // [rsp+158h] [rbp+58h]
  __int64 v85; // [rsp+160h] [rbp+60h]
  __int64 v86; // [rsp+168h] [rbp+68h]
  __int64 v87; // [rsp+170h] [rbp+70h]
  __int64 v88; // [rsp+178h] [rbp+78h]
  __int64 v89; // [rsp+180h] [rbp+80h]
  __int64 v90; // [rsp+188h] [rbp+88h]
  _BYTE *v91; // [rsp+190h] [rbp+90h]
  int v92; // [rsp+198h] [rbp+98h]
  int v93; // [rsp+19Ch] [rbp+9Ch]

  v25 = -1LL;
  v26 = *a25;
  if ( *a25 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( v26[v27] );
    v28 = v27 + 1;
  }
  else
  {
    v26 = &unk_1800F6C80;
    v28 = 1;
  }
  v92 = v28;
  v89 = a24;
  v87 = a23;
  v85 = a22;
  v83 = a21;
  v81 = a20;
  v79 = a19;
  v77 = a18;
  v75 = a17;
  v73 = a16;
  v71 = a15;
  v69 = a14;
  v91 = v26;
  v93 = 0;
  v90 = 4LL;
  v29 = *a13;
  v88 = 4LL;
  v86 = 4LL;
  v84 = 4LL;
  v82 = 4LL;
  v80 = 8LL;
  v78 = 8LL;
  v76 = 8LL;
  v74 = 8LL;
  v72 = 8LL;
  v70 = 8LL;
  if ( v29 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( v29[v30] );
    v31 = v30 + 1;
  }
  else
  {
    v29 = &unk_1800F6C80;
    v31 = 1;
  }
  v67 = v31;
  v66 = v29;
  v68 = 0;
  v32 = *a12;
  if ( *a12 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( v32[v33] );
    v34 = v33 + 1;
  }
  else
  {
    v32 = &unk_1800F6C80;
    v34 = 1;
  }
  v64 = v34;
  v61 = a11;
  v63 = v32;
  v65 = 0;
  v62 = 4LL;
  v35 = *a10;
  if ( *a10 )
  {
    v36 = -1LL;
    do
      ++v36;
    while ( v35[v36] );
    v37 = v36 + 1;
  }
  else
  {
    v35 = &unk_1800F6C80;
    v37 = 1;
  }
  v59 = v37;
  v58 = v35;
  v60 = 0;
  v38 = *a9;
  if ( *a9 )
  {
    v39 = -1LL;
    do
      ++v39;
    while ( v38[v39] );
    v40 = v39 + 1;
  }
  else
  {
    v38 = &unk_1800F6C80;
    v40 = 1;
  }
  v56 = v40;
  v55 = v38;
  v57 = 0;
  v54 = 16LL;
  v53 = *a8;
  v52 = 16LL;
  v50 = 4LL;
  v41 = *a7;
  v49 = a6;
  v51 = v41;
  v42 = *a5;
  if ( *a5 )
  {
    do
      ++v25;
    while ( v42[v25] );
    v43 = v25 + 1;
  }
  else
  {
    v42 = &unk_1800F6C80;
    v43 = 1;
  }
  v46 = v42;
  v47 = v43;
  v48 = 0;
  return sub_180001548((__int64)&CallbackContext, a2, 0LL, 0LL, 0x17u, &v45);
}
