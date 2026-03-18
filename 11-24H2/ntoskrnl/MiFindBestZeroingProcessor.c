/*
 * XREFs of MiFindBestZeroingProcessor @ 0x140209DE8
 * Callers:
 *     MiBackgroundZeroLocalPages @ 0x14020A480 (MiBackgroundZeroLocalPages.c)
 *     MiAddZeroingThreads @ 0x1403C73C8 (MiAddZeroingThreads.c)
 *     MiGetEngineBackgroundQualifications @ 0x1403C790C (MiGetEngineBackgroundQualifications.c)
 *     MiSelectBestZeroingProcessor @ 0x1403C7C00 (MiSelectBestZeroingProcessor.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140210120 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiReleaseSpinLockShared @ 0x140244830 (MiReleaseSpinLockShared.c)
 *     MiGetNextAffinityWalker @ 0x140416990 (MiGetNextAffinityWalker.c)
 *     MiEngineAffinity @ 0x1404716E0 (MiEngineAffinity.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiFindBestZeroingProcessor(__int64 a1, int *a2, __int64 a3, int a4)
{
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // r13
  __int64 v9; // r8
  __int64 v10; // r8
  _OWORD *v11; // rdx
  __int16 *v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int64 v20; // r15
  unsigned int v21; // r12d
  __int64 result; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r11
  unsigned int v26; // r9d
  unsigned int i; // r8d
  unsigned __int64 v28; // rsi
  __int64 v30; // [rsp+38h] [rbp-C8h]
  ULONG_PTR BugCheckParameter3; // [rsp+80h] [rbp-80h] BYREF
  char v32; // [rsp+88h] [rbp-78h]
  int v33; // [rsp+8Ch] [rbp-74h]
  _BYTE v34[368]; // [rsp+90h] [rbp-70h] BYREF

  memset_0(&BugCheckParameter3, 0, 0x178uLL);
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  v7 = MiEngineAffinity(a2, v6, *((_QWORD *)a2 + 22));
  v30 = v7;
  v8 = *(unsigned int *)(v7 + 8);
  v33 = *a2;
  LODWORD(BugCheckParameter3) = *(_DWORD *)(v9 + 56);
  HIDWORD(BugCheckParameter3) = *(_DWORD *)(v9 + 56);
  v32 = *((_BYTE *)a2 + 36);
  ExAcquireSpinLockSharedAtDpcLevel(&SpinLock);
  v10 = 2LL;
  v11 = v34;
  v12 = &word_140E2EC48;
  do
  {
    v13 = *((_OWORD *)v12 + 1);
    *v11 = *(_OWORD *)v12;
    v14 = *((_OWORD *)v12 + 2);
    v11[1] = v13;
    v15 = *((_OWORD *)v12 + 3);
    v11[2] = v14;
    v16 = *((_OWORD *)v12 + 4);
    v11[3] = v15;
    v17 = *((_OWORD *)v12 + 5);
    v11[4] = v16;
    v18 = *((_OWORD *)v12 + 6);
    v11[5] = v17;
    v19 = *((_OWORD *)v12 + 7);
    v12 += 64;
    v11[6] = v18;
    v11 += 8;
    *(v11 - 1) = v19;
    --v10;
  }
  while ( v10 );
  *(_QWORD *)v11 = *(_QWORD *)v12;
  LOBYTE(v11) = 17;
  MiReleaseSpinLockShared(&SpinLock, v11);
  v20 = 32LL * *a2;
  v21 = 0;
  result = 0xFFFFFFFFLL;
  *(_DWORD *)(a1 + 40) = 5;
  *(_DWORD *)(a1 + 44) = -1;
  *(_DWORD *)&v34[v20 + 268] = 0;
  *(_DWORD *)&v34[v20 + 288] = 0;
  *(_DWORD *)&v34[v20 + 292] = -1;
  while ( v21 < (unsigned int)v8 )
  {
    v23 = 0LL;
    if ( !(_DWORD)v8 )
      break;
    v24 = *((_QWORD *)a2 + 17);
    v25 = v8;
    do
    {
      if ( *(_DWORD *)(v24 + 40) )
      {
        v26 = *(unsigned __int16 *)(v7 + 16);
        for ( i = 0; i < v26; ++i )
        {
          result = 2LL * i;
          if ( *(_QWORD *)(*(_QWORD *)(v24 + 8) + 16LL * i) )
            break;
        }
        if ( i != v26 )
        {
          if ( v23 )
          {
            result = *(unsigned int *)(v23 + 32);
            if ( *(_DWORD *)(v24 + 32) < (unsigned int)result )
              v23 = v24;
          }
          else
          {
            v23 = v24;
          }
        }
      }
      v24 += 48LL;
      --v25;
    }
    while ( v25 );
    if ( !v23 )
      break;
    result = 0xAAAAAAAAAAAAAAABuLL;
    v28 = 0xAAAAAAAAAAAAAAABuLL * ((v23 - *((_QWORD *)a2 + 17)) >> 4);
    if ( !*a2 )
    {
      *(_QWORD *)(a1 + 24) = -1LL;
      *(_DWORD *)(a1 + 44) = v28;
      *(_DWORD *)(a1 + 40) = 0;
      *(_WORD *)(a1 + 32) = 0;
      break;
    }
    memmove(*((void **)a2 + 20), *(const void **)(v23 + 8), 16LL * (unsigned int)a2[5]);
    *(_DWORD *)&v34[v20 + 272] = *(unsigned __int16 *)(v30 + 16);
    *(_QWORD *)&v34[v20 + 280] = *((_QWORD *)a2 + 20);
    *(_DWORD *)&v34[v20 + 264] = 1;
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
      *(_DWORD *)(a1 + 44) = v28;
    }
    if ( !*(_DWORD *)(a1 + 40) )
      break;
    v7 = v30;
    ++v21;
  }
  if ( *(_DWORD *)(a1 + 44) == -1 )
  {
    *(_DWORD *)(a1 + 40) = 5;
    if ( a4 )
      KeBugCheckEx(0x1Au, 0x6100uLL, 0LL, (ULONG_PTR)&BugCheckParameter3, 0LL);
  }
  return result;
}
