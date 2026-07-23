/*
 * XREFs of PerfLogExecutiveResourceAcquire @ 0x14046891C
 * Callers:
 *     ExpAcquireSharedStarveExclusive @ 0x140229A50 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1403D6820 (ExAcquireSharedWaitForExclusive.c)
 *     ExpTryToAcquireResourceExclusiveLite @ 0x14065574C (ExpTryToAcquireResourceExclusiveLite.c)
 * Callees:
 *     EtwpGetTrackingLockSlotForThread @ 0x14022CCA8 (EtwpGetTrackingLockSlotForThread.c)
 */

signed __int64 __fastcall PerfLogExecutiveResourceAcquire(int a1, __int64 a2, unsigned int a3, int a4)
{
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned __int64 v8; // rdi
  __int16 Group; // r15
  unsigned __int8 GroupIndex; // r12
  signed __int64 result; // rax
  signed __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // [rsp+50h] [rbp+8h]

  CurrentPrcb = KeGetCurrentPrcb();
  v8 = __rdtsc();
  Group = CurrentPrcb->Group;
  GroupIndex = CurrentPrcb->GroupIndex;
  ++CurrentPrcb->SynchCounters.ExEtwSynchTrackingNotificationsCount;
  LOWORD(v14) = Group;
  HIWORD(v14) = GroupIndex;
  result = EtwpGetTrackingLockSlotForThread(a2, a1 & 0xFFFF0000);
  v12 = result;
  if ( result )
  {
    ++CurrentPrcb->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
    result = 4294967263LL;
    if ( ((a1 - 65569) & 0xFFFFFFDF) == 0 )
    {
      v13 = *(_DWORD *)(v12 + 32);
      *(_QWORD *)(v12 + 8) = v8;
      if ( v13 != 4 )
      {
        *(_QWORD *)v12 = 0LL;
        goto LABEL_7;
      }
      if ( *(_WORD *)(v12 + 24) == Group && *(_BYTE *)(v12 + 26) == GroupIndex )
      {
        *(_QWORD *)v12 = v8 - *(_QWORD *)v12;
LABEL_7:
        result = v14;
        *(_DWORD *)(v12 + 24) = v14;
        *(_DWORD *)(v12 + 44) = a4;
LABEL_8:
        *(_DWORD *)(v12 + 36) = a3;
LABEL_9:
        *(_DWORD *)(v12 + 32) = 1;
        return result;
      }
LABEL_14:
      *(_QWORD *)v12 = 1LL;
      goto LABEL_7;
    }
    if ( ((a1 - 65585) & 0xFFFFFFDF) == 0 )
    {
      if ( *(_DWORD *)(v12 + 32) )
      {
        if ( *(_DWORD *)(v12 + 36) >= a3 )
          goto LABEL_9;
        goto LABEL_8;
      }
      *(_QWORD *)(v12 + 8) = 2LL;
      goto LABEL_14;
    }
  }
  return result;
}
