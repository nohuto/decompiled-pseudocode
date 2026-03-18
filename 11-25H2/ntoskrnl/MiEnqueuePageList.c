/*
 * XREFs of MiEnqueuePageList @ 0x14023E310
 * Callers:
 *     MiAddPageToInsertList @ 0x14023DD30 (MiAddPageToInsertList.c)
 * Callees:
 *     MiPageToChannel @ 0x14023EDC0 (MiPageToChannel.c)
 *     MiInsertPagesInList @ 0x14024F050 (MiInsertPagesInList.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

signed __int64 __fastcall MiEnqueuePageList(__int64 a1, ULONG_PTR a2)
{
  __int64 v2; // r15
  unsigned __int64 v5; // rdi
  __int64 v6; // r14
  unsigned int v7; // r10d
  unsigned __int64 v8; // r11
  int v9; // r9d
  int v10; // r10d
  unsigned int v11; // eax
  unsigned int v12; // r8d
  char v13; // dl
  unsigned __int64 v14; // r10
  __int64 v15; // r8
  signed __int64 result; // rax
  int v17; // eax
  signed __int64 v18; // rdx
  signed __int64 v19; // rax
  signed __int64 v20; // rdx
  signed __int64 v21; // rcx
  signed __int64 v22; // rax
  signed __int64 v23; // rdx
  signed __int64 v24; // rdx
  signed __int64 v25; // rcx
  __int64 v26; // rcx
  unsigned __int64 v27; // r9
  __int64 v28; // rax
  int v29; // ecx
  char *v30; // rax
  int i; // edx
  int v32; // r8d
  __int64 v33; // rdx
  int v34; // eax
  ULONG_PTR v35; // r14
  char *v36; // rcx
  int j; // r8d
  int v38; // r9d
  char v39; // r15
  char v40; // al
  ULONG_PTR v41; // r12
  ULONG_PTR v42; // r12
  signed __int64 v43; // rdx
  signed __int64 v44; // rax
  signed __int64 v45; // rdx
  signed __int64 v46; // rdx
  signed __int64 v47; // r8
  ULONG_PTR v48; // rcx
  ULONG_PTR v49; // rcx
  signed __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rax
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // r10
  __int64 v55; // rdx

  v2 = 48 * a2;
  v5 = 48 * a2 - 0x220000000000LL;
  if ( (*(_DWORD *)(a1 + 96) & 0xFFFFFFFD) == 0 )
  {
    v26 = *(_QWORD *)(v5 + 16);
    v27 = v5 + 16;
    if ( v5 + 16 >= 0xFFFFF6FB7DBED000uLL && v27 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v52 = *(_QWORD *)(v5 + 16);
      if ( (v26 & 1) != 0 && ((v26 & 0x42) == 0 || (v26 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          KernelWaitTime = Process[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v55 = *(_QWORD *)(KernelWaitTime + 8 * ((v27 >> 3) & 0x1FF));
            if ( (v55 & 0x20) != 0 )
              v52 = v26 | 0x20;
            v26 = v52 | 0x42;
            if ( (v55 & 0x42) == 0 )
              v26 = v52;
          }
        }
      }
    }
    v28 = -9LL;
    if ( (v26 & 0x400) != 0 )
      v28 = -2049LL;
    *(_QWORD *)v27 = v26 & v28;
  }
  if ( *(_QWORD *)a1 )
  {
    v6 = 48LL * *(_QWORD *)(a1 + 16);
    v7 = *(_DWORD *)(v5 + 32);
    v8 = v6 - 0x220000000000LL;
    v9 = 5;
    if ( (v7 & 0x8000000) == 0
      || v5 >= 0xFFFFDE0000000000uLL
      && v5 < 48 * qword_140E2D9A0 - 0x21FFFFFFFFD0LL
      && ((v48 = 0xAAAAAAAAAAAAAAABuLL * (v2 >> 4), v48 < qword_140E358C0) || v48 >= qword_140E358C0 + 2048)
      && ((BYTE2(v7) & 7) == 6
       || byte_140E3C8A6
       && (v49 = v48 >> 9, *(_BYTE *)(qword_140E3CF00 + 2 * v49))
       && *(_BYTE *)(qword_140E3CF00 + 2 * v49) != 10) )
    {
      v10 = HIBYTE(v7) & 7;
    }
    else
    {
      v10 = 5;
    }
    v11 = *(_DWORD *)(v8 + 32);
    v12 = HIWORD(v11);
    v13 = BYTE2(v11);
    if ( (v11 & 0x8000000) != 0 )
    {
      if ( v8 < 0xFFFFDE0000000000uLL )
        goto LABEL_7;
      if ( v8 >= 48 * qword_140E2D9A0 - 0x21FFFFFFFFD0LL )
        goto LABEL_7;
      v41 = 0xAAAAAAAAAAAAAAABuLL * (v6 >> 4);
      if ( v41 >= qword_140E358C0 && v41 < qword_140E358C0 + 2048 )
        goto LABEL_7;
      v13 = BYTE2(v11);
      if ( (BYTE2(v11) & 7) != 6 )
      {
        if ( !byte_140E3C8A6 )
          goto LABEL_7;
        v42 = v41 >> 9;
        if ( !*(_BYTE *)(qword_140E3CF00 + 2 * v42) || *(_BYTE *)(qword_140E3CF00 + 2 * v42) == 10 )
          goto LABEL_7;
        v13 = BYTE2(v11);
      }
    }
    LOBYTE(v12) = v13;
    v9 = HIBYTE(v11) & 7;
LABEL_7:
    if ( v10 != v9
      || ((*(_BYTE *)(v5 + 34) ^ (unsigned __int8)v12) & 0x10) != 0
      || ((*(_DWORD *)(v5 + 16) ^ *(_DWORD *)(v8 + 16)) & 0x400LL) != 0
      || *(__int64 *)(v5 + 40) < 0 != *(__int64 *)(v8 + 40) < 0 )
    {
      goto LABEL_50;
    }
    if ( *(_DWORD *)(a1 + 12) != 2 )
      goto LABEL_12;
    v29 = dword_140E2D884;
    if ( dword_140E2D880 > (unsigned int)dword_140E2D884
      || (v30 = (char *)qword_140E2D8E0 + 16 * dword_140E2D880, a2 < *(_QWORD *)v30)
      || dword_140E2D880 != dword_140E2D884 && a2 >= *((_QWORD *)v30 + 2) )
    {
      for ( i = 0; ; i = v32 + 1 )
      {
        while ( 1 )
        {
          if ( v29 < i )
            KeBugCheckEx(0x1Au, 0x5180uLL, a2, 0LL, 0LL);
          v32 = (i + v29) >> 1;
          v30 = (char *)qword_140E2D8E0 + 16 * v32;
          if ( a2 >= *(_QWORD *)v30 )
            break;
          if ( !v32 )
            KeBugCheckEx(0x1Au, 0x5180uLL, a2, (ULONG_PTR)qword_140E2D8E0, 0LL);
          v29 = v32 - 1;
        }
        if ( v32 == dword_140E2D884 || a2 < *((_QWORD *)v30 + 2) )
          break;
      }
      dword_140E2D880 = (i + v29) >> 1;
    }
    v33 = (unsigned int)dword_140E2D884;
    v34 = *((_DWORD *)v30 + 2);
    v35 = 0xAAAAAAAAAAAAAAABuLL * (v6 >> 4);
    if ( dword_140E2D880 > (unsigned int)dword_140E2D884
      || (v36 = (char *)qword_140E2D8E0 + 16 * dword_140E2D880, v35 < *(_QWORD *)v36)
      || dword_140E2D880 != dword_140E2D884 && v35 >= *((_QWORD *)v36 + 2) )
    {
      for ( j = 0; ; j = v38 + 1 )
      {
        while ( 1 )
        {
          if ( (int)v33 < j )
            KeBugCheckEx(0x1Au, 0x5180uLL, v35, 0LL, 0LL);
          v38 = (j + (int)v33) >> 1;
          v36 = (char *)qword_140E2D8E0 + 16 * v38;
          if ( v35 >= *(_QWORD *)v36 )
            break;
          if ( !v38 )
            KeBugCheckEx(0x1Au, 0x5180uLL, v35, (ULONG_PTR)qword_140E2D8E0, 0LL);
          v33 = (unsigned int)(v38 - 1);
        }
        if ( v38 == dword_140E2D884 || v35 < *((_QWORD *)v36 + 2) )
          break;
      }
      dword_140E2D880 = (j + (int)v33) >> 1;
    }
    if ( v34 != *((_DWORD *)v36 + 2) )
    {
LABEL_50:
      MiInsertPagesInList(a1, 1LL);
      goto LABEL_12;
    }
    if ( qword_140E2D8E8 )
    {
      v39 = MiPageToChannel(0xAAAAAAAAAAAAAAABuLL * (v2 >> 4), v33);
      if ( qword_140E2D8E8 )
      {
        v40 = MiPageToChannel(v35, v51);
LABEL_49:
        if ( v39 == v40 )
          goto LABEL_12;
        goto LABEL_50;
      }
    }
    else
    {
      v39 = 0;
    }
    v40 = 0;
    goto LABEL_49;
  }
LABEL_12:
  if ( *(_QWORD *)(a1 + 16) == 0x3FFFFFFFFFLL )
  {
    *(_DWORD *)(a1 + 12) = (*(_BYTE *)(v5 + 34) & 0x10 | 0x20u) >> 4;
    *(_QWORD *)(a1 + 16) = a2;
    *(_QWORD *)(a1 + 24) = a2;
    *(_QWORD *)v5 = *(_QWORD *)v5 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL;
    result = *(_QWORD *)(v5 + 24) & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL;
    *(_QWORD *)(v5 + 24) = result;
    if ( *(_DWORD *)(a1 + 12) == 2 )
    {
      *(_DWORD *)(v5 + 36) |= 0xFFE00000;
      *(_QWORD *)v5 |= 0xFFFFFF0000000000uLL;
      v43 = *(_QWORD *)(v5 + 40);
      v44 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v5 + 40),
              v43 & 0xF07FFFFFFFFFFFFFuLL | 0x380000000000000LL,
              v43);
      if ( v43 != v44 )
      {
        do
        {
          v45 = v44;
          v44 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v5 + 40),
                  v44 & 0xF07FFFFFFFFFFFFFuLL | 0x380000000000000LL,
                  v44);
        }
        while ( v45 != v44 );
      }
      v46 = *(_QWORD *)(v5 + 24);
      v47 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 24), v46 | 0x7FFFF0000000000LL, v46);
      if ( v46 != v47 )
      {
        do
        {
          v50 = v47;
          v47 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 24), v47 | 0x7FFFF0000000000LL, v47);
        }
        while ( v50 != v47 );
      }
      result = *(_DWORD *)(v5 + 36) & 0xFFE00000 | 0x7FFFF;
      *(_DWORD *)(v5 + 36) = result;
    }
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 24);
    v15 = 48 * v14 - 0x220000000000LL;
    *(_QWORD *)v15 = a2 ^ (a2 ^ *(_QWORD *)v15) & 0xFFFFFF0000000000uLL;
    *(_QWORD *)(v5 + 24) = v14 ^ (v14 ^ *(_QWORD *)(v5 + 24)) & 0xFFFFFF0000000000uLL;
    result = *(_QWORD *)v5 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL;
    *(_QWORD *)v5 = result;
    if ( *(_DWORD *)(a1 + 12) == 2 )
    {
      v17 = *(_DWORD *)(v15 + 36);
      *(_QWORD *)v15 = (a2 << 40) | *(_QWORD *)v15 & 0xFFFFFFFFFFLL;
      *(_DWORD *)(v15 + 36) = v17 & 0x1FFFFF | ((unsigned int)(a2 >> 24) << 21);
      v18 = *(_QWORD *)(v15 + 40);
      v19 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v15 + 40),
              (a2 << 20) ^ ((a2 << 20) ^ v18) & 0xF07FFFFFFFFFFFFFuLL,
              v18);
      if ( v18 != v19 )
      {
        do
        {
          v20 = v19;
          v19 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v15 + 40),
                  (a2 << 20) ^ (v19 ^ (a2 << 20)) & 0xF07FFFFFFFFFFFFFuLL,
                  v19);
        }
        while ( v20 != v19 );
      }
      v21 = *(_QWORD *)(v5 + 24);
      v22 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v5 + 24),
              (v14 << 40) ^ ((v14 << 40) ^ v21) & 0xF80000FFFFFFFFFFuLL,
              v21);
      if ( v21 != v22 )
      {
        do
        {
          v25 = v22;
          v22 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v5 + 24),
                  (v14 << 40) ^ ((v14 << 40) ^ v22) & 0xF80000FFFFFFFFFFuLL,
                  v22);
        }
        while ( v25 != v22 );
      }
      *(_QWORD *)v5 |= 0xFFFFFF0000000000uLL;
      *(_DWORD *)(v5 + 36) = (v14 >> 19) | 0xFFE00000;
      v23 = *(_QWORD *)(v5 + 40);
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)(v5 + 40),
                 v23 & 0xF07FFFFFFFFFFFFFuLL | 0x380000000000000LL,
                 v23);
      if ( v23 != result )
      {
        do
        {
          v24 = result;
          result = _InterlockedCompareExchange64(
                     (volatile signed __int64 *)(v5 + 40),
                     result & 0xF07FFFFFFFFFFFFFuLL | 0x380000000000000LL,
                     result);
        }
        while ( v24 != result );
      }
    }
    *(_QWORD *)(a1 + 24) = a2;
  }
  ++*(_QWORD *)a1;
  return result;
}
