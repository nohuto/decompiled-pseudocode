/*
 * XREFs of sub_1800029C0 @ 0x1800029C0
 * Callers:
 *     sub_1800210A0 @ 0x1800210A0 (sub_1800210A0.c)
 * Callees:
 *     sub_180001548 @ 0x180001548 (sub_180001548.c)
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 */

ULONG __fastcall sub_1800029C0(
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
        void **a11)
{
  __int64 v12; // rdx
  _BYTE *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  _BYTE *v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rcx
  _BYTE *v20; // rcx
  int v21; // edx
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+30h] [rbp-81h] BYREF
  _BYTE *v24; // [rsp+50h] [rbp-61h]
  int v25; // [rsp+58h] [rbp-59h]
  int v26; // [rsp+5Ch] [rbp-55h]
  __int64 v27; // [rsp+60h] [rbp-51h]
  __int64 v28; // [rsp+68h] [rbp-49h]
  __int64 v29; // [rsp+70h] [rbp-41h]
  __int64 v30; // [rsp+78h] [rbp-39h]
  __int64 v31; // [rsp+80h] [rbp-31h]
  __int64 v32; // [rsp+88h] [rbp-29h]
  __int64 v33; // [rsp+90h] [rbp-21h]
  __int64 v34; // [rsp+98h] [rbp-19h]
  _BYTE *v35; // [rsp+A0h] [rbp-11h]
  int v36; // [rsp+A8h] [rbp-9h]
  int v37; // [rsp+ACh] [rbp-5h]
  _BYTE *v38; // [rsp+B0h] [rbp-1h]
  int v39; // [rsp+B8h] [rbp+7h]
  int v40; // [rsp+BCh] [rbp+Bh]

  v12 = -1LL;
  v13 = *a11;
  if ( *a11 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    v15 = v14 + 1;
  }
  else
  {
    v13 = &unk_1800F6C80;
    v15 = 1;
  }
  v39 = v15;
  v38 = v13;
  v40 = 0;
  v16 = *a10;
  if ( *a10 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( v16[v17] );
    v18 = v17 + 1;
  }
  else
  {
    v16 = &unk_1800F6C80;
    v18 = 1;
  }
  v36 = v18;
  v35 = v16;
  v37 = 0;
  v34 = 16LL;
  v33 = *a9;
  v32 = 16LL;
  v30 = 16LL;
  v31 = *a8;
  v28 = 4LL;
  v19 = *a7;
  v27 = a6;
  v29 = v19;
  v20 = *a5;
  if ( *a5 )
  {
    do
      ++v12;
    while ( v20[v12] );
    v21 = v12 + 1;
  }
  else
  {
    v20 = &unk_1800F6C80;
    v21 = 1;
  }
  v24 = v20;
  v25 = v21;
  v26 = 0;
  return sub_180001548((__int64)&CallbackContext, a2, 0LL, 0LL, 9u, &v23);
}
