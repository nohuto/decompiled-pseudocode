/*
 * XREFs of SymCryptFdefModElementSetValueNegUint32 @ 0x140535E44
 * Callers:
 *     SymCryptModElementSetValueNegUint32 @ 0x140523CF8 (SymCryptModElementSetValueNegUint32.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140493990 (xHalTimerWatchdogStop.c)
 *     SymCryptWipe @ 0x14051DC34 (SymCryptWipe.c)
 *     SymCryptFdefRawSubUint32 @ 0x14052F81C (SymCryptFdefRawSubUint32.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SymCryptFdefModElementSetValueNegUint32(
        unsigned int a1,
        _DWORD *a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5)
{
  int v5; // edi
  unsigned int v10; // ecx

  v5 = a2[1];
  xHalTimerWatchdogStop();
  if ( a2[19] <= 0x20u )
  {
    v10 = a2[32];
    if ( a1 >= v10 )
      a1 %= v10;
  }
  if ( a1 )
    SymCryptFdefRawSubUint32((__int64)(a2 + 32), a1, a3, v5);
  else
    SymCryptWipe((__int64)a3, (unsigned int)(v5 << 6));
  return guard_dispatch_icall_no_overrides(a2, a3, a4, a5);
}
