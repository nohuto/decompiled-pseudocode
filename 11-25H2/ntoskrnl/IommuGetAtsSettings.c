/*
 * XREFs of IommuGetAtsSettings @ 0x140561990
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuGetAtsSettings(__int64 a1, _BYTE *a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax
  __int64 i; // rcx

  v2 = 0;
  if ( *(_DWORD *)a1 != 1 || (*(_BYTE *)(a1 + 4) & 1) != 0 || (*(_BYTE *)(a1 + 10) & 3) != 0 )
    return 3221225659LL;
  if ( HalpHvIommu )
  {
    result = guard_dispatch_icall_no_overrides(a1);
    if ( (int)result < 0 )
      return result;
    return 3221225659LL;
  }
  for ( i = HalpIommuAtsDeviceList; (__int64 *)i != &HalpIommuAtsDeviceList; i = *(_QWORD *)i )
  {
    if ( *(_WORD *)(i + 24) == *(_WORD *)(a1 + 8) && *(_WORD *)(i + 28) == *(_WORD *)(a1 + 12) )
    {
      *a2 |= 1u;
      *a2 = *a2 & 0xFD | (2 * (*(_BYTE *)(i + 40) & 1));
      return v2;
    }
  }
  return (unsigned int)-1073741275;
}
