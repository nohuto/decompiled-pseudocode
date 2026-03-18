/*
 * XREFs of PiIommuBlockDevice @ 0x140735F28
 * Callers:
 *     PnpIommuBlockUnblockDevice @ 0x1407361B8 (PnpIommuBlockUnblockDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140A109EC (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PiDmaGuardProcessPostRemove @ 0x140A8BD58 (PiDmaGuardProcessPostRemove.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PiIommuBlockDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  char v6; // cl

  result = 3221225473LL;
  v6 = *(_BYTE *)(a1 + 16);
  if ( (v6 & 2) == 0 )
    return 0LL;
  if ( PipHalIommuSecurityEnabled )
  {
    result = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 8), a2, a3, a4);
    if ( (int)result >= 0 )
      *(_BYTE *)(a1 + 16) &= ~2u;
  }
  else if ( PipDmaGuardTestMode )
  {
    *(_BYTE *)(a1 + 16) = v6 & 0xFD;
    result = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  return result;
}
