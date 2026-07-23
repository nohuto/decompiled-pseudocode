/*
 * XREFs of RtlZeroHeap @ 0x1407831B0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     RtlpLogHeapFailure @ 0x14035B9C4 (RtlpLogHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x1405EFF10 (RtlpHeapExceptionFilter.c)
 *     RtlpAnalyzeHeapFailure @ 0x1405F025C (RtlpAnalyzeHeapFailure.c)
 *     RtlpFindEntry @ 0x1405F0A74 (RtlpFindEntry.c)
 *     RtlpHeapAddListEntry @ 0x1405F0B88 (RtlpHeapAddListEntry.c)
 *     RtlpHeapRemoveListEntry @ 0x1405F0E50 (RtlpHeapRemoveListEntry.c)
 */

NTSTATUS __cdecl RtlZeroHeap(PVOID HeapHandle, ULONG Flags)
{
  _BYTE *v3; // rsi
  char *v5; // rcx
  char *v6; // rax
  ULONG_PTR v7; // r15
  _DWORD *v8; // r12
  unsigned __int16 *v9; // r10
  unsigned __int8 v10; // cl
  _BYTE *v11; // r13
  _QWORD *v12; // rsi
  __int64 v13; // rcx
  __int64 *v14; // r8
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rcx
  _QWORD **v21; // rdi
  _QWORD *Entry; // r8
  int v23; // eax
  unsigned __int16 v24; // ax
  __int64 *v25; // rax
  __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // rdx
  _DWORD *v30; // r8
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rdx
  char v33; // [rsp+30h] [rbp-B8h]
  unsigned __int16 *v34; // [rsp+38h] [rbp-B0h]
  ULONG_PTR v35; // [rsp+48h] [rbp-A0h]
  __int64 *v36; // [rsp+58h] [rbp-90h]
  unsigned __int64 v37; // [rsp+58h] [rbp-90h]
  __int64 v38; // [rsp+78h] [rbp-70h]
  _BYTE *v39; // [rsp+80h] [rbp-68h]
  int v40; // [rsp+A0h] [rbp-48h]
  char *v41; // [rsp+108h] [rbp+20h]

  v3 = 0LL;
  v33 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    return 0;
  if ( ((*((_BYTE *)HeapHandle + 116) | (unsigned __int8)Flags) & 1) == 0 )
  {
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)HeapHandle + 44), 1u);
    v33 = 1;
  }
  v5 = (char *)HeapHandle + 288;
  v6 = (char *)*((_QWORD *)HeapHandle + 36);
LABEL_6:
  v41 = v6;
  if ( v6 != v5 )
  {
    v7 = *((_QWORD *)v6 + 5);
    v35 = v7;
    v8 = (char *)HeapHandle + 124;
    while ( 1 )
    {
      if ( v7 >= *((_QWORD *)v6 + 6) )
      {
        v6 = *(char **)v6;
        v5 = (char *)HeapHandle + 288;
        goto LABEL_6;
      }
      if ( v3 )
      {
        if ( !*v8 )
          goto LABEL_15;
        v3[11] = v3[8] ^ v3[9] ^ v3[10];
        *((_DWORD *)v3 + 2) ^= *((_DWORD *)HeapHandle + 34);
      }
      if ( *v8 )
      {
        *(_DWORD *)(v7 + 8) ^= *((_DWORD *)HeapHandle + 34);
        if ( *(_BYTE *)(v7 + 11) != (*(_BYTE *)(v7 + 8) ^ (unsigned __int8)(*(_BYTE *)(v7 + 9) ^ *(_BYTE *)(v7 + 10))) )
          RtlpAnalyzeHeapFailure((ULONG_PTR)HeapHandle, v7);
      }
LABEL_15:
      v3 = (_BYTE *)v7;
      v9 = (unsigned __int16 *)(v7 + 8);
      v34 = (unsigned __int16 *)(v7 + 8);
      v10 = *(_BYTE *)(v7 + 10);
      if ( (v10 & 1) != 0 )
        goto LABEL_65;
      v11 = (_BYTE *)v7;
      v39 = (_BYTE *)v7;
      if ( (v10 & 8) == 0 )
      {
        v29 = 16LL * *(unsigned __int16 *)(v7 + 8) - 32;
        v30 = (_DWORD *)(v7 + 32);
        if ( ((v10 >> 2) & ((*((_BYTE *)HeapHandle + 112) & 0x40) != 0)) != 0 )
        {
          v31 = v29 >> 2;
          if ( v31 )
          {
            if ( ((unsigned __int8)v30 & 4) != 0 )
            {
              *v30 = -17891602;
              if ( --v31 )
              {
                v30 = (_DWORD *)(v7 + 36);
                goto LABEL_57;
              }
            }
            else
            {
LABEL_57:
              memset64(v30, 0xFEEEFEEEFEEEFEEEuLL, v31 >> 1);
              if ( (v31 & 1) != 0 )
                v30[v31 - 1] = -17891602;
            }
          }
        }
        else
        {
          v32 = v29 >> 2;
          if ( v32 )
          {
            if ( ((unsigned __int8)v30 & 4) != 0 )
            {
              *v30 = 0;
              if ( !--v32 )
                goto LABEL_65;
              v30 = (_DWORD *)(v7 + 36);
            }
            memset(v30, 0, 8 * (v32 >> 1));
            if ( (v32 & 1) != 0 )
              v30[v32 - 1] = 0;
          }
        }
LABEL_65:
        if ( *(_BYTE *)(v7 + 15) == 3 )
          v7 += *(_QWORD *)(v7 + 56) + 64LL;
        else
          v7 += 16LL * *(unsigned __int16 *)(v7 + 8);
        v35 = v7;
        goto LABEL_51;
      }
      v12 = (_QWORD *)(v7 + 16);
      v13 = *(_QWORD *)(v7 + 16);
      v38 = v13;
      v14 = *(__int64 **)(v7 + 24);
      v36 = v14;
      v15 = *v14;
      v16 = *(_QWORD *)(v13 + 8);
      if ( *v14 == v16 && (_QWORD *)v15 == v12 )
      {
        *((_QWORD *)HeapHandle + 24) -= *(unsigned __int16 *)(v7 + 8);
        v17 = *((_QWORD *)HeapHandle + 39);
        if ( v17 )
        {
          v18 = *v9;
          while ( 1 )
          {
            v19 = *(unsigned int *)(v17 + 8);
            if ( v18 < v19 )
              break;
            if ( !*(_QWORD *)v17 )
            {
              LODWORD(v18) = v19 - 1;
              break;
            }
            v17 = *(_QWORD *)v17;
          }
          RtlpHeapRemoveListEntry((ULONG_PTR)HeapHandle, v17, (__int64)v14, (__int64 *)(v7 + 16), v18, *v9);
          v13 = v38;
          v14 = v36;
          v9 = (unsigned __int16 *)(v7 + 8);
        }
        *v14 = v13;
        *(_QWORD *)(v13 + 8) = v14;
        v20 = *v9;
        v37 = v20;
        *(_BYTE *)(v7 + 10) = 0;
        *(_BYTE *)(v7 + 15) = 0;
        v21 = (_QWORD **)((char *)HeapHandle + 336);
        if ( *((_QWORD *)HeapHandle + 39) )
        {
          Entry = (_QWORD *)RtlpFindEntry((__int64)HeapHandle, (unsigned int)v20);
          v20 = v37;
        }
        else
        {
          Entry = *v21;
        }
        while ( v21 != Entry )
        {
          if ( *v8 )
          {
            v23 = *((_DWORD *)Entry - 2);
            LOWORD(v40) = v23;
            if ( (v23 & *v8) != 0 )
              v40 = *((_DWORD *)HeapHandle + 34) ^ v23;
            v24 = v40;
            v7 = v35;
            v11 = v39;
          }
          else
          {
            v24 = *((_WORD *)Entry - 4);
          }
          if ( v20 <= v24 )
            break;
          Entry = (_QWORD *)*Entry;
        }
        v25 = (__int64 *)Entry[1];
        if ( (_QWORD *)*v25 == Entry )
        {
          *v12 = Entry;
          v12[1] = v25;
          *v25 = (__int64)v12;
          Entry[1] = v12;
        }
        else
        {
          RtlpLogHeapFailure(13, 0LL, (ULONG_PTR)Entry, 0LL, *v25, 0LL);
        }
        *((_QWORD *)HeapHandle + 24) += *v34;
        v26 = *((_QWORD *)HeapHandle + 39);
        if ( v26 )
        {
          v27 = *v34;
          while ( 1 )
          {
            v28 = *(unsigned int *)(v26 + 8);
            if ( v27 < v28 )
              break;
            if ( !*(_QWORD *)v26 )
            {
              LODWORD(v27) = v28 - 1;
              break;
            }
            v26 = *(_QWORD *)v26;
          }
          RtlpHeapAddListEntry((__int64)HeapHandle, v26, (__int64)v34, (__int64)v12, v27, *v34);
        }
        if ( *v8 )
        {
          v11[11] = v11[8] ^ v11[9] ^ v11[10];
          *((_DWORD *)v11 + 2) ^= *((_DWORD *)HeapHandle + 34);
        }
      }
      else
      {
        RtlpLogHeapFailure(13, (ULONG_PTR)HeapHandle, v7 + 16, v16, v15, 0LL);
      }
      v3 = 0LL;
LABEL_51:
      v6 = v41;
    }
  }
  if ( v3 && *((_DWORD *)HeapHandle + 31) )
  {
    v3[11] = v3[8] ^ v3[9] ^ v3[10];
    *((_DWORD *)v3 + 2) ^= *((_DWORD *)HeapHandle + 34);
  }
  if ( v33 )
    ExReleaseResourceLite(*((PERESOURCE *)HeapHandle + 44));
  return 0;
}
