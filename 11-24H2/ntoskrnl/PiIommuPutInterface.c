/*
 * XREFs of PiIommuPutInterface @ 0x140733F4C
 * Callers:
 *     PiDmaGuardProcessNewDeviceNode @ 0x140982310 (PiDmaGuardProcessNewDeviceNode.c)
 *     PiIommuGetInterface @ 0x1409823B0 (PiIommuGetInterface.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PiIommuPutInterface(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 24);
  if ( result )
    return guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 8), a2);
  return result;
}
