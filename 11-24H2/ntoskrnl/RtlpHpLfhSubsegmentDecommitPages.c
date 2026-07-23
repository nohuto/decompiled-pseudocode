/*
 * XREFs of RtlpHpLfhSubsegmentDecommitPages @ 0x1403D8DE0
 * Callers:
 *     RtlpHpLfhSubsegmentDelayFreeListProcess @ 0x1403D8A60 (RtlpHpLfhSubsegmentDelayFreeListProcess.c)
 *     RtlpHpLfhOwnerCompact @ 0x1404322C0 (RtlpHpLfhOwnerCompact.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     RtlpHpAcquireLockExclusive @ 0x140336AF0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpEnvCompactionSchedule @ 0x14035ED20 (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpReleaseLockExclusive @ 0x140360D90 (RtlpHpReleaseLockExclusive.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x1403FE590 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall RtlpHpLfhSubsegmentDecommitPages(unsigned __int8 *a1, __int64 a2, int a3, unsigned int a4)
{
  unsigned int v4; // r10d
  __int64 v5; // rbp
  unsigned __int8 v8; // r13
  int v9; // r15d
  int v10; // r9d
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rbx
  unsigned int v17; // ecx
  __int64 v18; // r8
  unsigned __int64 v19; // rdx
  _WORD *v20; // rax
  _WORD *i; // rax
  _WORD *j; // rsi
  __int64 v23; // rsi
  char v24; // al
  char v25; // cl
  unsigned int v26; // edi
  unsigned int v27; // ebx
  int v28; // [rsp+90h] [rbp+18h]

  v4 = a4;
  LODWORD(v5) = a3;
  v8 = -1;
  v9 = 0;
  if ( a3 >= 0 )
  {
    v11 = *(_QWORD *)a1;
    v10 = 0;
    v28 = 0;
    if ( (*(_BYTE *)(*(_QWORD *)a1 + 13LL) & 8) == 0 )
    {
      v12 = *(__int16 *)(v11 + 22);
      v13 = *(_QWORD *)(v12 + v11 + 16) + *(_QWORD *)(v12 + v11 + 24);
      v14 = *(_QWORD *)(v12 + v11 + 8);
      v15 = v14 >> *(_BYTE *)(v11 + 11);
      if ( v15 <= 8 )
        v15 = 8LL;
      v16 = v14 >> *(_BYTE *)(v11 + 12);
      if ( v16 <= 8 )
        v16 = 8LL;
      if ( v13 <= v15 || (int)RtlpHpEnvCompactionSchedule(*(_QWORD **)(v11 + 56)) >= 0 && v13 <= v16 )
        return;
      v4 = a4;
      v10 = 0;
    }
  }
  else
  {
    LODWORD(v5) = 1;
    v10 = 1;
    v28 = 1;
  }
  v17 = *(unsigned __int8 *)(a2 + 39);
  if ( (unsigned int)v5 >= v17 )
    return;
  do
  {
    v18 = a2 + 8LL * *(unsigned __int8 *)(a2 + 24);
    v19 = v18 + 2LL * (unsigned __int8)v17;
    v20 = (_WORD *)(v18 + 2LL * (unsigned int)v5);
    if ( *v20 )
    {
      if ( (unsigned __int64)v20 >= v19 )
        break;
      while ( *v20 )
      {
        if ( (unsigned __int64)++v20 >= v19 )
          goto LABEL_35;
      }
      v5 = ((__int64)v20 - v18) >> 1;
    }
    else
    {
      for ( i = v20 - 1; !*i; --i )
        ;
      v20 = i + 1;
    }
    for ( j = (_WORD *)(v18 + 2 * ((unsigned int)v5 + 1LL)); (unsigned __int64)j < v19; ++j )
    {
      if ( *j )
        break;
    }
    v5 = ((__int64)v20 - v18) >> 1;
    v23 = j - v20;
    if ( (_DWORD)v5 == -1 )
      break;
    if ( (unsigned int)v23 < v4 )
    {
      if ( !v10 )
        break;
      goto LABEL_33;
    }
    if ( v9 )
    {
      v25 = *(_BYTE *)(a2 + 38);
      v26 = (_DWORD)v5 << 12 << v25;
      v27 = (_DWORD)v23 << 12 << v25;
      guard_dispatch_icall_no_overrides(*(_QWORD *)a1, a2 + v26);
      RtlpHpLfhSubsegmentDecBlockCounts(a1, a2, v26, v27);
      v10 = v28;
      if ( !v28 )
        goto LABEL_36;
      v4 = a4;
LABEL_33:
      LODWORD(v5) = v23 + v5;
      goto LABEL_34;
    }
    v9 = 2;
    v24 = RtlpHpAcquireLockExclusive((int *)(a2 + 56), a1[65]);
    v10 = v28;
    v8 = v24;
    v4 = a4;
LABEL_34:
    LOBYTE(v17) = *(_BYTE *)(a2 + 39);
  }
  while ( (unsigned int)v5 < (unsigned __int8)v17 );
LABEL_35:
  if ( !v9 )
    return;
LABEL_36:
  RtlpHpReleaseLockExclusive(a2 + 56, a1[65], v8);
}
