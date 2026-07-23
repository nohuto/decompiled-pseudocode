/*
 * XREFs of RtlZeroHeap @ 0x180142320
 * Callers:
 *     RtlDebugZeroHeap @ 0x180142FC4 (RtlDebugZeroHeap.c)
 * Callees:
 *     RtlpHeapAddListEntry @ 0x18000C420 (RtlpHeapAddListEntry.c)
 *     RtlpFindEntry @ 0x18000C880 (RtlpFindEntry.c)
 *     RtlpAnalyzeHeapFailure @ 0x18000F2D0 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapRemoveListEntry @ 0x18000F610 (RtlpHeapRemoveListEntry.c)
 *     RtlpCommitBlock @ 0x180010480 (RtlpCommitBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x180010840 (RtlpDeCommitFreeBlock.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x180105400 (RtlpHeapExceptionFilter.c)
 *     RtlDebugZeroHeap @ 0x180142FC4 (RtlDebugZeroHeap.c)
 */

NTSTATUS __cdecl RtlZeroHeap(PVOID HeapHandle, ULONG Flags)
{
  _BYTE *v3; // r14
  ULONG v5; // edx
  char *v6; // rcx
  char *v7; // rax
  unsigned __int64 v8; // r15
  _DWORD *v9; // r12
  unsigned __int16 *v10; // r11
  unsigned __int8 v11; // cl
  _BYTE *v12; // rdi
  __int64 v13; // r14
  __int64 *v14; // r13
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r13
  _QWORD **v21; // r14
  _QWORD *Entry; // r8
  int v23; // eax
  __int64 *v24; // rax
  __int64 v25; // r9
  __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // rdx
  _DWORD *v30; // r8
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rdx
  char v33; // [rsp+30h] [rbp-A8h]
  unsigned __int64 v34; // [rsp+40h] [rbp-98h]
  char *v35; // [rsp+48h] [rbp-90h]
  _QWORD *v36; // [rsp+60h] [rbp-78h]
  _BYTE *v37; // [rsp+78h] [rbp-60h]
  unsigned __int16 *v38; // [rsp+F8h] [rbp+20h]

  v3 = 0LL;
  v33 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    return 0;
  v5 = *((_DWORD *)HeapHandle + 29) | Flags;
  if ( (v5 & 0x61000000) != 0 && (v5 & 0x10000000) == 0 )
    return RtlDebugZeroHeap(HeapHandle);
  if ( (v5 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
    v33 = 1;
  }
  v6 = (char *)HeapHandle + 288;
  v7 = (char *)*((_QWORD *)HeapHandle + 36);
LABEL_8:
  v35 = v7;
  if ( v7 != v6 )
  {
    v8 = *((_QWORD *)v7 + 5);
    v34 = v8;
    v9 = (char *)HeapHandle + 124;
    while ( 1 )
    {
      if ( v8 >= *((_QWORD *)v7 + 6) )
      {
        v7 = *(char **)v7;
        v6 = (char *)HeapHandle + 288;
        goto LABEL_8;
      }
      if ( v3 )
      {
        if ( !*v9 )
          goto LABEL_17;
        v3[11] = v3[8] ^ v3[9] ^ v3[10];
        *((_DWORD *)v3 + 2) ^= *((_DWORD *)HeapHandle + 34);
      }
      if ( *v9 )
      {
        *(_DWORD *)(v8 + 8) ^= *((_DWORD *)HeapHandle + 34);
        if ( *(_BYTE *)(v8 + 11) != (*(_BYTE *)(v8 + 8) ^ (unsigned __int8)(*(_BYTE *)(v8 + 9) ^ *(_BYTE *)(v8 + 10))) )
          RtlpAnalyzeHeapFailure((unsigned __int64)HeapHandle, v8);
      }
LABEL_17:
      v3 = (_BYTE *)v8;
      v10 = (unsigned __int16 *)(v8 + 8);
      v38 = (unsigned __int16 *)(v8 + 8);
      v11 = *(_BYTE *)(v8 + 10);
      if ( (v11 & 1) != 0 )
        goto LABEL_70;
      v12 = (_BYTE *)v8;
      v37 = (_BYTE *)v8;
      if ( (v11 & 8) == 0 )
      {
        v29 = 16LL * *(unsigned __int16 *)(v8 + 8) - 32;
        v30 = (_DWORD *)(v8 + 32);
        if ( ((v11 >> 2) & ((*((_BYTE *)HeapHandle + 112) & 0x40) != 0)) != 0 )
        {
          v31 = v29 >> 2;
          if ( v31 )
          {
            if ( ((unsigned __int8)v30 & 4) != 0 )
            {
              *v30 = -17891602;
              if ( --v31 )
              {
                v30 = (_DWORD *)(v8 + 36);
                goto LABEL_62;
              }
            }
            else
            {
LABEL_62:
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
                goto LABEL_70;
              v30 = (_DWORD *)(v8 + 36);
            }
            memset(v30, 0, 8 * (v32 >> 1));
            if ( (v32 & 1) != 0 )
              v30[v32 - 1] = 0;
          }
        }
LABEL_70:
        if ( *(_BYTE *)(v8 + 15) == 3 )
          v8 += *(_QWORD *)(v8 + 56) + 64LL;
        else
          v8 += 16LL * *(unsigned __int16 *)(v8 + 8);
        v34 = v8;
        goto LABEL_56;
      }
      v36 = (_QWORD *)(v8 + 16);
      v13 = *(_QWORD *)(v8 + 16);
      v14 = *(__int64 **)(v8 + 24);
      v15 = *v14;
      v16 = *(_QWORD *)(v13 + 8);
      if ( *v14 == v16 && v15 == v8 + 16 )
      {
        *((_QWORD *)HeapHandle + 24) -= *(unsigned __int16 *)(v8 + 8);
        v17 = *((_QWORD *)HeapHandle + 39);
        if ( v17 )
        {
          v18 = *v10;
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
          RtlpHeapRemoveListEntry((__int64)HeapHandle, v17, 1, (__int64 *)(v8 + 16), v18, *v10);
        }
        *v14 = v13;
        *(_QWORD *)(v13 + 8) = v14;
        if ( (*(_BYTE *)(v8 + 10) & 8) == 0 || RtlpCommitBlock((__int64 *)HeapHandle, v8) )
        {
          v20 = *v38;
          *(_BYTE *)(v8 + 10) = 0;
          *(_BYTE *)(v8 + 15) = 0;
          v21 = (_QWORD **)((char *)HeapHandle + 336);
          if ( *((_QWORD *)HeapHandle + 39) )
            Entry = RtlpFindEntry((__int64)HeapHandle, (unsigned int)v20);
          else
            Entry = *v21;
          while ( v21 != Entry )
          {
            if ( *v9 )
            {
              v23 = *((_DWORD *)Entry - 2);
              if ( (v23 & *v9) != 0 )
                v23 ^= *((_DWORD *)HeapHandle + 34);
              v8 = v34;
              v12 = v37;
            }
            else
            {
              LOWORD(v23) = *((_WORD *)Entry - 4);
            }
            if ( v20 <= (unsigned __int16)v23 )
              break;
            Entry = (_QWORD *)*Entry;
          }
          v24 = (__int64 *)Entry[1];
          if ( (_QWORD *)*v24 == Entry )
          {
            v25 = (__int64)v36;
            *v36 = Entry;
            v36[1] = v24;
            *v24 = (__int64)v36;
            Entry[1] = v36;
          }
          else
          {
            RtlpLogHeapFailure(13, 0LL, (__int64)Entry, 0LL, *v24, 0LL);
            v25 = (__int64)v36;
          }
          *((_QWORD *)HeapHandle + 24) += *v38;
          v26 = *((_QWORD *)HeapHandle + 39);
          if ( v26 )
          {
            v27 = *v38;
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
            RtlpHeapAddListEntry((__int64)HeapHandle, v26, 1, v25, v27, *v38);
          }
          if ( *v9 )
          {
            v12[11] = v12[8] ^ v12[9] ^ v12[10];
            *((_DWORD *)v12 + 2) ^= *((_DWORD *)HeapHandle + 34);
          }
        }
        else
        {
          RtlpDeCommitFreeBlock(HeapHandle, v8, *v38, 1);
        }
      }
      else
      {
        RtlpLogHeapFailure(13, (__int64)HeapHandle, v8 + 16, v16, v15, 0LL);
      }
      v3 = 0LL;
LABEL_56:
      v7 = v35;
    }
  }
  if ( v3 && *((_DWORD *)HeapHandle + 31) )
  {
    v3[11] = v3[8] ^ v3[9] ^ v3[10];
    *((_DWORD *)v3 + 2) ^= *((_DWORD *)HeapHandle + 34);
  }
  if ( v33 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
  return 0;
}
