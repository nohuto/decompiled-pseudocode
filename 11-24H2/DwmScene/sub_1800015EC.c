/*
 * XREFs of sub_1800015EC @ 0x1800015EC
 * Callers:
 *     sub_180020E00 @ 0x180020E00 (sub_180020E00.c)
 * Callees:
 *     sub_180001548 @ 0x180001548 (sub_180001548.c)
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 */

ULONG __fastcall sub_1800015EC(
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
        void **a11)
{
  __int64 v11; // r8
  _BYTE *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  _BYTE *v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  _BYTE *v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  _BYTE *v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  _BYTE *v25; // rcx
  int v26; // r8d
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+30h] [rbp-81h] BYREF
  _BYTE *v29; // [rsp+50h] [rbp-61h]
  int v30; // [rsp+58h] [rbp-59h]
  int v31; // [rsp+5Ch] [rbp-55h]
  __int64 v32; // [rsp+60h] [rbp-51h]
  __int64 v33; // [rsp+68h] [rbp-49h]
  __int64 v34; // [rsp+70h] [rbp-41h]
  __int64 v35; // [rsp+78h] [rbp-39h]
  _BYTE *v36; // [rsp+80h] [rbp-31h]
  int v37; // [rsp+88h] [rbp-29h]
  int v38; // [rsp+8Ch] [rbp-25h]
  _BYTE *v39; // [rsp+90h] [rbp-21h]
  int v40; // [rsp+98h] [rbp-19h]
  int v41; // [rsp+9Ch] [rbp-15h]
  _BYTE *v42; // [rsp+A0h] [rbp-11h]
  int v43; // [rsp+A8h] [rbp-9h]
  int v44; // [rsp+ACh] [rbp-5h]
  _BYTE *v45; // [rsp+B0h] [rbp-1h]
  int v46; // [rsp+B8h] [rbp+7h]
  int v47; // [rsp+BCh] [rbp+Bh]

  v11 = -1LL;
  v12 = *a11;
  if ( *a11 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( v12[v13] );
    v14 = v13 + 1;
  }
  else
  {
    v12 = &unk_1800F7C80;
    v14 = 1;
  }
  v46 = v14;
  v45 = v12;
  v47 = 0;
  v15 = *a10;
  if ( *a10 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( v15[v16] );
    v17 = v16 + 1;
  }
  else
  {
    v15 = &unk_1800F7C80;
    v17 = 1;
  }
  v43 = v17;
  v42 = v15;
  v44 = 0;
  v18 = *a9;
  if ( *a9 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( v18[v19] );
    v20 = v19 + 1;
  }
  else
  {
    v18 = &unk_1800F7C80;
    v20 = 1;
  }
  v40 = v20;
  v39 = v18;
  v41 = 0;
  v21 = *a8;
  if ( *a8 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( v21[v22] );
    v23 = v22 + 1;
  }
  else
  {
    v21 = &unk_1800F7C80;
    v23 = 1;
  }
  v37 = v23;
  v36 = v21;
  v38 = 0;
  v35 = 16LL;
  v24 = *a7;
  v32 = a6;
  v34 = v24;
  v33 = 4LL;
  v25 = *a5;
  if ( *a5 )
  {
    do
      ++v11;
    while ( v25[v11] );
    v26 = v11 + 1;
  }
  else
  {
    v25 = &unk_1800F7C80;
    v26 = 1;
  }
  v29 = v25;
  v30 = v26;
  v31 = 0;
  return sub_180001548((__int64)&CallbackContext, a2, 0LL, 0LL, 9u, &v28);
}
