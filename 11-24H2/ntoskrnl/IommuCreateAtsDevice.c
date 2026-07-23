/*
 * XREFs of IommuCreateAtsDevice @ 0x1405611B0
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuCreateDevice @ 0x14054AEFC (HalpIommuCreateDevice.c)
 *     HalpIommuDeleteDevice @ 0x14054B4BC (HalpIommuDeleteDevice.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     HalpIommuLocateFromDevice @ 0x1406FCCF0 (HalpIommuLocateFromDevice.c)
 */

__int64 __fastcall IommuCreateAtsDevice(_BYTE *a1, void *a2, _DWORD *a3, __int64 *a4)
{
  __int64 result; // rax
  __int64 i; // rcx
  __int32 v10; // r9d
  __int64 v11; // rbx
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // edi
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  v16 = 0LL;
  v15[0] = 0LL;
  if ( *(_DWORD *)a1 != 1 || (a1[4] & 1) != 0 || (a1[10] & 3) != 0 || (*a3 & 1) == 0 )
    return 3221225659LL;
  if ( (unsigned int)HalpIommuLocateFromDevice(a1, v15) == -1073741275 )
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
  result = HalpIommuCreateDevice(a1, a2, 0LL, v10, &v16);
  if ( (int)result >= 0 )
  {
    v11 = v16;
    v12 = *(_QWORD *)(v16 + 32);
    if ( HalpHvIommu )
      v13 = guard_dispatch_icall_no_overrides(v12, 26LL);
    else
      v13 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v12 + 16), *(_QWORD *)(v16 + 40));
    v14 = v13;
    if ( v13 < 0 )
    {
      HalpIommuDeleteDevice((__int64 *)v11);
    }
    else
    {
      if ( !HalpHvIommu )
      {
        *(_DWORD *)(v11 + 60) = (*a3 >> 12) & 0x1F;
        *(_QWORD *)(v11 + 64) = 0LL;
        ++*(_DWORD *)(v11 + 56);
      }
      *a4 = v11;
    }
    return v14;
  }
  return result;
}
