/*
 * XREFs of MiInitializePfnForOtherProcess @ 0x14038FF2C
 * Callers:
 *     MiMakeOutswappedPageResident @ 0x1402EF6F4 (MiMakeOutswappedPageResident.c)
 *     MiInitializeSystemPageTable @ 0x14038F158 (MiInitializeSystemPageTable.c)
 *     MiDuplicateCloneLeaf @ 0x14038FAFC (MiDuplicateCloneLeaf.c)
 *     MiMapPageFileHash @ 0x140425FA8 (MiMapPageFileHash.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140684C24 (MiDemoteValidLargePageOneLevel.c)
 *     MiInitializeShadowPageTable @ 0x1407F6B9C (MiInitializeShadowPageTable.c)
 *     MiAllocateTopLevelPage @ 0x140A51BBC (MiAllocateTopLevelPage.c)
 * Callees:
 *     MiSetPfnModified @ 0x140215EC0 (MiSetPfnModified.c)
 *     MiIncreaseUsedPtes @ 0x140299D80 (MiIncreaseUsedPtes.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiSetPfnContainingFrame @ 0x140347E40 (MiSetPfnContainingFrame.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

signed __int64 __fastcall MiInitializePfnForOtherProcess(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v4; // r14
  unsigned __int64 v5; // rsi
  __int64 v6; // r12
  __int64 v7; // rbx
  unsigned __int8 CurrentIrql; // di
  unsigned int v9; // ebp
  __int64 v10; // rax
  signed __int64 result; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rbx
  unsigned int v14; // ebp
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  int v19; // [rsp+68h] [rbp+20h]
  int v20; // [rsp+68h] [rbp+20h]

  v4 = a4;
  v5 = a2;
  v6 = a1;
  v7 = 48 * a1 - 0x220000000000LL;
  if ( (a4 & 0x10) != 0 )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    a2 = 2LL;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
    }
  }
  v9 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v9 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v9);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v7 + 24) < 0 );
  }
  *(_QWORD *)(v7 + 8) = v5;
  *(_QWORD *)(v7 + 24) &= 0xC7FFFFFFFFFFFFFFuLL;
  *(_QWORD *)(v7 + 16) = MiMakeDemandZeroPte(4LL, a2, a3, a4);
  HIWORD(v19) = HIWORD(*(_DWORD *)(v7 + 32));
  LOWORD(v19) = 1;
  *(_DWORD *)(v7 + 32) = v19;
  v10 = *(_QWORD *)(v7 + 24);
  if ( (v4 & 0x80u) != 0 )
    *(_QWORD *)(v7 + 24) = (v10 + 1) ^ (v10 ^ (v10 + 1)) & 0xC000000000000000uLL;
  else
    *(_QWORD *)(v7 + 24) = v10 & 0xC000000000000000uLL | 1;
  MiSetPfnModified(v7, 1);
  if ( (v4 & 0x200) != 0 )
  {
    v20 = *(_DWORD *)(v7 + 32);
    BYTE2(v20) = BYTE2(v20) & 0xF8 | 6;
    *(_DWORD *)(v7 + 32) = v20;
  }
  result = MiSetPfnContainingFrame(v7, a3);
  if ( a3 == v6 && (v4 & 0x800) == 0 )
  {
    result = *(_QWORD *)(v7 + 24);
    v12 = (result + 1) ^ (result ^ (result + 1)) & 0xC000000000000000uLL;
    *(_QWORD *)(v7 + 24) = v12;
    v4 |= 0x800u;
  }
  *(_DWORD *)(v7 + 36) = 0;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (v4 & 0x800) == 0 )
  {
    v13 = 48 * a3 - 0x220000000000LL;
    v14 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v14 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v14);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v13 + 24) < 0 );
    }
    v15 = *(_QWORD *)(v13 + 24);
    v16 = v15 + 1;
    v17 = v15 ^ (v15 + 1);
    result = 0xC000000000000000uLL;
    v12 = v16 ^ v17 & 0xC000000000000000uLL;
    *(_QWORD *)(v13 + 24) = v12;
    if ( (v4 & 0x1000) != 0 )
      result = MiIncreaseUsedPtes(v16, ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL, 1LL);
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( CurrentIrql != 17 )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v12) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
