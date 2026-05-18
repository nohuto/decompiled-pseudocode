/*
 * XREFs of sub_180001764 @ 0x180001764
 * Callers:
 *     sub_180022FE0 @ 0x180022FE0 (sub_180022FE0.c)
 * Callees:
 *     sub_180001548 @ 0x180001548 (sub_180001548.c)
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 */

ULONG __fastcall sub_180001764(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 *a7,
        void **a8,
        void **a9,
        void **a10,
        void **a11,
        void **a12)
{
  __int64 v12; // r8
  _BYTE *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  _BYTE *v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  _BYTE *v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  _BYTE *v22; // rcx
  __int64 v23; // rax
  int v24; // eax
  _BYTE *v25; // rcx
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rcx
  _BYTE *v29; // rcx
  int v30; // r8d
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+30h] [rbp-99h] BYREF
  _BYTE *v33; // [rsp+50h] [rbp-79h]
  int v34; // [rsp+58h] [rbp-71h]
  int v35; // [rsp+5Ch] [rbp-6Dh]
  __int64 v36; // [rsp+60h] [rbp-69h]
  __int64 v37; // [rsp+68h] [rbp-61h]
  __int64 v38; // [rsp+70h] [rbp-59h]
  __int64 v39; // [rsp+78h] [rbp-51h]
  _BYTE *v40; // [rsp+80h] [rbp-49h]
  int v41; // [rsp+88h] [rbp-41h]
  int v42; // [rsp+8Ch] [rbp-3Dh]
  _BYTE *v43; // [rsp+90h] [rbp-39h]
  int v44; // [rsp+98h] [rbp-31h]
  int v45; // [rsp+9Ch] [rbp-2Dh]
  _BYTE *v46; // [rsp+A0h] [rbp-29h]
  int v47; // [rsp+A8h] [rbp-21h]
  int v48; // [rsp+ACh] [rbp-1Dh]
  _BYTE *v49; // [rsp+B0h] [rbp-19h]
  int v50; // [rsp+B8h] [rbp-11h]
  int v51; // [rsp+BCh] [rbp-Dh]
  _BYTE *v52; // [rsp+C0h] [rbp-9h]
  int v53; // [rsp+C8h] [rbp-1h]
  int v54; // [rsp+CCh] [rbp+3h]

  v12 = -1LL;
  v13 = *a12;
  if ( *a12 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    v15 = v14 + 1;
  }
  else
  {
    v13 = &unk_1800F7C80;
    v15 = 1;
  }
  v53 = v15;
  v52 = v13;
  v54 = 0;
  v16 = *a11;
  if ( *a11 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( v16[v17] );
    v18 = v17 + 1;
  }
  else
  {
    v16 = &unk_1800F7C80;
    v18 = 1;
  }
  v50 = v18;
  v49 = v16;
  v51 = 0;
  v19 = *a10;
  if ( *a10 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( v19[v20] );
    v21 = v20 + 1;
  }
  else
  {
    v19 = &unk_1800F7C80;
    v21 = 1;
  }
  v47 = v21;
  v46 = v19;
  v48 = 0;
  v22 = *a9;
  if ( *a9 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( v22[v23] );
    v24 = v23 + 1;
  }
  else
  {
    v22 = &unk_1800F7C80;
    v24 = 1;
  }
  v44 = v24;
  v43 = v22;
  v45 = 0;
  v25 = *a8;
  if ( *a8 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( v25[v26] );
    v27 = v26 + 1;
  }
  else
  {
    v25 = &unk_1800F7C80;
    v27 = 1;
  }
  v41 = v27;
  v40 = v25;
  v42 = 0;
  v39 = 16LL;
  v28 = *a7;
  v36 = a6;
  v38 = v28;
  v37 = 4LL;
  v29 = *a5;
  if ( *a5 )
  {
    do
      ++v12;
    while ( v29[v12] );
    v30 = v12 + 1;
  }
  else
  {
    v29 = &unk_1800F7C80;
    v30 = 1;
  }
  v33 = v29;
  v34 = v30;
  v35 = 0;
  return sub_180001548((__int64)&CallbackContext, a2, 0LL, 0LL, 0xAu, &v32);
}
