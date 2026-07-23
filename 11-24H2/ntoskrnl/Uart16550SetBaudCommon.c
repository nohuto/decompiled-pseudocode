/*
 * XREFs of Uart16550SetBaudCommon @ 0x1406A5E90
 * Callers:
 *     Uart16550SetBaud @ 0x1406A5E70 (Uart16550SetBaud.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall Uart16550SetBaudCommon(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  char result; // al

  if ( !a1 || !*(_QWORD *)a1 || !a2 )
    return 0;
  v4 = 0x1C200 % a2;
  LOBYTE(v4) = 3;
  guard_dispatch_icall_no_overrides(a1, v4);
  LOBYTE(v5) = 3;
  guard_dispatch_icall_no_overrides(a1, v5);
  LOBYTE(v6) = 1;
  guard_dispatch_icall_no_overrides(a1, v6);
  guard_dispatch_icall_no_overrides(a1, 0LL);
  LOBYTE(v7) = 3;
  guard_dispatch_icall_no_overrides(a1, v7);
  result = 1;
  *(_DWORD *)(a1 + 8) = a2;
  return result;
}
