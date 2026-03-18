/*
 * XREFs of SpiInit @ 0x1406A4F38
 * Callers:
 *     SpiSend16 @ 0x1406A53D8 (SpiSend16.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SpiInit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  __int64 v5; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rsi
  __int64 v23; // rbp
  __int16 v24; // bx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int16 v28; // ax

  v4 = (unsigned __int16)a4;
  v5 = a1 + 40;
  while ( (guard_dispatch_icall_no_overrides(v5, a2, a3, a4) & 5) != 4 )
    ;
  while ( (guard_dispatch_icall_no_overrides(v5, a2, a3, a4) & 8) != 0 )
    guard_dispatch_icall_no_overrides(a1 + 96, v7, v8, v9);
  guard_dispatch_icall_no_overrides(a1 + 16, 0LL, v8, v9);
  v10 = a1 + 8;
  guard_dispatch_icall_no_overrides(a1 + 8, 0LL, v11, v12);
  guard_dispatch_icall_no_overrides(a1, 15LL, v13, v14);
  guard_dispatch_icall_no_overrides(a1 + 4, 0LL, v15, v16);
  guard_dispatch_icall_no_overrides(a1 + 20, v4, v17, v18);
  v22 = a1 + 52;
  v23 = a1 + 48;
  do
  {
    do
    {
      v24 = guard_dispatch_icall_no_overrides(v22, v19, v20, v21);
      v28 = guard_dispatch_icall_no_overrides(v23, v25, v26, v27);
    }
    while ( v24 );
  }
  while ( v28 );
  return guard_dispatch_icall_no_overrides(v10, 1LL, v20, v21);
}
