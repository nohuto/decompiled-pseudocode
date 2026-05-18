/*
 * XREFs of sub_180002B14 @ 0x180002B14
 * Callers:
 *     sub_1800215E0 @ 0x1800215E0 (sub_1800215E0.c)
 * Callees:
 *     sub_180001548 @ 0x180001548 (sub_180001548.c)
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 */

ULONG __fastcall sub_180002B14(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 *a7,
        __int64 *a8,
        __int64 *a9,
        void **a10,
        void **a11,
        void **a12)
{
  __int64 v13; // rdx
  _BYTE *v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  _BYTE *v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  _BYTE *v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  _BYTE *v24; // rcx
  int v25; // edx
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+30h] [rbp-99h] BYREF
  _BYTE *v28; // [rsp+50h] [rbp-79h]
  int v29; // [rsp+58h] [rbp-71h]
  int v30; // [rsp+5Ch] [rbp-6Dh]
  __int64 v31; // [rsp+60h] [rbp-69h]
  __int64 v32; // [rsp+68h] [rbp-61h]
  __int64 v33; // [rsp+70h] [rbp-59h]
  __int64 v34; // [rsp+78h] [rbp-51h]
  __int64 v35; // [rsp+80h] [rbp-49h]
  __int64 v36; // [rsp+88h] [rbp-41h]
  __int64 v37; // [rsp+90h] [rbp-39h]
  __int64 v38; // [rsp+98h] [rbp-31h]
  _BYTE *v39; // [rsp+A0h] [rbp-29h]
  int v40; // [rsp+A8h] [rbp-21h]
  int v41; // [rsp+ACh] [rbp-1Dh]
  _BYTE *v42; // [rsp+B0h] [rbp-19h]
  int v43; // [rsp+B8h] [rbp-11h]
  int v44; // [rsp+BCh] [rbp-Dh]
  _BYTE *v45; // [rsp+C0h] [rbp-9h]
  int v46; // [rsp+C8h] [rbp-1h]
  int v47; // [rsp+CCh] [rbp+3h]

  v13 = -1LL;
  v14 = *a12;
  if ( *a12 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( v14[v15] );
    v16 = v15 + 1;
  }
  else
  {
    v14 = &unk_1800F7C80;
    v16 = 1;
  }
  v46 = v16;
  v45 = v14;
  v47 = 0;
  v17 = *a11;
  if ( *a11 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( v17[v18] );
    v19 = v18 + 1;
  }
  else
  {
    v17 = &unk_1800F7C80;
    v19 = 1;
  }
  v43 = v19;
  v42 = v17;
  v44 = 0;
  v20 = *a10;
  if ( *a10 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( v20[v21] );
    v22 = v21 + 1;
  }
  else
  {
    v20 = &unk_1800F7C80;
    v22 = 1;
  }
  v40 = v22;
  v39 = v20;
  v41 = 0;
  v38 = 16LL;
  v37 = *a9;
  v36 = 16LL;
  v34 = 16LL;
  v35 = *a8;
  v32 = 4LL;
  v23 = *a7;
  v31 = a6;
  v33 = v23;
  v24 = *a5;
  if ( *a5 )
  {
    do
      ++v13;
    while ( v24[v13] );
    v25 = v13 + 1;
  }
  else
  {
    v24 = &unk_1800F7C80;
    v25 = 1;
  }
  v28 = v24;
  v29 = v25;
  v30 = 0;
  return sub_180001548((__int64)&CallbackContext, a2, 0LL, 0LL, 0xAu, &v27);
}
