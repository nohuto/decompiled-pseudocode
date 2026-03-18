/*
 * XREFs of IommupHvMapDevice @ 0x1405660D4
 * Callers:
 *     IommupMapDeviceInternal @ 0x140564E48 (IommupMapDeviceInternal.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvMapDevice(__int64 a1, __int64 a2, unsigned int *a3, _DWORD *a4)
{
  int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9

  v6 = guard_dispatch_icall_no_overrides(
         a1,
         14LL,
         (*a4 & 0x800 | ((*a4 & 0xF8 | ((*a4 & 0x20000 | (*a4 >> 1) & 0xF800u) >> 3)) >> 2)) >> 1,
         a4);
  if ( v6 >= 0 )
  {
    v6 = guard_dispatch_icall_no_overrides(a1, 0LL, v7, v8);
    if ( v6 < 0 )
    {
LABEL_5:
      guard_dispatch_icall_no_overrides(a1, 5LL, 0LL, v10);
      return (unsigned int)v6;
    }
    v6 = guard_dispatch_icall_no_overrides(a1, *a3, v9, v10);
    if ( v6 < 0 )
    {
      guard_dispatch_icall_no_overrides(a1, v11, v12, v13);
      goto LABEL_5;
    }
  }
  return (unsigned int)v6;
}
