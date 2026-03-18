/*
 * XREFs of Uart16550GetByte @ 0x1406A4A90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall Uart16550GetByte(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  _BYTE *v4; // rdi
  char v6; // al
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  char v11; // si
  __int64 v12; // r8
  __int64 v13; // r9
  char v15; // al
  __int16 v16; // r8
  char v17; // al

  v4 = a2;
  if ( !a1 )
    return 3LL;
  if ( !*(_QWORD *)a1 )
    return 3LL;
  LOBYTE(a2) = 5;
  v6 = guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  if ( v6 == -1 )
    return 3LL;
  if ( (v6 & 1) != 0 )
  {
    if ( (v6 & 0xE) != 0 )
      return 2LL;
    v11 = guard_dispatch_icall_no_overrides(a1, 0LL, v8, v9);
    if ( (*(_BYTE *)(a1 + 12) & 4) == 0
      || (LOBYTE(v10) = 6, (guard_dispatch_icall_no_overrides(a1, v10, v12, v13) & 0x80u) != 0LL) )
    {
      *v4 = v11;
      return 0LL;
    }
  }
  else
  {
    LOBYTE(v7) = 6;
    v15 = guard_dispatch_icall_no_overrides(a1, v7, v8, v9);
    v16 = *(_WORD *)(a1 + 12);
    v17 = v15 & 0x40;
    if ( v17 == 0 && (v16 & 2) != 0 || v17 != 0 && (v16 & 2) == 0 )
      *(_WORD *)(a1 + 12) = v16 | 4;
  }
  return 1LL;
}
