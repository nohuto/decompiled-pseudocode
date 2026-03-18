/*
 * XREFs of PiIommuUninitializeDeviceAts @ 0x1404C2898
 * Callers:
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1409A0984 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PiDmaGuardProcessPostRemove @ 0x140A87040 (PiDmaGuardProcessPostRemove.c)
 * Callees:
 *     ExUninitializeDeviceAts @ 0x14064BECC (ExUninitializeDeviceAts.c)
 */

__int64 __fastcall PiIommuUninitializeDeviceAts(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 720);
  if ( *(char *)(result + 16) < 0 )
    return ExUninitializeDeviceAts(*(_QWORD *)(a1 + 32));
  return result;
}
