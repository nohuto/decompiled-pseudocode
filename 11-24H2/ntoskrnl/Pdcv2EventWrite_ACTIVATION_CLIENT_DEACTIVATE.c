/*
 * XREFs of Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE @ 0x1402B83F0
 * Callers:
 *     Pdcv2ActivationClientDeactivate @ 0x1409ED030 (Pdcv2ActivationClientDeactivate.c)
 * Callees:
 *     McTemplateU0qqzr1qzr3qqxqpqqzr11q_EtwWriteTransfer @ 0x1402B863C (McTemplateU0qqzr1qzr3qqxqpqqzr11q_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1402B92A8 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE(__int64 a1, unsigned int *a2, int a3)
{
  int v3; // r14d
  __int64 v4; // r9
  __int64 result; // rax
  const wchar_t *v6; // rdi
  char v7; // r11
  unsigned __int64 v9; // rsi
  int v10; // r13d
  __int64 v11; // r8
  const wchar_t *v12; // r15
  const wchar_t *v13; // r12
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r8
  int v17; // r11d
  __int64 v18; // r8
  int v19; // [rsp+80h] [rbp-80h] BYREF
  int v20; // [rsp+84h] [rbp-7Ch] BYREF
  int v21; // [rsp+88h] [rbp-78h] BYREF
  int v22; // [rsp+8Ch] [rbp-74h] BYREF
  int v23; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v24; // [rsp+98h] [rbp-68h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-60h] BYREF
  char v26[32]; // [rsp+B0h] [rbp-50h] BYREF
  int *v27; // [rsp+D0h] [rbp-30h]
  __int64 v28; // [rsp+D8h] [rbp-28h]
  char v29[16]; // [rsp+E0h] [rbp-20h] BYREF
  char v30[16]; // [rsp+F0h] [rbp-10h] BYREF
  int *v31; // [rsp+100h] [rbp+0h]
  __int64 v32; // [rsp+108h] [rbp+8h]
  int *v33; // [rsp+110h] [rbp+10h]
  __int64 v34; // [rsp+118h] [rbp+18h]
  unsigned __int64 *v35; // [rsp+120h] [rbp+20h]
  __int64 v36; // [rsp+128h] [rbp+28h]
  __int64 *v37; // [rsp+130h] [rbp+30h]
  __int64 v38; // [rsp+138h] [rbp+38h]
  int *v39; // [rsp+140h] [rbp+40h]
  __int64 v40; // [rsp+148h] [rbp+48h]
  int *v41; // [rsp+150h] [rbp+50h]
  __int64 v42; // [rsp+158h] [rbp+58h]
  char v43[16]; // [rsp+160h] [rbp+60h] BYREF

  v3 = -1;
  v20 = a3;
  v4 = -1LL;
  v19 = -1;
  result = 0LL;
  v6 = &cchOriginalDestLength;
  v7 = a3;
  v9 = -1LL;
  v10 = -1;
  v11 = 0xFFFFFFFFLL;
  v12 = &cchOriginalDestLength;
  v13 = &cchOriginalDestLength;
  if ( a2 )
  {
    v11 = a2[8];
    v6 = (const wchar_t *)(a2 + 30);
    v10 = a2[62];
    v3 = a2[63];
    v19 = a2[8];
  }
  if ( a1 )
  {
    v13 = (const wchar_t *)(a1 + 72);
    v12 = (const wchar_t *)(a1 + 328);
    result = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32) * (MEMORY[0xFFFFF78000000320] << 8);
    v9 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
       - *(_QWORD *)(a1 + 40);
  }
  if ( (byte_140F04D62 & 0x40) != 0 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v6[v14] );
    v15 = -1LL;
    do
      ++v15;
    while ( v12[v15] );
    do
      ++v4;
    while ( v13[v4] );
    result = McTemplateU0qqzr1qzr3qqxqpqqzr11q_EtwWriteTransfer(
               v14,
               0,
               v11,
               v4,
               (__int64)v13,
               v15,
               (__int64)v12,
               v3,
               v10,
               v9,
               v7,
               a1);
  }
  if ( v9 >= 0x3E8 && (unsigned int)dword_140E088A8 > 5 )
  {
    v20 = v19;
    v28 = 4LL;
    v27 = &v20;
    tlgCreate1Sz_wchar_t(v29, v13, v11);
    tlgCreate1Sz_wchar_t(v30, v12, v16);
    v19 = v3;
    v31 = &v19;
    v32 = 4LL;
    v33 = &v21;
    v21 = v10;
    v35 = &v24;
    v37 = &v25;
    v39 = &v22;
    v41 = &v23;
    v34 = 4LL;
    v24 = v9;
    v36 = 8LL;
    v25 = a1;
    v38 = 8LL;
    v22 = v17;
    v40 = 4LL;
    v23 = 2;
    v42 = 4LL;
    tlgCreate1Sz_wchar_t(v43, v6, v18);
    return tlgWriteTransfer_EtwWriteTransfer(&dword_140E088A8, byte_140051F6B, 0LL, 0LL, 12, v26);
  }
  return result;
}
