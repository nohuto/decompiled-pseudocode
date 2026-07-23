/*
 * XREFs of MiHotAddPartitionMemory @ 0x1407FC9F4
 * Callers:
 *     MmManagePartitionInitialAddMemory @ 0x1407FD584 (MmManagePartitionInitialAddMemory.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 *     RtlAreBitsClearEx @ 0x140411AE0 (RtlAreBitsClearEx.c)
 *     IoUpdateDumpPhysicalRanges @ 0x14058F55C (IoUpdateDumpPhysicalRanges.c)
 *     MiActOnPartitionNodePages @ 0x14068A054 (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x14068AA6C (MiAddRangeToPartitionTree.c)
 *     MiDeletePartitionPageNode @ 0x14068B124 (MiDeletePartitionPageNode.c)
 *     MiFreePartitionTree @ 0x14068B6B0 (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x14068BA00 (MiInsertPartitionPages.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x1407FCF90 (MiUpdatePartitionLargePfnBitMap.c)
 */

__int64 __fastcall MiHotAddPartitionMemory(ULONG *a1, __int64 *a2, int *a3)
{
  int *v4; // r15
  ULONG *v5; // r13
  int updated; // ebx
  int v8; // ecx
  __int64 v9; // r14
  unsigned int v10; // eax
  unsigned int v11; // eax
  int v12; // r12d
  unsigned __int64 v13; // rdi
  unsigned int i; // ebx
  unsigned __int64 v15; // r8
  int v16; // eax
  int v17; // esi
  int v18; // esi
  int v19; // r12d
  char v20; // al
  int v21; // r12d
  _QWORD *j; // rdi
  _QWORD *v23; // rax
  int v24; // r13d
  _QWORD **v25; // rax
  __int64 v26; // r14
  _QWORD *v27; // rcx
  _QWORD *v28; // rcx
  int v29; // eax
  unsigned int v30; // [rsp+28h] [rbp-69h]
  unsigned int v31; // [rsp+28h] [rbp-69h]
  _QWORD *v32; // [rsp+30h] [rbp-61h] BYREF
  int v33; // [rsp+38h] [rbp-59h]
  int v34; // [rsp+3Ch] [rbp-55h]
  __int128 v35; // [rsp+40h] [rbp-51h] BYREF
  __int128 v36; // [rsp+50h] [rbp-41h]
  unsigned __int16 *v37[2]; // [rsp+68h] [rbp-29h] BYREF
  char v38; // [rsp+78h] [rbp-19h]
  char v39; // [rsp+79h] [rbp-18h]
  unsigned int v40; // [rsp+7Ch] [rbp-15h]
  int v41; // [rsp+80h] [rbp-11h]
  unsigned __int64 v42; // [rsp+98h] [rbp+7h]
  __int64 v43; // [rsp+A0h] [rbp+Fh]
  unsigned int v46; // [rsp+110h] [rbp+7Fh]

  v4 = a3;
  v5 = a1;
  v35 = 0LL;
  v36 = 0LL;
  memset_0(v37, 0, 0x48uLL);
  v32 = 0LL;
  v46 = 14;
  if ( v5 == &MiSystemPartition && ((*v4 & 4) == 0 || (*v4 & 8) != 0) )
  {
    updated = -1073741637;
    goto LABEL_4;
  }
  v8 = *v4;
  if ( (*v4 & 0x20) != 0 )
  {
    v9 = 512LL;
  }
  else
  {
    v9 = 0x40000LL;
    if ( (v8 & 0x40) == 0 )
    {
      v10 = 0;
      if ( (v8 & 4) != 0 )
        v10 = 0x40000;
      v9 = v10;
    }
  }
  *((_QWORD *)v4 + 1) = 0LL;
  v11 = v4[1];
  v30 = v11;
  if ( (v8 & 1) != 0 )
  {
    v12 = 1;
  }
  else
  {
    if ( (v5[1] & 0x20) != 0 || (*v4 & 4) != 0 )
    {
      updated = -1073741584;
      goto LABEL_4;
    }
    v11 = v4[1];
    v12 = 0;
  }
  v13 = 0LL;
  for ( i = 0; i < v11; ++i )
  {
    v15 = a2[1];
    v13 += v15;
    if ( !(unsigned int)MiAddRangeToPartitionTree((unsigned __int64 *)&v32, *a2, v15, 0) )
    {
      updated = -1073741670;
      goto LABEL_4;
    }
    v11 = v30;
    a2 += 2;
  }
  v16 = *v4;
  if ( (*v4 & 4) != 0 )
  {
    v39 = 1;
    v40 = (v16 & 2 | 4u) >> 1;
  }
  else
  {
    updated = MiUpdatePartitionLargePfnBitMap(v5, &v32);
    if ( updated < 0 )
      goto LABEL_4;
  }
  updated = 0;
  v17 = DWORD2(v36);
  if ( (v5[1] & 0x20) != 0 )
  {
    v38 = 1;
    v17 = DWORD2(v36) | 8;
  }
  if ( v12 )
  {
    v19 = *v4;
    v20 = *v4;
    v33 = 0;
    v31 = 8 * (v20 & 8);
    v21 = v19 & 2;
    if ( !v21 )
      v17 |= 0x80u;
    v37[0] = (unsigned __int16 *)v5;
    v43 = v9;
    v18 = v17 | 0x100;
    v34 = v18;
    v46 = 12 - (v21 != 0);
    j = 0LL;
    v23 = v32;
    DWORD2(v36) = v18;
    while ( v23 )
    {
      j = v23;
      v23 = (_QWORD *)*v23;
    }
    if ( j )
    {
      v24 = v33;
      do
      {
        v25 = (_QWORD **)j[1];
        v26 = (__int64)j;
        v27 = j;
        if ( v25 )
        {
          v28 = *v25;
          for ( j = (_QWORD *)j[1]; v28; v28 = (_QWORD *)*v28 )
            j = v28;
        }
        else
        {
          while ( 1 )
          {
            j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !j || (_QWORD *)*j == v27 )
              break;
            v27 = j;
          }
        }
        if ( !v24 )
        {
          MiActOnPartitionNodePages(v26, v46, v31, v37);
          if ( v41 < 0 )
          {
            updated = v41;
            if ( v21 && RtlAreBitsClearEx((unsigned __int64 *)(v26 + 32), 0LL, *(_QWORD *)(v26 + 32)) )
              j = (_QWORD *)v26;
            v24 = 1;
          }
          if ( v21 )
            continue;
        }
        RtlAvlRemoveNode((unsigned __int64 *)&v32, v26);
        MiDeletePartitionPageNode((PVOID *)v26);
      }
      while ( j );
      v18 = v34;
      v4 = a3;
      v5 = a1;
    }
    v13 = v42;
    if ( v42 )
    {
      IoUpdateDumpPhysicalRanges();
      goto LABEL_57;
    }
LABEL_4:
    MiFreePartitionTree((unsigned __int16 *)v5, (unsigned __int64 *)&v32, 0, 0);
    return (unsigned int)updated;
  }
  v18 = v17 | 2;
  DWORD2(v36) = v18;
LABEL_57:
  v29 = *v4;
  if ( (*v4 & 2) == 0 )
    DWORD2(v36) = v18 | 1;
  *(_QWORD *)&v35 = &v32;
  if ( (v29 & 4) != 0 )
  {
    MiFreePartitionTree((unsigned __int16 *)v5, (unsigned __int64 *)&v32, 0, 0);
  }
  else if ( v46 != 12 )
  {
    MiInsertPartitionPages((unsigned __int16 *)&MiSystemPartition, (unsigned __int16 *)v5, (__int64)&v35, v13);
  }
  *((_QWORD *)v4 + 1) = v13;
  return (unsigned int)updated;
}
