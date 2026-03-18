/*
 * XREFs of MiFindBestZeroingProcessor @ 0x14020E844
 * Callers:
 *     MiSelectBestZeroingProcessor @ 0x14020DD10 (MiSelectBestZeroingProcessor.c)
 *     MiBackgroundZeroLocalPages @ 0x14020F1F0 (MiBackgroundZeroLocalPages.c)
 *     MiAddZeroingThreads @ 0x140437118 (MiAddZeroingThreads.c)
 *     MiGetEngineBackgroundQualifications @ 0x14043764C (MiGetEngineBackgroundQualifications.c)
 * Callees:
 *     MiEngineAffinity @ 0x14020D884 (MiEngineAffinity.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031F360 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiReleaseSpinLockShared @ 0x140323610 (MiReleaseSpinLockShared.c)
 *     MiGetNextAffinityWalker @ 0x140418ACC (MiGetNextAffinityWalker.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiFindBestZeroingProcessor(__int64 a1, int *a2, __int64 a3, int a4)
{
  void **v6; // rsi
  __int64 v7; // r13
  __int64 v8; // r8
  __int64 v9; // r8
  _OWORD *v10; // rdx
  __int16 *v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // r15
  unsigned int v20; // r12d
  __int64 result; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r11
  unsigned int v25; // r9d
  unsigned int i; // r8d
  unsigned __int64 v27; // rsi
  void **v29; // [rsp+38h] [rbp-C8h]
  ULONG_PTR BugCheckParameter3; // [rsp+80h] [rbp-80h] BYREF
  char v31; // [rsp+88h] [rbp-78h]
  int v32; // [rsp+8Ch] [rbp-74h]
  _BYTE v33[368]; // [rsp+90h] [rbp-70h] BYREF

  memset_0(&BugCheckParameter3, 0, 0x178uLL);
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  v6 = MiEngineAffinity((__int64)a2);
  v29 = v6;
  v7 = *((unsigned int *)v6 + 2);
  v32 = *a2;
  LODWORD(BugCheckParameter3) = *(_DWORD *)(v8 + 56);
  HIDWORD(BugCheckParameter3) = *(_DWORD *)(v8 + 56);
  v31 = *((_BYTE *)a2 + 36);
  ExAcquireSpinLockSharedAtDpcLevel(&dword_140E2EA00);
  v9 = 2LL;
  v10 = v33;
  v11 = &word_140E2EA08;
  do
  {
    v12 = *((_OWORD *)v11 + 1);
    *v10 = *(_OWORD *)v11;
    v13 = *((_OWORD *)v11 + 2);
    v10[1] = v12;
    v14 = *((_OWORD *)v11 + 3);
    v10[2] = v13;
    v15 = *((_OWORD *)v11 + 4);
    v10[3] = v14;
    v16 = *((_OWORD *)v11 + 5);
    v10[4] = v15;
    v17 = *((_OWORD *)v11 + 6);
    v10[5] = v16;
    v18 = *((_OWORD *)v11 + 7);
    v11 += 64;
    v10[6] = v17;
    v10 += 8;
    *(v10 - 1) = v18;
    --v9;
  }
  while ( v9 );
  *(_QWORD *)v10 = *(_QWORD *)v11;
  LOBYTE(v10) = 17;
  MiReleaseSpinLockShared(&dword_140E2EA00, v10);
  v19 = 32LL * *a2;
  v20 = 0;
  result = 0xFFFFFFFFLL;
  *(_DWORD *)(a1 + 40) = 5;
  *(_DWORD *)(a1 + 44) = -1;
  *(_DWORD *)&v33[v19 + 268] = 0;
  *(_DWORD *)&v33[v19 + 288] = 0;
  *(_DWORD *)&v33[v19 + 292] = -1;
  while ( v20 < (unsigned int)v7 )
  {
    v22 = 0LL;
    if ( !(_DWORD)v7 )
      break;
    v23 = *((_QWORD *)a2 + 17);
    v24 = v7;
    do
    {
      if ( *(_DWORD *)(v23 + 40) )
      {
        v25 = *((unsigned __int16 *)v6 + 8);
        for ( i = 0; i < v25; ++i )
        {
          result = 2LL * i;
          if ( *(_QWORD *)(*(_QWORD *)(v23 + 8) + 16LL * i) )
            break;
        }
        if ( i != v25 )
        {
          if ( v22 )
          {
            result = *(unsigned int *)(v22 + 32);
            if ( *(_DWORD *)(v23 + 32) < (unsigned int)result )
              v22 = v23;
          }
          else
          {
            v22 = v23;
          }
        }
      }
      v23 += 48LL;
      --v24;
    }
    while ( v24 );
    if ( !v22 )
      break;
    result = 0xAAAAAAAAAAAAAAABuLL;
    v27 = 0xAAAAAAAAAAAAAAABuLL * ((v22 - *((_QWORD *)a2 + 17)) >> 4);
    if ( !*a2 )
    {
      *(_QWORD *)(a1 + 24) = -1LL;
      *(_DWORD *)(a1 + 44) = v27;
      *(_DWORD *)(a1 + 40) = 0;
      *(_WORD *)(a1 + 32) = 0;
      break;
    }
    memmove(*((void **)a2 + 20), *(const void **)(v22 + 8), 16LL * (unsigned int)a2[5]);
    *(_DWORD *)&v33[v19 + 272] = *((unsigned __int16 *)v29 + 8);
    *(_QWORD *)&v33[v19 + 280] = *((_QWORD *)a2 + 20);
    *(_DWORD *)&v33[v19 + 264] = 1;
    result = MiGetNextAffinityWalker((ULONG_PTR)&BugCheckParameter3);
    if ( (int)result < 0 )
      break;
    result = 0xFFFFFFFFLL;
    if ( *(int *)(a1 + 40) > 0 )
    {
      *(_OWORD *)a1 = 0LL;
      *(_OWORD *)(a1 + 16) = 0LL;
      *(_OWORD *)(a1 + 32) = 0LL;
      *(_QWORD *)(a1 + 48) = 0LL;
      *(_DWORD *)(a1 + 44) = v27;
    }
    if ( !*(_DWORD *)(a1 + 40) )
      break;
    v6 = v29;
    ++v20;
  }
  if ( *(_DWORD *)(a1 + 44) == -1 )
  {
    *(_DWORD *)(a1 + 40) = 5;
    if ( a4 )
      KeBugCheckEx(0x1Au, 0x6100uLL, 0LL, (ULONG_PTR)&BugCheckParameter3, 0LL);
  }
  return result;
}
