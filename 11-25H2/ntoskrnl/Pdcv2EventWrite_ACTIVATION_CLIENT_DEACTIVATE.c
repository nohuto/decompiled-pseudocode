/*
 * XREFs of Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE @ 0x140424688
 * Callers:
 *     Pdcv2ActivationClientDeactivate @ 0x14096DDD8 (Pdcv2ActivationClientDeactivate.c)
 * Callees:
 *     McTemplateU0qqzr1qzr3qqxqpqqzr11q_EtwWriteTransfer @ 0x1404248D4 (McTemplateU0qqzr1qzr3qqxqpqqzr11q_EtwWriteTransfer.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x140426678 (_tlgCreate1Sz_wchar_t.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE(__int64 a1, _DWORD *a2, int a3)
{
  int v3; // r14d
  __int64 v4; // r9
  __int64 result; // rax
  const wchar_t *v6; // rdi
  char v7; // r11
  unsigned __int64 v9; // rsi
  int v10; // r13d
  int v11; // r8d
  const wchar_t *v12; // r15
  const wchar_t *v13; // r12
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // r11d
  int v17; // [rsp+80h] [rbp-80h] BYREF
  int v18; // [rsp+84h] [rbp-7Ch] BYREF
  int v19; // [rsp+88h] [rbp-78h] BYREF
  int v20; // [rsp+8Ch] [rbp-74h] BYREF
  int v21; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v22; // [rsp+98h] [rbp-68h] BYREF
  __int64 v23; // [rsp+A0h] [rbp-60h] BYREF
  char v24[32]; // [rsp+B0h] [rbp-50h] BYREF
  int *v25; // [rsp+D0h] [rbp-30h]
  __int64 v26; // [rsp+D8h] [rbp-28h]
  char v27[16]; // [rsp+E0h] [rbp-20h] BYREF
  char v28[16]; // [rsp+F0h] [rbp-10h] BYREF
  int *v29; // [rsp+100h] [rbp+0h]
  __int64 v30; // [rsp+108h] [rbp+8h]
  int *v31; // [rsp+110h] [rbp+10h]
  __int64 v32; // [rsp+118h] [rbp+18h]
  unsigned __int64 *v33; // [rsp+120h] [rbp+20h]
  __int64 v34; // [rsp+128h] [rbp+28h]
  __int64 *v35; // [rsp+130h] [rbp+30h]
  __int64 v36; // [rsp+138h] [rbp+38h]
  int *v37; // [rsp+140h] [rbp+40h]
  __int64 v38; // [rsp+148h] [rbp+48h]
  int *v39; // [rsp+150h] [rbp+50h]
  __int64 v40; // [rsp+158h] [rbp+58h]
  char v41[16]; // [rsp+160h] [rbp+60h] BYREF

  v3 = -1;
  v18 = a3;
  v4 = -1LL;
  v17 = -1;
  result = 0LL;
  v6 = &cchOriginalDestLength;
  v7 = a3;
  v9 = -1LL;
  v10 = -1;
  v11 = -1;
  v12 = &cchOriginalDestLength;
  v13 = &cchOriginalDestLength;
  if ( a2 )
  {
    v11 = a2[8];
    v6 = (const wchar_t *)(a2 + 30);
    v10 = a2[62];
    v3 = a2[63];
    v17 = v11;
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
  if ( (byte_140F046D2 & 0x40) != 0 )
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
  if ( v9 >= 0x3E8 && (unsigned int)dword_140E08758 > 5 )
  {
    v18 = v17;
    v26 = 4LL;
    v25 = &v18;
    tlgCreate1Sz_wchar_t(v27, v13);
    tlgCreate1Sz_wchar_t(v28, v12);
    v17 = v3;
    v29 = &v17;
    v30 = 4LL;
    v31 = &v19;
    v19 = v10;
    v33 = &v22;
    v35 = &v23;
    v37 = &v20;
    v39 = &v21;
    v32 = 4LL;
    v22 = v9;
    v34 = 8LL;
    v23 = a1;
    v36 = 8LL;
    v20 = v16;
    v38 = 4LL;
    v21 = 2;
    v40 = 4LL;
    tlgCreate1Sz_wchar_t(v41, v6);
    return tlgWriteTransfer_EtwWriteTransfer(&dword_140E08758, &byte_140050047, 0LL, 0LL, 12, v24);
  }
  return result;
}
