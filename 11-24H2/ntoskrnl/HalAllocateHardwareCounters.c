/*
 * XREFs of HalAllocateHardwareCounters @ 0x1406FD670
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402105E0 (KeQueryActiveProcessorCountEx.c)
 *     KeAddGroupAffinityEx @ 0x140257100 (KeAddGroupAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140257130 (KeAddProcessorAffinityEx.c)
 *     HalpGetFullPmuOwnership @ 0x14053E398 (HalpGetFullPmuOwnership.c)
 *     HalpReleasePmuAccessRequest @ 0x140546070 (HalpReleasePmuAccessRequest.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     HalpRequestPmuAccess @ 0x1406FE420 (HalpRequestPmuAccess.c)
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
  unsigned int v13[4]; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v14[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v15[264]; // [rsp+48h] [rbp-B8h] BYREF

  v5 = GroupCount;
  memset_0(v14, 0, 0x108uLL);
  v13[0] = 0;
  if ( !CounterSetHandle )
    return -1073741811;
  *CounterSetHandle = 0LL;
  FullPmuOwnership = HalpRequestPmuAccess();
  if ( FullPmuOwnership >= 0 )
  {
    if ( GroupAffinty || ResourceList )
    {
      v14[1] = 0;
      v14[0] = 2097153;
      memset_0(v15, 0, 0x100uLL);
      if ( GroupAffinty )
      {
        if ( (_DWORD)v5 )
        {
          v9 = v5;
          do
          {
            KeAddGroupAffinityEx((unsigned __int16 *)v14, GroupAffinty->Group, GroupAffinty->Mask);
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
            KeAddProcessorAffinityEx((unsigned __int16 *)v14, v10++);
          while ( v10 < ActiveProcessorCount );
        }
      }
      if ( HalpProfileInterface[14] )
      {
        FullPmuOwnership = guard_dispatch_icall_no_overrides(v14, ResourceList, CounterSetHandle, v13);
        if ( FullPmuOwnership >= 0 )
          _InterlockedAdd(&dword_140FC1D8C, v13[0]);
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
        v13[0] = 0x80000000;
        _InterlockedAdd(&dword_140FC1D8C, 0x80000000);
      }
    }
    HalpReleasePmuAccessRequest();
  }
  return FullPmuOwnership;
}
