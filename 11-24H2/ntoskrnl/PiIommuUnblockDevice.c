/*
 * XREFs of PiIommuUnblockDevice @ 0x140A956B4
 * Callers:
 *     PnpIommuBlockUnblockDevice @ 0x1407361B8 (PnpIommuBlockUnblockDevice.c)
 *     PiDmaGuardProcessPreStart @ 0x140A0FFFC (PiDmaGuardProcessPreStart.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PiIommuUnblockDevice(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  _BYTE *v4; // rbx
  __int64 result; // rax

  v4 = *(_BYTE **)(a1 + 720);
  if ( !a2 && ((v4[16] & 1) != 0 && (*(_BYTE *)(*(_QWORD *)v4 + 4LL) & 1) == 0 || (v4[17] & 1) != 0) )
    return 0LL;
  if ( !PipHalIommuSecurityEnabled )
  {
    if ( PipDmaGuardTestMode )
      v4[16] |= 2u;
    return 0LL;
  }
  result = guard_dispatch_icall_no_overrides(*(_QWORD *)v4, *(_QWORD *)(a1 + 32), v4 + 8, a4);
  if ( (_DWORD)result == -1070268391 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 48LL) & 0x2000000) != 0 )
      return 0LL;
  }
  else if ( (int)result >= 0 )
  {
    v4[16] |= 2u;
  }
  return result;
}
