/*
 * XREFs of SpiSend16 @ 0x1406A53D8
 * Callers:
 *     SpiMax311GetByte @ 0x1406A5090 (SpiMax311GetByte.c)
 *     SpiMax311PutByte @ 0x1406A5160 (SpiMax311PutByte.c)
 *     SpiMax311RxReady @ 0x1406A51F0 (SpiMax311RxReady.c)
 *     SpiMax311SetBaud @ 0x1406A5250 (SpiMax311SetBaud.c)
 *     SpiMax311TxEmpty @ 0x1406A53A0 (SpiMax311TxEmpty.c)
 * Callees:
 *     SpiInit @ 0x1406A4F38 (SpiInit.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SpiSend16(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9

  v3 = *a1;
  v4 = (unsigned __int16)a2;
  SpiInit(*a1, a2, a3, (unsigned __int16)word_140E65068);
  guard_dispatch_icall_no_overrides(v3 + 16, 2LL, v5, v6);
  guard_dispatch_icall_no_overrides(v3 + 96, v4, v7, v8);
  while ( (guard_dispatch_icall_no_overrides(v3 + 40, v9, v10, v11) & 0xD) != 0xC )
    ;
  return guard_dispatch_icall_no_overrides(v3 + 96, v9, v10, v11);
}
