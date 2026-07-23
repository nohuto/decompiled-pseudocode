/*
 * XREFs of EtwWriteErrorLogEntry @ 0x140A3FFE4
 * Callers:
 *     IopErrorLogThread @ 0x140A3FC00 (IopErrorLogThread.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x140326D30 (EtwpEventWriteFull.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall EtwWriteErrorLogEntry(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int16 a7,
        __int64 a8)
{
  __int16 v8; // r15
  __int64 v10; // r11
  _DWORD *v11; // rdx
  unsigned __int16 v12; // r14
  unsigned __int16 v13; // cx
  int v14; // eax
  char v15; // al
  unsigned __int16 v16; // ax
  __int64 v17; // r8
  __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // edi
  unsigned int v21; // edx
  unsigned int v22; // r9d
  __int64 v23; // rax
  unsigned int v24; // edi
  unsigned int v25; // esi
  unsigned __int16 v26; // r9
  __int64 v27; // r10
  unsigned int v28; // edi
  unsigned __int64 v29; // r8
  char *v30; // r11
  char *v31; // r10
  __int64 v32; // rcx
  __int64 v33; // rax
  unsigned int v34; // edi
  __int64 v35; // rax
  __int64 result; // rax
  unsigned __int16 v37; // [rsp+98h] [rbp-80h] BYREF
  __int16 v38; // [rsp+9Ch] [rbp-7Ch] BYREF
  unsigned int v39; // [rsp+A0h] [rbp-78h] BYREF
  _BYTE v40[40]; // [rsp+A8h] [rbp-70h] BYREF
  GUID v41; // [rsp+D0h] [rbp-48h]
  int v42; // [rsp+128h] [rbp+10h]
  char v43; // [rsp+12Ch] [rbp+14h]
  __int16 v44; // [rsp+12Eh] [rbp+16h]
  int v45; // [rsp+130h] [rbp+18h]
  __m128i si128; // [rsp+138h] [rbp+20h]
  __int64 v47; // [rsp+330h] [rbp+218h]
  int v48; // [rsp+358h] [rbp+240h] BYREF
  char v49; // [rsp+35Ch] [rbp+244h]
  char v50; // [rsp+35Dh] [rbp+245h]
  unsigned __int16 v51; // [rsp+35Eh] [rbp+246h]
  __int64 v52; // [rsp+360h] [rbp+248h]
  __int64 v53; // [rsp+368h] [rbp+250h] BYREF
  _QWORD v54[6]; // [rsp+370h] [rbp+258h]
  int v55; // [rsp+3A0h] [rbp+288h]
  int v56; // [rsp+3A4h] [rbp+28Ch]
  unsigned __int16 *v57; // [rsp+3A8h] [rbp+290h]
  __int64 v58; // [rsp+3B0h] [rbp+298h]
  __int64 v59; // [rsp+3B8h] [rbp+2A0h]
  int v60; // [rsp+3C0h] [rbp+2A8h]
  int v61; // [rsp+3C4h] [rbp+2ACh]

  v8 = IopErrorLogSession;
  v10 = a3;
  v11 = a2 + 6;
  v12 = 0;
  v13 = 0;
  v14 = *v11 >> 30;
  if ( v14 == 1 )
    v15 = 4;
  else
    v15 = (v14 == 2) + 2;
  v49 = v15;
  v16 = a2[4];
  v54[2] = 4LL;
  v17 = -1LL;
  v51 = v16;
  v18 = -1LL;
  v54[1] = v11;
  v48 = 0;
  v50 = 0;
  v52 = 0LL;
  v53 = a4;
  v54[0] = 8LL;
  do
    ++v18;
  while ( *(_WORD *)(a5 + 2 * v18) );
  v54[5] = a5;
  v19 = (unsigned __int16)(v18 + 1);
  v20 = 5;
  v38 = v19;
  v55 = 2 * v19;
  v57 = &a7;
  v54[3] = &v38;
  v54[4] = 2LL;
  v56 = 0;
  v58 = 2LL;
  if ( a7 )
  {
    v20 = 6;
    v59 = a8;
    v60 = a7;
    v61 = 0;
  }
  v21 = a2[1] + 40;
  v39 = v21;
  if ( v21 > (unsigned int)v10 )
  {
    v21 = v10;
    v39 = v10;
  }
  v22 = a2[2];
  if ( (_WORD)v22 && a2[3] < v21 )
    a2[3] = v21;
  v23 = 2LL * v20;
  v37 = 0;
  v24 = v20 + 1;
  v25 = v22;
  a2[2] = v22 + 1;
  v26 = 0;
  v54[v23 - 1] = &v37;
  v54[v23] = 2LL;
  v27 = 2LL * v24;
  v54[2 * v24 - 1] = a6;
  do
    ++v17;
  while ( *(_WORD *)(a6 + 2 * v17) );
  HIDWORD(v54[2 * v24]) = 0;
  v28 = v24 + 1;
  LODWORD(v54[v27]) = 2 * (unsigned __int16)(v17 + 1);
  if ( v25 )
  {
    v29 = ((unsigned __int64)a2 + a2[3] + 1) & 0xFFFFFFFFFFFFFFFEuLL;
    v30 = (char *)a2 + v10;
    do
    {
      v31 = (char *)(v29 + 2LL * v13);
      if ( v31 >= v30 )
        break;
      ++v13;
      if ( !*(_WORD *)v31 )
      {
        ++v26;
        v12 = v13;
        v37 = v26;
      }
    }
    while ( v26 < v25 );
    v32 = 2LL * v28++;
    v54[v32 - 1] = v29;
    LODWORD(v54[v32]) = 2 * v12;
    HIDWORD(v54[v32]) = 0;
  }
  v33 = 2LL * v28;
  v37 = v26 + 1;
  v34 = v28 + 1;
  v54[v33 - 1] = &v39;
  v54[v33] = 4LL;
  v35 = 2LL * v34;
  LODWORD(v54[v35]) = v21;
  v54[v35 - 1] = a2;
  HIDWORD(v54[v35]) = 0;
  memset_0(v40, 0, 0x2A8uLL);
  v47 = EtwpHostSiloState;
  v41 = LegacyEventLogGuid;
  v44 = v8;
  v42 = 1;
  v43 = -1;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v45 = 64;
  result = EtwpEventWriteFull(
             (__int64)v40,
             1u,
             0,
             0,
             (unsigned __int16 *)&v48,
             0,
             4,
             0LL,
             0LL,
             v34 + 1,
             (__int64)&v53,
             0LL,
             0LL,
             0LL,
             0,
             0LL,
             0LL);
  if ( (int)result < 0 )
    --a2[2];
  return result;
}
