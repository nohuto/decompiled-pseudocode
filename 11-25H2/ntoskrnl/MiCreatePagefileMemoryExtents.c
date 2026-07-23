/*
 * XREFs of MiCreatePagefileMemoryExtents @ 0x1407EDFFC
 * Callers:
 *     MiCreateSpecialPurposeMemoryPageFile @ 0x1407EE284 (MiCreateSpecialPurposeMemoryPageFile.c)
 * Callees:
 *     MiFindContiguousPagesEx @ 0x14021E3E0 (MiFindContiguousPagesEx.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     RtlRbInsertNodeEx @ 0x1402E2370 (RtlRbInsertNodeEx.c)
 *     MiFreeContiguousPages @ 0x14038B910 (MiFreeContiguousPages.c)
 *     MiGetSpecialPurposeMemoryPartitionForCaching @ 0x14045A7AC (MiGetSpecialPurposeMemoryPartitionForCaching.c)
 *     MiComparePageFileMemoryExtents @ 0x140682A74 (MiComparePageFileMemoryExtents.c)
 *     MiInsertPageFileMemoryExtents @ 0x140682F58 (MiInsertPageFileMemoryExtents.c)
 *     MiDeletePageFileMemoryExtents @ 0x1407EE338 (MiDeletePageFileMemoryExtents.c)
 *     MiSpecialPurposeMemoryTypeDereference @ 0x1407EEF94 (MiSpecialPurposeMemoryTypeDereference.c)
 */

__int64 __fastcall MiCreatePagefileMemoryExtents(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rcx
  __int64 v6; // rcx
  unsigned int v7; // edi
  int v8; // r12d
  unsigned __int64 v9; // rdi
  unsigned int v10; // eax
  __int64 Pool; // rax
  __int64 v12; // r15
  _DWORD *v13; // rax
  signed __int64 v14; // rbx
  BOOLEAN v15; // r8
  int v16; // esi
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  int v19; // esi
  unsigned __int64 v20; // rax
  _QWORD *v21; // rdx
  unsigned __int64 v22; // rbx
  __int64 v24; // [rsp+70h] [rbp+7h] BYREF
  PRTL_BALANCED_NODE Parent[2]; // [rsp+78h] [rbp+Fh] BYREF
  ULONG_PTR v26; // [rsp+D0h] [rbp+67h] BYREF
  __int64 SpecialPurposeMemoryPartitionForCaching; // [rsp+E8h] [rbp+7Fh]

  v4 = *(_QWORD *)(a1 + 216);
  v26 = 0LL;
  *(_OWORD *)Parent = 0LL;
  v24 = 0LL;
  SpecialPurposeMemoryPartitionForCaching = MiGetSpecialPurposeMemoryPartitionForCaching(v4, &v24);
  v6 = SpecialPurposeMemoryPartitionForCaching;
  if ( SpecialPurposeMemoryPartitionForCaching )
  {
    v8 = 0;
    LODWORD(v9) = a3;
    while ( a3 )
    {
      v10 = a3;
      if ( (unsigned int)v9 <= a3 )
        v10 = v9;
      v9 = v10;
      if ( (int)MiFindContiguousPagesEx(
                  v6,
                  0LL,
                  qword_140E2D9A0,
                  0LL,
                  0,
                  v10,
                  1u,
                  0x80000000,
                  255,
                  0x100001u,
                  0,
                  0LL,
                  0LL,
                  &v26) >= 0 )
      {
        Pool = MiAllocatePool(0x40uLL, 0x28uLL, 1699768653);
        v12 = Pool;
        if ( !Pool )
        {
          MiFreeContiguousPages(v26, v9, 0);
          v7 = -1073741670;
          goto LABEL_30;
        }
        v13 = (_DWORD *)(Pool + 24);
        a3 -= v9;
        *v13 = v8;
        v8 += v9;
        *(_DWORD *)(v12 + 28) = v8 - 1;
        *(_QWORD *)(v12 + 32) = v26;
        v14 = (signed __int64)Parent[0];
        if ( ((__int64)Parent[1] & 1) != 0 && Parent[0] )
          v14 = (unsigned __int64)Parent ^ (unsigned __int64)Parent[0];
        v15 = 0;
        v16 = (__int64)Parent[1] & 1;
        if ( v14 )
        {
          while ( 1 )
          {
            if ( (int)MiComparePageFileMemoryExtents(v13, v14) < 0 )
            {
              v17 = *(_QWORD *)v14;
              if ( v16 )
              {
                if ( !v17 )
                  goto LABEL_26;
                v17 ^= v14;
              }
              if ( !v17 )
              {
LABEL_26:
                v15 = 0;
                break;
              }
            }
            else
            {
              v17 = *(_QWORD *)(v14 + 8);
              if ( v16 )
              {
                if ( !v17 )
                  goto LABEL_20;
                v17 ^= v14;
              }
              if ( !v17 )
              {
LABEL_20:
                v15 = 1;
                break;
              }
            }
            v14 = v17;
            v13 = (_DWORD *)(v12 + 24);
          }
        }
        RtlRbInsertNodeEx((PRTL_RB_TREE)Parent, (PRTL_BALANCED_NODE)v14, v15, (PRTL_BALANCED_NODE)v12);
        v6 = SpecialPurposeMemoryPartitionForCaching;
      }
      else
      {
        if ( (_DWORD)v9 == 512 )
          goto LABEL_2;
        v6 = SpecialPurposeMemoryPartitionForCaching;
        LODWORD(v9) = (((unsigned int)v9 >> 1) + 511) & 0xFFFFFE00;
      }
    }
    MiInsertPageFileMemoryExtents(a1, (__int64)Parent);
    v7 = 0;
  }
  else
  {
LABEL_2:
    v7 = -1073741670;
  }
LABEL_30:
  if ( v24 )
    MiSpecialPurposeMemoryTypeDereference(*(_QWORD *)(a1 + 216), v24);
  v18 = (unsigned __int64)Parent[0];
  if ( ((__int64)Parent[1] & 1) != 0 )
  {
    if ( Parent[0] )
      v18 = (unsigned __int64)Parent ^ (unsigned __int64)Parent[0];
    else
      v18 = 0LL;
  }
  v19 = (__int64)Parent[1] & 1;
  if ( v18 )
  {
    while ( 1 )
    {
      v20 = *(_QWORD *)v18;
      if ( *(_QWORD *)v18 )
        break;
      v21 = (_QWORD *)(v18 + 8);
      v20 = *(_QWORD *)(v18 + 8);
      if ( v20 )
      {
LABEL_40:
        if ( v19 )
          v18 ^= v20;
        else
          v18 = v20;
        *v21 = 0LL;
      }
      else
      {
        v22 = *(_QWORD *)(v18 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v19 && v22 )
          v22 ^= v18;
        MiDeletePageFileMemoryExtents((PVOID)v18);
        if ( !v22 )
          return v7;
        v18 = v22;
      }
    }
    v21 = (_QWORD *)v18;
    goto LABEL_40;
  }
  return v7;
}
