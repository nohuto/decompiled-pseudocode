/*
 * XREFs of IommuGetAtsSettings @ 0x140561E60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuGetAtsSettings(__int64 a1, _BYTE *a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax
  __int64 i; // rcx
  __int128 v7; // [rsp+28h] [rbp-20h] BYREF

  v2 = 0;
  if ( *(_DWORD *)a1 != 1 || (*(_BYTE *)(a1 + 4) & 1) != 0 || (*(_BYTE *)(a1 + 10) & 3) != 0 )
    return 3221225659LL;
  if ( !HalpHvIommu )
    goto LABEL_7;
  v7 = 0LL;
  result = guard_dispatch_icall_no_overrides(a1, &v7);
  if ( (int)result < 0 )
    return result;
  if ( (v7 & 0x40) == 0 )
    return 3221225659LL;
LABEL_7:
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
