/*
 * XREFs of CommitAllocationVirtualAddressCb @ 0x1400ADB50
 * Callers:
 *     ?IteratePhysicalMemoryRanges@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@P6AJPEAU1@0PEBUVIDMM_ITERATE_PHYSICAL_MEMORY_RANGE_DESC@@PEAX@Z3II@Z @ 0x1400AD980 (-IteratePhysicalMemoryRanges@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@P6AJPEAU1@0P.c)
 * Callees:
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x140039AF0 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_NW4VIDMM_PAGESIZEUSAGE@@1@Z @ 0x1400ADD10 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 */

__int64 __fastcall CommitAllocationVirtualAddressCb(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v4; // rbp
  _DWORD *v5; // rbx
  unsigned int v6; // r15d
  __int64 v10; // r14
  __int64 LogicalAddress; // rax
  __int64 v12; // rcx
  bool v13; // zf
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // r8
  int v18; // ebp
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  int v24; // [rsp+60h] [rbp-38h] BYREF
  int v25; // [rsp+64h] [rbp-34h]
  unsigned __int64 v26; // [rsp+68h] [rbp-30h]

  v4 = *a4;
  v5 = 0LL;
  v6 = *((unsigned __int16 *)a3 + 8);
  v10 = *(_QWORD *)(*a4 + 88);
  if ( *((_WORD *)a3 + 8) )
  {
    v24 = *((_DWORD *)a3 + 3);
    v15 = *a3;
  }
  else
  {
    LogicalAddress = SysMmGetLogicalAddress(*(void *const *)(*(_QWORD *)a2 + 368LL));
    v12 = *((unsigned int *)a3 + 2);
    v13 = v12 + LogicalAddress == 0;
    v14 = v12 + LogicalAddress;
    v25 = 0;
    v24 = *((_DWORD *)a3 + 3);
    if ( v13 )
    {
      v15 = *a3;
      goto LABEL_4;
    }
    v15 = v14 >> 12;
  }
  v25 = 1;
LABEL_4:
  v16 = a4[2];
  v17 = *(unsigned __int16 *)(a1 + 56);
  v26 = v15;
  v18 = CVirtualAddressAllocator::CommitVirtualAddressRange(
          v4,
          v16,
          v17,
          v6,
          *(_QWORD *)(v16 + 80),
          &v24,
          0,
          a4 + 3,
          0LL,
          0,
          0LL);
  if ( v18 < 0 )
  {
    WdLogSingleEntry4(3LL, *(_QWORD *)(v16 + 104), *(_QWORD *)(v16 + 112));
    WdLogGlobalForLineNumber = 16844;
    if ( v18 == -1073741267 )
      *((_BYTE *)a4 + 32) = 1;
    return (unsigned int)v18;
  }
  else
  {
    v19 = (*(_DWORD *)(v16 + 72) >> 4) & 0x3F;
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v10 + 40232) + 8 * v19) + 476LL) & 1) != 0 )
    {
      v20 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 1264LL);
      if ( v20 )
        v5 = (_DWORD *)(v20 + 144 * v19);
      if ( (*v5 & 0x400) == 0 )
      {
        v22 = a4[5];
        *((_DWORD *)a4 + 9) |= 1 << ((*(_DWORD *)(v16 + 72) >> 4) & 0x3F);
        if ( v22 >= *(_QWORD *)(v16 + 104) )
          v22 = *(_QWORD *)(v16 + 104);
        a4[5] = v22;
        v23 = a4[6];
        if ( v23 <= *(_QWORD *)(v16 + 112) )
          v23 = *(_QWORD *)(v16 + 112);
        a4[6] = v23;
      }
    }
    return 0LL;
  }
}
