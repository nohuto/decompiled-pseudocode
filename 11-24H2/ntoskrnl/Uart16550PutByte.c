/*
 * XREFs of Uart16550PutByte @ 0x1406A5D00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall Uart16550PutByte(__int64 a1, __int64 a2, char a3)
{
  char v5; // al
  __int64 v6; // rdx
  char v7; // al
  __int64 v8; // rdx
  __int16 v9; // r8
  char v10; // al

  if ( !a1 || !*(_QWORD *)a1 )
    return 3LL;
  if ( (*(_BYTE *)(a1 + 12) & 4) != 0 )
  {
    LOBYTE(a2) = 6;
    for ( LOBYTE(a2) = guard_dispatch_icall_no_overrides(a1, a2);
          (a2 & 0xB0) != 0xB0;
          LOBYTE(a2) = guard_dispatch_icall_no_overrides(a1, a2) )
    {
      if ( (a2 & 0x80u) == 0LL )
      {
        LOBYTE(a2) = 5;
        guard_dispatch_icall_no_overrides(a1, a2);
        if ( (*(_BYTE *)(a1 + 12) & 1) != 0 )
          guard_dispatch_icall_no_overrides(a1, 0LL);
      }
      LOBYTE(a2) = 6;
    }
  }
  LOBYTE(a2) = 5;
  v5 = guard_dispatch_icall_no_overrides(a1, a2);
  if ( v5 == -1 )
    return 3LL;
  while ( (v5 & 0x20) == 0 )
  {
    LOBYTE(v6) = 6;
    v7 = guard_dispatch_icall_no_overrides(a1, v6);
    v9 = *(_WORD *)(a1 + 12);
    v10 = v7 & 0x40;
    if ( v10 == 0 && (v9 & 2) != 0 || v10 != 0 && (v9 & 2) == 0 )
      *(_WORD *)(a1 + 12) = v9 | 4;
    if ( !a3 )
      return 3LL;
    LOBYTE(v8) = 5;
    v5 = guard_dispatch_icall_no_overrides(a1, v8);
  }
  guard_dispatch_icall_no_overrides(a1, 0LL);
  return 0LL;
}
