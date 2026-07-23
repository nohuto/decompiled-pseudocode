/*
 * XREFs of MiInsertHugeRangeInList @ 0x1404EE760
 * Callers:
 *     MiHugeRangeFreeToZero @ 0x1404EE690 (MiHugeRangeFreeToZero.c)
 *     MiAddPartitionHugeRange @ 0x140670948 (MiAddPartitionHugeRange.c)
 *     MiDereferenceIoHugeRange @ 0x140670D38 (MiDereferenceIoHugeRange.c)
 *     MiHugePurgeZeroList @ 0x140671A64 (MiHugePurgeZeroList.c)
 *     MiMarkHugePfnBad @ 0x1406720BC (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x140672544 (MiMarkHugePfnGood.c)
 *     MiMoveBadHugeRangeCrossPartition @ 0x140672764 (MiMoveBadHugeRangeCrossPartition.c)
 *     MiReleaseMemoryRuns @ 0x140672884 (MiReleaseMemoryRuns.c)
 *     MiInsertHugeRangeInPartition @ 0x14068B788 (MiInsertHugeRangeInPartition.c)
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiPageToChannel @ 0x140258D54 (MiPageToChannel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiWakePageZeroing @ 0x140412D50 (MiWakePageZeroing.c)
 *     MiGetColorHeadHugeRangeBase @ 0x1404ACA2C (MiGetColorHeadHugeRangeBase.c)
 *     MiHugePfnPartition @ 0x1404D2634 (MiHugePfnPartition.c)
 *     MiMarkHugeRangeTransition @ 0x1404EECA8 (MiMarkHugeRangeTransition.c)
 *     MiLockColorHeadHugeAtDpc @ 0x1404F84F4 (MiLockColorHeadHugeAtDpc.c)
 *     MiUpdateHugePageCounts @ 0x140672EC4 (MiUpdateHugePageCounts.c)
 *     MiUpdateHugeRangeZeroFreeBitmap @ 0x140672F30 (MiUpdateHugeRangeZeroFreeBitmap.c)
 */

void __fastcall MiInsertHugeRangeInList(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rdx
  __int64 v6; // rdi
  __int64 v7; // r13
  ULONG_PTR v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rdx
  int v11; // r15d
  unsigned int v12; // r14d
  unsigned int v13; // ebx
  __int64 ColorHeadHugeRangeBase; // rax
  volatile signed __int64 *v15; // r15
  __int16 v16; // di
  volatile signed __int64 v17; // rcx
  __int64 v18; // r10
  unsigned __int64 v19; // r11
  __int64 v20; // [rsp+20h] [rbp-58h]
  unsigned __int64 *v22; // [rsp+88h] [rbp+10h]
  unsigned __int8 v23; // [rsp+90h] [rbp+18h]
  __int64 v24; // [rsp+98h] [rbp+20h]

  v4 = a2 & 0x3FFFFF;
  v20 = v4;
  v6 = *(_QWORD *)(qword_140E30100 + 8 * v4);
  v22 = (unsigned __int64 *)(qword_140E30100 + 8 * v4);
  if ( a1 )
    v7 = a1;
  else
    v7 = MiHugePfnPartition((_QWORD *)(qword_140E30100 + 8 * v4));
  v8 = v4 << 18;
  v9 = (unsigned int)MiPageToNode(v4 << 18);
  v23 = MiPageToChannel(v8);
  v10 = (unsigned int)(v8 >> 18) % dword_140E2DD00[0];
  v11 = (unsigned __int8)v10 | ((v23 & 1 | (2 * (v9 & 0x3F | 0x200))) << 8);
  v24 = *(_QWORD *)(v7 + 16) + 57216 * v9;
  if ( (a3 & 0x10) != 0 || !(unsigned int)MiMarkHugeRangeTransition(v8) )
  {
    if ( (v6 & 8) != 0 )
      a3 = a3 & 0xF8 | 4;
    if ( (a3 & 1) != 0 )
    {
      v12 = 0;
    }
    else
    {
      v12 = 5;
      if ( (a3 & 4) == 0 )
        v12 = 1;
    }
    v13 = v11 | ((v12 & 1) << 20);
    ColorHeadHugeRangeBase = MiGetColorHeadHugeRangeBase(v24, v10, v12);
    v15 = (volatile signed __int64 *)ColorHeadHugeRangeBase;
    if ( (a3 & 4) != 0 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E30010);
    }
    else
    {
      v15 = (volatile signed __int64 *)(ColorHeadHugeRangeBase + 8LL * (unsigned __int8)v13);
      MiLockColorHeadHugeAtDpc(v15);
    }
    if ( a1 )
    {
      LOWORD(v6) = (16 * *(_WORD *)v7) ^ ((16 * *(_WORD *)v7) ^ v6) & 0x800F;
      MiUpdateHugePageCounts(v7, a2, 1LL, 1LL);
    }
    if ( v12 )
    {
      if ( v12 == 1 )
        v16 = v6 & 0xFFF8 | 2;
      else
        v16 = v6 & 0xFFF8 | 4;
    }
    else
    {
      v16 = v6 & 0xFFF8 | 1;
    }
    v17 = *v15;
    v18 = ((unsigned __int64)*v15 >> 15) & 0x3FFFFF;
    if ( (((unsigned __int64)*v15 >> 15) & 0x3FFFFF) != 0 )
    {
      *v22 = v16 & 0x7FFF | (unsigned __int64)(v18 << 15);
      v19 = (a2 << 15) ^ (v17 ^ (a2 << 15)) & 0xFFFFFFE000007FFFuLL;
      *(_QWORD *)(qword_140E30100 + 8 * v18) = (a2 << 37) ^ (*(_QWORD *)(qword_140E30100 + 8 * v18) ^ (a2 << 37)) & 0xF800001FFFFFFFFFuLL;
    }
    else
    {
      *v22 = v16 & 0x7FFF;
      v19 = v17 & 0xF800000000007FFFuLL | ((v20 | (v20 << 22)) << 15);
      if ( (v16 & 7) != 4 )
        MiUpdateHugeRangeZeroFreeBitmap(v24, v22, v13, (unsigned int)(v18 + 1));
    }
    *v15 = v19;
    if ( v12 != 5 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v24 + 8 * (v23 + 2LL * v12) + 15000));
      _InterlockedIncrement64((volatile signed __int64 *)(v7 + 16664));
      if ( v12 == 1 )
        MiWakePageZeroing(v7, v24, 3);
    }
    if ( (a3 & 4) != 0 )
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E30010);
    else
      _InterlockedAnd64(v15, 0xFFFFFFFFFFFFFFF7uLL);
  }
}
