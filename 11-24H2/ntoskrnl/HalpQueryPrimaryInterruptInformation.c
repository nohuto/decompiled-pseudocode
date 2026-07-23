/*
 * XREFs of HalpQueryPrimaryInterruptInformation @ 0x140A9C6FC
 * Callers:
 *     HalpSecondaryInterruptQueryPrimaryInformation @ 0x140A9C6A0 (HalpSecondaryInterruptQueryPrimaryInformation.c)
 * Callees:
 *     HalpFindSecondaryIcEntry @ 0x1403727AC (HalpFindSecondaryIcEntry.c)
 *     HalpIsInterruptTypeSecondary @ 0x140372B20 (HalpIsInterruptTypeSecondary.c)
 *     HalpReleaseSecondaryIcEntryShared @ 0x1403754EC (HalpReleaseSecondaryIcEntryShared.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpQueryPrimaryInterruptInformation(int *a1)
{
  unsigned int v1; // edi
  unsigned int v2; // ebx
  __int64 SecondaryIcEntry; // rsi
  unsigned int v4; // ebx

  v1 = 0;
  if ( SecondaryIcServicesEnabled )
  {
    v2 = a1[14];
    if ( HalpIsInterruptTypeSecondary(*a1, v2) )
    {
      SecondaryIcEntry = HalpFindSecondaryIcEntry(v2);
      if ( SecondaryIcEntry )
      {
        v4 = guard_dispatch_icall_no_overrides(*(_QWORD *)(SecondaryIcEntry + 32), v2);
        HalpReleaseSecondaryIcEntryShared(SecondaryIcEntry, 1);
        if ( v4 != -1073741802 )
          return v4;
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
  return v1;
}
