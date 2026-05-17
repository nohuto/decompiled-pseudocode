/*
 * XREFs of LdrpHandleTlsData @ 0x180008200
 * Callers:
 *     LdrpDoPostSnapWork @ 0x1800073C0 (LdrpDoPostSnapWork.c)
 * Callees:
 *     LdrpFindTlsEntry @ 0x180004A90 (LdrpFindTlsEntry.c)
 *     LdrpGetNewTlsVector @ 0x18000681C (LdrpGetNewTlsVector.c)
 *     LdrpAllocateTlsEntry @ 0x18000776C (LdrpAllocateTlsEntry.c)
 *     RtlImageDirectoryEntryToData @ 0x180008A00 (RtlImageDirectoryEntryToData.c)
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     LdrpQueueDeferredTlsData @ 0x1800F5160 (LdrpQueueDeferredTlsData.c)
 *     LdrpGenericExceptionFilter @ 0x1801185C0 (LdrpGenericExceptionFilter.c)
 *     NtSetInformationProcess @ 0x180162010 (NtSetInformationProcess.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall LdrpHandleTlsData(__int64 a1, __int64 a2)
{
  _WORD *v2; // rdi
  unsigned int v3; // esi
  __int64 v4; // rbx
  _UNKNOWN **v5; // r14
  _BYTE *Heap; // r13
  int v7; // r12d
  int v8; // r15d
  unsigned int *v9; // r8
  int v10; // edx
  size_t v11; // r9
  char v12; // cl
  unsigned int v13; // edi
  __int64 v14; // rbx
  __int64 v15; // rdi
  unsigned int v16; // r12d
  __int64 v17; // rax
  __int64 v18; // r14
  _QWORD *v19; // rbx
  __int64 v20; // rcx
  _BYTE *v21; // rax
  __int64 v23; // rbx
  _BYTE *v24; // r14
  int v25; // esi
  int v26; // eax
  __int64 v27; // r8
  __int64 v28; // r8
  _DWORD *NewTlsVector; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdi
  unsigned __int64 v32; // rcx
  signed int v33; // r15d
  __int64 v34; // r8
  _UNKNOWN **TlsEntry; // rax
  _UNKNOWN **v36; // r8
  _UNKNOWN ***v37; // rcx
  _QWORD *v38; // rax
  _BYTE *v39; // rdx
  char v40; // [rsp+30h] [rbp-F8h]
  char v41[3]; // [rsp+31h] [rbp-F7h] BYREF
  unsigned int v42; // [rsp+34h] [rbp-F4h] BYREF
  int v43; // [rsp+38h] [rbp-F0h]
  unsigned int v44; // [rsp+3Ch] [rbp-ECh]
  int v45; // [rsp+40h] [rbp-E8h]
  unsigned int v46; // [rsp+44h] [rbp-E4h]
  unsigned int v47; // [rsp+48h] [rbp-E0h]
  unsigned int v48; // [rsp+4Ch] [rbp-DCh]
  _WORD *v49; // [rsp+50h] [rbp-D8h]
  _UNKNOWN **v50; // [rsp+58h] [rbp-D0h]
  int v51; // [rsp+60h] [rbp-C8h]
  unsigned int v52; // [rsp+68h] [rbp-C0h]
  __int64 v53; // [rsp+70h] [rbp-B8h] BYREF
  _BYTE *v54; // [rsp+78h] [rbp-B0h]
  size_t Size; // [rsp+80h] [rbp-A8h]
  __int64 v56; // [rsp+88h] [rbp-A0h]
  _BYTE *v57; // [rsp+90h] [rbp-98h]
  unsigned int *v58; // [rsp+98h] [rbp-90h]
  __int64 v59; // [rsp+A0h] [rbp-88h]
  __int64 v60; // [rsp+A8h] [rbp-80h]
  size_t v61; // [rsp+B0h] [rbp-78h]
  _QWORD *v62; // [rsp+B8h] [rbp-70h]
  __int64 v63; // [rsp+C0h] [rbp-68h]
  _BYTE v64[32]; // [rsp+C8h] [rbp-60h] BYREF
  __int64 v65; // [rsp+E8h] [rbp-40h]

  v2 = (_WORD *)a1;
  v49 = (_WORD *)a1;
  v63 = a1;
  v3 = 0;
  v53 = 0LL;
  v41[0] = 0;
  memset(v64, 0, sizeof(v64));
  v65 = 0LL;
  v42 = 0;
  if ( !LdrpActiveThreadCount )
    return 0LL;
  if ( *(_DWORD *)(a1 + 268) == 9 )
    return 0LL;
  LOBYTE(a2) = 1;
  v4 = RtlImageDirectoryEntryToData(*(_QWORD *)(a1 + 48), a2, 9LL, &v42);
  if ( !v4 )
    return 0LL;
  v45 = 0;
  v5 = 0LL;
  v50 = 0LL;
  v60 = 0LL;
  Heap = 0LL;
  v54 = 0LL;
  RtlAcquireSRWLockExclusive(&LdrpTlsLock);
  if ( LdrpActiveThreadCount != 1 )
  {
    v58 = 0LL;
    v32 = 24LL * (unsigned int)LdrpActiveThreadCount;
    if ( is_mul_ok((unsigned int)LdrpActiveThreadCount, 0x18uLL) )
    {
      v33 = 0;
    }
    else
    {
      v32 = -1LL;
      v33 = -1073741675;
    }
    if ( v33 >= 0 )
    {
      v34 = -1LL;
      if ( v32 + 16 >= v32 )
        v34 = v32 + 16;
      v33 = v32 + 16 < v32 ? 0xC0000095 : 0;
      if ( v32 + 16 < v32
        || (Heap = (_BYTE *)RtlAllocateHeap(LdrpTlsHeap, (unsigned int)(NtdllBaseTag + 786432), v34), (v54 = Heap) != 0LL) )
      {
        if ( v33 >= 0 )
          goto LABEL_6;
      }
      else
      {
        v33 = -1073741801;
      }
    }
    RtlReleaseSRWLockExclusive(&LdrpTlsLock);
    return (unsigned int)v33;
  }
  Heap = v64;
  v54 = v64;
LABEL_6:
  v57 = Heap;
  v7 = LdrpTlsBitmap;
  v46 = LdrpTlsBitmap;
  v8 = LdrpAllocateTlsEntry(v4, (__int64)v2, &v42, v41, &v53);
  v43 = v8;
  if ( v8 >= 0 )
  {
    v9 = (unsigned int *)(Heap + 8);
    v58 = (unsigned int *)(Heap + 8);
    *((_DWORD *)Heap + 2) = LdrpActiveThreadCount;
    v40 = v41[0];
    if ( v41[0] )
    {
      *((_DWORD *)Heap + 1) = 1;
      *((_DWORD *)Heap + 3) = v7;
      v46 = LdrpTlsBitmap;
      v44 = v42;
    }
    else
    {
      *((_DWORD *)Heap + 1) = 0;
      v44 = v42;
      *((_DWORD *)Heap + 3) = v42;
    }
    v56 = v53;
    v10 = (*(_DWORD *)(v53 + 52) >> 20) & 0xF;
    v11 = *(_QWORD *)(v53 + 24) - *(_QWORD *)(v53 + 16);
    Size = v11;
    v12 = v10 - 1;
    if ( (*(_DWORD *)(v53 + 52) & 0xF00000) == 0 )
      v12 = v10;
    v13 = 1 << v12;
    if ( (unsigned int)(1 << v12) < 0x10 )
      v13 = 16;
    v14 = v13;
    v52 = v13;
    v15 = v13 - 1;
    v51 = v15;
    v61 = v11;
    v16 = 0;
    v47 = v15;
    while ( 1 )
    {
      v48 = v16;
      if ( v16 >= *v9 )
      {
        *(_DWORD *)Heap = 0;
        v8 = NtSetInformationProcess(-1LL, 35LL, Heap);
        v43 = v8;
        goto LABEL_20;
      }
      v17 = RtlAllocateHeap(LdrpTlsHeap, (unsigned int)(NtdllBaseTag + 786432), v15 + v11 + 1);
      v18 = v17;
      v59 = v17;
      if ( !v17 )
      {
        v8 = -1073741801;
        v43 = -1073741801;
        goto LABEL_20;
      }
      v19 = (_QWORD *)(~v15 & (v17 + v14));
      v62 = v19;
      *(v19 - 1) = v17;
      memmove(v19, *(const void **)(v56 + 16), Size);
      v15 = v47;
      if ( v40 )
        break;
LABEL_17:
      v20 = 3LL * v16;
      v21 = v57;
      *(_QWORD *)&v57[8 * v20 + 24] = v19;
      *(_DWORD *)&v21[8 * v20 + 16] = 0;
      ++v16;
      v9 = v58;
      v11 = Size;
      v14 = v52;
    }
    NewTlsVector = LdrpGetNewTlsVector(v46);
    if ( NewTlsVector )
    {
      *(_QWORD *)&NewTlsVector[2 * v44] = v19;
      v19 = NewTlsVector;
      goto LABEL_17;
    }
    RtlFreeHeap(LdrpTlsHeap, 0LL, v18);
    v8 = -1073741801;
    v43 = -1073741801;
LABEL_20:
    if ( v16 )
    {
      v23 = 24LL * v16;
      v24 = v57;
      v25 = v45;
      while ( 1 )
      {
        --v16;
        v23 -= 24LL;
        v26 = *(_DWORD *)&Heap[v23 + 16];
        if ( (v26 & 2) == 0 )
          break;
        v27 = *(_QWORD *)&v24[v23 + 24];
        if ( v27 )
        {
          if ( v40 )
          {
            LdrpQueueDeferredTlsData(*(_QWORD *)&v24[v23 + 24], *(_QWORD *)&v24[v23 + 32]);
            goto LABEL_24;
          }
          v28 = *(_QWORD *)(v27 - 8);
          goto LABEL_40;
        }
LABEL_24:
        if ( !v16 )
        {
          v45 = v25;
          v3 = 0;
          v8 = v43;
          goto LABEL_26;
        }
      }
      if ( (v26 & 1) != 0 )
      {
        ++LdrpPotentialTlsLeaks;
        goto LABEL_24;
      }
      ++v25;
      v30 = *(_QWORD *)&v24[v23 + 24];
      if ( v40 )
      {
        v31 = *(_QWORD *)(v30 + 8LL * v44);
        RtlFreeHeap(LdrpTlsHeap, 0LL, v30 - 16);
      }
      else
      {
        v31 = *(_QWORD *)&v24[v23 + 24];
      }
      v28 = *(_QWORD *)(v31 - 8);
LABEL_40:
      RtlFreeHeap(LdrpTlsHeap, 0LL, v28);
      goto LABEL_24;
    }
LABEL_26:
    v2 = v49;
    if ( v8 < 0 )
    {
      TlsEntry = LdrpFindTlsEntry(v49);
      v36 = TlsEntry;
      if ( TlsEntry )
      {
        v37 = (_UNKNOWN ***)*TlsEntry;
        v38 = TlsEntry[1];
        if ( v37[1] != v36 || (_UNKNOWN **)*v38 != v36 )
          __fastfail(3u);
        *v38 = v37;
        v37[1] = (_UNKNOWN **)v38;
        v39 = (char *)Src + ((unsigned __int64)*((unsigned int *)v36 + 16) >> 3);
        *v39 &= ~(1 << ((_BYTE)v36[8] & 7));
      }
      v5 = v50;
      if ( v36 )
        v5 = v36;
      if ( v40 )
        LdrpTlsBitmap -= 8;
    }
    else
    {
      v5 = v50;
      if ( v45 )
        LdrpActiveThreadCount -= v45;
    }
  }
  if ( v8 >= 0 )
    v2[55] = -1;
  RtlReleaseSRWLockExclusive(&LdrpTlsLock);
  if ( Heap != v64 )
    RtlFreeHeap(LdrpTlsHeap, 0LL, Heap);
  if ( v5 )
    RtlFreeHeap(LdrpTlsHeap, 0LL, v5);
  if ( v8 < 0 )
    return (unsigned int)v8;
  return v3;
}
