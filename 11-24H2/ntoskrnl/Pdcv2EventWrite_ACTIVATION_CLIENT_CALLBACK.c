/*
 * XREFs of Pdcv2EventWrite_ACTIVATION_CLIENT_CALLBACK @ 0x1406050B8
 * Callers:
 *     Pdcv2pActivationClientCallback @ 0x14078DC20 (Pdcv2pActivationClientCallback.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x1402B92A8 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     McTemplateU0qqzr1qzr3qqqxqpqqqzr13q_EtwWriteTransfer @ 0x140604D10 (McTemplateU0qqzr1qzr3qqqxqpqqqzr13q_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Pdcv2EventWrite_ACTIVATION_CLIENT_CALLBACK(__int64 a1, _DWORD *a2, unsigned int a3, int a4)
{
  int v4; // esi
  __int64 v5; // r9
  NTSTATUS result; // eax
  const wchar_t *v7; // rdi
  __int64 v9; // r14
  int v10; // r13d
  int v11; // r11d
  int v12; // r8d
  int v13; // r10d
  const wchar_t *v14; // r15
  const wchar_t *v15; // r12
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // [rsp+70h] [rbp-A0h]
  int v19; // [rsp+90h] [rbp-80h] BYREF
  unsigned int v20; // [rsp+94h] [rbp-7Ch] BYREF
  int v21; // [rsp+98h] [rbp-78h] BYREF
  int v22; // [rsp+9Ch] [rbp-74h] BYREF
  int v23; // [rsp+A0h] [rbp-70h] BYREF
  int v24; // [rsp+A4h] [rbp-6Ch] BYREF
  int v25; // [rsp+A8h] [rbp-68h] BYREF
  __int64 v26; // [rsp+B0h] [rbp-60h] BYREF
  __int64 v27; // [rsp+B8h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+C0h] [rbp-50h] BYREF
  int *v29; // [rsp+E0h] [rbp-30h]
  __int64 v30; // [rsp+E8h] [rbp-28h]
  char v31[16]; // [rsp+F0h] [rbp-20h] BYREF
  char v32[16]; // [rsp+100h] [rbp-10h] BYREF
  unsigned int *v33; // [rsp+110h] [rbp+0h]
  __int64 v34; // [rsp+118h] [rbp+8h]
  int *v35; // [rsp+120h] [rbp+10h]
  __int64 v36; // [rsp+128h] [rbp+18h]
  int *v37; // [rsp+130h] [rbp+20h]
  __int64 v38; // [rsp+138h] [rbp+28h]
  int *v39; // [rsp+140h] [rbp+30h]
  __int64 v40; // [rsp+148h] [rbp+38h]
  __int64 *v41; // [rsp+150h] [rbp+40h]
  __int64 v42; // [rsp+158h] [rbp+48h]
  __int64 *v43; // [rsp+160h] [rbp+50h]
  __int64 v44; // [rsp+168h] [rbp+58h]
  int *v45; // [rsp+170h] [rbp+60h]
  __int64 v46; // [rsp+178h] [rbp+68h]
  int *v47; // [rsp+180h] [rbp+70h]
  __int64 v48; // [rsp+188h] [rbp+78h]
  char v49[16]; // [rsp+190h] [rbp+80h] BYREF

  v4 = -1;
  v22 = a4;
  v5 = -1LL;
  v20 = a3;
  result = 0;
  v19 = -1;
  v21 = -1;
  v7 = &cchOriginalDestLength;
  v9 = -1LL;
  v10 = -1;
  LOBYTE(v11) = 0;
  v12 = -1;
  LOBYTE(v13) = -1;
  v14 = &cchOriginalDestLength;
  v15 = &cchOriginalDestLength;
  if ( a2 )
  {
    v12 = a2[8];
    v7 = (const wchar_t *)(a2 + 30);
    v10 = a2[62];
    v4 = a2[63];
    v19 = v12;
  }
  if ( a1 )
  {
    v13 = *(_DWORD *)(a1 + 64);
    v15 = (const wchar_t *)(a1 + 72);
    v21 = v13;
    v14 = (const wchar_t *)(a1 + 328);
    v11 = *(_DWORD *)(a1 + 584);
    result = 0;
    v9 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
       - *(_QWORD *)(a1 + 40);
  }
  if ( (byte_140F04D62 & 0x40) != 0 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( v7[v16] );
    v17 = -1LL;
    do
      ++v17;
    while ( v14[v17] );
    do
      ++v5;
    while ( v15[v5] );
    result = McTemplateU0qqzr1qzr3qqqxqpqqqzr13q_EtwWriteTransfer(
               v20,
               0LL,
               v12,
               v5,
               (__int64)v15,
               v17,
               (__int64)v14,
               v20,
               v4,
               v10,
               v9,
               v22,
               a1,
               v13,
               v18,
               v16,
               (__int64)v7,
               v11);
  }
  if ( (unsigned int)dword_140E088A8 > 5 )
  {
    v30 = 4LL;
    v29 = &v19;
    tlgCreate1Sz_wchar_t((__int64)v31, v15);
    tlgCreate1Sz_wchar_t((__int64)v32, v14);
    v34 = 4LL;
    v33 = &v20;
    v35 = &v23;
    v37 = &v24;
    v39 = &v21;
    v41 = &v26;
    v43 = &v27;
    v45 = &v22;
    v47 = &v25;
    v23 = v4;
    v36 = 4LL;
    v24 = v10;
    v38 = 4LL;
    v40 = 4LL;
    v26 = v9;
    v42 = 8LL;
    v27 = a1;
    v44 = 8LL;
    v46 = 4LL;
    v25 = 2;
    v48 = 4LL;
    tlgCreate1Sz_wchar_t((__int64)v49, v7);
    return tlgWriteTransfer_EtwWriteTransfer(
             (__int64)&dword_140E088A8,
             (unsigned __int8 *)word_140052012,
             0LL,
             0LL,
             0xEu,
             &v28);
  }
  return result;
}
