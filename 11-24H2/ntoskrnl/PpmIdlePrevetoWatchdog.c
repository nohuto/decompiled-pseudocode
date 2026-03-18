/*
 * XREFs of PpmIdlePrevetoWatchdog @ 0x1405CE920
 * Callers:
 *     PopDripsWatchdogTakeAction @ 0x1407664B0 (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 */

void __fastcall PpmIdlePrevetoWatchdog(unsigned __int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 v6; // rsi
  KIRQL v7; // r14
  __int64 InterruptTimePrecise; // rax
  __int64 i; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r9
  unsigned __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0;
  *a3 = 0LL;
  if ( PpmPlatformStates )
  {
    v6 = (unsigned int)dword_140E27DC0;
    if ( dword_140E27DC0 != -1 )
    {
      v7 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&v12);
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(448 * v6 + PpmPlatformStates + 108); i = (unsigned int)(i + 1) )
      {
        v10 = *(_QWORD *)(448 * v6 + PpmPlatformStates + 112) + ((unsigned __int64)(unsigned int)i << 6);
        v11 = *(_QWORD *)(v10 + 32);
        if ( v11 && InterruptTimePrecise - v11 >= a1 )
        {
          *a2 = *(_DWORD *)(v10 + 16);
          *a3 = *((_QWORD *)PpmIdleVetoList + 3 * i + 3);
          break;
        }
      }
      KeReleaseSpinLock(&PpmIdleVetoLock, v7);
    }
  }
}
