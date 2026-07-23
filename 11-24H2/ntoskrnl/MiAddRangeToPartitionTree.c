/*
 * XREFs of MiAddRangeToPartitionTree @ 0x14068AA6C
 * Callers:
 *     MiAddMdlToPartitionTree @ 0x14068A980 (MiAddMdlToPartitionTree.c)
 *     MiDuplicatePartitionNodeTree @ 0x14068B3B4 (MiDuplicatePartitionNodeTree.c)
 *     MiAcquireAddMemoryResources @ 0x1407E8B78 (MiAcquireAddMemoryResources.c)
 *     MmRemovePhysicalMemory @ 0x1407EABA0 (MmRemovePhysicalMemory.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1407FBE14 (MiAllocatePartitionPhysicalPages.c)
 *     MiHotAddPartitionMemory @ 0x1407FC9F4 (MiHotAddPartitionMemory.c)
 * Callees:
 *     RtlSetBitsEx @ 0x14026E120 (RtlSetBitsEx.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     RtlAvlInsertNodeEx @ 0x1402903E0 (RtlAvlInsertNodeEx.c)
 *     RtlClearBitsEx @ 0x1402920E0 (RtlClearBitsEx.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAddRangeToPartitionTree(unsigned __int64 *a1, __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rsi
  __int64 v7; // rax
  int v8; // r13d
  unsigned __int64 v9; // r12
  _QWORD *Pool; // rdi
  _QWORD *v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // rbp
  unsigned __int64 v15; // rbp
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  bool v18; // r8
  _QWORD *v19; // rdx
  unsigned __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rbp
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdx
  __int64 *v26; // rcx
  char v27; // r10
  __int64 v28; // r8
  __int64 *v29; // r9
  bool v30; // zf
  bool i; // zf
  __int64 v32; // rdx
  __int64 v34; // [rsp+20h] [rbp-88h]
  unsigned __int64 v35; // [rsp+28h] [rbp-80h]
  unsigned __int64 *v36; // [rsp+B0h] [rbp+8h]
  __int64 v37; // [rsp+B8h] [rbp+10h]
  __int64 v38; // [rsp+C0h] [rbp+18h]
  char v39; // [rsp+C8h] [rbp+20h]

  v39 = a4;
  v37 = a2;
  v36 = a1;
  v4 = 0;
  v5 = 0LL;
  v7 = a2 & 0x3FFFFFFFFFFC0000LL;
  v8 = 0;
  v34 = a2 & 0x3FFFFFFFFFFC0000LL;
  v9 = 0LL;
  while ( 1 )
  {
    v38 = a2;
    v5 = v7 | v5 & 0xC000000000000000uLL;
    v35 = (a2 + a3 + 0x3FFFF) & 0xFFFFFFFFFFFC0000uLL;
LABEL_3:
    if ( !a3 )
      break;
    Pool = (_QWORD *)*a1;
    v11 = 0LL;
    while ( Pool )
    {
      v12 = Pool[3];
      if ( (v5 & 0x3FFFFFFFFFFFFFFFLL) >= (v12 & 0x3FFFFFFFFFFFFFFFuLL) )
      {
        v13 = (__int64)(Pool + 4);
        if ( (v5 & 0x3FFFFFFFFFFFFFFFLL) < Pool[4] + (v12 & 0x3FFFFFFFFFFFFFFFuLL) )
        {
          if ( (v12 & 0x4000000000000000LL) == 0 || (a4 & 1) == 0 )
            Pool[3] = v12 & 0xBFFFFFFFFFFFFFFFuLL;
          goto LABEL_31;
        }
        Pool = (_QWORD *)Pool[1];
      }
      else
      {
        v11 = Pool;
        Pool = (_QWORD *)*Pool;
      }
    }
    if ( v11 )
      v14 = v11[3] & 0x3FFFFFFFFFFFFFFFLL;
    else
      v14 = v35;
    Pool = (_QWORD *)MiAllocatePool(0x40uLL, 0x30uLL, 1886415181);
    if ( Pool )
    {
      if ( (v39 & 2) != 0 )
        v15 = v14 - (v5 & 0x3FFFFFFFFFFFFFFFLL);
      else
        v15 = 0x40000LL;
      v16 = MiAllocatePool(0x40uLL, 8 * ((v15 >> 6) + ((v15 & 0x3F) != 0)), 1651534157);
      if ( v16 )
      {
        v13 = (__int64)(Pool + 4);
        Pool[5] = v16;
        Pool[4] = v15;
        v17 = v5 ^ (Pool[3] ^ v5) & 0xC000000000000000uLL;
        Pool[3] = v17;
        if ( (v39 & 1) != 0 )
        {
          v17 |= 0x4000000000000000uLL;
          Pool[3] = v17;
        }
        v18 = 0;
        v19 = (_QWORD *)*v36;
        if ( *v36 )
        {
          v20 = v17 & 0x3FFFFFFFFFFFFFFFLL;
          while ( 1 )
          {
            if ( v20 >= (v19[3] & 0x3FFFFFFFFFFFFFFFuLL) )
            {
              v21 = (_QWORD *)v19[1];
              if ( !v21 )
              {
                v18 = 1;
                break;
              }
            }
            else
            {
              v21 = (_QWORD *)*v19;
              if ( !*v19 )
              {
                v18 = 0;
                break;
              }
            }
            v19 = v21;
          }
        }
        RtlAvlInsertNodeEx(v36, (unsigned __int64)v19, v18, Pool);
        a4 = v39;
LABEL_31:
        v22 = Pool[3] & 0x3FFFFFFFFFFFFFFFLL;
        v23 = v22 + Pool[4] - v38;
        if ( v23 > a3 )
          v23 = a3;
        if ( (a4 & 4) == 0 )
        {
          v24 = v38 - v22;
          if ( v8 )
          {
            RtlClearBitsEx(v13, v24, v23);
            Pool[3] &= ~0x8000000000000000uLL;
          }
          else
          {
            RtlSetBitsEx(v13, v24, v23);
            if ( v38 == (Pool[3] & 0x3FFFFFFFFFFFFFFFLL) && v23 == Pool[4] )
            {
              Pool[3] |= 0x8000000000000000uLL;
              goto LABEL_55;
            }
            v25 = Pool[4];
            if ( *(_QWORD *)v13 )
            {
              if ( v25 > 1 )
              {
                if ( *(_QWORD *)v13 >= v25 )
                {
                  v26 = *(__int64 **)(v13 + 8);
                  v27 = v25 - 1;
                  v28 = *v26;
                  v29 = &v26[(v25 - 1) >> 6];
                  if ( v26 == v29 )
                  {
                    v30 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v25)) & v28) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v25);
LABEL_51:
                    if ( v30 )
LABEL_52:
                      Pool[3] |= 0x8000000000000000uLL;
                  }
                  else
                  {
                    for ( i = v28 == -1; i; i = v32 == -1 )
                    {
                      v32 = *++v26;
                      if ( v26 == v29 )
                      {
                        v30 = ((0xFFFFFFFFFFFFFFFFuLL >> ~v27) & v32) == 0xFFFFFFFFFFFFFFFFuLL >> ~v27;
                        goto LABEL_51;
                      }
                    }
                  }
                }
              }
              else if ( v25 == 1 && _bittest64(*(const signed __int64 **)(v13 + 8), 0) )
              {
                goto LABEL_52;
              }
            }
          }
LABEL_55:
          a4 = v39;
        }
        a1 = v36;
        v38 += v23;
        a3 -= v23;
        v9 += v23;
        v5 = v38 & 0x3FFFFFFFFFFFFFFFLL | v5 & 0xC000000000000000uLL;
        goto LABEL_3;
      }
      ExFreePoolWithTag(Pool, 0);
    }
    v8 = 1;
    if ( !v9 )
      return 0LL;
    a1 = v36;
    a3 = v9;
    a4 = v39;
    a2 = v37;
    v7 = v34;
  }
  LOBYTE(v4) = v8 == 0;
  return v4;
}
