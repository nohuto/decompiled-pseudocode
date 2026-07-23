/*
 * XREFs of MiEnableNewPfns @ 0x14066DC8C
 * Callers:
 *     MiCompleteMemoryAddition @ 0x1407E95EC (MiCompleteMemoryAddition.c)
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiReturnResident @ 0x140338A10 (MiReturnResident.c)
 *     MiSetFreeZeroPfnCold @ 0x140423EE0 (MiSetFreeZeroPfnCold.c)
 *     MiDetermineNewPfnHeatState @ 0x140446D1C (MiDetermineNewPfnHeatState.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiInsertPossiblyBadPage @ 0x14068461C (MiInsertPossiblyBadPage.c)
 *     MiIncreaseCommitLimits @ 0x14068733C (MiIncreaseCommitLimits.c)
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
  unsigned int v10; // r14d
  __int64 v11; // r12
  __int64 v12; // rbp
  unsigned __int64 v13; // r15
  __int64 v14; // r13
  __int64 v15; // rsi
  unsigned int v16; // eax
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // r12
  __int64 v22; // rbp
  unsigned int v23; // eax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned __int8 v30; // bl
  __int64 v32; // [rsp+30h] [rbp-68h]
  __int64 v33; // [rsp+40h] [rbp-58h]
  int v34; // [rsp+48h] [rbp-50h]
  BOOL v37; // [rsp+B0h] [rbp+18h]
  char v38; // [rsp+B8h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 48);
  v5 = *(_QWORD *)(a1 + 32);
  v6 = a1;
  v7 = *(_DWORD *)(a1 + 40);
  v32 = v4;
  v38 = v7;
  v8 = v5 + v2;
  v37 = (v7 & 0x200) == 0;
  v9 = 48 * v2;
  v10 = 2 - ((v7 & 0x200) != 0);
  if ( (v7 & 0x3000) != 0 )
  {
    v11 = (v7 >> 12) & 1;
    v34 = (v7 >> 12) & 1;
    v33 = MiPageSizes[v11];
    v12 = v9 - 0x220000000000LL;
    v13 = v5 >> MiLargePageShifts[v11];
    if ( !v13 )
      goto LABEL_17;
    v14 = v12;
    v15 = 48 * MiPageSizes[(v7 >> 12) & 1];
    do
    {
      v16 = MiPageToNode(v2);
      v17 = MiDetermineNewPfnHeatState(v37, v11, *(_QWORD *)(v4 + 16) + 57216LL * v16);
      v21 = (unsigned __int8)MiLockPageInline(v12, v18, v19, v20);
      MiSetFreeZeroPfnCold(v12, v17);
      if ( (*(_QWORD *)(v12 + 40) & 0x20000000000LL) != 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiInsertPossiblyBadPage(v2);
        if ( (unsigned __int8)v21 < 2u )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v21);
          __writecr8(v21);
        }
      }
      else
      {
        MiInsertPageInFreeOrZeroedList(v2, v10);
        MiUnlockPage(v12, v21);
      }
      v2 += v33;
      v14 += v15;
      v4 = v32;
      v12 = v14;
      LODWORD(v11) = v34;
      --v13;
    }
    while ( v13 );
    v6 = a1;
  }
  else
  {
    v22 = v9 - 0x220000000000LL;
    if ( v2 >= v8 )
      goto LABEL_17;
    do
    {
      v23 = MiPageToNode(v2);
      v24 = MiDetermineNewPfnHeatState(v37, 3u, *(_QWORD *)(v4 + 16) + 57216LL * v23);
      v28 = v10;
      v10 |= 0x400u;
      v29 = v28 & 0xFFFFFBFF;
      if ( !v24 )
        v10 = v29;
      v30 = MiLockPageInline(v22, v25, v26, v27);
      MiInsertPageInFreeOrZeroedList(v2, v10);
      MiUnlockPage(v22, v30);
      v4 = v32;
      ++v2;
      v22 += 48LL;
    }
    while ( v2 < v8 );
  }
  v3 = a2;
LABEL_17:
  if ( (*(_DWORD *)(v6 + 40) & 0x80000) == 0 && (v38 & 8) != 0 )
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
