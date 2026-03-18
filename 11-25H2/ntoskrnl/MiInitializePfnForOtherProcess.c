/*
 * XREFs of MiInitializePfnForOtherProcess @ 0x1402D0D28
 * Callers:
 *     MiInitializeSystemPageTable @ 0x1402D04C8 (MiInitializeSystemPageTable.c)
 *     MiDuplicateCloneLeaf @ 0x1402D08F8 (MiDuplicateCloneLeaf.c)
 *     MiMapPageFileHash @ 0x1402D1A18 (MiMapPageFileHash.c)
 *     MiMakeOutswappedPageResident @ 0x14040F088 (MiMakeOutswappedPageResident.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140678274 (MiDemoteValidLargePageOneLevel.c)
 *     MiInitializeShadowPageTable @ 0x1407E6598 (MiInitializeShadowPageTable.c)
 *     MiAllocateTopLevelPage @ 0x140A480DC (MiAllocateTopLevelPage.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiSetPfnContainingFrame @ 0x14033BD00 (MiSetPfnContainingFrame.c)
 *     MiIncreaseUsedPtes @ 0x1403837D0 (MiIncreaseUsedPtes.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 *     MiSetPfnModified @ 0x1403871E0 (MiSetPfnModified.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiInitializePfnForOtherProcess(__int64 a1, unsigned __int64 a2, __int64 a3, __int16 a4)
{
  __int16 v4; // r14
  __int64 v6; // r12
  __int64 v7; // rbx
  unsigned __int8 CurrentIrql; // di
  unsigned int v9; // ebp
  __int64 v10; // rax
  __int64 result; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  unsigned int v15; // ebp
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  int v20; // [rsp+68h] [rbp+20h]
  int v21; // [rsp+68h] [rbp+20h]

  v4 = a4;
  v6 = a1;
  v7 = 48 * a1 - 0x220000000000LL;
  if ( (a4 & 0x10) != 0 )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1);
    }
  }
  v9 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v9 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
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
  *(_QWORD *)(v7 + 8) = a2;
  *(_QWORD *)(v7 + 24) &= 0xC7FFFFFFFFFFFFFFuLL;
  *(_QWORD *)(v7 + 16) = MiMakeDemandZeroPte(4LL);
  HIWORD(v20) = HIWORD(*(_DWORD *)(v7 + 32));
  LOWORD(v20) = 1;
  *(_DWORD *)(v7 + 32) = v20;
  v10 = *(_QWORD *)(v7 + 24);
  if ( (v4 & 0x80u) != 0 )
    *(_QWORD *)(v7 + 24) = (v10 + 1) ^ (v10 ^ (v10 + 1)) & 0xC000000000000000uLL;
  else
    *(_QWORD *)(v7 + 24) = v10 & 0xC000000000000000uLL | 1;
  MiSetPfnModified(v7, 1LL);
  if ( (v4 & 0x200) != 0 )
  {
    v21 = *(_DWORD *)(v7 + 32);
    BYTE2(v21) = BYTE2(v21) & 0xF8 | 6;
    *(_DWORD *)(v7 + 32) = v21;
  }
  result = MiSetPfnContainingFrame(v7, a3);
  if ( a3 == v6 && (v4 & 0x800) == 0 )
  {
    result = *(_QWORD *)(v7 + 24);
    v13 = result + 1;
    v12 = (result + 1) ^ (result ^ (result + 1)) & 0xC000000000000000uLL;
    *(_QWORD *)(v7 + 24) = v12;
    v4 |= 0x800u;
  }
  *(_DWORD *)(v7 + 36) = 0;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (v4 & 0x800) == 0 )
  {
    v14 = 48 * a3 - 0x220000000000LL;
    v15 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v15 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v13) )
        {
          HvlNotifyLongSpinWait(v15);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v14 + 24) < 0 );
    }
    v16 = *(_QWORD *)(v14 + 24);
    v17 = v16 + 1;
    v18 = v16 ^ (v16 + 1);
    result = 0xC000000000000000uLL;
    v12 = v17 ^ v18 & 0xC000000000000000uLL;
    *(_QWORD *)(v14 + 24) = v12;
    if ( (v4 & 0x1000) != 0 )
      result = MiIncreaseUsedPtes(v17, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL, 1LL);
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
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
