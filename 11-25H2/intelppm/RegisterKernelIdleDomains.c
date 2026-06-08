/*
 * XREFs of RegisterKernelIdleDomains @ 0x14003E75C
 * Callers:
 *     RegisterKernelIdleStates @ 0x14003D3B0 (RegisterKernelIdleStates.c)
 * Callees:
 *     GetDevExtFromIndex @ 0x1400066F0 (GetDevExtFromIndex.c)
 *     __security_check_cookie @ 0x14000FEF0 (__security_check_cookie.c)
 *     memset @ 0x140010340 (memset.c)
 *     UpdateKernelIdleDomains @ 0x140028E2C (UpdateKernelIdleDomains.c)
 *     RegisterIdleDomain @ 0x140037C30 (RegisterIdleDomain.c)
 */

__int64 __fastcall RegisterKernelIdleDomains(_QWORD *a1)
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
  __int64 DevExtFromIndex; // rax
  int updated; // eax
  __m256i v24; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v25[272]; // [rsp+48h] [rbp-C0h] BYREF

  memset(&v24.m256i_u64[1], 0, 24);
  memset(v25, 0, 0x108uLL);
  v2 = (unsigned int *)a1[66];
  Pool2 = (unsigned int *)ExAllocatePool2(64LL, 32 * *v2 + 8, 1919119952LL);
  v4 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  a1[91] = Pool2;
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
  v7 = a1[89];
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
        v7 = a1[89];
        v8 = v24.m256i_i32[0];
      }
      v24.m256i_i32[0] = ++v8;
      v10 = v8;
    }
    while ( v8 < v9 );
  }
  if ( !a1[67] )
    return 0;
  KeInitializeAffinityEx2(v25, 32LL);
  v17 = (_DWORD *)a1[67];
  v18 = 0;
  v24.m256i_i32[0] = 0;
  if ( *v17 )
  {
    while ( 1 )
    {
      if ( !RegisterIdleDomain((__int64)a1, v18) )
        goto LABEL_22;
      v19 = v24.m256i_i32[0];
      v20 = *(_DWORD *)(a1[67] + 24 * (v24.m256i_u32[0] + 1LL));
      if ( v20 < *v4 )
        break;
LABEL_23:
      v21 = (unsigned int *)a1[67];
      v18 = v19 + 1;
      v24.m256i_i32[0] = v18;
      if ( v18 >= *v21 )
        goto LABEL_24;
    }
    KeOrAffinityEx2(*(_QWORD *)(32LL * v20 + a1[91] + 16) + 48LL, v25, v25);
LABEL_22:
    v19 = v24.m256i_i32[0];
    goto LABEL_23;
  }
LABEL_24:
  v15 = 0;
  KeInitializeEnumerationContext(&v24.m256i_u64[1], v25);
  while ( !(unsigned int)KeEnumerateNextProcessor(&v24, &v24.m256i_u64[1]) )
  {
    DevExtFromIndex = GetDevExtFromIndex(v24.m256i_u32[0]);
    updated = UpdateKernelIdleDomains(DevExtFromIndex);
    if ( updated < 0 )
      v15 = updated;
  }
  return v15;
}
