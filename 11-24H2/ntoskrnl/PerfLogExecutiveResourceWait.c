/*
 * XREFs of PerfLogExecutiveResourceWait @ 0x1404AA110
 * Callers:
 *     ExpAcquireSharedStarveExclusive @ 0x140229A50 (ExpAcquireSharedStarveExclusive.c)
 *     ExpWaitForResource @ 0x14022CDD0 (ExpWaitForResource.c)
 *     ExpWaitForFastResource @ 0x1403BD4B0 (ExpWaitForFastResource.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1403D6820 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     EtwpGetTrackingLockSlotForThread @ 0x14022CCA8 (EtwpGetTrackingLockSlotForThread.c)
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall PerfLogExecutiveResourceWait(int a1, __int64 a2, unsigned int a3)
{
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int64 v7; // rbx
  __int16 Group; // r15
  unsigned __int8 GroupIndex; // r12
  __int64 result; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // rbx
  unsigned int v13; // [rsp+30h] [rbp-50h]
  _QWORD v14[3]; // [rsp+38h] [rbp-48h] BYREF
  unsigned int v15; // [rsp+50h] [rbp-30h]
  unsigned int CurrentRunTime; // [rsp+54h] [rbp-2Ch]
  __int64 v17; // [rsp+58h] [rbp-28h]
  int v18; // [rsp+60h] [rbp-20h]
  int v19; // [rsp+64h] [rbp-1Ch]
  _QWORD v20[2]; // [rsp+68h] [rbp-18h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v7 = __rdtsc();
  Group = CurrentPrcb->Group;
  GroupIndex = CurrentPrcb->GroupIndex;
  ++CurrentPrcb->SynchCounters.ExEtwSynchTrackingNotificationsCount;
  LOWORD(v13) = Group;
  HIWORD(v13) = GroupIndex;
  result = EtwpGetTrackingLockSlotForThread(a2, a1 & 0xFFFF0000);
  v11 = result;
  if ( result )
  {
    ++CurrentPrcb->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
    result = 4294967263LL;
    if ( ((a1 - 65572) & 0xFFFFFFDF) != 0 )
    {
      if ( ((a1 - 66084) & 0xFFFFFFDF) == 0 )
      {
        if ( *(_DWORD *)(v11 + 32) == 4 && *(_WORD *)(v11 + 24) == Group && *(_BYTE *)(v11 + 26) == GroupIndex )
          v12 = v7 - *(_QWORD *)v11;
        else
          v12 = 0LL;
        result = a3 / EtwpExecutiveResourceTimeout;
        if ( !(a3 % EtwpExecutiveResourceTimeout) )
        {
          v14[0] = 0LL;
          v18 = a1;
          v17 = a2;
          v15 = a3;
          v14[1] = v12;
          v14[2] = *(_QWORD *)v11;
          v19 = 0;
          v20[1] = 48LL;
          CurrentRunTime = KeGetCurrentThread()[1].CurrentRunTime;
          v20[0] = v14;
          return EtwTraceKernelEvent((int)v20, 1, 0x20020000u, 1323, 23074818);
        }
      }
    }
    else
    {
      result = v13;
      *(_DWORD *)(v11 + 24) = v13;
      *(_DWORD *)(v11 + 32) = 4;
      *(_QWORD *)v11 = v7;
    }
  }
  return result;
}
