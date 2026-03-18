/*
 * XREFs of PiIommuBlockDevice @ 0x140729C98
 * Callers:
 *     PnpIommuBlockUnblockDevice @ 0x140729F28 (PnpIommuBlockUnblockDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1409A0984 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PiDmaGuardProcessPostRemove @ 0x140A87040 (PiDmaGuardProcessPostRemove.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PiIommuBlockDevice(__int64 a1)
{
  __int64 result; // rax
  char v3; // cl

  result = 3221225473LL;
  v3 = *(_BYTE *)(a1 + 16);
  if ( (v3 & 2) == 0 )
    return 0LL;
  if ( PipHalIommuSecurityEnabled )
  {
    result = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 8));
    if ( (int)result >= 0 )
      *(_BYTE *)(a1 + 16) &= ~2u;
  }
  else if ( PipDmaGuardTestMode )
  {
    *(_BYTE *)(a1 + 16) = v3 & 0xFD;
    result = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  return result;
}
