/*
 * XREFs of MiHotRemoveHugeRange @ 0x140671710
 * Callers:
 *     MiActOnPartitionNodePages @ 0x14068A054 (MiActOnPartitionNodePages.c)
 *     MiCompleteMemoryAddition @ 0x1407E95EC (MiCompleteMemoryAddition.c)
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     RtlAvlInsertNodeEx @ 0x1402903E0 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 *     RtlClearBitsEx @ 0x1402920E0 (RtlClearBitsEx.c)
 *     RtlFindSetBitsAndClearEx @ 0x1402921A0 (RtlFindSetBitsAndClearEx.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiLockHugePfnInternal @ 0x1403EFAE4 (MiLockHugePfnInternal.c)
 *     MiRestrictRangeToNode @ 0x1403FC38C (MiRestrictRangeToNode.c)
 *     MiUnlockHugePfn @ 0x1404C8804 (MiUnlockHugePfn.c)
 *     MiHugePfnPartition @ 0x1404D2634 (MiHugePfnPartition.c)
 *     MiLockHugePfn @ 0x140671F4C (MiLockHugePfn.c)
 *     MiMakeEntireHugePfnGood @ 0x140671FBC (MiMakeEntireHugePfnGood.c)
 *     MiUpdateHugePageCounts @ 0x140672EC4 (MiUpdateHugePageCounts.c)
 *     MiSetPfnRemovalRequested @ 0x1406757A0 (MiSetPfnRemovalRequested.c)
 *     MiMarkHugeRangeIoPfnDeleted @ 0x140677A40 (MiMarkHugeRangeIoPfnDeleted.c)
 *     MiFlushCacheRange @ 0x14068FD90 (MiFlushCacheRange.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiHotRemoveHugeRange(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, int a3)
{
  ULONG_PTR v3; // r14
  ULONG_PTR SizeOfBitMap; // rbx
  __int64 v5; // rsi
  ULONG_PTR v6; // r13
  unsigned __int64 v7; // rdi
  unsigned __int64 *v8; // r12
  __int64 v9; // rdx
  ULONG_PTR v10; // r15
  ULONG_PTR v11; // rbx
  char v12; // si
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 EntireHugePfnGood; // rax
  _QWORD *v16; // rdx
  bool v17; // cl
  _QWORD *v18; // r9
  unsigned int v19; // r8d
  _QWORD *v20; // rax
  __int64 v21; // r12
  ULONG_PTR v22; // r13
  _QWORD *v23; // rdi
  ULONG_PTR v24; // r14
  KIRQL v25; // r15
  unsigned __int64 *v26; // rax
  ULONG64 v27; // r8
  const signed __int64 *v28; // r15
  __int64 v29; // rdi
  unsigned __int8 v30; // bl
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  ULONG64 SetBitsAndClear; // r14
  __int64 v36; // [rsp+28h] [rbp-30h]
  const signed __int64 *v37; // [rsp+30h] [rbp-28h]
  _RTL_BITMAP_EX BitMapHeader; // [rsp+38h] [rbp-20h] BYREF
  ULONG_PTR v39; // [rsp+A0h] [rbp+48h]
  int v40; // [rsp+A0h] [rbp+48h]
  unsigned __int8 v42; // [rsp+A8h] [rbp+50h]
  _QWORD *v44; // [rsp+B8h] [rbp+60h] BYREF

  v3 = BugCheckParameter2;
  SizeOfBitMap = (BugCheckParameter2 >> 18) & 0x3FFFFF;
  v39 = a2;
  v5 = 0LL;
  BitMapHeader.SizeOfBitMap = SizeOfBitMap;
  v6 = a2;
  v44 = 0LL;
  v7 = SizeOfBitMap;
  v8 = (unsigned __int64 *)(qword_140E30100 + 8 * SizeOfBitMap);
  v36 = MiHugePfnPartition(v8);
  if ( v9 )
  {
    while ( 1 )
    {
      v10 = MiRestrictRangeToNode(v3, v6);
      MiPageToNode(v3);
      v11 = v10 >> 18;
      if ( !(v10 >> 18) )
        goto LABEL_15;
      do
      {
        v12 = MiLockHugePfn(v8);
        MiUpdateHugePageCounts(v36, v7, 1LL, 0LL);
        v14 = *v8;
        if ( (*v8 & 8) == 0 )
          goto LABEL_13;
        EntireHugePfnGood = MiMakeEntireHugePfnGood(v7);
        v16 = v44;
        v17 = 0;
        v18 = (_QWORD *)EntireHugePfnGood;
        if ( !v44 )
          goto LABEL_12;
        v19 = *(_QWORD *)(EntireHugePfnGood + 24) & 0x3FFFFF;
        while ( v19 < (v16[3] & 0x3FFFFFuLL) )
        {
          v20 = (_QWORD *)*v16;
          if ( !*v16 )
          {
            v17 = 0;
            goto LABEL_12;
          }
LABEL_10:
          v16 = v20;
        }
        v20 = (_QWORD *)v16[1];
        if ( v20 )
          goto LABEL_10;
        v17 = 1;
LABEL_12:
        RtlAvlInsertNodeEx((unsigned __int64 *)&v44, (unsigned __int64)v16, v17, v18);
        v14 = *v8;
LABEL_13:
        LOBYTE(v13) = v12;
        *v8 = v14 & 0xFFFFFFFFFFFF800FuLL | 0x4010;
        MiUnlockHugePfn((__int64)v8++, v13);
        v7 = (v7 + 1) ^ ((v7 + 1) ^ v7) & 0xFFFFFFFFFFC00000uLL;
        --v11;
      }
      while ( v11 );
      v5 = (__int64)v44;
      v6 = v39;
LABEL_15:
      if ( a3 )
        MiFlushCacheRange(v3, v10);
      MiMarkHugeRangeIoPfnDeleted(v3);
      v3 += v10;
      v6 -= v10;
      v39 = v6;
      if ( !v6 )
      {
        SizeOfBitMap = BitMapHeader.SizeOfBitMap;
        v6 = a2;
        break;
      }
    }
  }
  v21 = 0LL;
  v22 = v6 >> 18;
  v23 = (_QWORD *)(qword_140E30100 + 8 * SizeOfBitMap);
  v24 = 0LL;
  v25 = ExAcquireSpinLockExclusive(&dword_140E30140);
  if ( v22 )
  {
    do
    {
      MiLockHugePfnInternal((__int64)v23);
      *v23 = 0LL;
      RtlClearBitsEx((__int64)&stru_140E300F0, SizeOfBitMap + v24, 1uLL);
      _InterlockedAnd(
        (volatile signed __int32 *)(qword_140E30108 + 4 * (((((__int64)v23 - qword_140E30100) >> 3) & 0x3FFFFFuLL) >> 5)),
        ~(1 << ((((__int64)v23 - qword_140E30100) >> 3) & 0x1F)));
      ++v23;
      ++v24;
    }
    while ( v24 < v22 );
    v5 = (__int64)v44;
  }
  MiReleaseSpinLockExclusive(&dword_140E30140, v25);
  while ( v5 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)&v44, v5);
    if ( !a3 )
    {
      v26 = *(unsigned __int64 **)(v5 + 32);
      BitMapHeader.SizeOfBitMap = 0x40000LL;
      v27 = 0LL;
      BitMapHeader.Buffer = v26;
      v28 = (const signed __int64 *)(v26 + 4096);
      v37 = (const signed __int64 *)(v26 + 4096);
      while ( 1 )
      {
        SetBitsAndClear = RtlFindSetBitsAndClearEx(&BitMapHeader, 1uLL, v27);
        if ( SetBitsAndClear == -1LL )
          break;
        ++v21;
        v29 = 48 * (SetBitsAndClear + ((unsigned __int64)(*(_DWORD *)(v5 + 24) & 0x3FFFFF) << 18)) - 0x220000000000LL;
        v30 = _bittest64(v28, SetBitsAndClear);
        MiAllocatePool(0x40uLL, 0x20uLL, 1816291661);
        v42 = MiLockPageInline(v29, v31, v32, v33);
        if ( v30 )
        {
          v28 = v37;
          v40 = *(_DWORD *)(v29 + 32);
          HIBYTE(v40) |= 0x80u;
          *(_DWORD *)(v29 + 32) = v40;
        }
        MiSetPfnRemovalRequested(v29, 1LL, 0LL);
        MiUnlockPage(v29, v42);
        v27 = SetBitsAndClear;
      }
    }
    ExFreePoolWithTag(*(PVOID *)(v5 + 32), 0);
    ExFreePoolWithTag((PVOID)v5, 0);
    v5 = (__int64)v44;
  }
  return v21;
}
