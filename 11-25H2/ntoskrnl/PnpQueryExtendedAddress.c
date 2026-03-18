/*
 * XREFs of PnpQueryExtendedAddress @ 0x140A93560
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14082CE68 (PiProcessNewDeviceNode.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PnpQueryInterface @ 0x14082CC7C (PnpQueryInterface.c)
 */

__int64 __fastcall PnpQueryExtendedAddress(_QWORD *a1, _QWORD *a2)
{
  int Interface; // edi
  __int128 v5; // [rsp+30h] [rbp-38h] BYREF
  __int128 v6; // [rsp+40h] [rbp-28h]
  __int64 v7; // [rsp+50h] [rbp-18h]

  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  Interface = PnpQueryInterface(a1, (ULONG_PTR)&GUID_PNP_EXTENDED_ADDRESS_INTERFACE, 1u, 0x28u, 0LL, (USHORT *)&v5);
  if ( Interface >= 0 )
  {
    if ( v7 )
    {
      if ( WORD1(v5) == 1 )
      {
        guard_dispatch_icall_no_overrides(*((_QWORD *)&v5 + 1));
        if ( *((_QWORD *)&v6 + 1) )
          guard_dispatch_icall_no_overrides(*((_QWORD *)&v5 + 1));
      }
    }
  }
  else
  {
    *a2 = -1LL;
  }
  return (unsigned int)Interface;
}
