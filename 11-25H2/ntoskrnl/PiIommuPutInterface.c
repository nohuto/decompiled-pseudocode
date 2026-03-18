/*
 * XREFs of PiIommuPutInterface @ 0x140729D8C
 * Callers:
 *     PiIommuGetInterface @ 0x14082C4F4 (PiIommuGetInterface.c)
 *     PiProcessNewDeviceNode @ 0x14082CE68 (PiProcessNewDeviceNode.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PiIommuPutInterface(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 24);
  if ( result )
    return guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 8));
  return result;
}
