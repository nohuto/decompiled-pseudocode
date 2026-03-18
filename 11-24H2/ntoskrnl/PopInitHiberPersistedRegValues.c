/*
 * XREFs of PopInitHiberPersistedRegValues @ 0x14075282C
 * Callers:
 *     PopInitializeHibernateGlobals @ 0x14075291C (PopInitializeHibernateGlobals.c)
 * Callees:
 *     PopQueryHiberPersistedRegValue @ 0x140752CB0 (PopQueryHiberPersistedRegValue.c)
 *     RtlGetPersistedStateLocation @ 0x1409CC0E0 (RtlGetPersistedStateLocation.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 PopInitHiberPersistedRegValues()
{
  unsigned int v0; // ebx
  int PersistedStateLocation; // edi
  int v2; // edi
  void *Pool2; // rsi
  int **v4; // rsi
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  v0 = 0;
  LODWORD(v6) = 0;
  if ( (unsigned int)RtlGetPersistedStateLocation(L"Power", 0LL, 0, (__int64)&v6) == -2147483643 )
  {
    v2 = v6;
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      PersistedStateLocation = RtlGetPersistedStateLocation(L"Power", Pool2, v2, (__int64)&v6);
      if ( PersistedStateLocation < 0 )
      {
        ExFreePoolWithTag(Pool2, 0x72626968u);
      }
      else
      {
        PopHibernatePersistedRegLocation = (PCWSTR)Pool2;
        v4 = &off_140E07508;
        do
        {
          PopQueryHiberPersistedRegValue(v0++, *v4);
          v4 += 3;
        }
        while ( v0 < 4 );
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)PersistedStateLocation;
}
