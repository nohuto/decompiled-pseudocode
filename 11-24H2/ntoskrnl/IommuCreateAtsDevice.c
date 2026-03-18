/*
 * XREFs of IommuCreateAtsDevice @ 0x140563580
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuCreateDevice @ 0x14054D63C (HalpIommuCreateDevice.c)
 *     HalpIommuDeleteDevice @ 0x14054DC10 (HalpIommuDeleteDevice.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     HalpIommuLocateFromDevice @ 0x1406FF0B0 (HalpIommuLocateFromDevice.c)
 */

__int64 __fastcall IommuCreateAtsDevice(_BYTE *a1, void *a2, _DWORD *a3, __int64 *a4)
{
  __int64 result; // rax
  __int64 i; // rcx
  __int32 v10; // r9d
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rcx
  int v15; // eax
  unsigned int v16; // edi
  _QWORD v17[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF

  v18 = 0LL;
  v17[0] = 0LL;
  if ( *(_DWORD *)a1 != 1 || (a1[4] & 1) != 0 || (a1[10] & 3) != 0 || (*a3 & 1) == 0 )
    return 3221225659LL;
  if ( (unsigned int)HalpIommuLocateFromDevice(a1, v17) == -1073741275 )
    return 3221226537LL;
  for ( i = HalpIommuAtsDeviceList; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == &HalpIommuAtsDeviceList )
      return 3221226021LL;
    if ( *(_WORD *)(i + 24) == *((_WORD *)a1 + 4) && *(_WORD *)(i + 28) == *((_WORD *)a1 + 6) )
      break;
  }
  v10 = 1;
  if ( (*a3 & 6) != 6 )
    v10 = 3;
  result = HalpIommuCreateDevice(a1, a2, 0LL, v10, &v18);
  if ( (int)result >= 0 )
  {
    v13 = v18;
    v14 = *(_QWORD *)(v18 + 32);
    if ( HalpHvIommu )
    {
      v15 = guard_dispatch_icall_no_overrides(v14, 26LL, (*a3 >> 7) & 0x3E0, v12);
    }
    else
    {
      LOBYTE(v11) = 1;
      v15 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v14 + 16), *(_QWORD *)(v18 + 40), v11, v12);
    }
    v16 = v15;
    if ( v15 < 0 )
    {
      HalpIommuDeleteDevice((__int64 *)v13);
    }
    else
    {
      if ( !HalpHvIommu )
      {
        *(_DWORD *)(v13 + 60) = (*a3 >> 12) & 0x1F;
        *(_QWORD *)(v13 + 64) = 0LL;
        ++*(_DWORD *)(v13 + 56);
      }
      *a4 = v13;
    }
    return v16;
  }
  return result;
}
