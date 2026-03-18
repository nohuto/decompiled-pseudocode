/*
 * XREFs of Uart16550SetBaudCommon @ 0x1406A4E90
 * Callers:
 *     Uart16550SetBaud @ 0x1406A4E70 (Uart16550SetBaud.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall Uart16550SetBaudCommon(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r9
  char result; // al

  if ( !a1 || !*(_QWORD *)a1 || !a2 )
    return 0;
  v6 = 0x1C200 % a2;
  LOBYTE(v6) = 3;
  v7 = guard_dispatch_icall_no_overrides(a1, v6, a3, a4);
  LOBYTE(v8) = 3;
  LOBYTE(v9) = v7 | 0x80;
  guard_dispatch_icall_no_overrides(a1, v8, v9, v10);
  LOBYTE(v11) = 1;
  guard_dispatch_icall_no_overrides(a1, v11, (0x1C200 / a2) >> 8, v12);
  LOBYTE(v13) = 0x1C200 / a2;
  guard_dispatch_icall_no_overrides(a1, 0LL, v13, v14);
  LOBYTE(v15) = 3;
  LOBYTE(v16) = 3;
  guard_dispatch_icall_no_overrides(a1, v16, v15, v17);
  result = 1;
  *(_DWORD *)(a1 + 8) = a2;
  return result;
}
