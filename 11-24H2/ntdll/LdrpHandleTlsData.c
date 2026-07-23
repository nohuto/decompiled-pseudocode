/*
 * XREFs of LdrpHandleTlsData @ 0x180034C00
 * Callers:
 *     LdrpDoPostSnapWork @ 0x180033DC0 (LdrpDoPostSnapWork.c)
 * Callees:
 *     LdrpGetNewTlsVector @ 0x18003321C (LdrpGetNewTlsVector.c)
 *     LdrpAllocateTlsEntry @ 0x18003416C (LdrpAllocateTlsEntry.c)
 *     RtlImageDirectoryEntryToData @ 0x180035400 (RtlImageDirectoryEntryToData.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     LdrpFindTlsEntry @ 0x1800D7480 (LdrpFindTlsEntry.c)
 *     LdrpQueueDeferredTlsData @ 0x1800EFC80 (LdrpQueueDeferredTlsData.c)
 *     LdrpGenericExceptionFilter @ 0x180113530 (LdrpGenericExceptionFilter.c)
 *     NtSetInformationProcess @ 0x1801603D0 (NtSetInformationProcess.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 __fastcall LdrpHandleTlsData(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // esi
  PVOID v3; // rbx
  unsigned int *v4; // r14
  _DWORD *Heap; // r13
  unsigned int SizeOfBitMap; // r12d
  int v7; // r15d
  unsigned int *v8; // r8
  int v9; // edx
  size_t v10; // r9
  char v11; // cl
  unsigned int v12; // edi
  __int64 v13; // rbx
  __int64 v14; // rdi
  unsigned int v15; // r12d
  unsigned int v16; // eax
  PVOID v17; // rax
  void *v18; // r14
  _QWORD *v19; // rbx
  __int64 v20; // rcx
  _DWORD *v21; // rax
  __int64 v23; // rbx
  _DWORD *v24; // r14
  int v25; // esi
  int v26; // eax
  __int64 v27; // r8
  void *v28; // r8
  _DWORD *NewTlsVector; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdi
  unsigned __int64 v32; // rcx
  signed int v33; // r15d
  SIZE_T v34; // r8
  unsigned int *TlsEntry; // rax
  unsigned int *v36; // r8
  __int64 v37; // rcx
  unsigned int **v38; // rax
  _BYTE *v39; // rdx
  char v40; // [rsp+30h] [rbp-F8h]
  char v41[3]; // [rsp+31h] [rbp-F7h] BYREF
  ULONG Size; // [rsp+34h] [rbp-F4h] BYREF
  int v43; // [rsp+38h] [rbp-F0h]
  ULONG v44; // [rsp+3Ch] [rbp-ECh]
  int v45; // [rsp+40h] [rbp-E8h]
  unsigned int v46; // [rsp+44h] [rbp-E4h]
  unsigned int v47; // [rsp+48h] [rbp-E0h]
  unsigned int v48; // [rsp+4Ch] [rbp-DCh]
  __int64 v49; // [rsp+50h] [rbp-D8h]
  unsigned int *v50; // [rsp+58h] [rbp-D0h]
  int v51; // [rsp+60h] [rbp-C8h]
  unsigned int v52; // [rsp+68h] [rbp-C0h]
  __int64 v53; // [rsp+70h] [rbp-B8h] BYREF
  _BYTE *v54; // [rsp+78h] [rbp-B0h]
  size_t v55; // [rsp+80h] [rbp-A8h]
  __int64 v56; // [rsp+88h] [rbp-A0h]
  _DWORD *v57; // [rsp+90h] [rbp-98h]
  unsigned int *v58; // [rsp+98h] [rbp-90h]
  PVOID v59; // [rsp+A0h] [rbp-88h]
  __int64 v60; // [rsp+A8h] [rbp-80h]
  size_t v61; // [rsp+B0h] [rbp-78h]
  _QWORD *v62; // [rsp+B8h] [rbp-70h]
  __int64 v63; // [rsp+C0h] [rbp-68h]
  _BYTE ProcessInformation[32]; // [rsp+C8h] [rbp-60h] BYREF
  __int64 v65; // [rsp+E8h] [rbp-40h]

  v1 = a1;
  v49 = a1;
  v63 = a1;
  v2 = 0;
  v53 = 0LL;
  v41[0] = 0;
  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  v65 = 0LL;
  Size = 0;
  if ( !LdrpActiveThreadCount )
    return 0LL;
  if ( *(_DWORD *)(a1 + 268) == 9 )
    return 0LL;
  v3 = RtlImageDirectoryEntryToData(*(PVOID *)(a1 + 48), 1u, 9u, &Size);
  if ( !v3 )
    return 0LL;
  v45 = 0;
  v4 = 0LL;
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
      if ( v32 + 16 < v32 || (Heap = RtlAllocateHeap(LdrpTlsHeap, NtdllBaseTag + 786432, v34), (v54 = Heap) != 0LL) )
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
  Heap = ProcessInformation;
  v54 = ProcessInformation;
LABEL_6:
  v57 = Heap;
  SizeOfBitMap = LdrpTlsBitmap.SizeOfBitMap;
  v46 = LdrpTlsBitmap.SizeOfBitMap;
  v7 = LdrpAllocateTlsEntry((__int64)v3, v1, &Size, v41, &v53);
  v43 = v7;
  if ( v7 >= 0 )
  {
    v8 = Heap + 2;
    v58 = Heap + 2;
    Heap[2] = LdrpActiveThreadCount;
    v40 = v41[0];
    if ( v41[0] )
    {
      Heap[1] = 1;
      Heap[3] = SizeOfBitMap;
      v46 = LdrpTlsBitmap.SizeOfBitMap;
      v44 = Size;
    }
    else
    {
      Heap[1] = 0;
      v44 = Size;
      Heap[3] = Size;
    }
    v56 = v53;
    v9 = (*(_DWORD *)(v53 + 52) >> 20) & 0xF;
    v10 = *(_QWORD *)(v53 + 24) - *(_QWORD *)(v53 + 16);
    v55 = v10;
    v11 = v9 - 1;
    if ( (*(_DWORD *)(v53 + 52) & 0xF00000) == 0 )
      v11 = v9;
    v12 = 1 << v11;
    if ( (unsigned int)(1 << v11) < 0x10 )
      v12 = 16;
    v13 = v12;
    v52 = v12;
    v14 = v12 - 1;
    v51 = v14;
    v61 = v10;
    v15 = 0;
    v47 = v14;
    while ( 1 )
    {
      v48 = v15;
      v16 = *v8;
      if ( v15 >= *v8 )
      {
        *Heap = 0;
        v7 = NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessTlsInformation, Heap, 24 * v16 + 16);
        v43 = v7;
        goto LABEL_20;
      }
      v17 = RtlAllocateHeap(LdrpTlsHeap, NtdllBaseTag + 786432, v14 + v10 + 1);
      v18 = v17;
      v59 = v17;
      if ( !v17 )
      {
        v7 = -1073741801;
        v43 = -1073741801;
        goto LABEL_20;
      }
      v19 = (_QWORD *)(~v14 & ((unsigned __int64)v17 + v13));
      v62 = v19;
      *(v19 - 1) = v17;
      memmove(v19, *(const void **)(v56 + 16), v55);
      v14 = v47;
      if ( v40 )
        break;
LABEL_17:
      v20 = 3LL * v15;
      v21 = v57;
      *(_QWORD *)&v57[2 * v20 + 6] = v19;
      v21[2 * v20 + 4] = 0;
      ++v15;
      v8 = v58;
      v10 = v55;
      v13 = v52;
    }
    NewTlsVector = LdrpGetNewTlsVector(v46);
    if ( NewTlsVector )
    {
      *(_QWORD *)&NewTlsVector[2 * v44] = v19;
      v19 = NewTlsVector;
      goto LABEL_17;
    }
    RtlFreeHeap(LdrpTlsHeap, 0, v18);
    v7 = -1073741801;
    v43 = -1073741801;
LABEL_20:
    if ( v15 )
    {
      v23 = 6LL * v15;
      v24 = v57;
      v25 = v45;
      while ( 1 )
      {
        --v15;
        v23 -= 6LL;
        v26 = Heap[v23 + 4];
        if ( (v26 & 2) == 0 )
          break;
        v27 = *(_QWORD *)&v24[v23 + 6];
        if ( v27 )
        {
          if ( v40 )
          {
            LdrpQueueDeferredTlsData(*(_QWORD *)&v24[v23 + 6], *(_QWORD *)&v24[v23 + 8]);
            goto LABEL_24;
          }
          v28 = *(void **)(v27 - 8);
          goto LABEL_40;
        }
LABEL_24:
        if ( !v15 )
        {
          v45 = v25;
          v2 = 0;
          v7 = v43;
          goto LABEL_26;
        }
      }
      if ( (v26 & 1) != 0 )
      {
        ++LdrpPotentialTlsLeaks;
        goto LABEL_24;
      }
      ++v25;
      v30 = *(_QWORD *)&v24[v23 + 6];
      if ( v40 )
      {
        v31 = *(_QWORD *)(v30 + 8LL * v44);
        RtlFreeHeap(LdrpTlsHeap, 0, (PVOID)(v30 - 16));
      }
      else
      {
        v31 = *(_QWORD *)&v24[v23 + 6];
      }
      v28 = *(void **)(v31 - 8);
LABEL_40:
      RtlFreeHeap(LdrpTlsHeap, 0, v28);
      goto LABEL_24;
    }
LABEL_26:
    v1 = v49;
    if ( v7 < 0 )
    {
      TlsEntry = (unsigned int *)LdrpFindTlsEntry(v49);
      v36 = TlsEntry;
      if ( TlsEntry )
      {
        v37 = *(_QWORD *)TlsEntry;
        v38 = (unsigned int **)*((_QWORD *)TlsEntry + 1);
        if ( *(unsigned int **)(v37 + 8) != v36 || *v38 != v36 )
          __fastfail(3u);
        *v38 = (unsigned int *)v37;
        *(_QWORD *)(v37 + 8) = v38;
        v39 = (char *)LdrpTlsBitmap.Buffer + ((unsigned __int64)v36[16] >> 3);
        *v39 &= ~(1 << (v36[16] & 7));
      }
      v4 = v50;
      if ( v36 )
        v4 = v36;
      if ( v40 )
        LdrpTlsBitmap.SizeOfBitMap -= 8;
    }
    else
    {
      v4 = v50;
      if ( v45 )
        LdrpActiveThreadCount -= v45;
    }
  }
  if ( v7 >= 0 )
    *(_WORD *)(v1 + 110) = -1;
  RtlReleaseSRWLockExclusive(&LdrpTlsLock);
  if ( Heap != (_DWORD *)ProcessInformation )
    RtlFreeHeap(LdrpTlsHeap, 0, Heap);
  if ( v4 )
    RtlFreeHeap(LdrpTlsHeap, 0, v4);
  if ( v7 < 0 )
    return (unsigned int)v7;
  return v2;
}
