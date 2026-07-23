/*
 * XREFs of RtlpScanEnvironment @ 0x1800AE5E0
 * Callers:
 *     RtlQueryEnvironmentVariable @ 0x1800AD560 (RtlQueryEnvironmentVariable.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpInsertEnvironmentHashTableEntry @ 0x1800AE9C0 (RtlpInsertEnvironmentHashTableEntry.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlpScanEnvironment(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        __int64 a3,
        _WORD *a4,
        unsigned __int64 a5,
        unsigned __int64 *a6,
        int a7)
{
  __int64 v7; // r14
  unsigned __int16 *v8; // r11
  int v9; // edi
  unsigned __int16 *v10; // rax
  unsigned int v12; // ebp
  unsigned __int16 *v13; // r12
  unsigned __int16 *v14; // rsi
  unsigned __int16 *v15; // r9
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r10
  unsigned __int16 v18; // ax
  int v19; // r13d
  unsigned __int16 *i; // r14
  unsigned __int16 *v21; // rdi
  _BYTE *v22; // r14
  __int64 v23; // rdi
  _QWORD *Heap; // rax
  void *v25; // r15
  __int64 v26; // r9
  unsigned __int16 *v27; // r10
  unsigned __int64 v28; // r8
  __int16 v29; // dx
  int inserted; // edi
  unsigned __int64 v31; // rbx
  size_t v32; // rbx
  unsigned __int16 *v34; // [rsp+70h] [rbp+8h]
  __int64 v36; // [rsp+80h] [rbp+18h]

  v7 = qword_1801CF038;
  v8 = &a2[a3];
  v9 = a7;
  v10 = a2;
  v34 = v8;
  v12 = 0;
  v36 = qword_1801CF038;
  while ( *a1 )
  {
    v13 = a1;
    v14 = a1;
    v15 = v10;
    if ( v10 >= v8 )
    {
LABEL_13:
      if ( v15 == v8 && *a1 == 61 )
      {
        v19 = 1;
        goto LABEL_19;
      }
    }
    else
    {
      while ( 1 )
      {
        v16 = *a1;
        if ( !(_WORD)v16 )
          break;
        if ( (unsigned int)v16 >= 0x61 )
        {
          if ( (unsigned int)v16 > 0x7A )
          {
            if ( v7 && (unsigned __int16)v16 >= 0xC0u )
              LOWORD(v16) = *(_WORD *)(v7
                                     + 2
                                     * ((v16 & 0xF)
                                      + *(unsigned __int16 *)(v7
                                                            + 2LL
                                                            * (((unsigned __int8)v16 >> 4)
                                                             + (unsigned int)*(unsigned __int16 *)(v7 + 2 * (v16 >> 8))))))
                          + v16;
          }
          else
          {
            LOWORD(v16) = v16 - 32;
          }
        }
        v17 = *v15;
        if ( (unsigned int)v17 >= 0x61 )
        {
          if ( (unsigned int)v17 > 0x7A )
          {
            if ( v7 && (unsigned __int16)v17 >= 0xC0u )
              LOWORD(v17) = *(_WORD *)(v7
                                     + 2
                                     * ((v17 & 0xF)
                                      + *(unsigned __int16 *)(v7
                                                            + 2LL
                                                            * (((unsigned __int8)v17 >> 4)
                                                             + (unsigned int)*(unsigned __int16 *)(v7 + 2 * (v17 >> 8))))))
                          + v17;
          }
          else
          {
            LOWORD(v17) = v17 - 32;
          }
        }
        if ( (_WORD)v16 == (_WORD)v17 )
        {
          ++a1;
          if ( ++v15 < v8 )
            continue;
        }
        goto LABEL_13;
      }
    }
    v18 = *a1;
    v19 = 0;
    if ( *a1 )
    {
      while ( v18 != 61 || a1 == v13 )
      {
        v18 = a1[1];
        ++a1;
        if ( !v18 )
          goto LABEL_17;
      }
LABEL_19:
      for ( i = a1; *a1; ++a1 )
        ;
      v21 = i;
      v22 = i + 1;
      v23 = v21 - v13;
      if ( !a7 || *((_QWORD *)&xmmword_1801D48F0 + 1) >= (unsigned __int64)a1 )
        goto LABEL_22;
      if ( NtCurrentPeb()->ProcessHeap )
      {
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x30uLL);
        v25 = Heap;
        if ( Heap )
        {
          v26 = 314159LL;
          Heap[2] = v13;
          Heap[3] = v22;
          Heap[4] = v23;
          v27 = &v14[(unsigned int)v23];
          Heap[5] = ((char *)a1 - v22) >> 1;
          if ( v14 < v27 )
          {
            while ( 1 )
            {
              v28 = *v14;
              if ( (unsigned int)v28 < 0x61 )
                goto LABEL_43;
              if ( (unsigned int)v28 > 0x7A )
                break;
              LOBYTE(v29) = v28 - 32;
              LOWORD(v28) = v28 - 32;
LABEL_38:
              ++v14;
              v26 = BYTE1(v28) + 37 * ((unsigned __int8)v29 + 37 * v26);
              if ( v14 >= v27 )
                goto LABEL_39;
            }
            if ( qword_1801CF038 && (unsigned __int16)v28 >= 0xC0u )
            {
              v29 = *(_WORD *)(qword_1801CF038
                             + 2
                             * ((v28 & 0xF)
                              + *(unsigned __int16 *)(qword_1801CF038
                                                    + 2LL
                                                    * (((unsigned __int8)v28 >> 4)
                                                     + (unsigned int)*(unsigned __int16 *)(qword_1801CF038
                                                                                         + 2 * (v28 >> 8))))))
                  + v28;
              LOWORD(v28) = v29;
              goto LABEL_38;
            }
LABEL_43:
            LOBYTE(v29) = *v14;
            goto LABEL_38;
          }
LABEL_39:
          Heap[1] = v26;
          inserted = RtlpInsertEnvironmentHashTableEntry(&RtlpEnvironmentHashTable, Heap);
          if ( inserted >= 0 )
          {
            *((_QWORD *)&xmmword_1801D48F0 + 1) = a1;
LABEL_53:
            v12 = 0;
LABEL_22:
            v9 = a7;
            goto LABEL_23;
          }
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v25);
          if ( inserted == -1073741771 )
            goto LABEL_53;
        }
      }
      v12 = 0;
      v9 = 0;
      a7 = 0;
LABEL_23:
      if ( v19 )
      {
        v31 = ((char *)a1 - v22) >> 1;
        if ( a4 )
        {
          if ( v31 < a5 )
          {
            *a6 = v31;
            v32 = v31;
            memmove(a4, v22, v32 * 2);
            a4[v32] = 0;
            return v12;
          }
          if ( a5 )
            *a4 = 0;
        }
        v12 = -1073741789;
        *a6 = v31 + 1;
        return v12;
      }
      v8 = v34;
      ++a1;
      v10 = a2;
      v7 = v36;
    }
    else
    {
LABEL_17:
      v10 = a2;
      ++a1;
    }
  }
  if ( v9 )
  {
    *((_QWORD *)&xmmword_1801D48F0 + 1) = a1;
    LOBYTE(xmmword_1801D48F0) = 1;
  }
  return 3221225728LL;
}
