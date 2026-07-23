/*
 * XREFs of SymCryptFdefModElementSetValueNegUint32 @ 0x1405302E4
 * Callers:
 *     SymCryptModElementSetValueNegUint32 @ 0x140521610 (SymCryptModElementSetValueNegUint32.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14048E2E0 (xHalTimerWatchdogStop.c)
 *     SymCryptWipe @ 0x14051B504 (SymCryptWipe.c)
 *     SymCryptFdefRawSubUint32 @ 0x140529CC4 (SymCryptFdefRawSubUint32.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SymCryptFdefModElementSetValueNegUint32(unsigned int a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // edi
  unsigned int v7; // ecx

  v3 = a2[1];
  xHalTimerWatchdogStop();
  if ( a2[19] <= 0x20u )
  {
    v7 = a2[32];
    if ( a1 >= v7 )
      a1 %= v7;
  }
  if ( a1 )
    SymCryptFdefRawSubUint32((__int64)(a2 + 32), a1, a3, v3);
  else
    SymCryptWipe((__int64)a3, (unsigned int)(v3 << 6));
  return guard_dispatch_icall_no_overrides(a2, a3);
}
