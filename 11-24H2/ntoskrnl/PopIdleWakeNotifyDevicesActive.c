/*
 * XREFs of PopIdleWakeNotifyDevicesActive @ 0x1403CBB1C
 * Callers:
 *     PopFxPlatformStateAvailable @ 0x1403CAA54 (PopFxPlatformStateAvailable.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 */

void __fastcall PopIdleWakeNotifyDevicesActive(unsigned __int8 a1)
{
  int v1; // edi
  KIRQL v2; // al
  _QWORD *v3; // rbx
  KIRQL v4; // si
  int v5; // edx
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0LL;
  v1 = a1;
  v2 = KeAcquireSpinLockRaiseToDpc(&PopIdleWakeContextLock);
  v3 = PopIdleWakeContext;
  v4 = v2;
  if ( PopIdleWakeContext )
  {
    if ( (*(_DWORD *)PopIdleWakeContext & 0x10) != 0 && (*(_DWORD *)PopIdleWakeContext & 1) != v1 )
    {
      v5 = *(_DWORD *)PopIdleWakeContext ^ ((unsigned __int8)*(_DWORD *)PopIdleWakeContext ^ (unsigned __int8)v1) & 1;
      *(_DWORD *)PopIdleWakeContext = v5;
      if ( (v5 & 2) == 0 )
      {
        RtlGetInterruptTimePrecise(&v8);
        v6 = v8;
        v7 = v8 - v3[1];
        if ( (_BYTE)v1 )
          v3[4] += v7;
        else
          v3[3] += v7;
        v3[1] = v6;
      }
    }
  }
  KeReleaseSpinLock(&PopIdleWakeContextLock, v4);
}
