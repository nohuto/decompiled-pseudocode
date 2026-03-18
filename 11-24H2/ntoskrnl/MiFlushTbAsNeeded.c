/*
 * XREFs of MiFlushTbAsNeeded @ 0x14023FA90
 * Callers:
 *     MiLinkPoolCommitChain @ 0x14023F6A0 (MiLinkPoolCommitChain.c)
 * Callees:
 *     MiCompareTbFlushTimeStamp @ 0x14023E0A8 (MiCompareTbFlushTimeStamp.c)
 *     MiReleaseProcessorFlushList @ 0x14023FFD0 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MiGetProcessorFlushList @ 0x1402894BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     MiCompressTbFlushList @ 0x140432A2C (MiCompressTbFlushList.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     qsort @ 0x1404FED20 (qsort.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 *__fastcall MiFlushTbAsNeeded(__int64 a1, ULONG_PTR a2, unsigned __int64 a3, int a4)
{
  int v7; // r15d
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r14d
  int v11; // r13d
  __int64 ProcessorFlushList; // rax
  __int64 *v13; // r12
  BOOL v14; // ecx
  unsigned __int64 i; // rsi
  ULONG_PTR v16; // rbx
  ULONG_PTR v17; // rbx
  __int64 v18; // r14
  unsigned __int64 v19; // rbx
  int j; // r15d
  __int64 v21; // r9
  __int64 *v22; // r10
  __int64 v23; // rax
  unsigned __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned __int64 *v27; // r10
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 *result; // rax
  bool v32; // al
  int v33; // eax
  int v34; // eax
  BOOL v35; // ecx
  __int64 v36; // rdx
  int v37; // r9d
  int v38; // ecx
  unsigned __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  int v42; // [rsp+30h] [rbp-128h]
  __int64 v44; // [rsp+40h] [rbp-118h] BYREF
  BOOL v45; // [rsp+48h] [rbp-110h]
  int v46; // [rsp+4Ch] [rbp-10Ch]
  unsigned int v47; // [rsp+50h] [rbp-108h]
  int v48; // [rsp+54h] [rbp-104h]
  bool v49; // [rsp+58h] [rbp-100h]
  __int16 v50; // [rsp+59h] [rbp-FFh]
  int v51; // [rsp+5Ch] [rbp-FCh]
  __int64 v52; // [rsp+60h] [rbp-F8h]
  __int64 v53; // [rsp+68h] [rbp-F0h]

  v7 = a4;
  memset_0(&v44, 0, 0xC8uLL);
  v10 = 0;
  v11 = 0;
  v42 = 0;
  if ( v7 )
  {
    ProcessorFlushList = MiGetProcessorFlushList(v9, v8);
    v13 = (__int64 *)ProcessorFlushList;
    *(_DWORD *)(ProcessorFlushList + 16) = 0;
    *(_DWORD *)(ProcessorFlushList + 20) = 1;
    *(_QWORD *)ProcessorFlushList = a1;
    *(_BYTE *)(ProcessorFlushList + 24) = (*(_DWORD *)(a1 + 184) & 0x800) != 0;
    if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0
      || (struct _LIST_ENTRY **)a1 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
    {
      v14 = (*(_DWORD *)(a1 + 184) & 0xF) == 0;
    }
    else
    {
      v14 = 0;
      *(_DWORD *)(ProcessorFlushList + 16) |= 9u;
    }
    *(_DWORD *)(ProcessorFlushList + 16) &= 0xFFFFFFDB;
    *(_DWORD *)(ProcessorFlushList + 8) = v14;
    *(_WORD *)(ProcessorFlushList + 25) = 0;
    *(_DWORD *)(ProcessorFlushList + 28) = 0;
    *(_QWORD *)(ProcessorFlushList + 32) = 0LL;
    *(_QWORD *)(ProcessorFlushList + 40) = 0LL;
  }
  else
  {
    v13 = &v44;
    v32 = (*(_DWORD *)(a1 + 184) & 0x800) != 0;
    v46 = 20;
    v49 = v32;
    v33 = *(_DWORD *)(a1 + 184);
    v47 = 8;
    v48 = 1;
    v44 = a1;
    if ( (v33 & 0xF) != 0 || (struct _LIST_ENTRY **)a1 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
    {
      v34 = v47;
      v35 = (*(_DWORD *)(a1 + 184) & 0xF) == 0;
    }
    else
    {
      v35 = 0;
      v34 = 9;
    }
    v45 = v35;
    v47 = v34 & 0xFFFFFFDB;
    v50 = 0;
    v51 = 0;
    v52 = 0LL;
    v53 = 0LL;
  }
  for ( i = 0LL; i < a3; ++i )
  {
    v16 = *(_QWORD *)a2;
    if ( (*(_QWORD *)a2 & 0xC01LL) == 0 && (*(_QWORD *)a2 & 0x3E0LL) == 0 )
    {
      if ( qword_140E2DB80 )
      {
        if ( (v16 & 0x10) != 0 )
          v16 &= ~0x10uLL;
        else
          v16 &= ~qword_140E2DB80;
      }
      v17 = HIDWORD(v16);
      *(_QWORD *)a2 = CLFS_LSN_NULL_EXT;
      if ( (_DWORD)v17 )
      {
        if ( (_DWORD)v17 == v11 )
        {
          if ( v10 )
          {
            v18 = 1LL;
            v19 = (__int64)(a2 << 25) >> 16;
            if ( *((_DWORD *)v13 + 2) != 1 )
            {
              v38 = *((_DWORD *)v13 + 4);
              if ( (v38 & 4) == 0 && v19 >= 0xFFFFF68000000000uLL && v19 <= 0xFFFFF6FFFFFFFFFFuLL )
                *((_DWORD *)v13 + 4) = v38 | 4;
            }
LABEL_21:
            for ( j = 0; ; j = 1 )
            {
              v21 = *((unsigned int *)v13 + 7);
              if ( (_DWORD)v21 )
              {
                if ( (v13[2] & 2) == 0 )
                {
                  v22 = &v13[(unsigned int)(v21 - 1)];
                  v23 = v22[5];
                  if ( (v23 & 0xC00) == 0 )
                  {
                    v24 = v22[5] & 0x3FF;
                    if ( (v23 & 0xFFFFFFFFFFFFF000uLL) + ((v24 + 1) << 12) == v19
                      && v24 + v18 > v24
                      && v24 + v18 <= 0x3FF )
                    {
                      v13[4] += v18;
                      v22[5] = (v23 + v18) ^ ((v23 + v18) ^ v23) & 0xFFFFFFFFFFFFFC00uLL;
LABEL_52:
                      v10 = v42;
                      v7 = a4;
                      goto LABEL_14;
                    }
                    v25 = (unsigned int)(v21 - 1) + 5LL;
                    v26 = v13[v25];
                    v27 = (unsigned __int64 *)&v13[v25];
                    if ( (v26 & 0xFFFFFFFFFFFFF000uLL) == v19 + (v18 << 12) )
                    {
                      v39 = v26 & 0x3FF;
                      if ( v18 + v39 <= 0x3FF && v18 + v39 > v39 )
                        break;
                    }
                  }
                }
              }
              if ( (_DWORD)v21 != *((_DWORD *)v13 + 3) )
              {
                while ( v18 )
                {
                  v36 = 1024LL;
                  if ( (unsigned __int64)(v18 - 1) <= 0x3FF )
                    v36 = v18;
                  v13[v21 + 5] = v19 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v36 - 1) & 0x3FF;
                  v37 = *((_DWORD *)v13 + 7);
                  v13[4] += v36;
                  v21 = (unsigned int)(v37 + 1);
                  v19 += v36 << 12;
                  *((_DWORD *)v13 + 7) = v21;
                  v18 -= v36;
                  if ( v18 && (_DWORD)v21 == *((_DWORD *)v13 + 3) )
                    goto LABEL_21;
                }
                goto LABEL_52;
              }
              if ( j )
              {
                if ( !*((_BYTE *)v13 + 25) )
                  *((_BYTE *)v13 + 25) = 1;
                goto LABEL_52;
              }
              if ( *((_BYTE *)v13 + 25) )
                goto LABEL_52;
              qsort(v13 + 5, *((unsigned int *)v13 + 7), 8uLL, MiTbFlushSort);
              MiCompressTbFlushList(v13);
            }
            v13[4] += v18;
            v40 = v26 - (v18 << 12);
            v7 = a4;
            v41 = v40 + v18;
            v10 = v42;
            *v27 = v41 ^ (v41 ^ v40) & 0xFFFFFFFFFFFFFC00uLL;
          }
        }
        else
        {
          if ( MiCompareTbFlushTimeStamp((unsigned int)v17) )
          {
            MiInsertTbFlushEntry(v13, (__int64)(a2 << 25) >> 16, 1LL);
            v10 = 1;
          }
          else
          {
            v10 = 0;
          }
          v42 = v10;
          v11 = v17;
        }
      }
      else
      {
        v10 = 0;
        v42 = 0;
        v11 = 0;
      }
    }
    else if ( !v7 )
    {
      KeBugCheckEx(0x1Au, 0x5100uLL, a2, a3 - i, *(_QWORD *)a2);
    }
LABEL_14:
    a2 += 8LL;
  }
  MiFlushTbList(v13, 1LL);
  result = &v44;
  if ( v13 != &v44 )
    return (__int64 *)MiReleaseProcessorFlushList(v29, v28, v30);
  return result;
}
