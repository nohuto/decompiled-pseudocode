/*
 * XREFs of MiMapWithLargePages @ 0x1403A7068
 * Callers:
 *     MiMapContiguousMemoryLarge @ 0x1403A6D44 (MiMapContiguousMemoryLarge.c)
 *     MiInsertInSystemSpace @ 0x140415F30 (MiInsertInSystemSpace.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14020D480 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x140218550 (MiUnlockWorkingSetExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetExclusiveAtDpc @ 0x1402E39BC (MiLockWorkingSetExclusiveAtDpc.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1402E3A1C (MiLockWorkingSetSharedAtDpc.c)
 *     MiWriteLargePte @ 0x1403090A0 (MiWriteLargePte.c)
 *     MiGetLargePteAddress @ 0x14036EE90 (MiGetLargePteAddress.c)
 *     MiFinishPageTableForLargePage @ 0x1403A7F88 (MiFinishPageTableForLargePage.c)
 */

void __fastcall MiMapWithLargePages(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        char a6,
        int a7)
{
  unsigned __int64 v7; // r13
  int v9; // edi
  int v10; // ecx
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r10
  __int64 v13; // r8
  int v14; // ecx
  bool v15; // zf
  unsigned int v16; // edi
  ULONG_PTR *v17; // rsi
  unsigned __int64 v18; // r14
  ULONG_PTR ValidPte; // rbx
  unsigned __int64 LargePteAddress; // r14
  ULONG_PTR v21; // rsi
  int v22; // edi
  unsigned __int64 v23; // r12
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v25; // bl
  unsigned __int8 v26; // al
  unsigned __int64 v27; // rbx
  __int64 v28; // [rsp+20h] [rbp-20h] BYREF
  ULONG_PTR v29; // [rsp+28h] [rbp-18h]
  __int64 v30; // [rsp+30h] [rbp-10h]
  int v31; // [rsp+38h] [rbp-8h]
  int v32; // [rsp+3Ch] [rbp-4h]
  __int64 v33; // [rsp+80h] [rbp+40h]
  char v36[8]; // [rsp+A8h] [rbp+68h]

  v7 = a3;
  v32 = 0;
  v9 = a6 & 7;
  v10 = MiLargePageShifts[a5];
  v11 = a4 >> v10;
  v33 = MiPageSizes[a5];
  v12 = a4 >> v10 << v10;
  v13 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v7 <= qword_140E2DBE0 && ((*(_QWORD *)(48 * v7 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
  {
    v14 = (unsigned __int8)BYTE2(*(_DWORD *)(48 * v7 - 0x21FFFFFFFFE0LL)) >> 6;
    if ( !v14 )
    {
      v9 |= 8u;
      goto LABEL_11;
    }
    v15 = v14 == 2;
  }
  else
  {
    if ( !a7 )
    {
      v9 |= 0x10u;
      goto LABEL_11;
    }
    v15 = a7 == 2;
  }
  if ( v15 )
    v9 |= 0x18u;
LABEL_11:
  v16 = v9 | 0xA0000000;
  if ( a4 % MiPageSizes[a5] )
  {
    v17 = (ULONG_PTR *)(v13 + 8 * v12);
    v18 = v13 + 8 * a4;
    ValidPte = MiMakeValidPte(0LL, v12 + v7, v16);
    if ( (unsigned __int64)v17 < v18 )
    {
      do
      {
        if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && (unsigned __int64)v17 >= 0xFFFFF6C000000000uLL )
          MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v17, ValidPte, 128);
        *v17++ = ValidPte;
        ValidPte = (ValidPte + 4096) ^ ((ValidPte + 4096) ^ ValidPte) & 0xFFF0000000000FFFuLL;
      }
      while ( (unsigned __int64)v17 < v18 );
      v7 = a3;
    }
  }
  v30 = 0LL;
  v31 = 0;
  LargePteAddress = MiGetLargePteAddress(a2, a5);
  v21 = 0LL;
  v22 = v16 | 0x4000000;
  v28 = a1;
  v29 = 0LL;
  v23 = LargePteAddress + 8 * MiPtesToSupportLargePageSizes[a5] * v11;
  CurrentIrql = KeGetCurrentIrql();
  if ( a5 )
  {
    if ( CurrentIrql == 2 )
    {
      v25 = 17;
      v36[0] = 17;
      MiLockWorkingSetSharedAtDpc(a1);
      goto LABEL_27;
    }
    v26 = MiLockWorkingSetShared(a1);
  }
  else
  {
    if ( CurrentIrql == 2 )
    {
      v25 = 17;
      v36[0] = 17;
      MiLockWorkingSetExclusiveAtDpc(a1);
      goto LABEL_27;
    }
    v26 = MiLockWorkingSetExclusive(a1);
  }
  v36[0] = v26;
  v25 = v26;
LABEL_27:
  if ( LargePteAddress < v23 )
  {
    v27 = a2;
    do
    {
      if ( a5 )
      {
        if ( !v21 || (LargePteAddress & 0xFFF) == 0 )
        {
          MiFinishPageTableForLargePage(&v28);
          v21 = ((LargePteAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v29 = v21;
          MiLockNestedPageTable(a1, v21);
        }
      }
      else if ( (LargePteAddress & 0xFFF) == 0 )
      {
        MiFinishPageTableForLargePage(&v28);
        v21 = v29;
      }
      ++v30;
      if ( !MI_READ_PTE_LOCK_FREE(LargePteAddress) )
        ++v31;
      MiWriteLargePte(v27, v7, a5, v22);
      v7 += v33;
      v27 += v33 << 12;
      LargePteAddress += 8 * MiPtesToSupportLargePageSizes[a5];
    }
    while ( LargePteAddress < v23 );
    v25 = v36[0];
  }
  MiFinishPageTableForLargePage(&v28);
  if ( a5 )
    MiUnlockWorkingSetShared(a1, v25);
  else
    MiUnlockWorkingSetExclusive(a1, v25);
}
