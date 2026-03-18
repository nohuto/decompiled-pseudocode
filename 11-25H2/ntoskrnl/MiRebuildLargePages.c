/*
 * XREFs of MiRebuildLargePages @ 0x1403BBD60
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     PsDereferencePartition @ 0x140302710 (PsDereferencePartition.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRebuildLargePage @ 0x1403BC60C (MiRebuildLargePage.c)
 *     MiNodeFreeZeroPages @ 0x1403BCBB0 (MiNodeFreeZeroPages.c)
 *     MiGetNodeStandbyPageCount @ 0x1403BCCEC (MiGetNodeStandbyPageCount.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall MiRebuildLargePages(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // r13
  unsigned __int64 v2; // r15
  ULONG_PTR v3; // rbx
  char v4; // bp
  unsigned __int64 v5; // rdi
  unsigned __int8 CurrentIrql; // si
  char v7; // r8
  unsigned __int64 v8; // r14
  volatile LONG *v9; // r14
  __int64 v10; // rdx
  __int64 *v11; // r9
  __int64 v12; // r10
  __int64 *v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int8 v17; // r12
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r14
  unsigned __int8 v20; // r13
  unsigned __int64 v21; // rsi
  __int64 v22; // rax
  unsigned __int64 v23; // r11
  __int64 NodeStandbyPageCount; // rax
  __int64 v25; // r11
  unsigned __int64 v26; // rdx
  __int64 *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdi
  unsigned __int8 v31; // al
  unsigned __int8 v32; // [rsp+30h] [rbp-58h]
  unsigned __int64 v33; // [rsp+38h] [rbp-50h]
  char v34; // [rsp+90h] [rbp+8h]
  unsigned __int64 v35; // [rsp+98h] [rbp+10h]
  __int64 v36; // [rsp+A0h] [rbp+18h]
  unsigned __int8 v37; // [rsp+A8h] [rbp+20h]

  v1 = *(_QWORD *)(BugCheckParameter2 + 14984);
  v2 = 0LL;
  v37 = 0;
  v36 = v1;
  v3 = BugCheckParameter2;
  v4 = 8;
  v5 = 0xF51E5A7CD9A0EE3FuLL * ((__int64)(BugCheckParameter2 - *(_QWORD *)(v1 + 16)) >> 7);
  CurrentIrql = KeGetCurrentIrql();
  v32 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags != v37 )
  {
    LOBYTE(BugCheckParameter2) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(BugCheckParameter2);
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v3 + 15228));
  v7 = *(_BYTE *)(v3 + 5187);
  *(_BYTE *)(v3 + 5185) = 2;
  v33 = *(_QWORD *)(v3 + 14976);
  v34 = v7;
  v8 = v33 / 0xC8;
  if ( v33 / 0xC8 < (-(__int64)(v7 != 0) & 0xFFFFFFFFFFFFE100uLL) + 0x2000 )
    goto LABEL_4;
  v11 = MiPageSizes;
  v12 = 3LL;
  v13 = (__int64 *)(v3 + 16);
  do
  {
    v14 = *(v13 - 1);
    v15 = *v13;
    v13 += 160;
    v16 = (v15 + v14) * *v11++;
    v2 += v16;
    --v12;
  }
  while ( v12 );
  if ( v2 >= v8 )
    goto LABEL_26;
  v17 = MmNumberOfChannels;
  v18 = 0LL;
  v19 = v8 - v2;
  v35 = 0LL;
  v20 = 0;
  if ( MmNumberOfChannels )
  {
    v21 = 0LL;
    do
    {
      LOBYTE(v16) = v20;
      v22 = MiNodeFreeZeroPages(v3, v16, 0LL);
      v17 = MmNumberOfChannels;
      v21 += v22;
      ++v20;
    }
    while ( v20 < (unsigned __int8)MmNumberOfChannels );
    v35 = v21;
    v18 = v21;
    CurrentIrql = v32;
  }
  if ( v18 < v19 )
  {
    v1 = v36;
    if ( v2 >= 0x400 )
      goto LABEL_26;
    v23 = 0LL;
    LOBYTE(v13) = 0;
    if ( v17 )
    {
      do
      {
        NodeStandbyPageCount = MiGetNodeStandbyPageCount(v36, (unsigned int)v5, v13, v11);
        v23 = NodeStandbyPageCount + v25;
        LOBYTE(v13) = (_BYTE)v13 + 1;
      }
      while ( (unsigned __int8)v13 < v17 );
      v18 = v35;
    }
    v26 = v33 < 0x5000A ? 0x8000LL : v33 / 0xA;
    if ( v23 <= v26 || (v35 = (v23 - v26) / 0xC8 + v18, v35 < v19) )
    {
LABEL_26:
      v2 = 0LL;
LABEL_4:
      v9 = (volatile LONG *)(v3 + 15228);
      goto LABEL_5;
    }
  }
  *(_BYTE *)(v3 + 5187) = 0;
  v27 = KeAbPreAcquire(v3, 0LL);
  v2 = (unsigned __int64)v27;
  if ( v27 )
    *((_BYTE *)v27 + 10) = 1;
  v9 = (volatile LONG *)(v3 + 15228);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 15228));
  if ( KiIrqlFlags )
  {
    LOBYTE(v28) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v28);
  }
  __writecr8(CurrentIrql);
  v1 = v36;
  v30 = MiRebuildLargePage(v36, v5, 2, v35, 0);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v29) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v29);
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v3 + 15228));
  if ( !v30 )
  {
    if ( v34 )
      *(_BYTE *)(v3 + 5187) = 1;
    v31 = *(_BYTE *)(v3 + 5186);
    if ( v31 >= 0x80u )
      v4 = -1;
    else
      v4 = 2 * v31;
  }
LABEL_5:
  *(_BYTE *)(v3 + 5186) = v4;
  *(_BYTE *)(v3 + 5184) = v4;
  *(_BYTE *)(v3 + 5185) = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(v9);
  if ( KiIrqlFlags )
  {
    LOBYTE(v10) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
  }
  __writecr8(CurrentIrql);
  if ( v2 )
    KeAbPostRelease(v3);
  PsDereferencePartition(*(_QWORD *)(v1 + 184));
}
