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

__int64 __fastcall LdrpHandleTlsData(__int64 a1)
{
  _WORD *v1; // rdi
  unsigned int v2; // esi
  PVOID v3; // rax
  int v4; // ebx
  unsigned int *v5; // r14
  _DWORD *Heap; // r13
  unsigned int SizeOfBitMap; // r12d
  NTSTATUS TlsEntry; // r15d
  unsigned int *v9; // r8
  int v10; // edx
  size_t v11; // r9
  char v12; // cl
  unsigned int v13; // edi
  __int64 v14; // rbx
  __int64 v15; // rdi
  unsigned int v16; // r12d
  unsigned int v17; // eax
  PVOID v18; // rax
  void *v19; // r14
  _QWORD *v20; // rbx
  __int64 v21; // rcx
  _DWORD *v22; // rax
  __int64 v24; // rbx
  _DWORD *v25; // r14
  int v26; // esi
  int v27; // eax
  __int64 v28; // r8
  void *v29; // r8
  _DWORD *NewTlsVector; // rcx
  __int64 v31; // rcx
  __int64 v32; // rdi
  unsigned __int64 v33; // rcx
  signed int v34; // r15d
  SIZE_T v35; // r8
  unsigned int *v36; // rax
  unsigned int *v37; // r8
  __int64 v38; // rcx
  unsigned int **v39; // rax
  _BYTE *v40; // rdx
  char v41; // [rsp+30h] [rbp-F8h]
  char v42; // [rsp+31h] [rbp-F7h] BYREF
  ULONG Size; // [rsp+34h] [rbp-F4h] BYREF
  int v44; // [rsp+38h] [rbp-F0h]
  ULONG v45; // [rsp+3Ch] [rbp-ECh]
  int v46; // [rsp+40h] [rbp-E8h]
  unsigned int v47; // [rsp+44h] [rbp-E4h]
  unsigned int v48; // [rsp+48h] [rbp-E0h]
  unsigned int v49; // [rsp+4Ch] [rbp-DCh]
  _WORD *v50; // [rsp+50h] [rbp-D8h]
  unsigned int *v51; // [rsp+58h] [rbp-D0h]
  int v52; // [rsp+60h] [rbp-C8h]
  unsigned int v53; // [rsp+68h] [rbp-C0h]
  __int64 v54; // [rsp+70h] [rbp-B8h] BYREF
  _BYTE *v55; // [rsp+78h] [rbp-B0h]
  size_t v56; // [rsp+80h] [rbp-A8h]
  __int64 v57; // [rsp+88h] [rbp-A0h]
  _DWORD *v58; // [rsp+90h] [rbp-98h]
  unsigned int *v59; // [rsp+98h] [rbp-90h]
  PVOID v60; // [rsp+A0h] [rbp-88h]
  __int64 v61; // [rsp+A8h] [rbp-80h]
  size_t v62; // [rsp+B0h] [rbp-78h]
  _QWORD *v63; // [rsp+B8h] [rbp-70h]
  __int64 v64; // [rsp+C0h] [rbp-68h]
  _BYTE ProcessInformation[32]; // [rsp+C8h] [rbp-60h] BYREF
  __int64 v66; // [rsp+E8h] [rbp-40h]

  v1 = (_WORD *)a1;
  v50 = (_WORD *)a1;
  v64 = a1;
  v2 = 0;
  v54 = 0LL;
  v42 = 0;
  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  v66 = 0LL;
  Size = 0;
  if ( !LdrpActiveThreadCount )
    return 0LL;
  if ( *(_DWORD *)(a1 + 268) == 9 )
    return 0LL;
  v3 = RtlImageDirectoryEntryToData(*(PVOID *)(a1 + 48), 1u, 9u, &Size);
  v4 = (int)v3;
  if ( !v3 )
    return 0LL;
  v46 = 0;
  v5 = 0LL;
  v51 = 0LL;
  v61 = 0LL;
  Heap = 0LL;
  v55 = 0LL;
  RtlAcquireSRWLockExclusive(&LdrpTlsLock);
  if ( LdrpActiveThreadCount != 1 )
  {
    v59 = 0LL;
    v33 = 24LL * (unsigned int)LdrpActiveThreadCount;
    if ( is_mul_ok((unsigned int)LdrpActiveThreadCount, 0x18uLL) )
    {
      v34 = 0;
    }
    else
    {
      v33 = -1LL;
      v34 = -1073741675;
    }
    if ( v34 >= 0 )
    {
      v35 = -1LL;
      if ( v33 + 16 >= v33 )
        v35 = v33 + 16;
      v34 = v33 + 16 < v33 ? 0xC0000095 : 0;
      if ( v33 + 16 < v33 || (Heap = RtlAllocateHeap(LdrpTlsHeap, NtdllBaseTag + 786432, v35), (v55 = Heap) != 0LL) )
      {
        if ( v34 >= 0 )
          goto LABEL_6;
      }
      else
      {
        v34 = -1073741801;
      }
    }
    RtlReleaseSRWLockExclusive(&LdrpTlsLock);
    return (unsigned int)v34;
  }
  Heap = ProcessInformation;
  v55 = ProcessInformation;
LABEL_6:
  v58 = Heap;
  SizeOfBitMap = LdrpTlsBitmap.SizeOfBitMap;
  v47 = LdrpTlsBitmap.SizeOfBitMap;
  TlsEntry = LdrpAllocateTlsEntry(v4, (_DWORD)v1, (unsigned int)&Size, (unsigned int)&v42, (__int64)&v54);
  v44 = TlsEntry;
  if ( TlsEntry >= 0 )
  {
    v9 = Heap + 2;
    v59 = Heap + 2;
    Heap[2] = LdrpActiveThreadCount;
    v41 = v42;
    if ( v42 )
    {
      Heap[1] = 1;
      Heap[3] = SizeOfBitMap;
      v47 = LdrpTlsBitmap.SizeOfBitMap;
      v45 = Size;
    }
    else
    {
      Heap[1] = 0;
      v45 = Size;
      Heap[3] = Size;
    }
    v57 = v54;
    v10 = (*(_DWORD *)(v54 + 52) >> 20) & 0xF;
    v11 = *(_QWORD *)(v54 + 24) - *(_QWORD *)(v54 + 16);
    v56 = v11;
    v12 = v10 - 1;
    if ( (*(_DWORD *)(v54 + 52) & 0xF00000) == 0 )
      v12 = v10;
    v13 = 1 << v12;
    if ( (unsigned int)(1 << v12) < 0x10 )
      v13 = 16;
    v14 = v13;
    v53 = v13;
    v15 = v13 - 1;
    v52 = v15;
    v62 = v11;
    v16 = 0;
    v48 = v15;
    while ( 1 )
    {
      v49 = v16;
      v17 = *v9;
      if ( v16 >= *v9 )
      {
        *Heap = 0;
        TlsEntry = NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessTlsInformation, Heap, 24 * v17 + 16);
        v44 = TlsEntry;
        goto LABEL_20;
      }
      v18 = RtlAllocateHeap(LdrpTlsHeap, NtdllBaseTag + 786432, v15 + v11 + 1);
      v19 = v18;
      v60 = v18;
      if ( !v18 )
      {
        TlsEntry = -1073741801;
        v44 = -1073741801;
        goto LABEL_20;
      }
      v20 = (_QWORD *)(~v15 & ((unsigned __int64)v18 + v14));
      v63 = v20;
      *(v20 - 1) = v18;
      memmove(v20, *(const void **)(v57 + 16), v56);
      v15 = v48;
      if ( v41 )
        break;
LABEL_17:
      v21 = 3LL * v16;
      v22 = v58;
      *(_QWORD *)&v58[2 * v21 + 6] = v20;
      v22[2 * v21 + 4] = 0;
      ++v16;
      v9 = v59;
      v11 = v56;
      v14 = v53;
    }
    NewTlsVector = LdrpGetNewTlsVector(v47);
    if ( NewTlsVector )
    {
      *(_QWORD *)&NewTlsVector[2 * v45] = v20;
      v20 = NewTlsVector;
      goto LABEL_17;
    }
    RtlFreeHeap(LdrpTlsHeap, 0, v19);
    TlsEntry = -1073741801;
    v44 = -1073741801;
LABEL_20:
    if ( v16 )
    {
      v24 = 6LL * v16;
      v25 = v58;
      v26 = v46;
      while ( 1 )
      {
        --v16;
        v24 -= 6LL;
        v27 = Heap[v24 + 4];
        if ( (v27 & 2) == 0 )
          break;
        v28 = *(_QWORD *)&v25[v24 + 6];
        if ( v28 )
        {
          if ( v41 )
          {
            LdrpQueueDeferredTlsData(*(_QWORD *)&v25[v24 + 6], *(_QWORD *)&v25[v24 + 8]);
            goto LABEL_24;
          }
          v29 = *(void **)(v28 - 8);
          goto LABEL_40;
        }
LABEL_24:
        if ( !v16 )
        {
          v46 = v26;
          v2 = 0;
          TlsEntry = v44;
          goto LABEL_26;
        }
      }
      if ( (v27 & 1) != 0 )
      {
        ++LdrpPotentialTlsLeaks;
        goto LABEL_24;
      }
      ++v26;
      v31 = *(_QWORD *)&v25[v24 + 6];
      if ( v41 )
      {
        v32 = *(_QWORD *)(v31 + 8LL * v45);
        RtlFreeHeap(LdrpTlsHeap, 0, (PVOID)(v31 - 16));
      }
      else
      {
        v32 = *(_QWORD *)&v25[v24 + 6];
      }
      v29 = *(void **)(v32 - 8);
LABEL_40:
      RtlFreeHeap(LdrpTlsHeap, 0, v29);
      goto LABEL_24;
    }
LABEL_26:
    v1 = v50;
    if ( TlsEntry < 0 )
    {
      v36 = (unsigned int *)LdrpFindTlsEntry(v50);
      v37 = v36;
      if ( v36 )
      {
        v38 = *(_QWORD *)v36;
        v39 = (unsigned int **)*((_QWORD *)v36 + 1);
        if ( *(unsigned int **)(v38 + 8) != v37 || *v39 != v37 )
          __fastfail(3u);
        *v39 = (unsigned int *)v38;
        *(_QWORD *)(v38 + 8) = v39;
        v40 = (char *)LdrpTlsBitmap.Buffer + ((unsigned __int64)v37[16] >> 3);
        *v40 &= ~(1 << (v37[16] & 7));
      }
      v5 = v51;
      if ( v37 )
        v5 = v37;
      if ( v41 )
        LdrpTlsBitmap.SizeOfBitMap -= 8;
    }
    else
    {
      v5 = v51;
      if ( v46 )
        LdrpActiveThreadCount -= v46;
    }
  }
  if ( TlsEntry >= 0 )
    v1[55] = -1;
  RtlReleaseSRWLockExclusive(&LdrpTlsLock);
  if ( Heap != (_DWORD *)ProcessInformation )
    RtlFreeHeap(LdrpTlsHeap, 0, Heap);
  if ( v5 )
    RtlFreeHeap(LdrpTlsHeap, 0, v5);
  if ( TlsEntry < 0 )
    return (unsigned int)TlsEntry;
  return v2;
}
