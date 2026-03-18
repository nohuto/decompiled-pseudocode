/*
 * XREFs of HalpIommuDetermineReservedPciRid @ 0x140553B0C
 * Callers:
 *     HalpIommuProcessReservationsInternal @ 0x1405544C0 (HalpIommuProcessReservationsInternal.c)
 * Callees:
 *     HalpPciConvertDevicePathToRid @ 0x140552828 (HalpPciConvertDevicePathToRid.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuDetermineReservedPciRid(_QWORD *a1)
{
  unsigned int *v1; // rdi
  int v3; // edx
  unsigned int i; // ebx
  _QWORD *v5; // r14
  __int64 v6; // rcx

  v1 = (unsigned int *)a1[67];
  v3 = 0;
  for ( i = 0; i < *v1; ++i )
  {
    v5 = *(_QWORD **)&v1[2 * i + 2];
    v6 = *v5;
    if ( *(_DWORD *)*v5 == 1 )
    {
      if ( *(_WORD *)(v6 + 14) )
      {
        v3 = HalpPciConvertDevicePathToRid((unsigned __int16 *)(v6 + 8));
        if ( v3 < 0 )
          break;
        if ( a1[11] )
        {
          v3 = guard_dispatch_icall_no_overrides(a1[2], *v5, 8LL, v5);
          if ( v3 < 0 )
            break;
        }
      }
    }
  }
  return (unsigned int)v3;
}
