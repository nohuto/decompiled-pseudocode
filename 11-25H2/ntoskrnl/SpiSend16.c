/*
 * XREFs of SpiSend16 @ 0x14069A1A8
 * Callers:
 *     SpiMax311GetByte @ 0x140699E60 (SpiMax311GetByte.c)
 *     SpiMax311PutByte @ 0x140699F30 (SpiMax311PutByte.c)
 *     SpiMax311RxReady @ 0x140699FC0 (SpiMax311RxReady.c)
 *     SpiMax311SetBaud @ 0x14069A020 (SpiMax311SetBaud.c)
 *     SpiMax311TxEmpty @ 0x14069A170 (SpiMax311TxEmpty.c)
 * Callees:
 *     SpiInit @ 0x140699D08 (SpiInit.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SpiSend16(__int64 *a1)
{
  __int64 v1; // rdi

  v1 = *a1;
  SpiInit(*a1);
  guard_dispatch_icall_no_overrides(v1 + 16);
  guard_dispatch_icall_no_overrides(v1 + 96);
  while ( (guard_dispatch_icall_no_overrides(v1 + 40) & 0xD) != 0xC )
    ;
  return guard_dispatch_icall_no_overrides(v1 + 96);
}
