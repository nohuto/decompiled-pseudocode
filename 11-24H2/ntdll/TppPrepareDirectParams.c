/*
 * XREFs of TppPrepareDirectParams @ 0x180051D70
 * Callers:
 *     TppWorkerThread @ 0x1800502D0 (TppWorkerThread.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     NtReleaseWorkerFactoryWorker @ 0x180163000 (NtReleaseWorkerFactoryWorker.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 __fastcall TppPrepareDirectParams(__int64 a1, __int64 a2, int a3, unsigned int a4, __int64 a5, char *a6)
{
  __int64 v6; // r14
  unsigned __int64 v7; // rsi
  char v9; // dl
  int v11; // r8d
  int v12; // r15d
  int v13; // eax
  unsigned __int64 v14; // r12
  unsigned int v15; // eax
  _OWORD *v16; // rcx
  __int64 v17; // r9
  _RTL_SRWLOCK *v18; // rax
  bool v19; // r11
  bool v20; // bp
  signed __int64 v21; // rax
  unsigned __int8 v22; // di
  char v23; // si
  int v24; // r9d
  char v25; // r8
  unsigned int v26; // r10d
  signed __int64 v27; // rtt
  __int64 result; // rax
  unsigned __int64 *v29; // rdi
  _RTL_SRWLOCK *v30; // rcx
  unsigned __int64 *v31; // rdi
  _QWORD *v32; // rax
  unsigned __int64 **v33; // rdx
  __int64 v34; // rax
  _QWORD *v35; // r8
  int v36; // ecx
  int v37; // edx
  signed __int32 v38; // eax
  unsigned int v39; // eax
  unsigned int v40; // ebp
  __int64 v41; // rdi
  __int64 v42; // rax
  unsigned int i; // ebp
  unsigned int v44; // edi
  __int64 *v45; // rax
  unsigned __int64 v46; // rsi
  int v47; // ebp
  unsigned int v48; // edi
  unsigned int j; // esi
  __int64 v50; // rax
  __int64 v51; // rdi
  __int64 v52; // rdx
  _QWORD *v53; // rcx
  __int64 *v54; // r8
  __int64 v55; // rdx
  __int64 **v56; // rax
  signed __int32 v57; // edx
  signed __int32 v58; // ett
  _RTL_SRWLOCK *v59; // rcx
  _QWORD *v60; // rax
  _QWORD *v61; // rcx
  __int64 v62; // [rsp+0h] [rbp-A8h] BYREF
  unsigned int v63; // [rsp+20h] [rbp-88h]
  unsigned __int64 v64; // [rsp+28h] [rbp-80h]
  __int128 v65; // [rsp+30h] [rbp-78h] BYREF
  int v66; // [rsp+40h] [rbp-68h]
  PRTL_SRWLOCK SRWLock; // [rsp+48h] [rbp-60h]
  unsigned __int64 *v68; // [rsp+50h] [rbp-58h]
  _QWORD *v69; // [rsp+58h] [rbp-50h]
  _QWORD *v70; // [rsp+60h] [rbp-48h]
  char v71; // [rsp+B0h] [rbp+8h]
  signed __int64 v72; // [rsp+B0h] [rbp+8h]
  char v73; // [rsp+B8h] [rbp+10h]

  v6 = a1 + 312;
  v7 = 0LL;
  v9 = 0;
  v66 = 0;
  v71 = 0;
  v73 = 0;
  v63 = 0;
  v11 = 0;
  v12 = 0;
  v65 = 0LL;
  if ( a2 == a1 + 312 )
  {
    v19 = *(_QWORD *)v6 != 0LL;
    v20 = *(_QWORD *)v6 == 0LL;
    goto LABEL_12;
  }
  *(_QWORD *)v6 = 0LL;
  *((_QWORD *)&v65 + 1) = &v65;
  *(_QWORD *)&v65 = &v65;
  v13 = a3;
  v14 = a2 + 56LL * a4;
  *(_DWORD *)(v14 + 8) = a3 + *(_DWORD *)(v14 + 8) - 1;
  do
  {
    v15 = v13 - 1;
    v16 = (_OWORD *)(a2 + 32LL * v15);
    LODWORD(v64) = v15;
    v17 = v15;
    v18 = *(_RTL_SRWLOCK **)v16;
    v68 = (unsigned __int64 *)v18;
    if ( v18 )
    {
      if ( v9 )
      {
        v29 = (unsigned __int64 *)(a2 + 56 * v17);
        SRWLock = v18 + 4;
        memmove(v29, v16, 0x20uLL);
        v30 = SRWLock;
        v29[6] = v14;
        RtlAcquireSRWLockExclusive(v30);
        v31 = v29 + 4;
        v32 = v68 + 5;
        v70 = v68 + 5;
        v33 = (unsigned __int64 **)v68[6];
        v69 = (_QWORD *)v68[5];
        if ( *v33 != v68 + 5 )
          goto LABEL_32;
        v59 = SRWLock;
        *v31 = (unsigned __int64)v32;
        v31[1] = (unsigned __int64)v33;
        *v33 = v31;
        v32[1] = v31;
        RtlReleaseSRWLockExclusive(v59);
        v11 = ++v66;
        if ( v69 == v70 )
        {
          v60 = (_QWORD *)*((_QWORD *)&v65 + 1);
          v61 = v68 + 2;
          if ( **((__int128 ***)&v65 + 1) != &v65 )
LABEL_32:
            __fastfail(3u);
          v68[3] = *((_QWORD *)&v65 + 1);
          *v61 = &v65;
          ++v12;
          *v60 = v61;
          *((_QWORD *)&v65 + 1) = v61;
        }
        v9 = v71;
      }
      else
      {
        v9 = 1;
        v71 = 1;
        *(_OWORD *)v6 = *v16;
        *(_OWORD *)(v6 + 16) = v16[1];
      }
    }
    else
    {
      v73 = 1;
    }
    v13 = v64;
  }
  while ( (_DWORD)v64 );
  if ( v11 != a3 - 1 && _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 8), 0xFFFFFFFF) == 1 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 3145728, *(PVOID *)v14);
  if ( !v12 )
    goto LABEL_11;
  v34 = v65 - 16;
  v35 = &v62 + 4;
  v36 = -2;
  if ( (_QWORD *)(v65 - 16) != v35 )
  {
    do
    {
      v37 = *(_DWORD *)(v34 + 8);
      v7 |= 1LL << v37;
      if ( v36 != -1 )
      {
        if ( v36 == -2 )
        {
          v36 = *(_DWORD *)(v34 + 8);
        }
        else if ( v36 != v37 )
        {
          v36 = -1;
        }
      }
      v34 = *(_QWORD *)(v34 + 16) - 16LL;
    }
    while ( (_QWORD *)v34 != v35 );
  }
  _m_prefetchw((const void *)(a5 + 428));
  v38 = *(_DWORD *)(a5 + 428);
  do
  {
    if ( v38 == -2 )
    {
      v57 = v36;
      goto LABEL_61;
    }
    if ( v38 == v36 || v38 == -1 )
      break;
    v57 = -1;
LABEL_61:
    v58 = v38;
    v38 = _InterlockedCompareExchange((volatile signed __int32 *)(a5 + 428), v57, v38);
  }
  while ( v58 != v38 );
  v64 = v7;
  if ( (_DWORD)v7 )
  {
    v39 = v7;
    v40 = v7;
    do
    {
      _BitScanForward((unsigned int *)&v41, v39);
      v42 = *(_QWORD *)(a5 + 24);
      v63 = v41;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v42 + 8 * (v41 + 2 * (v41 + 1))));
      v39 = v40 & ~(1 << v41);
      v40 = v39;
    }
    while ( v39 );
  }
  for ( i = HIDWORD(v64); i; i &= ~(1 << v44) )
  {
    _BitScanForward(&v44, i);
    v63 = v44;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(*(_QWORD *)(a5 + 24) + 8 * (v44 + 32 + 2 * (v44 + 32 + 1LL))));
  }
  while ( 1 )
  {
    v45 = (__int64 *)v65;
    if ( (__int128 *)v65 == &v65 )
      break;
    v52 = *(_QWORD *)v65;
    if ( *(_QWORD *)(*(_QWORD *)v65 + 8LL) != (_QWORD)v65 )
      goto LABEL_32;
    v53 = *(_QWORD **)(v65 + 8);
    if ( *v53 != (_QWORD)v65 )
      goto LABEL_32;
    *v53 = v52;
    v54 = v45;
    *(_QWORD *)(v52 + 8) = v53;
    v55 = *(_QWORD *)(a5 + 24) + 24LL * *((unsigned int *)v45 - 2);
    v56 = *(__int64 ***)(v55 + 8);
    if ( *v56 != (__int64 *)v55 )
      goto LABEL_32;
    *v54 = v55;
    v54[1] = (__int64)v56;
    *v56 = v54;
    *(_QWORD *)(v55 + 8) = v54;
  }
  v64 = v7;
  v46 = HIDWORD(v7);
  if ( (_DWORD)v46 )
  {
    v47 = HIDWORD(v64);
    do
    {
      _BitScanReverse(&v48, v46);
      v63 = v48;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(*(_QWORD *)(a5 + 24) + 8 * (v48 + 32 + 2 * (v48 + 32 + 1LL))));
      v47 &= ~(1 << v48);
      LODWORD(v46) = v47;
    }
    while ( v47 );
  }
  for ( j = v64; j; j &= ~(1 << v51) )
  {
    v50 = *(_QWORD *)(a5 + 24);
    _BitScanReverse((unsigned int *)&v51, j);
    v63 = v51;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v50 + 8 * (v51 + 2 * (v51 + 1))));
  }
LABEL_11:
  v19 = v71;
  v20 = v73;
LABEL_12:
  _m_prefetchw((const void *)(a5 + 8));
  v21 = *(_QWORD *)(a5 + 8);
  LODWORD(v72) = v21;
  do
  {
    v22 = *(_BYTE *)(a5 + 376);
    v23 = 0;
    v24 = v12 + HIDWORD(v21);
    v25 = 0;
    HIDWORD(v72) = v12 + HIDWORD(v21);
    if ( !v22 )
    {
      v26 = v72 & 0xFFFF0000 | (unsigned __int16)(v72 - 1);
      LODWORD(v72) = v26;
      if ( v20 )
      {
        v26 = (unsigned __int16)v26 | ((HIWORD(v26) - 1) << 16);
        LODWORD(v72) = v26;
      }
      if ( !v19 )
      {
        if ( v24 )
        {
          HIDWORD(v72) = --v24;
        }
        else
        {
          v23 = 1;
          v26 = ((__int16)v26 + 1) ^ (((__int16)v26 + 1) ^ v26) & 0xFFFF0000;
          LODWORD(v72) = v26;
        }
      }
      if ( (v12 || v20) && v24 && (v26 & 0xFFFF0000) == 0 )
      {
        v25 = 1;
        LODWORD(v72) = v26 + 0x10000;
      }
    }
    v27 = v21;
    v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(a5 + 8), v72, v21);
    LODWORD(v72) = v21;
  }
  while ( v27 != v21 );
  if ( v25 )
    NtReleaseWorkerFactoryWorker(*(HANDLE *)(a5 + 56));
  result = v22;
  *a6 = v23;
  return result;
}
