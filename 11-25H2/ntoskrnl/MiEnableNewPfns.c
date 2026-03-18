/*
 * XREFs of MiEnableNewPfns @ 0x140660F7C
 * Callers:
 *     MiCompleteMemoryAddition @ 0x1407D915C (MiCompleteMemoryAddition.c)
 * Callees:
 *     MiReturnResident @ 0x14022F8D0 (MiReturnResident.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 *     MiPageToNode @ 0x140346EA0 (MiPageToNode.c)
 *     MiSetFreeZeroPfnCold @ 0x140438788 (MiSetFreeZeroPfnCold.c)
 *     MiDetermineNewPfnHeatState @ 0x140450848 (MiDetermineNewPfnHeatState.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiInsertPossiblyBadPage @ 0x140677C6C (MiInsertPossiblyBadPage.c)
 *     MiIncreaseCommitLimits @ 0x14067A97C (MiIncreaseCommitLimits.c)
 */

unsigned __int64 __fastcall MiEnableNewPfns(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  __int64 v3; // r13
  __int64 v4; // rbx
  unsigned __int64 v5; // r15
  __int64 v6; // rsi
  unsigned int v7; // ecx
  ULONG_PTR v8; // r12
  __int64 v9; // rbp
  int v10; // r14d
  __int64 v11; // r12
  __int64 v12; // rbp
  unsigned __int64 v13; // r15
  __int64 v14; // r13
  __int64 v15; // rsi
  unsigned int v16; // eax
  int v17; // ebx
  unsigned __int64 v18; // r12
  __int64 v19; // rbp
  unsigned int v20; // eax
  int v21; // eax
  int v22; // ecx
  unsigned int v23; // ecx
  unsigned __int8 v24; // bl
  __int64 v26; // [rsp+30h] [rbp-68h]
  __int64 v27; // [rsp+40h] [rbp-58h]
  int v28; // [rsp+48h] [rbp-50h]
  BOOL v31; // [rsp+B0h] [rbp+18h]
  char v32; // [rsp+B8h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 48);
  v5 = *(_QWORD *)(a1 + 32);
  v6 = a1;
  v7 = *(_DWORD *)(a1 + 40);
  v26 = v4;
  v32 = v7;
  v8 = v5 + v2;
  v31 = (v7 & 0x200) == 0;
  v9 = 48 * v2;
  v10 = 2 - ((v7 & 0x200) != 0);
  if ( (v7 & 0x3000) != 0 )
  {
    v11 = (v7 >> 12) & 1;
    v28 = (v7 >> 12) & 1;
    v27 = MiPageSizes[v11];
    v12 = v9 - 0x220000000000LL;
    v13 = v5 >> MiLargePageShifts[v11];
    if ( !v13 )
      goto LABEL_17;
    v14 = v12;
    v15 = 48 * MiPageSizes[(v7 >> 12) & 1];
    do
    {
      v16 = MiPageToNode(v2);
      v17 = MiDetermineNewPfnHeatState(v31, v11, *(_QWORD *)(v4 + 16) + 57216LL * v16);
      v18 = (unsigned __int8)MiLockPageInline(v12);
      MiSetFreeZeroPfnCold(v12, v17);
      if ( (*(_QWORD *)(v12 + 40) & 0x20000000000LL) != 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiInsertPossiblyBadPage(v2);
        if ( (unsigned __int8)v18 < 2u )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v18);
          __writecr8(v18);
        }
      }
      else
      {
        MiInsertPageInFreeOrZeroedList(v2, v10);
        MiUnlockPage(v12, v18);
      }
      v2 += v27;
      v14 += v15;
      v4 = v26;
      v12 = v14;
      LODWORD(v11) = v28;
      --v13;
    }
    while ( v13 );
    v6 = a1;
  }
  else
  {
    v19 = v9 - 0x220000000000LL;
    if ( v2 >= v8 )
      goto LABEL_17;
    do
    {
      v20 = MiPageToNode(v2);
      v21 = MiDetermineNewPfnHeatState(v31, 3u, *(_QWORD *)(v4 + 16) + 57216LL * v20);
      v22 = v10;
      v10 |= 0x400u;
      v23 = v22 & 0xFFFFFBFF;
      if ( !v21 )
        v10 = v23;
      v24 = MiLockPageInline(v19);
      MiInsertPageInFreeOrZeroedList(v2, v10);
      MiUnlockPage(v19, v24);
      v4 = v26;
      ++v2;
      v19 += 48LL;
    }
    while ( v2 < v8 );
  }
  v3 = a2;
LABEL_17:
  if ( (*(_DWORD *)(v6 + 40) & 0x80000) == 0 && (v32 & 8) != 0 )
    MiIncreaseCommitLimits(
      (unsigned int)&MiSystemPartition,
      *(_QWORD *)(v6 + 32),
      *(_QWORD *)(v6 + 32),
      *(_QWORD *)(v6 + 32),
      1,
      0LL);
  MiIncreaseCommitLimits(v4, *(_QWORD *)(v6 + 32), *(_QWORD *)(v6 + 32), v3, 1, 0LL);
  return MiReturnResident(v4, *(_QWORD *)(v6 + 32) - v3);
}
