/*
 * XREFs of HalpIommuDetermineReservedPciRid @ 0x14055120C
 * Callers:
 *     HalpIommuProcessReservationsInternal @ 0x140551BC0 (HalpIommuProcessReservationsInternal.c)
 * Callees:
 *     HalpPciConvertDevicePathToRid @ 0x14054FF28 (HalpPciConvertDevicePathToRid.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuDetermineReservedPciRid(_QWORD *a1)
{
  unsigned int *v1; // rdi
  int v3; // edx
  unsigned int i; // ebx
  unsigned __int16 **v5; // r14
  unsigned __int16 *v6; // rcx

  v1 = (unsigned int *)a1[67];
  v3 = 0;
  for ( i = 0; i < *v1; ++i )
  {
    v5 = *(unsigned __int16 ***)&v1[2 * i + 2];
    v6 = *v5;
    if ( *(_DWORD *)*v5 == 1 )
    {
      if ( v6[7] )
      {
        v3 = HalpPciConvertDevicePathToRid(v6 + 4);
        if ( v3 < 0 )
          break;
        if ( a1[11] )
        {
          v3 = guard_dispatch_icall_no_overrides(a1[2]);
          if ( v3 < 0 )
            break;
        }
      }
    }
  }
  return (unsigned int)v3;
}
