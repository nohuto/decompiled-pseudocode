/*
 * XREFs of MiFlushTbAsNeeded @ 0x140207BE0
 * Callers:
 *     MiLinkPoolCommitChain @ 0x1402077F0 (MiLinkPoolCommitChain.c)
 * Callees:
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiCompressTbFlushList @ 0x140215218 (MiCompressTbFlushList.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiCompareTbFlushTimeStamp @ 0x14044D95C (MiCompareTbFlushTimeStamp.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     qsort @ 0x1404FC5E0 (qsort.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 *__fastcall MiFlushTbAsNeeded(__int64 a1, ULONG_PTR a2, unsigned __int64 a3, int a4)
{
  int v7; // r15d
  int v8; // r14d
  int v9; // r13d
  __int64 ProcessorFlushList; // rax
  __int64 *v11; // r12
  BOOL v12; // ecx
  unsigned __int64 i; // rsi
  ULONG_PTR v14; // rbx
  ULONG_PTR v15; // rbx
  __int64 v16; // r14
  unsigned __int64 v17; // rbx
  int j; // r15d
  __int64 v19; // r9
  __int64 *v20; // r10
  __int64 v21; // rax
  unsigned __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int64 *v25; // r10
  __int64 *result; // rax
  bool v27; // al
  int v28; // eax
  int v29; // eax
  BOOL v30; // ecx
  __int64 v31; // rdx
  int v32; // r9d
  int v33; // ecx
  unsigned __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  int v37; // [rsp+30h] [rbp-128h]
  __int64 v39; // [rsp+40h] [rbp-118h] BYREF
  BOOL v40; // [rsp+48h] [rbp-110h]
  int v41; // [rsp+4Ch] [rbp-10Ch]
  unsigned int v42; // [rsp+50h] [rbp-108h]
  int v43; // [rsp+54h] [rbp-104h]
  bool v44; // [rsp+58h] [rbp-100h]
  __int16 v45; // [rsp+59h] [rbp-FFh]
  int v46; // [rsp+5Ch] [rbp-FCh]
  __int64 v47; // [rsp+60h] [rbp-F8h]
  __int64 v48; // [rsp+68h] [rbp-F0h]

  v7 = a4;
  memset_0(&v39, 0, 0xC8uLL);
  v8 = 0;
  v9 = 0;
  v37 = 0;
  if ( v7 )
  {
    ProcessorFlushList = MiGetProcessorFlushList();
    v11 = (__int64 *)ProcessorFlushList;
    *(_DWORD *)(ProcessorFlushList + 16) = 0;
    *(_DWORD *)(ProcessorFlushList + 20) = 1;
    *(_QWORD *)ProcessorFlushList = a1;
    *(_BYTE *)(ProcessorFlushList + 24) = (*(_DWORD *)(a1 + 184) & 0x800) != 0;
    if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0
      || (struct _LIST_ENTRY **)a1 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
    {
      v12 = (*(_DWORD *)(a1 + 184) & 0xF) == 0;
    }
    else
    {
      v12 = 0;
      *(_DWORD *)(ProcessorFlushList + 16) |= 9u;
    }
    *(_DWORD *)(ProcessorFlushList + 16) &= 0xFFFFFFDB;
    *(_DWORD *)(ProcessorFlushList + 8) = v12;
    *(_WORD *)(ProcessorFlushList + 25) = 0;
    *(_DWORD *)(ProcessorFlushList + 28) = 0;
    *(_QWORD *)(ProcessorFlushList + 32) = 0LL;
    *(_QWORD *)(ProcessorFlushList + 40) = 0LL;
  }
  else
  {
    v11 = &v39;
    v27 = (*(_DWORD *)(a1 + 184) & 0x800) != 0;
    v41 = 20;
    v44 = v27;
    v28 = *(_DWORD *)(a1 + 184);
    v42 = 8;
    v43 = 1;
    v39 = a1;
    if ( (v28 & 0xF) != 0 || (struct _LIST_ENTRY **)a1 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
    {
      v29 = v42;
      v30 = (*(_DWORD *)(a1 + 184) & 0xF) == 0;
    }
    else
    {
      v30 = 0;
      v29 = 9;
    }
    v40 = v30;
    v42 = v29 & 0xFFFFFFDB;
    v45 = 0;
    v46 = 0;
    v47 = 0LL;
    v48 = 0LL;
  }
  for ( i = 0LL; i < a3; ++i )
  {
    v14 = *(_QWORD *)a2;
    if ( (*(_QWORD *)a2 & 0xC01LL) == 0 && (*(_QWORD *)a2 & 0x3E0LL) == 0 )
    {
      if ( qword_140E2DCC0 )
      {
        if ( (v14 & 0x10) != 0 )
          v14 &= ~0x10uLL;
        else
          v14 &= ~qword_140E2DCC0;
      }
      v15 = HIDWORD(v14);
      *(_QWORD *)a2 = CLFS_LSN_NULL_EXT;
      if ( (_DWORD)v15 )
      {
        if ( (_DWORD)v15 == v9 )
        {
          if ( v8 )
          {
            v16 = 1LL;
            v17 = (__int64)(a2 << 25) >> 16;
            if ( *((_DWORD *)v11 + 2) != 1 )
            {
              v33 = *((_DWORD *)v11 + 4);
              if ( (v33 & 4) == 0 && v17 >= 0xFFFFF68000000000uLL && v17 <= 0xFFFFF6FFFFFFFFFFuLL )
                *((_DWORD *)v11 + 4) = v33 | 4;
            }
LABEL_21:
            for ( j = 0; ; j = 1 )
            {
              v19 = *((unsigned int *)v11 + 7);
              if ( (_DWORD)v19 )
              {
                if ( (v11[2] & 2) == 0 )
                {
                  v20 = &v11[(unsigned int)(v19 - 1)];
                  v21 = v20[5];
                  if ( (v21 & 0xC00) == 0 )
                  {
                    v22 = v20[5] & 0x3FF;
                    if ( (v21 & 0xFFFFFFFFFFFFF000uLL) + ((v22 + 1) << 12) == v17
                      && v22 + v16 > v22
                      && v22 + v16 <= 0x3FF )
                    {
                      v11[4] += v16;
                      v20[5] = (v21 + v16) ^ ((v21 + v16) ^ v21) & 0xFFFFFFFFFFFFFC00uLL;
LABEL_52:
                      v8 = v37;
                      v7 = a4;
                      goto LABEL_14;
                    }
                    v23 = (unsigned int)(v19 - 1) + 5LL;
                    v24 = v11[v23];
                    v25 = (unsigned __int64 *)&v11[v23];
                    if ( (v24 & 0xFFFFFFFFFFFFF000uLL) == v17 + (v16 << 12) )
                    {
                      v34 = v24 & 0x3FF;
                      if ( v16 + v34 <= 0x3FF && v16 + v34 > v34 )
                        break;
                    }
                  }
                }
              }
              if ( (_DWORD)v19 != *((_DWORD *)v11 + 3) )
              {
                while ( v16 )
                {
                  v31 = 1024LL;
                  if ( (unsigned __int64)(v16 - 1) <= 0x3FF )
                    v31 = v16;
                  v11[v19 + 5] = v17 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v31 - 1) & 0x3FF;
                  v32 = *((_DWORD *)v11 + 7);
                  v11[4] += v31;
                  v19 = (unsigned int)(v32 + 1);
                  v17 += v31 << 12;
                  *((_DWORD *)v11 + 7) = v19;
                  v16 -= v31;
                  if ( v16 && (_DWORD)v19 == *((_DWORD *)v11 + 3) )
                    goto LABEL_21;
                }
                goto LABEL_52;
              }
              if ( j )
              {
                if ( !*((_BYTE *)v11 + 25) )
                  *((_BYTE *)v11 + 25) = 1;
                goto LABEL_52;
              }
              if ( *((_BYTE *)v11 + 25) )
                goto LABEL_52;
              qsort(v11 + 5, *((unsigned int *)v11 + 7), 8uLL, MiTbFlushSort);
              MiCompressTbFlushList(v11);
            }
            v11[4] += v16;
            v35 = v24 - (v16 << 12);
            v7 = a4;
            v36 = v35 + v16;
            v8 = v37;
            *v25 = v36 ^ (v36 ^ v35) & 0xFFFFFFFFFFFFFC00uLL;
          }
        }
        else
        {
          if ( (unsigned __int8)MiCompareTbFlushTimeStamp((unsigned int)v15) )
          {
            MiInsertTbFlushEntry(v11, (__int64)(a2 << 25) >> 16, 1LL);
            v8 = 1;
          }
          else
          {
            v8 = 0;
          }
          v37 = v8;
          v9 = v15;
        }
      }
      else
      {
        v8 = 0;
        v37 = 0;
        v9 = 0;
      }
    }
    else if ( !v7 )
    {
      KeBugCheckEx(0x1Au, 0x5100uLL, a2, a3 - i, *(_QWORD *)a2);
    }
LABEL_14:
    a2 += 8LL;
  }
  MiFlushTbList(v11);
  result = &v39;
  if ( v11 != &v39 )
    return (__int64 *)MiReleaseProcessorFlushList();
  return result;
}
