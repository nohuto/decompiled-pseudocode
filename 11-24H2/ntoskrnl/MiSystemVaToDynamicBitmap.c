/*
 * XREFs of MiSystemVaToDynamicBitmap @ 0x1403A5848
 * Callers:
 *     MiMakeSystemRangeAvailable @ 0x1403A5094 (MiMakeSystemRangeAvailable.c)
 *     MiObtainSystemVa @ 0x1403A5804 (MiObtainSystemVa.c)
 *     MiMarkSystemVaAllocated @ 0x1404CF744 (MiMarkSystemVaAllocated.c)
 *     MiIsSystemVaAllocated @ 0x1406798B0 (MiIsSystemVaAllocated.c)
 *     MiInitializeDynamicRegion @ 0x140C54EFC (MiInitializeDynamicRegion.c)
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
      return &qword_140E2EEF0;
    v6 = a1 - 5;
    if ( !v6 )
      return &qword_140E2EF38;
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( !v8 )
        return &qword_140E2EF80;
      v9 = v8 - 1;
      if ( !v9 )
        return (__int64 *)&unk_140E2EE60;
      if ( v9 != 2 )
        return 0LL;
    }
    return (__int64 *)&unk_140E2EEA8;
  }
  v1 = a1 - 12;
  if ( !v1 )
    return (__int64 *)&unk_140E2EE60;
  v2 = v1 - 1;
  if ( !v2 )
    return &qword_140E2EDD0;
  v3 = v2 - 1;
  if ( !v3 )
    return (__int64 *)&unk_140E2F010;
  v4 = v3 - 1;
  if ( v4 )
  {
    if ( v4 == 2 )
      return &qword_140E2EFC8;
    return 0LL;
  }
  return (__int64 *)&unk_140E2EE18;
}
