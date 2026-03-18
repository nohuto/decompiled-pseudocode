/*
 * XREFs of RtlpHpLfhHeatMapQuery @ 0x1403C8930
 * Callers:
 *     RtlpHpLfhContextCompact @ 0x1403C8290 (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1403C89FC (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x1404A0110 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     RtlpHpLfhContextSlotAllocate @ 0x1404BA624 (RtlpHpLfhContextSlotAllocate.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x1405FA90C (RtlpHpLfhPrivateSlotListCompact.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x1405FAA34 (RtlpHpLfhPrivateSlotShutdown.c)
 * Callees:
 *     RtlpHpLfhHeatMapDecayCounts @ 0x1404648C0 (RtlpHpLfhHeatMapDecayCounts.c)
 */

__int64 __fastcall RtlpHpLfhHeatMapQuery(__int64 a1, __int64 a2, unsigned __int8 *a3, int a4)
{
  __int64 v5; // rbx
  __int64 v6; // r11
  unsigned int v8; // edx
  unsigned int v9; // ecx
  unsigned int v10; // r8d
  signed __int32 v12; // eax
  __int64 v13; // rcx
  int v14; // edx
  signed __int32 v15; // ett
  struct _KTHREAD *CurrentThread; // r9
  struct _LIST_ENTRY *Blink; // rcx
  unsigned __int64 v18; // rdx
  char *v19; // r8
  unsigned __int64 v20; // rdx

  v5 = *a3 >> 1;
  v6 = a2;
  if ( (unsigned int)v5 < 0x7E )
  {
    v12 = *(_DWORD *)(a2 + 252);
    while ( 1 )
    {
      v13 = MEMORY[0xFFFFF78000000008] >> 20;
      v14 = (MEMORY[0xFFFFF78000000008] >> 20) - v12;
      if ( !v14 )
        break;
      v15 = v12;
      v12 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 252), v13, v12);
      if ( v15 == v12 )
      {
        RtlpHpLfhHeatMapDecayCounts(v13, v14, v6, a4, v14);
        break;
      }
    }
    v8 = *(unsigned __int16 *)(v6 + 2 * v5);
  }
  else
  {
    v8 = 0;
  }
  v9 = ((unsigned int)RtlpHpLfhPerfFlags >> 8) & 3;
  if ( v9 )
  {
    v10 = 2;
    if ( v9 != 2 )
    {
      v10 = 1;
      if ( v9 != 1 )
      {
        CurrentThread = KeGetCurrentThread();
        Blink = CurrentThread[1].SchedulerApc.ApcListEntry.Blink;
        v18 = (unsigned __int64)CurrentThread[1].SchedulerApc.Reserved[0];
        v19 = (char *)Blink + v18;
        v20 = (unsigned __int64)Blink ^ v18;
        CurrentThread[1].SchedulerApc.Reserved[0] = (PVOID)__ROL8__(v20, 37);
        CurrentThread[1].SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)(v20 ^ (v20 << 16) ^ __ROL8__(Blink, 24));
        return BYTE4(v19) % 3u;
      }
    }
  }
  else
  {
    v10 = 1;
    if ( (RtlpHpLfhPerfFlags & 1) != 0 && v8 >= *((unsigned __int16 *)a3 + 38) )
    {
      if ( v8 >= *((unsigned __int16 *)a3 + 39) )
        return (unsigned int)((*(_BYTE *)(a1 + 72) & 1) != 0) + 1;
    }
    else
    {
      return 0;
    }
  }
  return v10;
}
