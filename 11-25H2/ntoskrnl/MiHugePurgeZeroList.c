/*
 * XREFs of MiHugePurgeZeroList @ 0x140664DEC
 * Callers:
 *     MiMirrorPurgePartitionPages @ 0x1404B4CD0 (MiMirrorPurgePartitionPages.c)
 * Callees:
 *     MiLockHugePfnInternal @ 0x14020DE6C (MiLockHugePfnInternal.c)
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     MiUpdatePageMoveInProgressInternal @ 0x140442050 (MiUpdatePageMoveInProgressInternal.c)
 *     MiGetColorHeadHugeRangeBase @ 0x1404B3154 (MiGetColorHeadHugeRangeBase.c)
 *     MiInsertHugeRangeInList @ 0x1404ED4E4 (MiInsertHugeRangeInList.c)
 *     MiUnlinkHugeRange @ 0x1404ED7BC (MiUnlinkHugeRange.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiLockColorHeadHugeAtDpc @ 0x1404F8774 (MiLockColorHeadHugeAtDpc.c)
 */

__int64 __fastcall MiHugePurgeZeroList(unsigned __int16 *a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // r11d
  unsigned __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned int v7; // edi
  __int64 v8; // rbp
  unsigned int v9; // r10d
  volatile signed __int32 *ColorHeadHugeRangeBase; // r15
  __int64 v11; // r12
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  _QWORD *v14; // r14
  __int64 v15; // r14
  LOGICAL ShouldYieldProcessor; // eax
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // [rsp+20h] [rbp-58h]
  __int16 v20; // [rsp+80h] [rbp+8h]
  int v21; // [rsp+88h] [rbp+10h]
  unsigned int v22; // [rsp+90h] [rbp+18h]

  result = *a1;
  v3 = 0;
  v5 = 0LL;
  v20 = *a1;
  CurrentIrql = 17;
  v7 = 0;
  v22 = 0;
  if ( !KeNumberNodes )
    return result;
  do
  {
    v21 = v3;
    v8 = *((_QWORD *)a1 + 2) + 57216LL * v7;
    ColorHeadHugeRangeBase = (volatile signed __int32 *)MiGetColorHeadHugeRangeBase(v8, a2, 0);
    if ( !v9 )
      goto LABEL_23;
    v11 = v9;
    v19 = v9;
    do
    {
      v12 = *(_QWORD *)ColorHeadHugeRangeBase >> 15;
      v5 = v12 ^ (v12 ^ v5) & 0xFFFFFFFFFFC00000uLL;
      if ( (v12 & 0x3FFFFF) == 0 )
        goto LABEL_21;
      do
      {
        v13 = v5 & 0x3FFFFF;
        if ( !_bittest64((const signed __int64 *)stru_140E2FD70.Buffer, v13) )
          goto LABEL_19;
        v14 = (_QWORD *)(qword_140E2FD80 + 8 * v13);
        if ( CurrentIrql == 17 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags != v3 )
          {
            LOBYTE(a2) = 2;
            KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
          }
          MiUpdatePageMoveInProgressInternal(v8, 0, 1, 1);
        }
        MiLockHugePfnInternal((__int64)v14);
        if ( ((*v14 >> 4) & 0x7FFLL) != v20 || (*v14 & 7) != 1 )
        {
          v17 = (((__int64)v14 - qword_140E2FD80) >> 3) & 0x3FFFFF;
          a2 = (unsigned int)~(1 << (v17 & 0x1F));
          _InterlockedAnd(
            (volatile signed __int32 *)(qword_140E2FD88 + 4 * ((unsigned __int64)(unsigned int)v17 >> 5)),
            a2);
LABEL_18:
          v3 = 0;
          goto LABEL_19;
        }
        MiLockColorHeadHugeAtDpc(ColorHeadHugeRangeBase);
        MiUnlinkHugeRange((__int64)a1, v5);
        _InterlockedAnd64((volatile signed __int64 *)ColorHeadHugeRangeBase, 0xFFFFFFFFFFFFFFF7uLL);
        MiInsertHugeRangeInList(0LL, v5, 0);
        v15 = (((__int64)v14 - qword_140E2FD80) >> 3) & 0x3FFFFF;
        a2 = (unsigned int)~(1 << (v15 & 0x1F));
        _InterlockedAnd(
          (volatile signed __int32 *)(qword_140E2FD88 + 4 * ((unsigned __int64)(unsigned int)v15 >> 5)),
          a2);
        if ( (++v21 & 0x3F) != 0 )
          goto LABEL_18;
        ShouldYieldProcessor = KeShouldYieldProcessor();
        v3 = 0;
        if ( ShouldYieldProcessor )
        {
          MiUpdatePageMoveInProgressInternal(v8, 0, 0, 1);
          if ( KiIrqlFlags != v3 )
          {
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
            v3 = 0;
          }
          __writecr8(CurrentIrql);
          CurrentIrql = 17;
        }
LABEL_19:
        v18 = *(_QWORD *)ColorHeadHugeRangeBase >> 15;
        v5 = v18 ^ (v18 ^ v5) & 0xFFFFFFFFFFC00000uLL;
      }
      while ( (v18 & 0x3FFFFF) != 0 );
      v11 = v19;
LABEL_21:
      ColorHeadHugeRangeBase += 2;
      v19 = --v11;
    }
    while ( v11 );
    v7 = v22;
LABEL_23:
    if ( CurrentIrql != 17 )
    {
      MiUpdatePageMoveInProgressInternal(v8, 0, 0, 1);
      if ( KiIrqlFlags != v3 )
      {
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        v3 = 0;
      }
      __writecr8(CurrentIrql);
      CurrentIrql = 17;
    }
    result = (unsigned __int16)KeNumberNodes;
    v22 = ++v7;
  }
  while ( v7 < (unsigned __int16)KeNumberNodes );
  return result;
}
