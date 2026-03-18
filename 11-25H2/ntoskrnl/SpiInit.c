/*
 * XREFs of SpiInit @ 0x140699D08
 * Callers:
 *     SpiSend16 @ 0x14069A1A8 (SpiSend16.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SpiInit(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int16 v6; // bx
  __int16 v7; // ax

  v1 = a1 + 40;
  while ( (guard_dispatch_icall_no_overrides(v1) & 5) != 4 )
    ;
  while ( (guard_dispatch_icall_no_overrides(v1) & 8) != 0 )
    guard_dispatch_icall_no_overrides(a1 + 96);
  guard_dispatch_icall_no_overrides(a1 + 16);
  v3 = a1 + 8;
  guard_dispatch_icall_no_overrides(a1 + 8);
  guard_dispatch_icall_no_overrides(a1);
  guard_dispatch_icall_no_overrides(a1 + 4);
  guard_dispatch_icall_no_overrides(a1 + 20);
  v4 = a1 + 52;
  v5 = a1 + 48;
  do
  {
    do
    {
      v6 = guard_dispatch_icall_no_overrides(v4);
      v7 = guard_dispatch_icall_no_overrides(v5);
    }
    while ( v6 );
  }
  while ( v7 );
  return guard_dispatch_icall_no_overrides(v3);
}
