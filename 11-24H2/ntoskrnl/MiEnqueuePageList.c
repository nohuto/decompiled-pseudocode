/*
 * XREFs of MiEnqueuePageList @ 0x1402582B0
 * Callers:
 *     MiAddPageToInsertList @ 0x140257CC0 (MiAddPageToInsertList.c)
 * Callees:
 *     MiInsertPagesInList @ 0x140226A90 (MiInsertPagesInList.c)
 *     MiPageToChannel @ 0x140258D54 (MiPageToChannel.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
  __int64 v29; // rax
  int v30; // ecx
  char *v31; // rax
  int i; // edx
  int v33; // r8d
  __int64 v34; // rdx
  int v35; // eax
  ULONG_PTR v36; // r14
  char *v37; // rcx
  int j; // r8d
  int v39; // r9d
  char v40; // r15
  char v41; // al
  ULONG_PTR v42; // r12
  ULONG_PTR v43; // r12
  signed __int64 v44; // rdx
  signed __int64 v45; // rax
  signed __int64 v46; // rdx
  signed __int64 v47; // rdx
  signed __int64 v48; // r8
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // r10
  __int64 v51; // rdx
  ULONG_PTR v52; // rcx
  ULONG_PTR v53; // rcx
  signed __int64 v54; // rcx
  __int64 v55; // rdx

  v2 = 48 * a2;
  v5 = 48 * a2 - 0x220000000000LL;
  if ( (*(_DWORD *)(a1 + 96) & 0xFFFFFFFD) == 0 )
  {
    v26 = *(_QWORD *)(v5 + 16);
    v27 = v5 + 16;
    if ( v5 + 16 >= 0xFFFFF6FB7DBED000uLL && v27 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v28 = *(_QWORD *)(v5 + 16);
      if ( (v26 & 1) != 0 && ((v26 & 0x42) == 0 || (v26 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          KernelWaitTime = Process[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v51 = *(_QWORD *)(KernelWaitTime + 8 * ((v27 >> 3) & 0x1FF));
            if ( (v51 & 0x20) != 0 )
              v28 = v26 | 0x20;
            v26 = v28 | 0x42;
            if ( (v51 & 0x42) == 0 )
              v26 = v28;
          }
        }
      }
    }
    v29 = -9LL;
    if ( (v26 & 0x400) != 0 )
      v29 = -2049LL;
    *(_QWORD *)v27 = v26 & v29;
  }
  if ( *(_QWORD *)a1 )
  {
    v6 = 48LL * *(_QWORD *)(a1 + 16);
    v7 = *(_DWORD *)(v5 + 32);
    v8 = v6 - 0x220000000000LL;
    v9 = 5;
    if ( (v7 & 0x8000000) == 0
      || v5 >= 0xFFFFDE0000000000uLL
      && v5 < 48 * qword_140E2DD20 - 0x21FFFFFFFFD0LL
      && ((v52 = 0xAAAAAAAAAAAAAAABuLL * (v2 >> 4), v52 < qword_140E35C40) || v52 >= qword_140E35C40 + 2048)
      && ((BYTE2(v7) & 7) == 6
       || byte_140E3CC26
       && (v53 = v52 >> 9, *(_BYTE *)(qword_140E3D280 + 2 * v53))
       && *(_BYTE *)(qword_140E3D280 + 2 * v53) != 10) )
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
      if ( v8 >= 48 * qword_140E2DD20 - 0x21FFFFFFFFD0LL )
        goto LABEL_7;
      v42 = 0xAAAAAAAAAAAAAAABuLL * (v6 >> 4);
      if ( v42 >= qword_140E35C40 && v42 < qword_140E35C40 + 2048 )
        goto LABEL_7;
      v13 = BYTE2(v11);
      if ( (BYTE2(v11) & 7) != 6 )
      {
        if ( !byte_140E3CC26 )
          goto LABEL_7;
        v43 = v42 >> 9;
        if ( !*(_BYTE *)(qword_140E3D280 + 2 * v43) || *(_BYTE *)(qword_140E3D280 + 2 * v43) == 10 )
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
      goto LABEL_53;
    }
    if ( *(_DWORD *)(a1 + 12) != 2 )
      goto LABEL_12;
    v30 = dword_140E2DC04;
    if ( dword_140E2DC00 > (unsigned int)dword_140E2DC04
      || (v31 = (char *)qword_140E2DC60 + 16 * dword_140E2DC00, a2 < *(_QWORD *)v31)
      || dword_140E2DC00 != dword_140E2DC04 && a2 >= *((_QWORD *)v31 + 2) )
    {
      for ( i = 0; ; i = v33 + 1 )
      {
        while ( 1 )
        {
          if ( v30 < i )
            KeBugCheckEx(0x1Au, 0x5180uLL, a2, 0LL, 0LL);
          v33 = (i + v30) >> 1;
          v31 = (char *)qword_140E2DC60 + 16 * v33;
          if ( a2 >= *(_QWORD *)v31 )
            break;
          if ( !v33 )
            KeBugCheckEx(0x1Au, 0x5180uLL, a2, (ULONG_PTR)qword_140E2DC60, 0LL);
          v30 = v33 - 1;
        }
        if ( v33 == dword_140E2DC04 || a2 < *((_QWORD *)v31 + 2) )
          break;
      }
      dword_140E2DC00 = (i + v30) >> 1;
    }
    v34 = (unsigned int)dword_140E2DC04;
    v35 = *((_DWORD *)v31 + 2);
    v36 = 0xAAAAAAAAAAAAAAABuLL * (v6 >> 4);
    if ( dword_140E2DC00 > (unsigned int)dword_140E2DC04
      || (v37 = (char *)qword_140E2DC60 + 16 * dword_140E2DC00, v36 < *(_QWORD *)v37)
      || dword_140E2DC00 != dword_140E2DC04 && v36 >= *((_QWORD *)v37 + 2) )
    {
      for ( j = 0; ; j = v39 + 1 )
      {
        while ( 1 )
        {
          if ( (int)v34 < j )
            KeBugCheckEx(0x1Au, 0x5180uLL, v36, 0LL, 0LL);
          v39 = (j + (int)v34) >> 1;
          v37 = (char *)qword_140E2DC60 + 16 * v39;
          if ( v36 >= *(_QWORD *)v37 )
            break;
          if ( !v39 )
            KeBugCheckEx(0x1Au, 0x5180uLL, v36, (ULONG_PTR)qword_140E2DC60, 0LL);
          v34 = (unsigned int)(v39 - 1);
        }
        if ( v39 == dword_140E2DC04 || v36 < *((_QWORD *)v37 + 2) )
          break;
      }
      dword_140E2DC00 = (j + (int)v34) >> 1;
    }
    if ( v35 != *((_DWORD *)v37 + 2) )
    {
LABEL_53:
      MiInsertPagesInList((unsigned __int64 *)a1, 1);
      goto LABEL_12;
    }
    if ( qword_140E2DC68 )
    {
      v40 = MiPageToChannel(0xAAAAAAAAAAAAAAABuLL * (v2 >> 4), v34);
      if ( qword_140E2DC68 )
      {
        v41 = MiPageToChannel(v36, v55);
LABEL_52:
        if ( v40 == v41 )
          goto LABEL_12;
        goto LABEL_53;
      }
    }
    else
    {
      v40 = 0;
    }
    v41 = 0;
    goto LABEL_52;
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
      v44 = *(_QWORD *)(v5 + 40);
      v45 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v5 + 40),
              v44 & 0xF07FFFFFFFFFFFFFuLL | 0x380000000000000LL,
              v44);
      if ( v44 != v45 )
      {
        do
        {
          v46 = v45;
          v45 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v5 + 40),
                  v45 & 0xF07FFFFFFFFFFFFFuLL | 0x380000000000000LL,
                  v45);
        }
        while ( v46 != v45 );
      }
      v47 = *(_QWORD *)(v5 + 24);
      v48 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 24), v47 | 0x7FFFF0000000000LL, v47);
      if ( v47 != v48 )
      {
        do
        {
          v54 = v48;
          v48 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 24), v48 | 0x7FFFF0000000000LL, v48);
        }
        while ( v54 != v48 );
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
                  (a2 << 20) ^ ((a2 << 20) ^ v19) & 0xF07FFFFFFFFFFFFFuLL,
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
