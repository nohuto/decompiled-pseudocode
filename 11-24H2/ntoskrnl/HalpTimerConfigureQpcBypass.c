/*
 * XREFs of HalpTimerConfigureQpcBypass @ 0x14054A67C
 * Callers:
 *     HalpTimerInitSystem @ 0x14053AFA0 (HalpTimerInitSystem.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlSetSystemGlobalData @ 0x14042EEF0 (RtlSetSystemGlobalData.c)
 *     HalpGetCpuInfo @ 0x14048CB70 (HalpGetCpuInfo.c)
 *     HalpFindTimer @ 0x1405471A0 (HalpFindTimer.c)
 *     NtQuerySystemInformation @ 0x140AE0FD0 (NtQuerySystemInformation.c)
 */

void HalpTimerConfigureQpcBypass()
{
  char v0; // bl
  int v1; // esi
  ULONG_PTR *Timer; // rax
  KIRQL v3; // al
  KIRQL v4; // di
  int v5; // edx
  int v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  LOBYTE(v6) = 0;
  v7 = 0LL;
  v0 = 0;
  v1 = NtQuerySystemInformation(197LL, &v7, 8LL, 0LL);
  Timer = HalpFindTimer(5, 0, 0, 0, 1);
  if ( Timer )
  {
    if ( (Timer[28] & 0x1000000) != 0 )
    {
      v0 = 0x80;
    }
    else if ( HalpGetCpuInfo(0LL, 0LL, 0LL, (unsigned __int8 *)&v6) )
    {
      if ( (_BYTE)v6 == 2 )
      {
        v0 = 32;
      }
      else if ( (_BYTE)v6 == 1 )
      {
        v0 = 16;
      }
    }
  }
  v3 = KeAcquireSpinLockRaiseToDpc(&HalpTscFallbackLock);
  LOWORD(v6) = 0;
  v4 = v3;
  RtlSetSystemGlobalData(17, &v6, 2);
  v5 = *(_DWORD *)(HalpPerformanceCounter + 228);
  if ( (v5 == 8 || v5 == 5) && v1 >= 0 && v7 )
  {
    LOBYTE(v6) = v0 | 3;
    RtlSetSystemGlobalData(16, &v6, 1);
  }
  KeReleaseSpinLock(&HalpTscFallbackLock, v4);
}
