/*
 * XREFs of RtlpAllocateHeap @ 0x1405DE67C
 * Callers:
 *     RtlpAllocateNTHeapInternal @ 0x1403CAA0C (RtlpAllocateNTHeapInternal.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     RtlpLogHeapFailure @ 0x1402DA9BC (RtlpLogHeapFailure.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x1402FA244 (RtlpHpHeapCheckCommitLimit.c)
 *     DbgPrint @ 0x1403A9600 (DbgPrint.c)
 *     RtlpCreateSplitBlock @ 0x1405DF430 (RtlpCreateSplitBlock.c)
 *     RtlpExtendHeap @ 0x1405E0230 (RtlpExtendHeap.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x1405E0C00 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpAnalyzeHeapFailure @ 0x1405E68D4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpFindEntry @ 0x1405E70EC (RtlpFindEntry.c)
 *     RtlpHeapRemoveListEntry @ 0x1405E74C8 (RtlpHeapRemoveListEntry.c)
 *     RtlCompareMemoryUlong @ 0x1406A8740 (RtlCompareMemoryUlong.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     RtlGetNtGlobalFlags @ 0x140AB8150 (RtlGetNtGlobalFlags.c)
 */

ULONG_PTR __fastcall RtlpAllocateHeap(
        ULONG_PTR a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        _DWORD *a6)
{
  unsigned __int64 v6; // r15
  __int16 v7; // r12
  ULONG_PTR v9; // r14
  char v10; // bl
  unsigned __int64 v11; // r13
  __int64 v13; // r15
  unsigned __int64 v14; // r13
  __int64 Entry; // rax
  __int64 *v16; // r12
  ULONG_PTR v17; // rbx
  unsigned __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 *v20; // r8
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 **v23; // rdx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdi
  __int64 v26; // rax
  ULONG_PTR v27; // r8
  __int64 v28; // r12
  __int64 *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // r9
  __int64 **v32; // rdx
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rdi
  char v35; // al
  char v36; // r12
  char v37; // di
  SIZE_T v38; // rdi
  SIZE_T v39; // rax
  __int64 v40; // r9
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rax
  __int64 v43; // rcx
  unsigned __int64 v44; // r15
  char v45; // di
  int v46; // eax
  int v47; // edx
  __int64 v48; // rdi
  __int64 v49; // r8
  _DWORD *v50; // rcx
  void *v51; // r9
  unsigned __int64 v52; // rdx
  _OWORD *v53; // rax
  unsigned __int64 v54; // rax
  signed __int64 v55; // rcx
  unsigned __int64 v56; // rtt
  __int64 v57; // rax
  _QWORD *v58; // rdi
  char v59; // al
  unsigned __int64 v60; // rcx
  ULONG_PTR v61; // r8
  __int64 *v62; // rax
  __int64 v63; // [rsp+30h] [rbp-F8h]
  char v64; // [rsp+40h] [rbp-E8h]
  int v65; // [rsp+44h] [rbp-E4h]
  char v66; // [rsp+50h] [rbp-D8h]
  __int64 *v67; // [rsp+60h] [rbp-C8h]
  __int64 *v68; // [rsp+60h] [rbp-C8h]
  __int64 v69; // [rsp+68h] [rbp-C0h]
  __int64 v70; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v71; // [rsp+A8h] [rbp-80h]
  ULONG_PTR v72; // [rsp+B0h] [rbp-78h]
  __int64 v73; // [rsp+B8h] [rbp-70h]
  ULONG_PTR v74; // [rsp+C0h] [rbp-68h]
  unsigned __int64 v75; // [rsp+C8h] [rbp-60h]
  __int64 v76; // [rsp+D0h] [rbp-58h]
  ULONG_PTR v77; // [rsp+D8h] [rbp-50h]
  __int64 v78; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v79; // [rsp+E8h] [rbp-40h]
  char v80; // [rsp+138h] [rbp+10h]
  unsigned __int64 v82; // [rsp+148h] [rbp+20h] BYREF

  v82 = a4;
  v80 = a2;
  v6 = a4;
  v7 = a3;
  v72 = 0LL;
  v65 = 1;
  v73 = 0LL;
  LOBYTE(a5) = 0;
  v64 = 0;
  v9 = 0LL;
  v76 = 0LL;
  v70 = 0LL;
  v75 = 0LL;
  if ( (a2 & 0x3C010F60) != 0 || a3 >= 0x80000000 )
  {
    v65 = 0;
    *a6 = 4;
    if ( a3 > 0x7FFFFFFFFFFFFFFFLL )
      return 0LL;
    v13 = a3;
    if ( !a3 )
      v13 = 1LL;
    v6 = *(_QWORD *)(a1 + 264) & (*(_QWORD *)(a1 + 256) + v13);
    if ( v6 < 0x20 )
      v6 = 32LL;
    v82 = v6;
    v10 = (a2 >> 4) & 0xE0 | 1;
    v66 = v10;
    if ( (a2 & 0x3C000100) != 0 || (v14 = v6, *(_QWORD *)(a1 + 328)) )
    {
      v10 = (a2 >> 4) & 0xE0 | 3;
      v66 = v10;
      v14 = v6 + 16;
      v6 = v14;
      v82 = v14;
    }
    v11 = v14 >> 4;
  }
  else
  {
    v10 = 1;
    v66 = 1;
    v11 = a4 >> 4;
    if ( a4 >> 4 < 2 )
    {
      v6 = a4 + 16;
      v82 = a4 + 16;
      v11 = 2LL;
    }
    *a6 = 3;
  }
  if ( (a2 & 0x800000) != 0 && (RtlGetNtGlobalFlags() & 0x800) == 0 )
  {
    v10 |= 8u;
    v66 = v10;
  }
  if ( (v80 & 1) == 0 )
  {
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 352), 1u);
    LOBYTE(a5) = 1;
    v64 = 1;
  }
  if ( v11 > *(unsigned int *)(a1 + 148) )
  {
    if ( (*(_DWORD *)(a1 + 112) & 2) != 0 )
    {
      v82 = v6 + 56;
      if ( (unsigned int)RtlpHpHeapCheckCommitLimit(
                           (v6 + 4151) & 0xFFFFFFFFFFFFF000uLL,
                           *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664),
                           a1,
                           (unsigned __int64 *)(a1 + 376)) )
      {
        a5 = 0LL;
        v54 = qword_140E28000;
        do
        {
          v55 = v54 ^ (v54 >> 12) ^ ((v54 ^ (v54 >> 12)) << 25) ^ ((v54 ^ (v54 >> 12) ^ ((v54 ^ (v54 >> 12)) << 25)) >> 27);
          a5 = v55;
          v56 = v54;
          v54 = _InterlockedCompareExchange64(&qword_140E28000, v55, v54);
        }
        while ( v56 != v54 );
        v75 = (unsigned __int64)((-3 * (_BYTE)v55) & 0xF) << 12;
        v57 = RtlpHpAllocVirtBlockCommitFirst(v55, &v82, v75, &v70);
        v58 = (_QWORD *)v57;
        v76 = v57;
        if ( v57 )
        {
          v60 = v82;
          *(_WORD *)(v57 + 56) = v82 - v7;
          *(_BYTE *)(v57 + 58) = v10 | 2;
          *(_QWORD *)(v57 + 32) = v60;
          *(_QWORD *)(v57 + 40) = v70;
          *(_BYTE *)(v57 + 63) = 4;
          *(_QWORD *)(a1 + 592) += v60;
          if ( *(_DWORD *)(a1 + 124) )
          {
            *(_BYTE *)(v57 + 59) = *(_BYTE *)(v57 + 56) ^ *(_BYTE *)(v57 + 57) ^ *(_BYTE *)(v57 + 58);
            *(_DWORD *)(v57 + 56) ^= *(_DWORD *)(a1 + 136);
          }
          v61 = a1 + 272;
          v62 = *(__int64 **)(a1 + 280);
          if ( *v62 == a1 + 272 )
          {
            *v58 = v61;
            v58[1] = v62;
            *v62 = (__int64)v58;
            *(_QWORD *)(a1 + 280) = v58;
          }
          else
          {
            RtlpLogHeapFailure(13, 0LL, v61, 0LL, *v62, 0LL);
          }
          v9 = (ULONG_PTR)(v58 + 8);
        }
        else
        {
          v9 = 0LL;
          ++*(_DWORD *)(a1 + 632);
        }
        v59 = v64;
        goto LABEL_122;
      }
    }
    goto LABEL_120;
  }
  v77 = a1 + 336;
  Entry = RtlpFindEntry(a1, v11);
  v16 = (__int64 *)Entry;
  v78 = Entry;
  if ( a1 + 336 != Entry )
  {
    v17 = Entry - 16;
    v71 = Entry - 16;
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(Entry - 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(Entry - 5) != (*(_BYTE *)(Entry - 8) ^ (unsigned __int8)(*(_BYTE *)(Entry - 7) ^ *(_BYTE *)(Entry - 6))) )
        RtlpAnalyzeHeapFailure(a1, v17);
    }
    v18 = *((unsigned __int16 *)v16 - 4);
    if ( v18 >= v11 )
    {
      v19 = *v16;
      v69 = *v16;
      v20 = (__int64 *)v16[1];
      v67 = v20;
      v21 = *v20;
      v22 = *(_QWORD *)(*v16 + 8);
      if ( *v20 == v22 && (__int64 *)v21 == v16 )
      {
        *(_QWORD *)(a1 + 192) -= v18;
        v23 = *(__int64 ***)(a1 + 312);
        if ( v23 )
        {
          v24 = *((unsigned __int16 *)v16 - 4);
          while ( 1 )
          {
            v25 = *((unsigned int *)v23 + 2);
            if ( v24 < v25 )
              break;
            if ( !*v23 )
            {
              LODWORD(v24) = v25 - 1;
              break;
            }
            v23 = (__int64 **)*v23;
          }
          RtlpHeapRemoveListEntry(a1, (_DWORD)v23, (_DWORD)v20, (_DWORD)v16, v24, *(unsigned __int16 *)(v17 + 8));
          v19 = v69;
          v20 = v67;
        }
        *v20 = v19;
        *(_QWORD *)(v19 + 8) = v20;
LABEL_50:
        v35 = 1;
        goto LABEL_54;
      }
      RtlpLogHeapFailure(13, a1, (ULONG_PTR)v16, v22, v21, 0LL);
      goto LABEL_53;
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      *((_BYTE *)v16 - 5) = *((_BYTE *)v16 - 8) ^ *((_BYTE *)v16 - 7) ^ *((_BYTE *)v16 - 6);
      *((_DWORD *)v16 - 2) ^= *(_DWORD *)(a1 + 136);
    }
  }
  v26 = RtlpExtendHeap(a1);
  v17 = v26;
  v71 = v26;
  if ( !v26 )
  {
LABEL_120:
    v9 = 0LL;
    goto LABEL_121;
  }
  v27 = v26 + 16;
  v28 = *(_QWORD *)(v26 + 16);
  v29 = *(__int64 **)(v26 + 24);
  v68 = v29;
  v30 = *v29;
  v31 = *(_QWORD *)(v28 + 8);
  if ( *v29 == v31 && v30 == v27 )
  {
    *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v17 + 8);
    v32 = *(__int64 ***)(a1 + 312);
    if ( v32 )
    {
      v33 = *(unsigned __int16 *)(v17 + 8);
      while ( 1 )
      {
        v34 = *((unsigned int *)v32 + 2);
        if ( v33 < v34 )
          break;
        if ( !*v32 )
        {
          LODWORD(v33) = v34 - 1;
          break;
        }
        v32 = (__int64 **)*v32;
      }
      RtlpHeapRemoveListEntry(a1, (_DWORD)v32, v27, v27, v33, *(unsigned __int16 *)(v17 + 8));
      v29 = v68;
    }
    *v29 = v28;
    *(_QWORD *)(v28 + 8) = v29;
    goto LABEL_50;
  }
  RtlpLogHeapFailure(13, a1, v27, v31, v30, 0LL);
LABEL_53:
  v35 = 0;
LABEL_54:
  if ( v35 )
  {
    v36 = *(_BYTE *)(v17 + 10);
    v37 = v65;
    if ( !v65 && (v36 & 4) != 0 )
    {
      v38 = 16LL * *(unsigned __int16 *)(v17 + 8) - 32;
      if ( (v36 & 2) != 0 && v38 > 4 )
        v38 = 16LL * *(unsigned __int16 *)(v17 + 8) - 36;
      v39 = RtlCompareMemoryUlong((PVOID)(v17 + 32), v38, 0xFEEEFEEE);
      if ( v39 != v38 )
      {
        DbgPrint(
          "HEAP: Free Heap block %p modified at %p after it was freed\n",
          (const void *)v17,
          (const void *)(v17 + v39 + 32));
        if ( (_BYTE)KdDebuggerEnabled )
          __debugbreak();
      }
      v37 = 0;
    }
    v72 = v17;
    if ( (*(_BYTE *)(v17 + 10) & 1) != 0 )
    {
      RtlpLogHeapFailure(3, a1, v17, 0LL, 0LL, 0LL);
      goto LABEL_121;
    }
    *(_BYTE *)(v17 + 10) = v66;
    v40 = *(unsigned __int16 *)(v17 + 8) - v11;
    v73 = v40;
    *(_WORD *)(v17 + 8) = v11;
    v41 = a3;
    v42 = v6 - a3;
    v43 = 16 * v11;
    if ( v6 - a3 >= 0x3F )
    {
      *(_QWORD *)(v43 + v17) = v42;
      *(_BYTE *)(v17 + 15) = 63;
    }
    else
    {
      *(_BYTE *)(v17 + 15) = v42;
    }
    *(_BYTE *)(v17 + 11) = 0;
    if ( v40 )
    {
      if ( v40 == 1 )
      {
        ++*(_WORD *)(v17 + 8);
        v44 = v6 - a3 + 16;
        v79 = v44;
        if ( v44 >= 0x3F )
        {
          *(_QWORD *)(v43 + v17 + 16) = v44;
          *(_BYTE *)(v17 + 15) = 63;
        }
        else
        {
          *(_BYTE *)(v17 + 15) = v44;
        }
      }
      else
      {
        v45 = v37 ^ 1;
        v46 = *(unsigned __int8 *)(v17 + 14);
        if ( (_BYTE)v46 )
          v47 = (v17 & 0xFFFF0000) + ((1 - v46) << 16);
        else
          v47 = a1;
        v63 = v40;
        LOBYTE(v40) = v36;
        if ( !(unsigned __int8)RtlpCreateSplitBlock(a1, v47, (int)v43 + (int)v17, v40, v45, v11, v63) )
          goto LABEL_121;
        v41 = a3;
      }
    }
    v9 = v17 + 16;
    v48 = 16LL * *(unsigned __int16 *)(v17 + 8);
    v49 = v48;
    if ( (*(_BYTE *)(v17 + 15) & 0x3F) == 0x3F )
    {
      v49 = v48 - 8;
      v48 -= 8LL;
    }
    if ( v65 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v17 + 11) = *(_BYTE *)(v17 + 8) ^ *(_BYTE *)(v17 + 9) ^ *(_BYTE *)(v17 + 10);
        *(_DWORD *)(v17 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      if ( (_BYTE)a5 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(a1 + 352));
        LOBYTE(a5) = 0;
      }
      if ( (v80 & 8) != 0 )
        memset_0((void *)(v17 + 16), 0, v48 - 8);
      goto LABEL_121;
    }
    if ( (v80 & 8) != 0 )
    {
      memset_0((void *)(v17 + 16), 0, v49 - 8);
      v50 = (_DWORD *)(a1 + 112);
LABEL_97:
      if ( (*v50 & 0x20) != 0 )
      {
        *(__m128i *)(v9 + a3) = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
        *(_BYTE *)(v17 + 10) |= 4u;
      }
      *(_BYTE *)(v17 + 11) = 0;
      if ( (*(_BYTE *)(v17 + 10) & 2) != 0 )
      {
        if ( *(_BYTE *)(v17 + 15) == 4 )
          v53 = (_OWORD *)(v17 - 32);
        else
          v53 = (_OWORD *)(v17 + 16LL * *(unsigned __int16 *)(v17 + 8) - 16);
        *v53 = 0LL;
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v17 + 11) = *(_BYTE *)(v17 + 8) ^ *(_BYTE *)(v17 + 9) ^ *(_BYTE *)(v17 + 10);
        *(_DWORD *)(v17 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      goto LABEL_121;
    }
    v50 = (_DWORD *)(a1 + 112);
    if ( (*(_DWORD *)(a1 + 112) & 0x40) == 0 )
      goto LABEL_97;
    v51 = (void *)(v17 + 16);
    v74 = v17 + 16;
    v52 = (v41 & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
    if ( !v52 )
      goto LABEL_97;
    if ( (v9 & 4) != 0 )
    {
      *(_DWORD *)v9 = -1163005939;
      if ( !--v52 )
        goto LABEL_97;
      v51 = (void *)(v17 + 20);
      v74 = v17 + 20;
    }
    memset64(v51, 0xBAADF00DBAADF00DuLL, v52 >> 1);
    v50 = (_DWORD *)(a1 + 112);
    if ( (v52 & 1) != 0 )
      *((_DWORD *)v51 + v52 - 1) = -1163005939;
    goto LABEL_97;
  }
LABEL_121:
  v59 = a5;
LABEL_122:
  if ( v59 )
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 352));
  return v9;
}
