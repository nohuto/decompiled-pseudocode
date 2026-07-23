/*
 * XREFs of RtlpCreateSplitBlock @ 0x1405E8CD0
 * Callers:
 *     RtlpAllocateHeap @ 0x1405E7EFC (RtlpAllocateHeap.c)
 * Callees:
 *     DbgPrint @ 0x140274290 (DbgPrint.c)
 *     RtlpLogHeapFailure @ 0x14035B9C4 (RtlpLogHeapFailure.c)
 *     RtlpInsertFreeBlock @ 0x1405EA8C0 (RtlpInsertFreeBlock.c)
 *     RtlpAnalyzeHeapFailure @ 0x1405F025C (RtlpAnalyzeHeapFailure.c)
 *     RtlpFindEntry @ 0x1405F0A74 (RtlpFindEntry.c)
 *     RtlpHeapAddListEntry @ 0x1405F0B88 (RtlpHeapAddListEntry.c)
 *     RtlpHeapRemoveListEntry @ 0x1405F0E50 (RtlpHeapRemoveListEntry.c)
 *     RtlCompareMemoryUlong @ 0x1406B49B0 (RtlCompareMemoryUlong.c)
 */

char __fastcall RtlpCreateSplitBlock(ULONG_PTR a1, __int64 a2, ULONG_PTR a3, char a4, char a5, __int16 a6, __int64 a7)
{
  int v7; // r13d
  ULONG_PTR v10; // rcx
  unsigned __int64 v11; // rdi
  ULONG_PTR v12; // rdi
  __int64 *v13; // r14
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 **v17; // rdx
  unsigned __int64 v18; // r8
  int v19; // r8d
  char v20; // al
  SIZE_T v21; // rbp
  SIZE_T v22; // rax
  unsigned __int64 v23; // r15
  _QWORD **v24; // rdi
  _QWORD *v25; // r8
  int v26; // ecx
  int v27; // eax
  unsigned __int16 v28; // ax
  __int64 *v29; // rax
  _QWORD *v30; // rdi
  __int64 **v31; // rdx
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // r8
  _DWORD *v34; // r8
  unsigned __int64 v35; // rdx
  _QWORD **v36; // rdi
  _QWORD *Entry; // r8
  int v38; // ecx
  int v39; // eax
  unsigned __int16 v40; // ax
  __int64 *v41; // rax
  _QWORD **v43; // rdi
  _QWORD *v44; // r8
  int v45; // ecx
  int v46; // eax
  unsigned __int16 v47; // ax
  __int64 *v48; // rax
  _QWORD *v49; // rdi
  __int64 **v50; // rdx
  unsigned __int64 v51; // r8
  int v52; // r8d
  _DWORD *v53; // r8
  unsigned __int64 v54; // rdx
  _QWORD **v55; // rdi
  _QWORD *v56; // r8
  int v57; // ecx
  int v58; // eax
  unsigned __int16 v59; // ax
  __int64 *v60; // rax
  _QWORD *v61; // rdi
  __int64 **v62; // rdx
  unsigned __int64 v63; // rcx
  unsigned __int64 v64; // r8
  int v65; // [rsp+38h] [rbp-60h]
  int v66; // [rsp+48h] [rbp-50h]
  int v67; // [rsp+58h] [rbp-40h]
  int v68; // [rsp+68h] [rbp-30h]

  v7 = 0;
  *(_BYTE *)(a3 + 15) = 0;
  *(_BYTE *)(a3 + 10) = a4;
  *(_WORD *)(a3 + 12) = *(_WORD *)(a1 + 140) ^ a6;
  v10 = *(_QWORD *)(a2 + 40);
  if ( v10 == a2 )
  {
    LOBYTE(v11) = 0;
  }
  else
  {
    v11 = ((a3 - a2) >> 16) + 1;
    if ( v11 >= 0xFE )
      RtlpLogHeapFailure(3, v10, a3, a2, 0LL, 0LL);
  }
  *(_BYTE *)(a3 + 14) = v11;
  v12 = a3 + 16 * a7;
  *(_BYTE *)(a3 + 11) = 0;
  *(_WORD *)(a3 + 8) = a7;
  while ( ((*(_BYTE *)(v12 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v12 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v12 + 11) != (*(_BYTE *)(v12 + 8) ^ (unsigned __int8)(*(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10))) )
        RtlpAnalyzeHeapFailure(a1, a3 + 16 * a7);
    }
    v13 = *(__int64 **)(v12 + 24);
    v14 = *(_QWORD *)(v12 + 16);
    v15 = *v13;
    v16 = *(_QWORD *)(v14 + 8);
    if ( *v13 == v16 && v15 == v12 + 16 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v12 + 8);
      v17 = *(__int64 ***)(a1 + 312);
      if ( v17 )
      {
        while ( 1 )
        {
          v18 = *((unsigned int *)v17 + 2);
          if ( *(unsigned __int16 *)(v12 + 8) < v18 )
            break;
          if ( !*v17 )
          {
            v19 = v18 - 1;
            goto LABEL_20;
          }
          v17 = (__int64 **)*v17;
        }
        v19 = *(unsigned __int16 *)(v12 + 8);
LABEL_20:
        RtlpHeapRemoveListEntry(a1, (_DWORD)v17, v19, v12 + 16, v19, *(unsigned __int16 *)(v12 + 8));
      }
      *v13 = v14;
      *(_QWORD *)(v14 + 8) = v13;
      if ( a5 )
      {
        v20 = *(_BYTE *)(v12 + 10);
        if ( (v20 & 4) != 0 )
        {
          v21 = 16LL * *(unsigned __int16 *)(v12 + 8) - 32;
          if ( (v20 & 2) != 0 && v21 > 4 )
            v21 = 16LL * *(unsigned __int16 *)(v12 + 8) - 36;
          v22 = RtlCompareMemoryUlong((PVOID)(v12 + 32), v21, 0xFEEEFEEE);
          if ( v22 != v21 )
          {
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)(a3 + 16 * a7),
              (const void *)(v22 + v12 + 32));
            if ( (_BYTE)KdDebuggerEnabled )
              __debugbreak();
          }
        }
      }
      *(_BYTE *)(a3 + 10) = *(_BYTE *)(v12 + 10);
      v23 = *(unsigned __int16 *)(v12 + 8) + a7;
      if ( v23 > 0xFF00 )
      {
        RtlpInsertFreeBlock(a1, a3, v23);
        return 1;
      }
      *(_WORD *)(a3 + 8) = v23;
      *(_WORD *)(a3 + 16 * v23 + 12) = *(_WORD *)(a1 + 140) ^ v23;
      *(_BYTE *)(a3 + 15) = 0;
      if ( a5 )
      {
        *(_BYTE *)(a3 + 10) &= 0xF0u;
        if ( (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
        {
          v34 = (_DWORD *)(a3 + 32);
          v35 = (16 * (unsigned __int64)(unsigned __int16)v23 - 32) >> 2;
          if ( v35 )
          {
            if ( ((unsigned __int8)v34 & 4) != 0 )
            {
              --v35;
              *v34 = -17891602;
              v34 = (_DWORD *)(a3 + 36);
            }
            memset64(v34, 0xFEEEFEEEFEEEFEEEuLL, v35 >> 1);
            if ( (v35 & 1) != 0 )
              v34[v35 - 1] = -17891602;
          }
          *(_BYTE *)(a3 + 10) |= 4u;
        }
        v36 = (_QWORD **)(a1 + 336);
        if ( *(_QWORD *)(a1 + 312) )
          Entry = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v23);
        else
          Entry = *v36;
        if ( v36 != Entry )
        {
          v38 = *(_DWORD *)(a1 + 124);
          do
          {
            if ( v38 )
            {
              v39 = *((_DWORD *)Entry - 2);
              v38 = *(_DWORD *)(a1 + 124);
              LOWORD(v66) = v39;
              if ( (v39 & v38) != 0 )
                v66 = *(_DWORD *)(a1 + 136) ^ v39;
              v40 = v66;
            }
            else
            {
              v40 = *((_WORD *)Entry - 4);
            }
            if ( (unsigned __int16)v23 <= (unsigned __int64)v40 )
              break;
            Entry = (_QWORD *)*Entry;
          }
          while ( v36 != Entry );
        }
        v41 = (__int64 *)Entry[1];
        v30 = (_QWORD *)(a3 + 16);
        if ( (_QWORD *)*v41 == Entry )
        {
          *v30 = Entry;
          *(_QWORD *)(a3 + 24) = v41;
          *v41 = (__int64)v30;
          Entry[1] = v30;
        }
        else
        {
          RtlpLogHeapFailure(13, 0LL, (ULONG_PTR)Entry, 0LL, *v41, 0LL);
        }
        *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
        v31 = *(__int64 ***)(a1 + 312);
        if ( v31 )
        {
          v32 = *(unsigned __int16 *)(a3 + 8);
          while ( 1 )
          {
            v33 = *((unsigned int *)v31 + 2);
            if ( v32 < v33 )
              break;
            if ( !*v31 )
            {
LABEL_78:
              LODWORD(v32) = v33 - 1;
              break;
            }
            v31 = (__int64 **)*v31;
          }
LABEL_79:
          RtlpHeapAddListEntry(a1, (_DWORD)v31, v33, (_DWORD)v30, v32, *(unsigned __int16 *)(a3 + 8));
        }
      }
      else
      {
        *(_BYTE *)(a3 + 10) = 0;
        v24 = (_QWORD **)(a1 + 336);
        if ( *(_QWORD *)(a1 + 312) )
          v25 = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v23);
        else
          v25 = *v24;
        if ( v24 != v25 )
        {
          v26 = *(_DWORD *)(a1 + 124);
          do
          {
            if ( v26 )
            {
              v27 = *((_DWORD *)v25 - 2);
              v26 = *(_DWORD *)(a1 + 124);
              LOWORD(v65) = v27;
              if ( (v27 & v26) != 0 )
                v65 = *(_DWORD *)(a1 + 136) ^ v27;
              v28 = v65;
            }
            else
            {
              v28 = *((_WORD *)v25 - 4);
            }
            if ( (unsigned __int16)v23 <= (unsigned __int64)v28 )
              break;
            v25 = (_QWORD *)*v25;
          }
          while ( v24 != v25 );
        }
        v29 = (__int64 *)v25[1];
        v30 = (_QWORD *)(a3 + 16);
        if ( (_QWORD *)*v29 == v25 )
        {
          *v30 = v25;
          *(_QWORD *)(a3 + 24) = v29;
          *v29 = (__int64)v30;
          v25[1] = v30;
        }
        else
        {
          RtlpLogHeapFailure(13, 0LL, (ULONG_PTR)v25, 0LL, *v29, 0LL);
        }
        *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
        v31 = *(__int64 ***)(a1 + 312);
        if ( v31 )
        {
          v32 = *(unsigned __int16 *)(a3 + 8);
          while ( 1 )
          {
            v33 = *((unsigned int *)v31 + 2);
            if ( v32 < v33 )
              goto LABEL_79;
            if ( !*v31 )
              goto LABEL_78;
            v31 = (__int64 **)*v31;
          }
        }
      }
LABEL_80:
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(a3 + 11) = *(_BYTE *)(a3 + 8) ^ *(_BYTE *)(a3 + 9) ^ *(_BYTE *)(a3 + 10);
        *(_DWORD *)(a3 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      return 1;
    }
    RtlpLogHeapFailure(13, a1, v12 + 16, v16, v15, 0LL);
    if ( v7 )
      return 0;
    v7 = 1;
  }
  *(_WORD *)(v12 + 12) = *(_WORD *)(a1 + 140) ^ a7;
  *(_BYTE *)(a3 + 15) = 0;
  if ( !a5 )
  {
    *(_BYTE *)(a3 + 10) = 0;
    v43 = (_QWORD **)(a1 + 336);
    if ( *(_QWORD *)(a1 + 312) )
      v44 = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)a7);
    else
      v44 = *v43;
    if ( v43 != v44 )
    {
      v45 = *(_DWORD *)(a1 + 124);
      do
      {
        if ( v45 )
        {
          v46 = *((_DWORD *)v44 - 2);
          v45 = *(_DWORD *)(a1 + 124);
          LOWORD(v67) = v46;
          if ( (v45 & v46) != 0 )
            v67 = *(_DWORD *)(a1 + 136) ^ v46;
          v47 = v67;
        }
        else
        {
          v47 = *((_WORD *)v44 - 4);
        }
        if ( (unsigned __int16)a7 <= (unsigned __int64)v47 )
          break;
        v44 = (_QWORD *)*v44;
      }
      while ( v43 != v44 );
    }
    v48 = (__int64 *)v44[1];
    v49 = (_QWORD *)(a3 + 16);
    if ( (_QWORD *)*v48 == v44 )
    {
      *v49 = v44;
      *(_QWORD *)(a3 + 24) = v48;
      *v48 = (__int64)v49;
      v44[1] = v49;
    }
    else
    {
      RtlpLogHeapFailure(13, 0LL, (ULONG_PTR)v44, 0LL, *v48, 0LL);
    }
    *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
    v50 = *(__int64 ***)(a1 + 312);
    if ( v50 )
    {
      while ( 1 )
      {
        v51 = *((unsigned int *)v50 + 2);
        if ( *(unsigned __int16 *)(a3 + 8) < v51 )
          break;
        if ( !*v50 )
        {
          v52 = v51 - 1;
          goto LABEL_106;
        }
        v50 = (__int64 **)*v50;
      }
      v52 = *(unsigned __int16 *)(a3 + 8);
LABEL_106:
      RtlpHeapAddListEntry(a1, (_DWORD)v50, v52, (_DWORD)v49, v52, *(unsigned __int16 *)(a3 + 8));
    }
    goto LABEL_80;
  }
  *(_BYTE *)(a3 + 10) &= 0xF0u;
  if ( (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
  {
    v53 = (_DWORD *)(a3 + 32);
    v54 = (16 * (unsigned __int64)(unsigned __int16)a7 - 32) >> 2;
    if ( v54 )
    {
      if ( ((unsigned __int8)v53 & 4) != 0 )
      {
        --v54;
        *v53 = -17891602;
        v53 = (_DWORD *)(a3 + 36);
      }
      memset64(v53, 0xFEEEFEEEFEEEFEEEuLL, v54 >> 1);
      if ( (v54 & 1) != 0 )
        v53[v54 - 1] = -17891602;
    }
    *(_BYTE *)(a3 + 10) |= 4u;
  }
  v55 = (_QWORD **)(a1 + 336);
  if ( *(_QWORD *)(a1 + 312) )
    v56 = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)a7);
  else
    v56 = *v55;
  if ( v55 != v56 )
  {
    v57 = *(_DWORD *)(a1 + 124);
    do
    {
      if ( v57 )
      {
        v58 = *((_DWORD *)v56 - 2);
        v57 = *(_DWORD *)(a1 + 124);
        LOWORD(v68) = v58;
        if ( (v58 & v57) != 0 )
          v68 = *(_DWORD *)(a1 + 136) ^ v58;
        v59 = v68;
      }
      else
      {
        v59 = *((_WORD *)v56 - 4);
      }
      if ( (unsigned __int16)a7 <= (unsigned __int64)v59 )
        break;
      v56 = (_QWORD *)*v56;
    }
    while ( v55 != v56 );
  }
  v60 = (__int64 *)v56[1];
  v61 = (_QWORD *)(a3 + 16);
  if ( (_QWORD *)*v60 == v56 )
  {
    *v61 = v56;
    *(_QWORD *)(a3 + 24) = v60;
    *v60 = (__int64)v61;
    v56[1] = v61;
  }
  else
  {
    RtlpLogHeapFailure(13, 0LL, (ULONG_PTR)v56, 0LL, *v60, 0LL);
  }
  *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
  v62 = *(__int64 ***)(a1 + 312);
  if ( v62 )
  {
    v63 = *(unsigned __int16 *)(a3 + 8);
    while ( 1 )
    {
      v64 = *((unsigned int *)v62 + 2);
      if ( v63 < v64 )
        break;
      if ( !*v62 )
      {
        LODWORD(v63) = v64 - 1;
        break;
      }
      v62 = (__int64 **)*v62;
    }
    RtlpHeapAddListEntry(a1, (_DWORD)v62, v64, a3 + 16, v63, *(unsigned __int16 *)(a3 + 8));
  }
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(a3 + 11) = *(_BYTE *)(a3 + 8) ^ *(_BYTE *)(a3 + 9) ^ *(_BYTE *)(a3 + 10);
    *(_DWORD *)(a3 + 8) ^= *(_DWORD *)(a1 + 136);
  }
  return 1;
}
