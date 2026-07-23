/*
 * XREFs of PnpQueryExtendedAddress @ 0x140982270
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140A76864 (PiProcessNewDeviceNode.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PnpQueryInterface @ 0x140982B38 (PnpQueryInterface.c)
 */

__int64 __fastcall PnpQueryExtendedAddress(void *a1, _QWORD *a2)
{
  int v3; // edi
  __int64 v5; // rdx
  __int128 v6; // [rsp+30h] [rbp-38h] BYREF
  __int128 v7; // [rsp+40h] [rbp-28h]
  __int64 v8; // [rsp+50h] [rbp-18h]

  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v3 = PnpQueryInterface(a1, 0LL, &v6);
  if ( v3 >= 0 )
  {
    if ( v8 )
    {
      if ( WORD1(v6) == 1 )
      {
        guard_dispatch_icall_no_overrides(*((_QWORD *)&v6 + 1), a2);
        if ( *((_QWORD *)&v7 + 1) )
          guard_dispatch_icall_no_overrides(*((_QWORD *)&v6 + 1), v5);
      }
    }
  }
  else
  {
    *a2 = -1LL;
  }
  return (unsigned int)v3;
}
