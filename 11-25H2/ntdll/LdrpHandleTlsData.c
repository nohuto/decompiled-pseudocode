/*
 * XREFs of LdrpHandleTlsData @ 0x180021A20
 * Callers:
 *     LdrpDoPostSnapWork @ 0x180020D90 (LdrpDoPostSnapWork.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     LdrpFindTlsEntry @ 0x180020450 (LdrpFindTlsEntry.c)
 *     LdrpQueueDeferredTlsData @ 0x18002064C (LdrpQueueDeferredTlsData.c)
 *     LdrpGetNewTlsVector @ 0x18002099C (LdrpGetNewTlsVector.c)
 *     RtlImageDirectoryEntryToData @ 0x180022220 (RtlImageDirectoryEntryToData.c)
 *     LdrpAllocateTlsEntry @ 0x1800236B8 (LdrpAllocateTlsEntry.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     LdrpGenericExceptionFilter @ 0x18011B640 (LdrpGenericExceptionFilter.c)
 *     NtSetInformationProcess @ 0x1801635A0 (NtSetInformationProcess.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall LdrpHandleTlsData(__int64 a1, __int64 a2)
{
  _WORD *v2; // rdi
  unsigned int v3; // esi
  __int64 v4; // rax
  int v5; // ebx
  _UNKNOWN **v6; // r14
  _BYTE *Heap; // r13
  int v8; // r12d
  int TlsEntry; // r15d
  unsigned int *v10; // r8
  int v11; // edx
  size_t v12; // r9
  char v13; // cl
  unsigned int v14; // edi
  __int64 v15; // rbx
  __int64 v16; // rdi
  unsigned int v17; // r12d
  unsigned int v18; // eax
  __int64 v19; // rax
  __int64 v20; // r14
  _QWORD *v21; // rbx
  __int64 v22; // rcx
  _BYTE *v23; // rax
  __int64 v25; // rbx
  _BYTE *v26; // r14
  int v27; // esi
  int v28; // eax
  __int64 v29; // r8
  __int64 v30; // r8
  _DWORD *NewTlsVector; // rcx
  __int64 v32; // rcx
  __int64 v33; // rdi
  unsigned __int64 v34; // rcx
  signed int v35; // r15d
  _UNKNOWN **v36; // rax
  _UNKNOWN **v37; // r8
  _UNKNOWN ***v38; // rcx
  _QWORD *v39; // rax
  _BYTE *v40; // rdx
  char v41; // [rsp+30h] [rbp-F8h]
  char v42; // [rsp+31h] [rbp-F7h] BYREF
  unsigned int v43; // [rsp+34h] [rbp-F4h] BYREF
  int v44; // [rsp+38h] [rbp-F0h]
  unsigned int v45; // [rsp+3Ch] [rbp-ECh]
  int v46; // [rsp+40h] [rbp-E8h]
  unsigned int v47; // [rsp+44h] [rbp-E4h]
  unsigned int v48; // [rsp+48h] [rbp-E0h]
  unsigned int v49; // [rsp+4Ch] [rbp-DCh]
  _WORD *v50; // [rsp+50h] [rbp-D8h]
  _UNKNOWN **v51; // [rsp+58h] [rbp-D0h]
  int v52; // [rsp+60h] [rbp-C8h]
  unsigned int v53; // [rsp+68h] [rbp-C0h]
  __int64 v54; // [rsp+70h] [rbp-B8h] BYREF
  _BYTE *v55; // [rsp+78h] [rbp-B0h]
  size_t Size; // [rsp+80h] [rbp-A8h]
  __int64 v57; // [rsp+88h] [rbp-A0h]
  _BYTE *v58; // [rsp+90h] [rbp-98h]
  unsigned int *v59; // [rsp+98h] [rbp-90h]
  __int64 v60; // [rsp+A0h] [rbp-88h]
  __int64 v61; // [rsp+A8h] [rbp-80h]
  size_t v62; // [rsp+B0h] [rbp-78h]
  _QWORD *v63; // [rsp+B8h] [rbp-70h]
  __int64 v64; // [rsp+C0h] [rbp-68h]
  _BYTE v65[32]; // [rsp+C8h] [rbp-60h] BYREF
  __int64 v66; // [rsp+E8h] [rbp-40h]

  v2 = (_WORD *)a1;
  v50 = (_WORD *)a1;
  v64 = a1;
  v3 = 0;
  v54 = 0LL;
  v42 = 0;
  memset(v65, 0, sizeof(v65));
  v66 = 0LL;
  v43 = 0;
  if ( !LdrpActiveThreadCount )
    return 0LL;
  if ( *(_DWORD *)(a1 + 268) == 9 )
    return 0LL;
  LOBYTE(a2) = 1;
  v4 = RtlImageDirectoryEntryToData(*(_QWORD *)(a1 + 48), a2, 9LL, &v43);
  v5 = v4;
  if ( !v4 )
    return 0LL;
  v46 = 0;
  v6 = 0LL;
  v51 = 0LL;
  v61 = 0LL;
  Heap = 0LL;
  v55 = 0LL;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpTlsLock);
  if ( LdrpActiveThreadCount != 1 )
  {
    v59 = 0LL;
    v34 = 24LL * (unsigned int)LdrpActiveThreadCount;
    if ( is_mul_ok((unsigned int)LdrpActiveThreadCount, 0x18uLL) )
    {
      v35 = 0;
    }
    else
    {
      v34 = -1LL;
      v35 = -1073741675;
    }
    if ( v35 >= 0 )
    {
      v35 = v34 + 16 < v34 ? 0xC0000095 : 0;
      if ( v34 + 16 < v34 || (Heap = (_BYTE *)RtlAllocateHeap((void *)LdrpTlsHeap), (v55 = Heap) != 0LL) )
      {
        if ( v35 >= 0 )
          goto LABEL_6;
      }
      else
      {
        v35 = -1073741801;
      }
    }
    RtlReleaseSRWLockExclusive(&LdrpTlsLock);
    return (unsigned int)v35;
  }
  Heap = v65;
  v55 = v65;
LABEL_6:
  v58 = Heap;
  v8 = LdrpTlsBitmap;
  v47 = LdrpTlsBitmap;
  TlsEntry = LdrpAllocateTlsEntry(v5, (_DWORD)v2, (unsigned int)&v43, (unsigned int)&v42, (__int64)&v54);
  v44 = TlsEntry;
  if ( TlsEntry >= 0 )
  {
    v10 = (unsigned int *)(Heap + 8);
    v59 = (unsigned int *)(Heap + 8);
    *((_DWORD *)Heap + 2) = LdrpActiveThreadCount;
    v41 = v42;
    if ( v42 )
    {
      *((_DWORD *)Heap + 1) = 1;
      *((_DWORD *)Heap + 3) = v8;
      v47 = LdrpTlsBitmap;
      v45 = v43;
    }
    else
    {
      *((_DWORD *)Heap + 1) = 0;
      v45 = v43;
      *((_DWORD *)Heap + 3) = v43;
    }
    v57 = v54;
    v11 = (*(_DWORD *)(v54 + 52) >> 20) & 0xF;
    v12 = *(_QWORD *)(v54 + 24) - *(_QWORD *)(v54 + 16);
    Size = v12;
    v13 = v11 - 1;
    if ( (*(_DWORD *)(v54 + 52) & 0xF00000) == 0 )
      v13 = v11;
    v14 = 1 << v13;
    if ( (unsigned int)(1 << v13) < 0x10 )
      v14 = 16;
    v15 = v14;
    v53 = v14;
    v16 = v14 - 1;
    v52 = v16;
    v62 = v12;
    v17 = 0;
    v48 = v16;
    while ( 1 )
    {
      v49 = v17;
      v18 = *v10;
      if ( v17 >= *v10 )
      {
        *(_DWORD *)Heap = 0;
        TlsEntry = NtSetInformationProcess(-1LL, 35LL, Heap, 24 * v18 + 16);
        v44 = TlsEntry;
        goto LABEL_20;
      }
      v19 = RtlAllocateHeap((void *)LdrpTlsHeap);
      v20 = v19;
      v60 = v19;
      if ( !v19 )
      {
        TlsEntry = -1073741801;
        v44 = -1073741801;
        goto LABEL_20;
      }
      v21 = (_QWORD *)(~v16 & (v19 + v15));
      v63 = v21;
      *(v21 - 1) = v19;
      memmove(v21, *(const void **)(v57 + 16), Size);
      v16 = v48;
      if ( v41 )
        break;
LABEL_17:
      v22 = 3LL * v17;
      v23 = v58;
      *(_QWORD *)&v58[8 * v22 + 24] = v21;
      *(_DWORD *)&v23[8 * v22 + 16] = 0;
      ++v17;
      v10 = v59;
      v15 = v53;
    }
    NewTlsVector = LdrpGetNewTlsVector(v47);
    if ( NewTlsVector )
    {
      *(_QWORD *)&NewTlsVector[2 * v45] = v21;
      v21 = NewTlsVector;
      goto LABEL_17;
    }
    RtlFreeHeap(LdrpTlsHeap, 0LL, v20);
    TlsEntry = -1073741801;
    v44 = -1073741801;
LABEL_20:
    if ( v17 )
    {
      v25 = 24LL * v17;
      v26 = v58;
      v27 = v46;
      while ( 1 )
      {
        --v17;
        v25 -= 24LL;
        v28 = *(_DWORD *)&Heap[v25 + 16];
        if ( (v28 & 2) == 0 )
          break;
        v29 = *(_QWORD *)&v26[v25 + 24];
        if ( v29 )
        {
          if ( v41 )
          {
            LdrpQueueDeferredTlsData(*(_QWORD *)&v26[v25 + 24], *(_QWORD *)&v26[v25 + 32]);
            goto LABEL_24;
          }
          v30 = *(_QWORD *)(v29 - 8);
          goto LABEL_40;
        }
LABEL_24:
        if ( !v17 )
        {
          v46 = v27;
          v3 = 0;
          TlsEntry = v44;
          goto LABEL_26;
        }
      }
      if ( (v28 & 1) != 0 )
      {
        ++LdrpPotentialTlsLeaks;
        goto LABEL_24;
      }
      ++v27;
      v32 = *(_QWORD *)&v26[v25 + 24];
      if ( v41 )
      {
        v33 = *(_QWORD *)(v32 + 8LL * v45);
        RtlFreeHeap(LdrpTlsHeap, 0LL, v32 - 16);
      }
      else
      {
        v33 = *(_QWORD *)&v26[v25 + 24];
      }
      v30 = *(_QWORD *)(v33 - 8);
LABEL_40:
      RtlFreeHeap(LdrpTlsHeap, 0LL, v30);
      goto LABEL_24;
    }
LABEL_26:
    v2 = v50;
    if ( TlsEntry < 0 )
    {
      v36 = LdrpFindTlsEntry(v50);
      v37 = v36;
      if ( v36 )
      {
        v38 = (_UNKNOWN ***)*v36;
        v39 = v36[1];
        if ( v38[1] != v37 || (_UNKNOWN **)*v39 != v37 )
          __fastfail(3u);
        *v39 = v38;
        v38[1] = (_UNKNOWN **)v39;
        v40 = (char *)qword_1801D4768 + ((unsigned __int64)*((unsigned int *)v37 + 16) >> 3);
        *v40 &= ~(1 << ((_BYTE)v37[8] & 7));
      }
      v6 = v51;
      if ( v37 )
        v6 = v37;
      if ( v41 )
        LdrpTlsBitmap -= 8;
    }
    else
    {
      v6 = v51;
      if ( v46 )
        LdrpActiveThreadCount -= v46;
    }
  }
  if ( TlsEntry >= 0 )
    v2[55] = -1;
  RtlReleaseSRWLockExclusive(&LdrpTlsLock);
  if ( Heap != v65 )
    RtlFreeHeap(LdrpTlsHeap, 0LL, Heap);
  if ( v6 )
    RtlFreeHeap(LdrpTlsHeap, 0LL, v6);
  if ( TlsEntry < 0 )
    return (unsigned int)TlsEntry;
  return v3;
}
