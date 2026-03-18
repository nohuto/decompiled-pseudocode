/*
 * XREFs of RtlpHpLfhSubsegmentDecommitPages @ 0x1403C73E0
 * Callers:
 *     RtlpHpLfhOwnerListCompact @ 0x1403C7004 (RtlpHpLfhOwnerListCompact.c)
 *     RtlpHpLfhSubsegmentDelayFreeListProcess @ 0x1403C7060 (RtlpHpLfhSubsegmentDelayFreeListProcess.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x140212CB0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpReleaseLockExclusive @ 0x14031FBD0 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpReleaseLockShared @ 0x14035E3FC (RtlpHpReleaseLockShared.c)
 *     RtlpHpEnvCompactionSchedule @ 0x1403BBC64 (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpLfhSubsegmentFindEmptyUnits @ 0x1403CB930 (RtlpHpLfhSubsegmentFindEmptyUnits.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x1404202E0 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall RtlpHpLfhSubsegmentDecommitPages(unsigned __int8 *a1, __int64 a2, int a3, unsigned int a4)
{
  int v4; // r14d
  unsigned int v5; // ebx
  unsigned int EmptyUnits; // esi
  char v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rbx
  int v16; // r11d
  int v17; // r15d
  char v18; // cl
  unsigned int v19; // edi
  unsigned int v20; // ebx
  _DWORD v21[18]; // [rsp+30h] [rbp-48h] BYREF
  int v22; // [rsp+90h] [rbp+18h]

  v21[0] = 0;
  v4 = 0;
  v5 = a4;
  EmptyUnits = a3;
  v9 = -1;
  if ( a3 >= 0 )
  {
    v10 = *(_QWORD *)a1;
    v22 = 0;
    if ( (*(_BYTE *)(*(_QWORD *)a1 + 13LL) & 8) == 0 )
    {
      v11 = *(__int16 *)(v10 + 22);
      v12 = *(_QWORD *)(v11 + v10 + 16) + *(_QWORD *)(v11 + v10 + 24);
      v13 = *(_QWORD *)(v11 + v10 + 8);
      v14 = v13 >> *(_BYTE *)(v10 + 11);
      if ( v14 <= 8 )
        v14 = 8LL;
      v15 = v13 >> *(_BYTE *)(v10 + 12);
      if ( v15 <= 8 )
        v15 = 8LL;
      if ( v12 <= v14 || (int)RtlpHpEnvCompactionSchedule(*(_QWORD **)(v10 + 56)) >= 0 && v12 <= v15 )
        return;
      v5 = a4;
    }
  }
  else
  {
    EmptyUnits = 1;
    v22 = 1;
  }
  if ( EmptyUnits >= *(unsigned __int8 *)(a2 + 39) )
    return;
  do
  {
    EmptyUnits = RtlpHpLfhSubsegmentFindEmptyUnits(a2, EmptyUnits, v21);
    if ( EmptyUnits == -1 )
      break;
    v17 = v21[0];
    if ( v21[0] < v5 )
    {
      if ( !v16 )
        break;
      goto LABEL_21;
    }
    if ( v4 )
    {
      v18 = *(_BYTE *)(a2 + 38);
      v19 = EmptyUnits << 12 << v18;
      v20 = v21[0] << 12 << v18;
      guard_dispatch_icall_no_overrides(*(_QWORD *)a1, a2 + v19);
      RtlpHpLfhSubsegmentDecBlockCounts(a1, a2, v19, v20);
      if ( !v22 )
        goto LABEL_24;
      v5 = a4;
LABEL_21:
      EmptyUnits += v17;
      continue;
    }
    v4 = 2;
    v9 = RtlpHpAcquireLockExclusive((int *)(a2 + 56), a1[65]);
  }
  while ( EmptyUnits < *(unsigned __int8 *)(a2 + 39) );
  if ( !v4 )
    return;
LABEL_24:
  RtlpHpReleaseLockExclusive(a2 + 56, a1[65], v9);
}
