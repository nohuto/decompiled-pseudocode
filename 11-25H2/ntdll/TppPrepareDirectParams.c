/*
 * XREFs of TppPrepareDirectParams @ 0x18007F750
 * Callers:
 *     TppWorkerThread @ 0x18007DCB0 (TppWorkerThread.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1801661D0 (NtReleaseWorkerFactoryWorker.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall TppPrepareDirectParams(__int64 a1, __int64 a2, int a3, unsigned int a4, __int64 a5, char *a6)
{
  __int64 v6; // r14
  unsigned __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v10; // r8
  int v11; // r15d
  int v12; // eax
  __int64 v13; // r12
  unsigned int v14; // eax
  _OWORD *v15; // rcx
  __int64 v16; // r9
  _QWORD *v17; // rax
  bool v18; // r11
  bool v19; // bp
  signed __int64 v20; // rax
  unsigned __int8 v21; // di
  char v22; // si
  int v23; // r9d
  unsigned int v24; // r10d
  signed __int64 v25; // rtt
  __int64 result; // rax
  _QWORD *v27; // rdi
  volatile signed __int32 *v28; // rcx
  _QWORD *v29; // rdi
  _QWORD *v30; // rax
  _QWORD *v31; // rdx
  __int64 v32; // rax
  unsigned int v33; // ecx
  signed __int32 v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // ebp
  __int64 v37; // rdi
  __int64 v38; // rax
  unsigned int i; // ebp
  unsigned int v40; // edi
  _QWORD *v41; // rax
  unsigned __int64 v42; // rsi
  int v43; // ebp
  unsigned int v44; // edi
  unsigned int j; // esi
  __int64 v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rdx
  _QWORD *v49; // rcx
  __int64 *v50; // rax
  signed __int32 v51; // ett
  volatile signed __int64 *v52; // rcx
  _QWORD *v53; // rax
  _QWORD *v54; // rcx
  __int64 v55; // [rsp+0h] [rbp-A8h] BYREF
  unsigned int v56; // [rsp+20h] [rbp-88h]
  unsigned __int64 v57; // [rsp+28h] [rbp-80h]
  __int128 v58; // [rsp+30h] [rbp-78h] BYREF
  int v59; // [rsp+40h] [rbp-68h]
  volatile signed __int32 *v60; // [rsp+48h] [rbp-60h]
  _QWORD *v61; // [rsp+50h] [rbp-58h]
  _QWORD *v62; // [rsp+58h] [rbp-50h]
  _QWORD *v63; // [rsp+60h] [rbp-48h]
  unsigned __int8 v64; // [rsp+B0h] [rbp+8h]
  signed __int64 v65; // [rsp+B0h] [rbp+8h]
  char v66; // [rsp+B8h] [rbp+10h]

  v6 = a1 + 312;
  v7 = 0LL;
  v8 = a2;
  LOBYTE(a2) = 0;
  v59 = 0;
  v64 = 0;
  v66 = 0;
  v56 = 0;
  v10 = 0LL;
  v11 = 0;
  v58 = 0LL;
  if ( v8 == a1 + 312 )
  {
    v18 = *(_QWORD *)v6 != 0LL;
    v19 = *(_QWORD *)v6 == 0LL;
    goto LABEL_12;
  }
  *(_QWORD *)v6 = 0LL;
  *((_QWORD *)&v58 + 1) = &v58;
  *(_QWORD *)&v58 = &v58;
  v12 = a3;
  v13 = v8 + 56LL * a4;
  *(_DWORD *)(v13 + 8) = a3 + *(_DWORD *)(v13 + 8) - 1;
  do
  {
    v14 = v12 - 1;
    v15 = (_OWORD *)(v8 + 32LL * v14);
    LODWORD(v57) = v14;
    v16 = v14;
    v17 = *(_QWORD **)v15;
    v61 = v17;
    if ( v17 )
    {
      if ( (_BYTE)a2 )
      {
        v27 = (_QWORD *)(v8 + 56 * v16);
        v60 = (volatile signed __int32 *)(v17 + 4);
        memmove(v27, v15, 0x20uLL);
        v28 = v60;
        v27[6] = v13;
        RtlAcquireSRWLockExclusive(v28);
        v29 = v27 + 4;
        v30 = v61 + 5;
        v63 = v61 + 5;
        v31 = (_QWORD *)v61[6];
        v62 = (_QWORD *)v61[5];
        if ( (_QWORD *)*v31 != v61 + 5 )
          goto LABEL_32;
        v52 = (volatile signed __int64 *)v60;
        *v29 = v30;
        v29[1] = v31;
        *v31 = v29;
        v30[1] = v29;
        RtlReleaseSRWLockExclusive(v52);
        v10 = (unsigned int)++v59;
        if ( v62 == v63 )
        {
          v53 = (_QWORD *)*((_QWORD *)&v58 + 1);
          v54 = v61 + 2;
          if ( **((__int128 ***)&v58 + 1) != &v58 )
LABEL_32:
            __fastfail(3u);
          v61[3] = *((_QWORD *)&v58 + 1);
          *v54 = &v58;
          ++v11;
          *v53 = v54;
          *((_QWORD *)&v58 + 1) = v54;
        }
        a2 = v64;
      }
      else
      {
        LOBYTE(a2) = 1;
        v64 = 1;
        *(_OWORD *)v6 = *v15;
        *(_OWORD *)(v6 + 16) = v15[1];
      }
    }
    else
    {
      v66 = 1;
    }
    v12 = v57;
  }
  while ( (_DWORD)v57 );
  if ( (_DWORD)v10 != a3 - 1 && _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 8), 0xFFFFFFFF) == 1 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 3145728), *(_QWORD *)v13);
  if ( !v11 )
    goto LABEL_11;
  v32 = v58 - 16;
  v10 = (__int64)(&v55 + 4);
  v33 = -2;
  if ( (_QWORD)v58 - 16LL != v10 )
  {
    do
    {
      a2 = *(unsigned int *)(v32 + 8);
      v7 |= 1LL << a2;
      if ( v33 != -1 )
      {
        if ( v33 == -2 )
        {
          v33 = *(_DWORD *)(v32 + 8);
        }
        else if ( v33 != (_DWORD)a2 )
        {
          v33 = -1;
        }
      }
      v32 = *(_QWORD *)(v32 + 16) - 16LL;
    }
    while ( v32 != v10 );
  }
  _m_prefetchw((const void *)(a5 + 428));
  v34 = *(_DWORD *)(a5 + 428);
  do
  {
    if ( v34 == -2 )
    {
      a2 = v33;
      goto LABEL_61;
    }
    if ( v34 == v33 || v34 == -1 )
      break;
    a2 = 0xFFFFFFFFLL;
LABEL_61:
    v51 = v34;
    v34 = _InterlockedCompareExchange((volatile signed __int32 *)(a5 + 428), a2, v34);
  }
  while ( v51 != v34 );
  v57 = v7;
  if ( (_DWORD)v7 )
  {
    v35 = v7;
    v36 = v7;
    do
    {
      _BitScanForward((unsigned int *)&v37, v35);
      v38 = *(_QWORD *)(a5 + 24);
      v56 = v37;
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)(v38 + 8 * (v37 + 2 * (v37 + 1))));
      v35 = v36 & ~(1 << v37);
      v36 = v35;
    }
    while ( v35 );
  }
  for ( i = HIDWORD(v57); i; i &= ~(1 << v40) )
  {
    _BitScanForward(&v40, i);
    v56 = v40;
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(*(_QWORD *)(a5 + 24) + 8 * (v40 + 32 + 2 * (v40 + 32 + 1LL))));
  }
  while ( 1 )
  {
    v41 = (_QWORD *)v58;
    if ( (__int128 *)v58 == &v58 )
      break;
    v48 = *(_QWORD *)v58;
    if ( *(_QWORD *)(*(_QWORD *)v58 + 8LL) != (_QWORD)v58 )
      goto LABEL_32;
    v49 = *(_QWORD **)(v58 + 8);
    if ( *v49 != (_QWORD)v58 )
      goto LABEL_32;
    *v49 = v48;
    v10 = (__int64)v41;
    *(_QWORD *)(v48 + 8) = v49;
    a2 = *(_QWORD *)(a5 + 24) + 24LL * *((unsigned int *)v41 - 2);
    v50 = *(__int64 **)(a2 + 8);
    if ( *v50 != a2 )
      goto LABEL_32;
    *(_QWORD *)v10 = a2;
    *(_QWORD *)(v10 + 8) = v50;
    *v50 = v10;
    *(_QWORD *)(a2 + 8) = v10;
  }
  v57 = v7;
  v42 = HIDWORD(v7);
  if ( (_DWORD)v42 )
  {
    v43 = HIDWORD(v57);
    do
    {
      _BitScanReverse(&v44, v42);
      v56 = v44;
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(*(_QWORD *)(a5 + 24) + 8
                                                                                  * (v44 + 32 + 2 * (v44 + 32 + 1LL))));
      v43 &= ~(1 << v44);
      LODWORD(v42) = v43;
    }
    while ( v43 );
  }
  for ( j = v57; j; j &= ~(1 << v47) )
  {
    v46 = *(_QWORD *)(a5 + 24);
    _BitScanReverse((unsigned int *)&v47, j);
    v56 = v47;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v46 + 8 * (v47 + 2 * (v47 + 1))));
  }
LABEL_11:
  v18 = v64;
  v19 = v66;
LABEL_12:
  _m_prefetchw((const void *)(a5 + 8));
  v20 = *(_QWORD *)(a5 + 8);
  LODWORD(v65) = v20;
  do
  {
    v21 = *(_BYTE *)(a5 + 376);
    v22 = 0;
    v23 = v11 + HIDWORD(v20);
    LOBYTE(v10) = 0;
    HIDWORD(v65) = v11 + HIDWORD(v20);
    if ( !v21 )
    {
      a2 = (unsigned int)v65 & 0xFFFF0000;
      v24 = a2 | (unsigned __int16)(v65 - 1);
      LODWORD(v65) = v24;
      if ( v19 )
      {
        a2 = (HIWORD(v24) - 1) << 16;
        v24 = (unsigned __int16)v24 | ((HIWORD(v24) - 1) << 16);
        LODWORD(v65) = v24;
      }
      if ( !v18 )
      {
        if ( v23 )
        {
          HIDWORD(v65) = --v23;
        }
        else
        {
          v22 = 1;
          a2 = (unsigned int)((__int16)v24 + 1);
          v24 = a2 ^ (a2 ^ v24) & 0xFFFF0000;
          LODWORD(v65) = v24;
        }
      }
      if ( (v11 || v19) && v23 && (v24 & 0xFFFF0000) == 0 )
      {
        v10 = v24 + 0x10000;
        a2 = v10;
        LOBYTE(v10) = 1;
        LODWORD(v65) = v24 + 0x10000;
      }
    }
    v25 = v20;
    v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(a5 + 8), v65, v20);
    LODWORD(v65) = v20;
  }
  while ( v25 != v20 );
  if ( (_BYTE)v10 )
    NtReleaseWorkerFactoryWorker(*(_QWORD *)(a5 + 56), a2, v10);
  result = v21;
  *a6 = v22;
  return result;
}
