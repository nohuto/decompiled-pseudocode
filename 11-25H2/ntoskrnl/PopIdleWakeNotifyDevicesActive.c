/*
 * XREFs of PopIdleWakeNotifyDevicesActive @ 0x140354AE8
 * Callers:
 *     PopFxPlatformStateAvailable @ 0x140355F24 (PopFxPlatformStateAvailable.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 */

void __fastcall PopIdleWakeNotifyDevicesActive(unsigned __int8 a1)
{
  int v1; // edi
  KIRQL v2; // al
  _QWORD *v3; // rbx
  KIRQL v4; // si
  int v5; // edx
  LARGE_INTEGER v6; // rcx
  LONGLONG v7; // rax
  LARGE_INTEGER PerformanceCounter; // [rsp+38h] [rbp+10h] BYREF

  PerformanceCounter.QuadPart = 0LL;
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
        RtlGetInterruptTimePrecise(&PerformanceCounter);
        v6 = PerformanceCounter;
        v7 = PerformanceCounter.QuadPart - v3[1];
        if ( (_BYTE)v1 )
          v3[4] += v7;
        else
          v3[3] += v7;
        v3[1] = v6.QuadPart;
      }
    }
  }
  KeReleaseSpinLock(&PopIdleWakeContextLock, v4);
}
