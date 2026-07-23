/*
 * XREFs of MiFindBestZeroingProcessor @ 0x1403313C8
 * Callers:
 *     MiBackgroundZeroLocalPages @ 0x140332260 (MiBackgroundZeroLocalPages.c)
 *     MiAddZeroingThreads @ 0x140413008 (MiAddZeroingThreads.c)
 *     MiGetEngineBackgroundQualifications @ 0x14041354C (MiGetEngineBackgroundQualifications.c)
 *     MiSelectBestZeroingProcessor @ 0x140413840 (MiSelectBestZeroingProcessor.c)
 * Callees:
 *     MiReleaseSpinLockShared @ 0x14020CFC0 (MiReleaseSpinLockShared.c)
 *     MiGetNextAffinityWalker @ 0x140271ED0 (MiGetNextAffinityWalker.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiEngineAffinity @ 0x14046C2B0 (MiEngineAffinity.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiFindBestZeroingProcessor(__int64 a1, int *a2, int a3, int a4)
{
  __int64 v6; // r8
  __int64 v7; // rdx
  int v8; // r14d
  __int64 v9; // rsi
  __int64 v10; // r13
  __int64 v11; // r8
  __int64 v12; // r8
  _OWORD *v13; // rdx
  __int16 *v14; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int64 v22; // r15
  unsigned int v23; // r12d
  __int64 result; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r11
  unsigned int v28; // r9d
  unsigned int i; // r8d
  unsigned __int64 v30; // rsi
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  bool v33; // cc
  __int64 v36; // [rsp+38h] [rbp-C8h]
  __int128 v37; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v38; // [rsp+50h] [rbp-B0h]
  __int128 v39; // [rsp+60h] [rbp-A0h]
  __int64 v40; // [rsp+70h] [rbp-90h]
  ULONG_PTR BugCheckParameter3; // [rsp+80h] [rbp-80h] BYREF
  char v42; // [rsp+88h] [rbp-78h]
  int v43; // [rsp+8Ch] [rbp-74h]
  _BYTE v44[368]; // [rsp+90h] [rbp-70h] BYREF

  memset_0(&BugCheckParameter3, 0, 0x178uLL);
  *(_OWORD *)a1 = 0LL;
  v40 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  v6 = *((_QWORD *)a2 + 22);
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v8 = 0;
  v9 = MiEngineAffinity(a2, v7, v6);
  v36 = v9;
  v10 = *(unsigned int *)(v9 + 8);
  v43 = *a2;
  LODWORD(BugCheckParameter3) = *(_DWORD *)(v11 + 56);
  HIDWORD(BugCheckParameter3) = *(_DWORD *)(v11 + 56);
  v42 = *((_BYTE *)a2 + 36);
  ExAcquireSpinLockSharedAtDpcLevel(&dword_140E2ED80);
  v12 = 2LL;
  v13 = v44;
  v14 = &word_140E2ED88;
  do
  {
    v15 = *((_OWORD *)v14 + 1);
    *v13 = *(_OWORD *)v14;
    v16 = *((_OWORD *)v14 + 2);
    v13[1] = v15;
    v17 = *((_OWORD *)v14 + 3);
    v13[2] = v16;
    v18 = *((_OWORD *)v14 + 4);
    v13[3] = v17;
    v19 = *((_OWORD *)v14 + 5);
    v13[4] = v18;
    v20 = *((_OWORD *)v14 + 6);
    v13[5] = v19;
    v21 = *((_OWORD *)v14 + 7);
    v14 += 64;
    v13[6] = v20;
    v13 += 8;
    *(v13 - 1) = v21;
    --v12;
  }
  while ( v12 );
  *(_QWORD *)v13 = *(_QWORD *)v14;
  MiReleaseSpinLockShared(&dword_140E2ED80, 0x11u, 0LL, 128LL);
  v22 = 32LL * *a2;
  v23 = 0;
  result = 0xFFFFFFFFLL;
  *(_DWORD *)(a1 + 40) = 5;
  *(_DWORD *)(a1 + 44) = -1;
  *(_DWORD *)&v44[v22 + 268] = 0;
  *(_DWORD *)&v44[v22 + 288] = 0;
  *(_DWORD *)&v44[v22 + 292] = -1;
  while ( v23 < (unsigned int)v10 )
  {
    v25 = 0LL;
    if ( !(_DWORD)v10 )
      break;
    v26 = *((_QWORD *)a2 + 17);
    v27 = v10;
    do
    {
      if ( *(_DWORD *)(v26 + 40) )
      {
        v28 = *(unsigned __int16 *)(v9 + 16);
        for ( i = 0; i < v28; ++i )
        {
          result = 2LL * i;
          if ( *(_QWORD *)(*(_QWORD *)(v26 + 8) + 16LL * i) )
            break;
        }
        if ( i != v28 )
        {
          if ( v25 )
          {
            result = *(unsigned int *)(v25 + 32);
            if ( *(_DWORD *)(v26 + 32) < (unsigned int)result )
              v25 = v26;
          }
          else
          {
            v25 = v26;
          }
        }
      }
      v26 += 48LL;
      --v27;
    }
    while ( v27 );
    if ( !v25 )
      break;
    result = 0xAAAAAAAAAAAAAAABuLL;
    v30 = 0xAAAAAAAAAAAAAAABuLL * ((v25 - *((_QWORD *)a2 + 17)) >> 4);
    if ( !*a2 )
    {
      *(_QWORD *)(a1 + 24) = -1LL;
      *(_DWORD *)(a1 + 44) = v30;
      *(_DWORD *)(a1 + 40) = 0;
      *(_WORD *)(a1 + 32) = 0;
      break;
    }
    memmove(*((void **)a2 + 20), *(const void **)(v25 + 8), 16LL * (unsigned int)a2[5]);
    *(_DWORD *)&v44[v22 + 272] = *(unsigned __int16 *)(v36 + 16);
    *(_QWORD *)&v44[v22 + 280] = *((_QWORD *)a2 + 20);
    *(_DWORD *)&v44[v22 + 264] = 1;
    result = MiGetNextAffinityWalker((ULONG_PTR)&BugCheckParameter3, (__int64)&v37);
    if ( (int)result < 0 )
      break;
    result = (unsigned int)(DWORD2(v39) - 1);
    if ( (result & 0xFFFFFFFD) != 0 || a3 )
    {
      if ( SDWORD2(v39) < *(_DWORD *)(a1 + 40) )
      {
        v31 = v38;
        *(_OWORD *)a1 = v37;
        v32 = v39;
        *(_OWORD *)(a1 + 16) = v31;
        *(_QWORD *)&v31 = v40;
        *(_OWORD *)(a1 + 32) = v32;
        *(_QWORD *)(a1 + 48) = v31;
        *(_DWORD *)(a1 + 44) = v30;
      }
      if ( !*(_DWORD *)(a1 + 40) )
        break;
    }
    else
    {
      result = (unsigned int)(1 << SBYTE8(v39));
      v8 |= result;
    }
    v9 = v36;
    ++v23;
  }
  if ( v8 )
  {
    if ( (v8 & 2) != 0 )
    {
      v33 = *(_DWORD *)(a1 + 40) <= 1;
    }
    else
    {
      if ( (v8 & 8) == 0 )
        goto LABEL_25;
      v33 = *(_DWORD *)(a1 + 40) <= 3;
    }
    if ( !v33 )
      ++a2[6];
  }
LABEL_25:
  if ( *(_DWORD *)(a1 + 44) == -1 )
  {
    *(_DWORD *)(a1 + 40) = 5;
    if ( a4 )
    {
      if ( !v8 )
        KeBugCheckEx(0x1Au, 0x6100uLL, 0LL, (ULONG_PTR)&BugCheckParameter3, 0LL);
    }
  }
  return result;
}
