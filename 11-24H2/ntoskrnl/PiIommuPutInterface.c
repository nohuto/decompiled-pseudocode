/*
 * XREFs of PiIommuPutInterface @ 0x14073601C
 * Callers:
 *     PiDmaGuardProcessNewDeviceNode @ 0x1409C455C (PiDmaGuardProcessNewDeviceNode.c)
 *     PiIommuGetInterface @ 0x1409C45FC (PiIommuGetInterface.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PiIommuPutInterface(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 24);
  if ( result )
    return guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 8), a2, a3, a4);
  return result;
}
