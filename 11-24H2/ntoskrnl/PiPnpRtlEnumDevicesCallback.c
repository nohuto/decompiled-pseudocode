/*
 * XREFs of PiPnpRtlEnumDevicesCallback @ 0x1407265C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PiPnpRtlEnumDevicesCallback(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  unsigned int v6; // ebx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx

  v6 = 0;
  *a3 = 0;
  v7 = guard_dispatch_icall_no_overrides(*(_QWORD *)a2, *(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 16), a4);
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 == 1 )
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
  return v6;
}
