/*
 * XREFs of MiRebuildLargePages @ 0x1403F6DC0
 * Callers:
 *     <none>
 * Callees:
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiNodeFreeZeroPages @ 0x14033FC00 (MiNodeFreeZeroPages.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     MiRebuildLargePage @ 0x1403F7120 (MiRebuildLargePage.c)
 *     MiGetNodeStandbyPageCount @ 0x1403F76CC (MiGetNodeStandbyPageCount.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall MiRebuildLargePages(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 v2; // r13
  unsigned __int64 v3; // r15
  ULONG_PTR v4; // rbx
  char v5; // bp
  unsigned __int64 v6; // rdi
  unsigned __int8 CurrentIrql; // si
  char v8; // r8
  unsigned __int64 v9; // r14
  volatile LONG *v10; // r14
  __int64 v11; // rdx
  __int64 *v12; // r9
  __int64 v13; // r10
  __int64 *v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int8 v18; // r12
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r14
  unsigned __int8 v21; // r13
  unsigned __int64 v22; // rsi
  __int64 v23; // rax
  unsigned __int64 v24; // r11
  __int64 NodeStandbyPageCount; // rax
  __int64 v26; // r11
  unsigned __int64 v27; // rdx
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdi
  unsigned __int8 v33; // al
  unsigned __int8 v34; // [rsp+30h] [rbp-58h]
  unsigned __int64 v35; // [rsp+38h] [rbp-50h]
  char v36; // [rsp+90h] [rbp+8h]
  unsigned __int64 v37; // [rsp+98h] [rbp+10h]
  __int64 v38; // [rsp+A0h] [rbp+18h]
  unsigned __int8 v39; // [rsp+A8h] [rbp+20h]

  v2 = *(_QWORD *)(BugCheckParameter2 + 14984);
  v3 = 0LL;
  v39 = 0;
  v38 = v2;
  v4 = BugCheckParameter2;
  v5 = 8;
  v6 = 0xF51E5A7CD9A0EE3FuLL * ((__int64)(BugCheckParameter2 - *(_QWORD *)(v2 + 16)) >> 7);
  CurrentIrql = KeGetCurrentIrql();
  v34 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags != v39 )
  {
    LOBYTE(a2) = 2;
    LOBYTE(BugCheckParameter2) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(BugCheckParameter2, a2);
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v4 + 15228));
  v8 = *(_BYTE *)(v4 + 5187);
  *(_BYTE *)(v4 + 5185) = 2;
  v35 = *(_QWORD *)(v4 + 14976);
  v36 = v8;
  v9 = v35 / 0xC8;
  if ( v35 / 0xC8 < (-(__int64)(v8 != 0) & 0xFFFFFFFFFFFFE100uLL) + 0x2000 )
    goto LABEL_4;
  v12 = MiPageSizes;
  v13 = 3LL;
  v14 = (__int64 *)(v4 + 16);
  do
  {
    v15 = *(v14 - 1);
    v16 = *v14;
    v14 += 160;
    v17 = (v16 + v15) * *v12++;
    v3 += v17;
    --v13;
  }
  while ( v13 );
  if ( v3 >= v9 )
    goto LABEL_26;
  v18 = MmNumberOfChannels;
  v19 = 0LL;
  v20 = v9 - v3;
  v37 = 0LL;
  v21 = 0;
  if ( MmNumberOfChannels )
  {
    v22 = 0LL;
    do
    {
      v23 = MiNodeFreeZeroPages(v4, v21, 0);
      v18 = MmNumberOfChannels;
      v22 += v23;
      ++v21;
    }
    while ( v21 < (unsigned __int8)MmNumberOfChannels );
    v37 = v22;
    v19 = v22;
    CurrentIrql = v34;
  }
  if ( v19 < v20 )
  {
    v2 = v38;
    if ( v3 >= 0x400 )
      goto LABEL_26;
    v24 = 0LL;
    LOBYTE(v14) = 0;
    if ( v18 )
    {
      do
      {
        NodeStandbyPageCount = MiGetNodeStandbyPageCount(v38, (unsigned int)v6, v14);
        v24 = NodeStandbyPageCount + v26;
        LOBYTE(v14) = (_BYTE)v14 + 1;
      }
      while ( (unsigned __int8)v14 < v18 );
      v19 = v37;
    }
    v27 = v35 < 0x5000A ? 0x8000LL : v35 / 0xA;
    if ( v24 <= v27 || (v37 = (v24 - v27) / 0xC8 + v19, v37 < v20) )
    {
LABEL_26:
      v3 = 0LL;
LABEL_4:
      v10 = (volatile LONG *)(v4 + 15228);
      goto LABEL_5;
    }
  }
  *(_BYTE *)(v4 + 5187) = 0;
  v28 = KeAbPreAcquire(v4, 0LL);
  v3 = (unsigned __int64)v28;
  if ( v28 )
    *((_BYTE *)v28 + 10) = 1;
  v10 = (volatile LONG *)(v4 + 15228);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 15228));
  if ( KiIrqlFlags )
  {
    LOBYTE(v29) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v29);
  }
  __writecr8(CurrentIrql);
  v2 = v38;
  v32 = MiRebuildLargePage(v38, v6, 2, v37, 0);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v30) = 2;
    LOBYTE(v31) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v31, v30);
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v4 + 15228));
  if ( !v32 )
  {
    if ( v36 )
      *(_BYTE *)(v4 + 5187) = 1;
    v33 = *(_BYTE *)(v4 + 5186);
    if ( v33 >= 0x80u )
      v5 = -1;
    else
      v5 = 2 * v33;
  }
LABEL_5:
  *(_BYTE *)(v4 + 5186) = v5;
  *(_BYTE *)(v4 + 5184) = v5;
  *(_BYTE *)(v4 + 5185) = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(v10);
  if ( KiIrqlFlags )
  {
    LOBYTE(v11) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
  }
  __writecr8(CurrentIrql);
  if ( v3 )
    KeAbPostRelease(v4);
  PsDereferencePartition(*(_QWORD *)(v2 + 184));
}
