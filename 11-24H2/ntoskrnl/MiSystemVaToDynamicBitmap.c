/*
 * XREFs of MiSystemVaToDynamicBitmap @ 0x14026CB38
 * Callers:
 *     MiMarkSystemVaAllocated @ 0x14026B454 (MiMarkSystemVaAllocated.c)
 *     MiMakeSystemRangeAvailable @ 0x14026C384 (MiMakeSystemRangeAvailable.c)
 *     MiObtainSystemVa @ 0x14026CAF4 (MiObtainSystemVa.c)
 *     MiIsSystemVaAllocated @ 0x14067AA90 (MiIsSystemVaAllocated.c)
 *     MiInitializeDynamicRegion @ 0x140C5708C (MiInitializeDynamicRegion.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MiSystemVaToDynamicBitmap(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx

  if ( a1 <= 11 )
  {
    if ( a1 == 11 )
      return &qword_140E2F030;
    v6 = a1 - 5;
    if ( !v6 )
      return &qword_140E2F078;
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( !v8 )
        return &qword_140E2F0C0;
      v9 = v8 - 1;
      if ( !v9 )
        return (__int64 *)&unk_140E2EFA0;
      if ( v9 != 2 )
        return 0LL;
    }
    return (__int64 *)&unk_140E2EFE8;
  }
  v1 = a1 - 12;
  if ( !v1 )
    return (__int64 *)&unk_140E2EFA0;
  v2 = v1 - 1;
  if ( !v2 )
    return &qword_140E2EF10;
  v3 = v2 - 1;
  if ( !v3 )
    return (__int64 *)&unk_140E2F150;
  v4 = v3 - 1;
  if ( v4 )
  {
    if ( v4 == 2 )
      return &qword_140E2F108;
    return 0LL;
  }
  return (__int64 *)&unk_140E2EF58;
}
