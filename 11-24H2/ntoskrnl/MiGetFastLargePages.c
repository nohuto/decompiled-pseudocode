/*
 * XREFs of MiGetFastLargePages @ 0x14026499C
 * Callers:
 *     MiAllocateLargeZeroPages @ 0x14026F2E8 (MiAllocateLargeZeroPages.c)
 * Callees:
 *     MiUpdateLargePageBitMap @ 0x140219EE0 (MiUpdateLargePageBitMap.c)
 *     MiChangePageAttribute @ 0x14024C2DC (MiChangePageAttribute.c)
 *     MiProtectionToCacheAttribute @ 0x140253A30 (MiProtectionToCacheAttribute.c)
 *     MiGetLargePageDemoteAsNeeded @ 0x140263DE4 (MiGetLargePageDemoteAsNeeded.c)
 *     MiGetPfnPageSizeIndex @ 0x140310FA0 (MiGetPfnPageSizeIndex.c)
 *     MiTryUnlinkNodeLargePages @ 0x1406855D0 (MiTryUnlinkNodeLargePages.c)
 *     MiNextPhysicallyContiguousPfnWorthTrying @ 0x140693CAC (MiNextPhysicallyContiguousPfnWorthTrying.c)
 */

char __fastcall MiGetFastLargePages(__int64 a1, _QWORD *a2)
{
  int v2; // r15d
  _QWORD *v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // eax
  int v7; // r10d
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  char v10; // r8
  int v11; // ebx
  __int64 *v12; // rax
  unsigned int v13; // r12d
  unsigned __int64 v14; // rax
  unsigned int v15; // ecx
  unsigned __int64 v16; // rdx
  int v17; // r15d
  unsigned __int64 v18; // rdx
  unsigned int v19; // r13d
  unsigned int v20; // ebp
  _QWORD *LargePageDemoteAsNeeded; // rax
  _QWORD *v22; // r14
  int PfnPageSizeIndex; // r8d
  __int64 v24; // rdx
  unsigned __int64 v25; // r14
  int v26; // ebp
  unsigned __int64 v27; // r12
  __int64 v28; // r9
  unsigned __int64 v29; // r14
  _QWORD *v30; // rdx
  unsigned __int64 *v31; // rcx
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rax
  __int64 v34; // r14
  unsigned __int64 v35; // rdx
  int v36; // r8d
  unsigned __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  unsigned __int64 v41; // [rsp+38h] [rbp-60h]
  _QWORD *v42; // [rsp+40h] [rbp-58h]
  unsigned int v43; // [rsp+A0h] [rbp+8h]
  int PhysicallyContiguousPfnWorthTrying; // [rsp+B0h] [rbp+18h]
  char v46; // [rsp+B8h] [rbp+20h]

  v2 = 0;
  v46 = 0;
  if ( (*(_DWORD *)a1 & 0x10) != 0 || KeGetCurrentIrql() >= 2u || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
  {
    v2 = 1;
    v46 = 1;
  }
  v4 = a2;
  v5 = 4LL;
  do
  {
    v4[2] = 0LL;
    v4[1] = v4;
    *v4 = v4;
    v4 += 3;
    --v5;
  }
  while ( v5 );
  v6 = MiProtectionToCacheAttribute(*(_DWORD *)(a1 + 36));
  v8 = *(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 72);
  v9 = 0LL;
  v42 = 0LL;
  v10 = v6;
  PhysicallyContiguousPfnWorthTrying = 0;
  v43 = v6;
  if ( *(_QWORD *)(a1 + 40) != -1LL )
  {
    v34 = *(unsigned int *)(a1 + 48);
    PhysicallyContiguousPfnWorthTrying = MiNextPhysicallyContiguousPfnWorthTrying(a1, v34, v6);
    if ( PhysicallyContiguousPfnWorthTrying )
    {
      v35 = *(_QWORD *)(a1 + 56);
      v36 = MiLargePageShifts[v34];
      if ( v35 )
      {
        v37 = ((v35 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( (unsigned int)v34 < 2 )
        {
          v38 = (unsigned int)(2 - v34);
          do
          {
            v37 = ((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            --v38;
          }
          while ( v38 );
        }
        v39 = (v37 >> 3) & 0x1FF;
        if ( v8 > (512 - v39) << v36 )
          v8 = (512 - v39) << v36;
      }
      v14 = MiTryUnlinkNodeLargePages(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), (unsigned int)v34, v8 >> v36, v2);
      v9 = v14;
      if ( v14 )
        goto LABEL_25;
      PhysicallyContiguousPfnWorthTrying = 0;
    }
    v10 = v43;
    v7 = 1;
  }
  v11 = v2;
  if ( (*(_DWORD *)a1 & 4) == 0 )
    v11 = v2 | 0x10;
  *(_QWORD *)(a1 + 40) = -1LL;
  v12 = MiPageSizes;
  v13 = 0;
  do
  {
    if ( *v12 == *(_QWORD *)(a1 + 24) )
      break;
    v13 += v7;
    ++v12;
  }
  while ( v13 < 3 );
  v14 = *(_QWORD *)(a1 + 72);
  v15 = 0;
  v16 = *(_QWORD *)(a1 + 16);
  v41 = v14;
  if ( v14 < v16 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v15 > v13 )
      {
LABEL_24:
        LOBYTE(v2) = v46;
        break;
      }
      v18 = v16 - v14;
      while ( 1 )
      {
        LOBYTE(v14) = v15;
        v19 = v15;
        if ( MiPageSizes[v15] <= v18 )
          break;
        v15 += v7;
        if ( v15 > v13 )
          goto LABEL_24;
      }
      v20 = (*(_DWORD *)(a1 + 32) & 0x3F | ((v7 & v17 | (2 * (v15 & 3 | (4 * (v10 & 3))))) << 6)) << 9;
      LargePageDemoteAsNeeded = (_QWORD *)MiGetLargePageDemoteAsNeeded(
                                            *(_QWORD *)(a1 + 8),
                                            v20,
                                            v11,
                                            v13,
                                            *(_QWORD *)(a1 + 56),
                                            *(_QWORD *)(a1 + 64));
      v22 = LargePageDemoteAsNeeded;
      if ( LargePageDemoteAsNeeded )
      {
        *LargePageDemoteAsNeeded = 0LL;
        if ( v9 )
          *v42 = LargePageDemoteAsNeeded;
        else
          v9 = (unsigned __int64)LargePageDemoteAsNeeded;
        v42 = LargePageDemoteAsNeeded;
        PfnPageSizeIndex = MiGetPfnPageSizeIndex(LargePageDemoteAsNeeded);
        v24 = MiPageSizes[PfnPageSizeIndex];
        v14 = v24 + v41;
        v41 += v24;
        v25 = v24 - 0x5555555555555555LL * ((__int64)(v22 + 0x44000000000LL) >> 4);
        if ( v25 < 0x100000 || (v15 = v19, (v20 & 0x8000) == 0) )
        {
          *(_DWORD *)(a1 + 48) = PfnPageSizeIndex;
          *(_QWORD *)(a1 + 40) = v25;
LABEL_22:
          v15 = v19;
        }
      }
      else
      {
        if ( (v20 & 0x8000) == 0 && (*(_DWORD *)a1 & 1) == 0 )
        {
          v14 = v41;
          v17 = 1;
          goto LABEL_22;
        }
        v14 = v41;
        v15 = v19 + 1;
        v17 = 0;
      }
      v16 = *(_QWORD *)(a1 + 16);
      v10 = v43;
      if ( v14 >= v16 )
        goto LABEL_24;
      v7 = 1;
    }
  }
LABEL_25:
  v26 = 0;
  if ( v9 )
  {
    do
    {
      v27 = *(_QWORD *)v9;
      v28 = (unsigned int)MiGetPfnPageSizeIndex(v9);
      v29 = MiPageSizes[v28];
      v30 = &a2[3 * v28];
      v31 = (unsigned __int64 *)v30[1];
      if ( (_QWORD *)*v31 != v30 )
        __fastfail(3u);
      *(_QWORD *)v9 = v30;
      *(_QWORD *)(v9 + 8) = v31;
      *v31 = v9;
      v30[1] = v9;
      ++v30[2];
      *(_QWORD *)(a1 + 72) += v29;
      v32 = *(_QWORD *)(a1 + 56);
      if ( v32 )
      {
        v32 += v29 << 12;
        *(_QWORD *)(a1 + 56) = v32;
      }
      if ( PhysicallyContiguousPfnWorthTrying )
      {
        v33 = *(_QWORD *)(a1 + 40);
        if ( v33 + v29 > v33 )
        {
          if ( v32 && (_DWORD)v28 && ((v32 >> 12) & MiPageSizes[(unsigned int)(v28 - 1)]) == 0 )
            v26 = 1;
        }
        else
        {
          v26 = 1;
        }
        *(_QWORD *)(a1 + 40) = v33 + v29;
      }
      if ( (unsigned __int8)BYTE2(*(_DWORD *)(v9 + 32)) >> 6 != v43 )
        MiChangePageAttribute(v9, v43);
      LOBYTE(v14) = MiUpdateLargePageBitMap(
                      *(_QWORD *)(a1 + 8),
                      0xAAAAAAAAAAAAAAABuLL * ((__int64)(v9 + 0x220000000000LL) >> 4),
                      v29,
                      (2 * v2 + 2) | 1);
      v9 = v27;
    }
    while ( v27 );
    if ( v26 )
      *(_QWORD *)(a1 + 40) = -1LL;
  }
  return v14;
}
