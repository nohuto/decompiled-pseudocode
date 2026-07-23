/*
 * XREFs of HvpGenerateLogEntryHeader @ 0x1404722CC
 * Callers:
 *     HvpGenerateLogEntry @ 0x140967718 (HvpGenerateLogEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     HvpHeaderCheckSum @ 0x140BBB7A0 (HvpHeaderCheckSum.c)
 */

void *__fastcall HvpGenerateLogEntryHeader(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        unsigned int *a5,
        int a6,
        int a7,
        char a8)
{
  _DWORD *v8; // r10
  _DWORD *v9; // rbx
  __int64 v11; // r11
  unsigned int v13; // esi
  _DWORD *v14; // r9
  __int64 v15; // rdx
  _OWORD *v16; // rax
  _OWORD *v17; // rcx
  __int128 v18; // xmm1
  int v19; // eax
  __int64 v20; // r9
  int v21; // r14d
  unsigned int v22; // ebp
  unsigned int v23; // r12d
  unsigned int v24; // eax
  unsigned int v25; // ebx
  void *result; // rax
  int v27; // [rsp+30h] [rbp-68h] BYREF
  int v28; // [rsp+34h] [rbp-64h]
  BOOL v29; // [rsp+38h] [rbp-60h]
  int v30; // [rsp+3Ch] [rbp-5Ch]
  int v31; // [rsp+40h] [rbp-58h]
  int v32; // [rsp+44h] [rbp-54h]
  __int128 v33; // [rsp+48h] [rbp-50h]

  v8 = (_DWORD *)(a1 + 172);
  v9 = (_DWORD *)(a1 + 280);
  v11 = a1 + 64;
  v13 = *a5;
  if ( a8 )
  {
    v14 = *(_DWORD **)(a2 + 8);
    v15 = 4LL;
    v16 = *(_OWORD **)v11;
    v17 = v14;
    do
    {
      *v17 = *v16;
      v17[1] = v16[1];
      v17[2] = v16[2];
      v17[3] = v16[3];
      v17[4] = v16[4];
      v17[5] = v16[5];
      v17[6] = v16[6];
      v17 += 8;
      v18 = v16[7];
      v16 += 8;
      *(v17 - 1) = v18;
      --v15;
    }
    while ( v15 );
    v14[1] = *v8;
    v14[2] = *v8;
    v14[7] = 6;
    v14[10] = *v9;
    v14[11] = 1;
    v19 = HvpHeaderCheckSum(v14);
    *(_DWORD *)(v20 + 508) = v19;
    v13 += 512;
  }
  v27 = 1162638920;
  v28 = a6;
  v33 = 0LL;
  if ( a8 )
    v28 = a6 - 512;
  v21 = 40;
  v22 = *a4;
  v30 = *v8;
  v23 = 0;
  v29 = (*(_BYTE *)(*(_QWORD *)v11 + 144LL) & 1) != 0;
  v31 = *v9;
  v32 = a7;
  do
  {
    while ( 1 )
    {
      v24 = v21;
      if ( v13 + v21 > *(_DWORD *)(a2 + 24LL * v22 + 16) )
        v24 = *(_DWORD *)(a2 + 24LL * v22 + 16) - v13;
      v25 = v24;
      result = memmove((void *)(*(_QWORD *)(a2 + 24LL * v22 + 8) + v13), (char *)&v27 + v23, v24);
      v23 += v25;
      v13 += v25;
      v21 -= v25;
      if ( v13 != *(_DWORD *)(a2 + 24LL * v22 + 16) )
        break;
      if ( !v21 )
        goto LABEL_12;
      ++v22;
      v13 = 0;
    }
  }
  while ( v21 );
LABEL_12:
  *a4 = v22;
  *a5 = v13;
  return result;
}
