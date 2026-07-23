/*
 * XREFs of PiIommuBlockDevice @ 0x140733E58
 * Callers:
 *     PnpIommuBlockUnblockDevice @ 0x1407340E8 (PnpIommuBlockUnblockDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1409BEDFC (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PiDmaGuardProcessPostRemove @ 0x140A88248 (PiDmaGuardProcessPostRemove.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PiIommuBlockDevice(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v4; // cl

  result = 3221225473LL;
  v4 = *(_BYTE *)(a1 + 16);
  if ( (v4 & 2) == 0 )
    return 0LL;
  if ( PipHalIommuSecurityEnabled )
  {
    result = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 8), a2);
    if ( (int)result >= 0 )
      *(_BYTE *)(a1 + 16) &= ~2u;
  }
  else if ( PipDmaGuardTestMode )
  {
    *(_BYTE *)(a1 + 16) = v4 & 0xFD;
    result = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  return result;
}
