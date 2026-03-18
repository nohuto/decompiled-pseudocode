/*
 * XREFs of PnpQueryExtendedAddress @ 0x1409C44BC
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140A7C564 (PiProcessNewDeviceNode.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PnpQueryInterface @ 0x1409C4D84 (PnpQueryInterface.c)
 */

__int64 __fastcall PnpQueryExtendedAddress(void *a1, _QWORD *a2)
{
  int v3; // edi
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int128 v10; // [rsp+30h] [rbp-38h] BYREF
  __int128 v11; // [rsp+40h] [rbp-28h]
  __int64 v12; // [rsp+50h] [rbp-18h]

  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v3 = PnpQueryInterface(a1, 0LL, &v10);
  if ( v3 >= 0 )
  {
    if ( v12 )
    {
      if ( WORD1(v10) == 1 )
      {
        guard_dispatch_icall_no_overrides(*((_QWORD *)&v10 + 1), a2, v4, v5);
        if ( *((_QWORD *)&v11 + 1) )
          guard_dispatch_icall_no_overrides(*((_QWORD *)&v10 + 1), v7, v8, v9);
      }
    }
  }
  else
  {
    *a2 = -1LL;
  }
  return (unsigned int)v3;
}
