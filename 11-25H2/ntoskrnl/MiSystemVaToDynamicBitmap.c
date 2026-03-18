/*
 * XREFs of MiSystemVaToDynamicBitmap @ 0x14038EAE8
 * Callers:
 *     MiMakeSystemRangeAvailable @ 0x14038E334 (MiMakeSystemRangeAvailable.c)
 *     MiObtainSystemVa @ 0x14038EAA4 (MiObtainSystemVa.c)
 *     MiMarkSystemVaAllocated @ 0x1404CF764 (MiMarkSystemVaAllocated.c)
 *     MiIsSystemVaAllocated @ 0x14066E004 (MiIsSystemVaAllocated.c)
 *     MiInitializeDynamicRegion @ 0x140C43C7C (MiInitializeDynamicRegion.c)
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
      return &qword_140E2ECB0;
    v6 = a1 - 5;
    if ( !v6 )
      return &qword_140E2ECF8;
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( !v8 )
        return &qword_140E2ED40;
      v9 = v8 - 1;
      if ( !v9 )
        return (__int64 *)&unk_140E2EC20;
      if ( v9 != 2 )
        return 0LL;
    }
    return (__int64 *)&unk_140E2EC68;
  }
  v1 = a1 - 12;
  if ( !v1 )
    return (__int64 *)&unk_140E2EC20;
  v2 = v1 - 1;
  if ( !v2 )
    return &qword_140E2EB90;
  v3 = v2 - 1;
  if ( !v3 )
    return (__int64 *)&unk_140E2EDD0;
  v4 = v3 - 1;
  if ( v4 )
  {
    if ( v4 == 2 )
      return &qword_140E2ED88;
    return 0LL;
  }
  return (__int64 *)&unk_140E2EBD8;
}
