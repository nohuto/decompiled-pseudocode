/*
 * XREFs of Uart16550PutByte @ 0x1406A4D00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall Uart16550PutByte(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // si
  char v5; // di
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  char v11; // al
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // r8
  char v15; // al

  v4 = a3;
  v5 = a2;
  if ( !a1 || !*(_QWORD *)a1 )
    return 3LL;
  if ( (*(_BYTE *)(a1 + 12) & 4) != 0 )
  {
    LOBYTE(a2) = 6;
    for ( LOBYTE(a2) = guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
          (a2 & 0xB0) != 0xB0;
          LOBYTE(a2) = guard_dispatch_icall_no_overrides(a1, a2, a3, a4) )
    {
      if ( (a2 & 0x80u) == 0LL )
      {
        LOBYTE(a2) = 5;
        guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
        if ( (*(_BYTE *)(a1 + 12) & 1) != 0 )
          guard_dispatch_icall_no_overrides(a1, 0LL, a3, a4);
      }
      LOBYTE(a2) = 6;
    }
  }
  LOBYTE(a2) = 5;
  v7 = guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  if ( v7 == -1 )
    return 3LL;
  while ( (v7 & 0x20) == 0 )
  {
    LOBYTE(v8) = 6;
    v11 = guard_dispatch_icall_no_overrides(a1, v8, v9, v10);
    v14 = *(unsigned __int16 *)(a1 + 12);
    v15 = v11 & 0x40;
    if ( v15 == 0 && (*(_WORD *)(a1 + 12) & 2) != 0 || v15 != 0 && (*(_WORD *)(a1 + 12) & 2) == 0 )
    {
      LOWORD(v14) = v14 | 4;
      *(_WORD *)(a1 + 12) = v14;
    }
    if ( !v4 )
      return 3LL;
    LOBYTE(v12) = 5;
    v7 = guard_dispatch_icall_no_overrides(a1, v12, v14, v13);
  }
  LOBYTE(v9) = v5;
  guard_dispatch_icall_no_overrides(a1, 0LL, v9, v10);
  return 0LL;
}
