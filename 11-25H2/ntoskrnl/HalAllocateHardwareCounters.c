/*
 * XREFs of HalAllocateHardwareCounters @ 0x1406F1880
 * Callers:
 *     <none>
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140256130 (KeAddGroupAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140256160 (KeAddProcessorAffinityEx.c)
 *     KeQueryActiveProcessorCountEx @ 0x1403AE660 (KeQueryActiveProcessorCountEx.c)
 *     HalpGetFullPmuOwnership @ 0x14053BB68 (HalpGetFullPmuOwnership.c)
 *     HalpReleasePmuAccessRequest @ 0x140543780 (HalpReleasePmuAccessRequest.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     HalpRequestPmuAccess @ 0x1406F2630 (HalpRequestPmuAccess.c)
 */

NTSTATUS __stdcall HalAllocateHardwareCounters(
        PGROUP_AFFINITY GroupAffinty,
        ULONG GroupCount,
        PPHYSICAL_COUNTER_RESOURCE_LIST ResourceList,
        PHANDLE CounterSetHandle)
{
  __int64 v5; // r14
  NTSTATUS FullPmuOwnership; // ebx
  __int64 v9; // rbx
  unsigned int v10; // ebx
  ULONG ActiveProcessorCount; // edi
  _DWORD v13[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v14[264]; // [rsp+48h] [rbp-B8h] BYREF

  v5 = GroupCount;
  memset_0(v13, 0, 0x108uLL);
  if ( !CounterSetHandle )
    return -1073741811;
  *CounterSetHandle = 0LL;
  FullPmuOwnership = HalpRequestPmuAccess();
  if ( FullPmuOwnership >= 0 )
  {
    if ( GroupAffinty || ResourceList )
    {
      v13[1] = 0;
      v13[0] = 2097153;
      memset_0(v14, 0, 0x100uLL);
      if ( GroupAffinty )
      {
        if ( (_DWORD)v5 )
        {
          v9 = v5;
          do
          {
            KeAddGroupAffinityEx((unsigned __int16 *)v13, GroupAffinty->Group, GroupAffinty->Mask);
            ++GroupAffinty;
            --v9;
          }
          while ( v9 );
        }
      }
      else
      {
        v10 = 0;
        ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
        if ( ActiveProcessorCount )
        {
          do
            KeAddProcessorAffinityEx((unsigned __int16 *)v13, v10++);
          while ( v10 < ActiveProcessorCount );
        }
      }
      if ( HalpProfileInterface[14] )
      {
        FullPmuOwnership = guard_dispatch_icall_no_overrides(v13);
        if ( FullPmuOwnership >= 0 )
          _InterlockedAdd(&dword_140FC15EC, 0);
      }
      else
      {
        FullPmuOwnership = -1073741670;
      }
    }
    else
    {
      FullPmuOwnership = HalpGetFullPmuOwnership((__int64 *)CounterSetHandle);
      if ( FullPmuOwnership >= 0 )
      {
        KeQueryActiveProcessorCountEx(0xFFFFu);
        _InterlockedAdd(&dword_140FC15EC, 0x80000000);
      }
    }
    HalpReleasePmuAccessRequest();
  }
  return FullPmuOwnership;
}
