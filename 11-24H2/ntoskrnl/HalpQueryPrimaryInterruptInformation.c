/*
 * XREFs of HalpQueryPrimaryInterruptInformation @ 0x140AA136C
 * Callers:
 *     HalpSecondaryInterruptQueryPrimaryInformation @ 0x140AA1310 (HalpSecondaryInterruptQueryPrimaryInformation.c)
 * Callees:
 *     HalpFindSecondaryIcEntry @ 0x1403B9DDC (HalpFindSecondaryIcEntry.c)
 *     HalpIsInterruptTypeSecondary @ 0x1403BA150 (HalpIsInterruptTypeSecondary.c)
 *     HalpReleaseSecondaryIcEntryShared @ 0x14047ECEC (HalpReleaseSecondaryIcEntryShared.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpQueryPrimaryInterruptInformation(int *a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned int v4; // ebx
  __int64 SecondaryIcEntry; // rsi
  __int64 v6; // r9
  unsigned int v7; // ebx

  v2 = 0;
  if ( SecondaryIcServicesEnabled )
  {
    v4 = a1[14];
    if ( HalpIsInterruptTypeSecondary(*a1, v4) )
    {
      SecondaryIcEntry = HalpFindSecondaryIcEntry(v4);
      if ( SecondaryIcEntry )
      {
        v7 = guard_dispatch_icall_no_overrides(*(_QWORD *)(SecondaryIcEntry + 32), v4, a2, v6);
        HalpReleaseSecondaryIcEntryShared(SecondaryIcEntry, 1);
        if ( v7 != -1073741802 )
          return v7;
      }
      else
      {
        return (unsigned int)-1073700575;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v2;
}
