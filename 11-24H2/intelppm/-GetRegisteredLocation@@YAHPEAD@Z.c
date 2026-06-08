/*
 * XREFs of ?GetRegisteredLocation@@YAHPEAD@Z @ 0x14003E85C
 * Callers:
 *     sub_14003D4B0 @ 0x14003D4B0 (sub_14003D4B0.c)
 * Callees:
 *     sub_140006700 @ 0x140006700 (sub_140006700.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     sub_140010680 @ 0x140010680 (sub_140010680.c)
 *     sub_140028E2C @ 0x140028E2C (sub_140028E2C.c)
 *     sub_140037D30 @ 0x140037D30 (sub_140037D30.c)
 */

__int64 __fastcall GetRegisteredLocation(char *a1)
{
  unsigned int *v2; // rdi
  unsigned int *Pool2; // rax
  unsigned int *v4; // rsi
  __int64 v5; // rax
  int v6; // r8d
  __int64 v7; // r8
  unsigned __int32 v8; // edx
  unsigned __int32 v9; // r10d
  __int64 v10; // rax
  unsigned int v11; // ecx
  __int64 v12; // r9
  __int64 v13; // r8
  unsigned int *v14; // rdx
  unsigned int v15; // ebx
  _DWORD *v17; // rax
  unsigned int v18; // edx
  __int32 v19; // edx
  unsigned int v20; // r8d
  unsigned int *v21; // rax
  __int64 v22; // rax
  int v23; // eax
  __m256i v24; // [rsp+28h] [rbp-E0h] BYREF
  char v25[272]; // [rsp+48h] [rbp-C0h] BYREF

  memset(&v24.m256i_u64[1], 0, 24);
  sub_140010680(v25, 0, 0x108uLL);
  v2 = (unsigned int *)*((_QWORD *)a1 + 66);
  Pool2 = (unsigned int *)ExAllocatePool2(64LL, 32 * *v2 + 8, 1919119952LL);
  v4 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  *((_QWORD *)a1 + 91) = Pool2;
  *Pool2 = *v2;
  v24.m256i_i32[0] = 0;
  if ( *v2 )
  {
    v5 = 0LL;
    v6 = 0;
    do
    {
      *(_QWORD *)&v4[8 * v6 + 2] = &v2[4 * v5 + 1 + v5];
      v5 = (unsigned int)(v24.m256i_i32[0] + 1);
      v24.m256i_i32[0] = v5;
      v6 = v5;
    }
    while ( (unsigned int)v5 < *v2 );
  }
  v7 = *((_QWORD *)a1 + 89);
  v8 = 0;
  v9 = *(_DWORD *)(v7 + 40);
  v24.m256i_i32[0] = 0;
  if ( v9 )
  {
    v10 = 0LL;
    do
    {
      v11 = 0;
      v12 = v7 + 88 * v10;
      if ( *v2 )
      {
        v13 = *(_QWORD *)(v12 + 48);
        do
        {
          v14 = &v4[8 * v11 + 2];
          if ( *(_QWORD *)v14 == v13 )
            *(_QWORD *)(v12 + 120) = v14;
          ++v11;
        }
        while ( v11 < *v2 );
        v7 = *((_QWORD *)a1 + 89);
        v8 = v24.m256i_i32[0];
      }
      v24.m256i_i32[0] = ++v8;
      v10 = v8;
    }
    while ( v8 < v9 );
  }
  if ( !*((_QWORD *)a1 + 67) )
    return 0;
  KeInitializeAffinityEx2(v25, 32LL);
  v17 = (_DWORD *)*((_QWORD *)a1 + 67);
  v18 = 0;
  v24.m256i_i32[0] = 0;
  if ( *v17 )
  {
    while ( 1 )
    {
      if ( !sub_140037D30((__int64)a1, v18) )
        goto LABEL_22;
      v19 = v24.m256i_i32[0];
      v20 = *(_DWORD *)(*((_QWORD *)a1 + 67) + 24 * (v24.m256i_u32[0] + 1LL));
      if ( v20 < *v4 )
        break;
LABEL_23:
      v21 = (unsigned int *)*((_QWORD *)a1 + 67);
      v18 = v19 + 1;
      v24.m256i_i32[0] = v18;
      if ( v18 >= *v21 )
        goto LABEL_24;
    }
    KeOrAffinityEx2(*(_QWORD *)(32LL * v20 + *((_QWORD *)a1 + 91) + 16) + 48LL, v25, v25);
LABEL_22:
    v19 = v24.m256i_i32[0];
    goto LABEL_23;
  }
LABEL_24:
  v15 = 0;
  KeInitializeEnumerationContext(&v24.m256i_u64[1], v25);
  while ( !(unsigned int)KeEnumerateNextProcessor(&v24, &v24.m256i_u64[1]) )
  {
    v22 = sub_140006700(v24.m256i_u32[0]);
    v23 = sub_140028E2C(v22);
    if ( v23 < 0 )
      v15 = v23;
  }
  return v15;
}
