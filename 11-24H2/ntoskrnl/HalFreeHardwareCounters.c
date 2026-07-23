/*
 * XREFs of HalFreeHardwareCounters @ 0x1406FB440
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140339940 (KeQueryActiveProcessorCountEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     HalpNotifyActorIfPmuAvailable @ 0x1406FBAE0 (HalpNotifyActorIfPmuAvailable.c)
 */

NTSTATUS __stdcall HalFreeHardwareCounters(HANDLE CounterSetHandle)
{
  ULONG ActiveProcessorCount; // eax
  __int64 v2; // rdx
  __int64 *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax
  NTSTATUS v7; // ebx
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  if ( CounterSetHandle == (HANDLE)HalpFullPmuHandle )
  {
    if ( (KeGetCurrentPrcb()->HalReserved[3] & 1) != 0 )
    {
      ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
      if ( ActiveProcessorCount )
      {
        v3 = KiProcessorBlock;
        v4 = ActiveProcessorCount;
        do
        {
          v5 = *v3++;
          _InterlockedDecrement((volatile signed __int32 *)(v5 + 96));
          --v4;
        }
        while ( v4 );
      }
      v8 = 0x80000000;
      _InterlockedAdd(&dword_140FC1FEC, 0x80000000);
      LOBYTE(v2) = 1;
      HalpNotifyActorIfPmuAvailable(0LL, v2);
      return 0;
    }
    return -1073741811;
  }
  if ( (char *)CounterSetHandle - 1 > (char *)0xFFFFFFFFFFFFFFFDLL || !HalpProfileInterface[15] )
    return -1073741811;
  v7 = guard_dispatch_icall_no_overrides(CounterSetHandle, &v8);
  if ( v7 >= 0 )
  {
    _InterlockedAdd(&dword_140FC1FEC, -v8);
    HalpNotifyActorIfPmuAvailable(0LL, 0LL);
  }
  return v7;
}
