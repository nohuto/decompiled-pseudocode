/*
 * XREFs of HvpReadHiveDataFromFile @ 0x1407E01C4
 * Callers:
 *     HvpMapHiveImage @ 0x1407E0050 (HvpMapHiveImage.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HvpReadHiveDataFromFile(__int64 a1, _QWORD *a2, unsigned int *a3)
{
  unsigned int v3; // edi
  unsigned int v7; // esi
  __int64 v8; // rcx

  v3 = 0;
  *a2 = 0LL;
  *a3 = 0;
  v7 = *(_DWORD *)(a1 + 24);
  if ( *(_DWORD *)(a1 + 32) - *(_DWORD *)(a1 + 28) <= v7 )
    v7 = *(_DWORD *)(a1 + 32) - *(_DWORD *)(a1 + 28);
  if ( v7 )
  {
    if ( (int)guard_dispatch_icall_no_overrides(*(_QWORD *)a1, *(unsigned int *)(a1 + 8)) >= 0 )
    {
      *(_DWORD *)(a1 + 12) += v7;
      v8 = *(_QWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 28) += v7;
      *a2 = v8;
      *a3 = v7;
    }
    else
    {
      return (unsigned int)-1073741491;
    }
  }
  else
  {
    return (unsigned int)-1073741807;
  }
  return v3;
}
