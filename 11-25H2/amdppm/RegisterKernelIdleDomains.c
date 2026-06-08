/*
 * XREFs of RegisterKernelIdleDomains @ 0x140040420
 * Callers:
 *     RegisterKernelIdleStates @ 0x140034BC0 (RegisterKernelIdleStates.c)
 * Callees:
 *     GetDevExtFromIndex @ 0x1400019B0 (GetDevExtFromIndex.c)
 *     __security_check_cookie @ 0x14000D660 (__security_check_cookie.c)
 *     memset @ 0x14000DAC0 (memset.c)
 *     RegisterIdleDomain @ 0x140034510 (RegisterIdleDomain.c)
 *     UpdateKernelIdleDomains @ 0x1400362A4 (UpdateKernelIdleDomains.c)
 */

__int64 __fastcall RegisterKernelIdleDomains(_QWORD *a1)
{
  unsigned int *v2; // rdi
  unsigned int *Pool2; // rax
  unsigned int *v4; // rsi
  unsigned int v5; // ebx
  __int64 v6; // rax
  int v7; // r8d
  __int64 v8; // r8
  unsigned __int32 v9; // edx
  unsigned __int32 v10; // r10d
  __int64 v11; // rax
  unsigned int v12; // ecx
  __int64 v13; // r9
  __int64 v14; // r8
  unsigned int *v15; // rdx
  _DWORD *v16; // rax
  unsigned int v17; // edx
  __int32 v18; // edx
  unsigned int v19; // r8d
  unsigned int *v20; // rax
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
    v6 = 0LL;
    v7 = 0;
    do
    {
      *(_QWORD *)&v4[8 * v7 + 2] = &v2[4 * v6 + 1 + v6];
      v6 = (unsigned int)(v24.m256i_i32[0] + 1);
      v24.m256i_i32[0] = v6;
      v7 = v6;
    }
    while ( (unsigned int)v6 < *v2 );
  }
  v8 = a1[89];
  v9 = 0;
  v10 = *(_DWORD *)(v8 + 40);
  v24.m256i_i32[0] = 0;
  if ( v10 )
  {
    v11 = 0LL;
    do
    {
      v12 = 0;
      v13 = v8 + 88 * v11;
      if ( *v2 )
      {
        v14 = *(_QWORD *)(v13 + 48);
        do
        {
          v15 = &v4[8 * v12 + 2];
          if ( *(_QWORD *)v15 == v14 )
            *(_QWORD *)(v13 + 120) = v15;
          ++v12;
        }
        while ( v12 < *v2 );
        v8 = a1[89];
        v9 = v24.m256i_i32[0];
      }
      v24.m256i_i32[0] = ++v9;
      v11 = v9;
    }
    while ( v9 < v10 );
  }
  if ( !a1[67] )
    return 0;
  KeInitializeAffinityEx2(v25, 32LL);
  v16 = (_DWORD *)a1[67];
  v17 = 0;
  v24.m256i_i32[0] = 0;
  if ( *v16 )
  {
    while ( 1 )
    {
      if ( !RegisterIdleDomain((__int64)a1, v17) )
        goto LABEL_21;
      v18 = v24.m256i_i32[0];
      v19 = *(_DWORD *)(a1[67] + 24 * (v24.m256i_u32[0] + 1LL));
      if ( v19 < *v4 )
        break;
LABEL_22:
      v20 = (unsigned int *)a1[67];
      v17 = v18 + 1;
      v24.m256i_i32[0] = v17;
      if ( v17 >= *v20 )
        goto LABEL_23;
    }
    KeOrAffinityEx2(*(_QWORD *)(32LL * v19 + a1[91] + 16) + 48LL, v25, v25);
LABEL_21:
    v18 = v24.m256i_i32[0];
    goto LABEL_22;
  }
LABEL_23:
  v5 = 0;
  KeInitializeEnumerationContext(&v24.m256i_u64[1], v25);
  while ( !(unsigned int)KeEnumerateNextProcessor(&v24, &v24.m256i_u64[1]) )
  {
    DevExtFromIndex = GetDevExtFromIndex(v24.m256i_u32[0]);
    updated = UpdateKernelIdleDomains(DevExtFromIndex);
    if ( updated < 0 )
      v5 = updated;
  }
  return v5;
}
