/*
 * XREFs of PiIommuUnblockDevice @ 0x140A91EE4
 * Callers:
 *     PnpIommuBlockUnblockDevice @ 0x1407340E8 (PnpIommuBlockUnblockDevice.c)
 *     PiDmaGuardProcessPreStart @ 0x1409BE40C (PiDmaGuardProcessPreStart.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PiIommuUnblockDevice(__int64 a1, char a2)
{
  _BYTE *v2; // rbx
  __int64 result; // rax

  v2 = *(_BYTE **)(a1 + 720);
  if ( !a2 && ((v2[16] & 1) != 0 && (*(_BYTE *)(*(_QWORD *)v2 + 4LL) & 1) == 0 || (v2[17] & 1) != 0) )
    return 0LL;
  if ( !PipHalIommuSecurityEnabled )
  {
    if ( PipDmaGuardTestMode )
      v2[16] |= 2u;
    return 0LL;
  }
  result = guard_dispatch_icall_no_overrides(*(_QWORD *)v2, *(_QWORD *)(a1 + 32));
  if ( (_DWORD)result == -1070268391 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 48LL) & 0x2000000) != 0 )
      return 0LL;
  }
  else if ( (int)result >= 0 )
  {
    v2[16] |= 2u;
  }
  return result;
}
