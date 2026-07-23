/*
 * XREFs of PiPnpRtlEnumDevicesCallback @ 0x140724150
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PiPnpRtlEnumDevicesCallback(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned int v5; // ebx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx

  v5 = 0;
  *a3 = 0;
  v6 = guard_dispatch_icall_no_overrides(*(_QWORD *)a2, *(_QWORD *)(a1 + 16));
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 == 1 )
          return (unsigned int)-1073741248;
        else
          return (unsigned int)-1073741595;
      }
    }
    else
    {
      *(_BYTE *)(a2 + 24) = 1;
    }
    *a3 = 1;
  }
  return v5;
}
