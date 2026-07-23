/*
 * XREFs of HalpIommuCreateDeviceInternal @ 0x1404C9300
 * Callers:
 *     HalpIommuCreateDevice @ 0x14054AEFC (HalpIommuCreateDevice.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuCreateDeviceInternal(__int64 a1, __int64 a2, _QWORD *a3, ULONG_PTR **a4)
{
  ULONG_PTR *i; // rbx
  __int64 result; // rax

  *a3 = 0LL;
  *a4 = 0LL;
  i = (ULONG_PTR *)HalpIommuList;
  result = 3221226021LL;
  while ( i != &HalpIommuList )
  {
    if ( i[11] )
    {
      result = guard_dispatch_icall_no_overrides(i[2], a1);
      if ( (int)result >= 0 )
      {
LABEL_11:
        *a4 = i;
        return result;
      }
    }
    i = (ULONG_PTR *)*i;
  }
  for ( i = (ULONG_PTR *)HalpIommuList; i != &HalpIommuList; i = (ULONG_PTR *)*i )
  {
    if ( i[11] )
    {
      result = guard_dispatch_icall_no_overrides(i[2], a1);
      if ( (int)result >= 0 )
        goto LABEL_11;
    }
  }
  return result;
}
