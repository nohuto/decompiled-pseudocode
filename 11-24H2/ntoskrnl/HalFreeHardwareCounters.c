/*
 * XREFs of HalFreeHardwareCounters @ 0x1406FD800
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402105E0 (KeQueryActiveProcessorCountEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     HalpNotifyActorIfPmuAvailable @ 0x1406FDEA0 (HalpNotifyActorIfPmuAvailable.c)
 */

NTSTATUS __stdcall HalFreeHardwareCounters(HANDLE CounterSetHandle)
{
  __int64 v1; // r8
  __int64 v2; // r9
  ULONG ActiveProcessorCount; // eax
  __int64 v4; // rdx
  __int64 *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  NTSTATUS v9; // ebx
  unsigned int v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0;
  if ( CounterSetHandle == (HANDLE)HalpFullPmuHandle )
  {
    if ( (KeGetCurrentPrcb()->HalReserved[3] & 1) != 0 )
    {
      ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
      if ( ActiveProcessorCount )
      {
        v5 = KiProcessorBlock;
        v6 = ActiveProcessorCount;
        do
        {
          v7 = *v5++;
          _InterlockedDecrement((volatile signed __int32 *)(v7 + 96));
          --v6;
        }
        while ( v6 );
      }
      v10 = 0x80000000;
      _InterlockedAdd(&dword_140FC1D8C, 0x80000000);
      LOBYTE(v4) = 1;
      HalpNotifyActorIfPmuAvailable(0LL, v4);
      return 0;
    }
    return -1073741811;
  }
  if ( (char *)CounterSetHandle - 1 > (char *)0xFFFFFFFFFFFFFFFDLL || !HalpProfileInterface[15] )
    return -1073741811;
  v9 = guard_dispatch_icall_no_overrides(CounterSetHandle, &v10, v1, v2);
  if ( v9 >= 0 )
  {
    _InterlockedAdd(&dword_140FC1D8C, -v10);
    HalpNotifyActorIfPmuAvailable(0LL, 0LL);
  }
  return v9;
}
