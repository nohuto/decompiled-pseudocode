/*
 * XREFs of MiMapWithLargePages @ 0x1403900B8
 * Callers:
 *     MiInsertInSystemSpace @ 0x1402A4B54 (MiInsertInSystemSpace.c)
 *     MiMapContiguousMemoryLarge @ 0x14038FD94 (MiMapContiguousMemoryLarge.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiLockWorkingSetExclusive @ 0x140211FE0 (MiLockWorkingSetExclusive.c)
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiWriteLargePte @ 0x1402C3820 (MiWriteLargePte.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1402FB704 (MiLockWorkingSetSharedAtDpc.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiLockWorkingSetExclusiveAtDpc @ 0x14040B3D8 (MiLockWorkingSetExclusiveAtDpc.c)
 *     MiGetLargePteAddress @ 0x140411450 (MiGetLargePteAddress.c)
 *     MiFinishPageTableForLargePage @ 0x1404C998C (MiFinishPageTableForLargePage.c)
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
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 LargePteAddress; // r14
  ULONG_PTR v24; // rsi
  int v25; // edi
  unsigned __int64 v26; // r12
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v28; // bl
  unsigned __int8 v29; // al
  unsigned __int64 v30; // rbx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // [rsp+20h] [rbp-20h] BYREF
  ULONG_PTR v34; // [rsp+28h] [rbp-18h]
  __int64 v35; // [rsp+30h] [rbp-10h]
  int v36; // [rsp+38h] [rbp-8h]
  int v37; // [rsp+3Ch] [rbp-4h]
  __int64 v38; // [rsp+80h] [rbp+40h]
  char v41[8]; // [rsp+A8h] [rbp+68h]

  v7 = a3;
  v37 = 0;
  v9 = a6 & 7;
  v10 = MiLargePageShifts[a5];
  v11 = a4 >> v10;
  v38 = MiPageSizes[a5];
  v12 = a4 >> v10 << v10;
  v13 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v7 <= qword_140E2D9A0 && ((*(_QWORD *)(48 * v7 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
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
  v35 = 0LL;
  v36 = 0;
  LargePteAddress = MiGetLargePteAddress(a2, a5);
  v24 = 0LL;
  v25 = v16 | 0x4000000;
  v33 = a1;
  v34 = 0LL;
  v26 = LargePteAddress + 8 * MiPtesToSupportLargePageSizes[a5] * v11;
  CurrentIrql = KeGetCurrentIrql();
  if ( a5 )
  {
    if ( CurrentIrql == 2 )
    {
      v28 = 17;
      v41[0] = 17;
      MiLockWorkingSetSharedAtDpc(a1);
      goto LABEL_27;
    }
    v29 = MiLockWorkingSetShared(a1);
  }
  else
  {
    if ( CurrentIrql == 2 )
    {
      v28 = 17;
      v41[0] = 17;
      MiLockWorkingSetExclusiveAtDpc(a1, v20, v21, v22);
      goto LABEL_27;
    }
    v29 = MiLockWorkingSetExclusive(a1);
  }
  v41[0] = v29;
  v28 = v29;
LABEL_27:
  if ( LargePteAddress < v26 )
  {
    v30 = a2;
    do
    {
      if ( a5 )
      {
        if ( !v24 || (LargePteAddress & 0xFFF) == 0 )
        {
          MiFinishPageTableForLargePage(&v33);
          v24 = ((LargePteAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v34 = v24;
          MiLockNestedPageTable(a1, v24, v31, v32);
        }
      }
      else if ( (LargePteAddress & 0xFFF) == 0 )
      {
        MiFinishPageTableForLargePage(&v33);
        v24 = v34;
      }
      ++v35;
      if ( !MI_READ_PTE_LOCK_FREE(LargePteAddress) )
        ++v36;
      MiWriteLargePte(v30, v7, a5, v25);
      v7 += v38;
      v30 += v38 << 12;
      LargePteAddress += 8 * MiPtesToSupportLargePageSizes[a5];
    }
    while ( LargePteAddress < v26 );
    v28 = v41[0];
  }
  MiFinishPageTableForLargePage(&v33);
  if ( a5 )
    MiUnlockWorkingSetShared(a1, v28);
  else
    MiUnlockWorkingSetExclusive(a1, v28);
}
