/*
 * XREFs of RtlpHpLfhSubsegmentDecommitPages @ 0x1402B61E0
 * Callers:
 *     RtlpHpLfhOwnerCompact @ 0x1402B461C (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSubsegmentDelayFreeListProcess @ 0x1402B5E60 (RtlpHpLfhSubsegmentDelayFreeListProcess.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14020D790 (RtlpHpAcquireLockExclusive.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     RtlpHpEnvCompactionSchedule @ 0x1402B389C (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpReleaseLockExclusive @ 0x1402B9650 (RtlpHpReleaseLockExclusive.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x1404037D0 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

unsigned __int64 __fastcall RtlpHpLfhSubsegmentDecommitPages(unsigned __int8 *a1, __int64 a2, int a3, unsigned int a4)
{
  unsigned __int64 result; // rax
  unsigned int v5; // r10d
  __int64 v6; // rbp
  int v9; // r15d
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rbx
  unsigned int v16; // ecx
  __int64 v17; // r8
  unsigned __int64 v18; // rdx
  _WORD *i; // rax
  _WORD *j; // rsi
  __int64 v21; // rsi
  char v22; // cl
  unsigned int v23; // edi
  unsigned int v24; // ebx
  unsigned int v25; // [rsp+90h] [rbp+18h]

  result = 0LL;
  v5 = a4;
  LODWORD(v6) = a3;
  v9 = 0;
  if ( a3 >= 0 )
  {
    v11 = *(_QWORD *)a1;
    v10 = 0LL;
    v25 = 0;
    if ( (*(_BYTE *)(*(_QWORD *)a1 + 13LL) & 8) == 0 )
    {
      v12 = *(__int16 *)(v11 + 22);
      v13 = *(_QWORD *)(v12 + v11 + 16) + *(_QWORD *)(v12 + v11 + 24);
      v14 = *(_QWORD *)(v12 + v11 + 8);
      result = v14 >> *(_BYTE *)(v11 + 11);
      if ( result <= 8 )
        result = 8LL;
      v15 = v14 >> *(_BYTE *)(v11 + 12);
      if ( v15 <= 8 )
        v15 = 8LL;
      if ( v13 <= result )
        return result;
      result = RtlpHpEnvCompactionSchedule(*(_QWORD **)(v11 + 56));
      if ( (result & 0x80000000) == 0LL && v13 <= v15 )
        return result;
      v5 = a4;
      v10 = 0LL;
    }
  }
  else
  {
    LODWORD(v6) = 1;
    v10 = 1LL;
    v25 = 1;
  }
  v16 = *(unsigned __int8 *)(a2 + 39);
  if ( (unsigned int)v6 >= v16 )
    return result;
  do
  {
    v17 = a2 + 8LL * *(unsigned __int8 *)(a2 + 24);
    v18 = v17 + 2LL * (unsigned __int8)v16;
    result = v17 + 2LL * (unsigned int)v6;
    if ( *(_WORD *)result )
    {
      if ( result >= v18 )
        break;
      while ( *(_WORD *)result )
      {
        result += 2LL;
        if ( result >= v18 )
          goto LABEL_35;
      }
      v6 = (__int64)(result - v17) >> 1;
    }
    else
    {
      for ( i = (_WORD *)(result - 2); !*i; --i )
        ;
      result = (unsigned __int64)(i + 1);
    }
    for ( j = (_WORD *)(v17 + 2 * ((unsigned int)v6 + 1LL)); (unsigned __int64)j < v18; ++j )
    {
      if ( *j )
        break;
    }
    v6 = (__int64)(result - v17) >> 1;
    v21 = (__int64)((__int64)j - result) >> 1;
    if ( (_DWORD)v6 == -1 )
      break;
    if ( (unsigned int)v21 < v5 )
    {
      if ( !(_DWORD)v10 )
        break;
      goto LABEL_33;
    }
    if ( v9 )
    {
      v22 = *(_BYTE *)(a2 + 38);
      v23 = (_DWORD)v6 << 12 << v22;
      v24 = (_DWORD)v21 << 12 << v22;
      guard_dispatch_icall_no_overrides(*(_QWORD *)a1, a2 + v23, v24, v10);
      RtlpHpLfhSubsegmentDecBlockCounts(a1, a2, v23, v24);
      v10 = v25;
      if ( !v25 )
        return RtlpHpReleaseLockExclusive(a2 + 56);
      v5 = a4;
LABEL_33:
      LODWORD(v6) = v21 + v6;
      goto LABEL_34;
    }
    v9 = 2;
    RtlpHpAcquireLockExclusive((int *)(a2 + 56), a1[65], v17);
    v10 = v25;
    v5 = a4;
LABEL_34:
    result = *(unsigned __int8 *)(a2 + 39);
    LOBYTE(v16) = *(_BYTE *)(a2 + 39);
  }
  while ( (unsigned int)v6 < (unsigned int)result );
LABEL_35:
  if ( !v9 )
    return result;
  return RtlpHpReleaseLockExclusive(a2 + 56);
}
