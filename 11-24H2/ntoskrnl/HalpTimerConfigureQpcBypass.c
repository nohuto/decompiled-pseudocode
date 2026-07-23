/*
 * XREFs of HalpTimerConfigureQpcBypass @ 0x140547F3C
 * Callers:
 *     HalpTimerInitSystem @ 0x1405387E0 (HalpTimerInitSystem.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlSetSystemGlobalData @ 0x140420C20 (RtlSetSystemGlobalData.c)
 *     HalpGetCpuInfo @ 0x140487890 (HalpGetCpuInfo.c)
 *     HalpFindTimer @ 0x140544A60 (HalpFindTimer.c)
 *     NtQuerySystemInformation @ 0x140AE28B0 (NtQuerySystemInformation.c)
 */

void HalpTimerConfigureQpcBypass()
{
  char v0; // bl
  NTSTATUS v1; // esi
  ULONG_PTR *Timer; // rax
  KIRQL v3; // al
  KIRQL v4; // di
  int v5; // edx
  __int16 Buffer; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  LOBYTE(Buffer) = 0;
  v7 = 0LL;
  v0 = 0;
  v1 = NtQuerySystemInformation(SystemHypervisorSharedPageInformation, &v7, 8u, 0LL);
  Timer = HalpFindTimer(5, 0, 0, 0, 1);
  if ( Timer )
  {
    if ( (Timer[28] & 0x1000000) != 0 )
    {
      v0 = 0x80;
    }
    else if ( HalpGetCpuInfo(0LL, 0LL, 0LL, (unsigned __int8 *)&Buffer) )
    {
      if ( (_BYTE)Buffer == 2 )
      {
        v0 = 32;
      }
      else if ( (_BYTE)Buffer == 1 )
      {
        v0 = 16;
      }
    }
  }
  v3 = KeAcquireSpinLockRaiseToDpc(&HalpTscFallbackLock);
  Buffer = 0;
  v4 = v3;
  RtlSetSystemGlobalData(GlobalDataIdQpcBypassEnabled, &Buffer, 2u);
  v5 = *(_DWORD *)(HalpPerformanceCounter + 228);
  if ( (v5 == 8 || v5 == 5) && v1 >= 0 && v7 )
  {
    LOBYTE(Buffer) = v0 | 3;
    RtlSetSystemGlobalData(GlobalDataIdQpcShift, &Buffer, 1u);
  }
  KeReleaseSpinLock(&HalpTscFallbackLock, v4);
}
