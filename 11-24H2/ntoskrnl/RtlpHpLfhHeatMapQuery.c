/*
 * XREFs of RtlpHpLfhHeatMapQuery @ 0x1404321F4
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x14035EE00 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhContextCompact @ 0x140432100 (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x1404977E0 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     RtlpHpLfhContextSlotAllocate @ 0x1404B4424 (RtlpHpLfhContextSlotAllocate.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x14060428C (RtlpHpLfhPrivateSlotListCompact.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x140604374 (RtlpHpLfhPrivateSlotShutdown.c)
 * Callees:
 *     RtlpHpLfhHeatMapDecayCounts @ 0x140454F4C (RtlpHpLfhHeatMapDecayCounts.c)
 */

__int64 __fastcall RtlpHpLfhHeatMapQuery(__int64 a1, __int64 a2, unsigned __int8 *a3, int a4)
{
  __int64 v5; // rbx
  __int64 v6; // r11
  signed __int32 v8; // eax
  __int64 v9; // rcx
  int v10; // edx
  signed __int32 v11; // ett
  unsigned int v12; // edx
  unsigned int v13; // ecx
  unsigned int v14; // r8d
  struct _KTHREAD *CurrentThread; // r9
  struct _LIST_ENTRY *Blink; // rcx
  unsigned __int64 v18; // rdx
  char *v19; // r8
  unsigned __int64 v20; // rdx

  v5 = *a3 >> 1;
  v6 = a2;
  if ( (unsigned int)v5 >= 0x7E )
  {
    v12 = 0;
  }
  else
  {
    v8 = *(_DWORD *)(a2 + 252);
    while ( 1 )
    {
      v9 = MEMORY[0xFFFFF78000000008] >> 20;
      v10 = (MEMORY[0xFFFFF78000000008] >> 20) - v8;
      if ( !v10 )
        break;
      v11 = v8;
      v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 252), v9, v8);
      if ( v11 == v8 )
      {
        RtlpHpLfhHeatMapDecayCounts(v9, v10, v6, a4, v10);
        break;
      }
    }
    v12 = *(unsigned __int16 *)(v6 + 2 * v5);
  }
  v13 = ((unsigned int)RtlpHpLfhPerfFlags >> 8) & 3;
  if ( v13 )
  {
    v14 = 2;
    if ( v13 != 2 )
    {
      v14 = 1;
      if ( v13 != 1 )
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
    v14 = 1;
    if ( (RtlpHpLfhPerfFlags & 1) != 0 && v12 >= *((unsigned __int16 *)a3 + 38) )
    {
      if ( v12 >= *((unsigned __int16 *)a3 + 39) )
        return (unsigned int)((*(_BYTE *)(a1 + 72) & 1) != 0) + 1;
    }
    else
    {
      return 0;
    }
  }
  return v14;
}
