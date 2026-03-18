/*
 * XREFs of HalpQueryPrimaryInterruptInformation @ 0x140A9BADC
 * Callers:
 *     HalpSecondaryInterruptQueryPrimaryInformation @ 0x140A9BA80 (HalpSecondaryInterruptQueryPrimaryInformation.c)
 * Callees:
 *     HalpReleaseSecondaryIcEntryShared @ 0x140443CE0 (HalpReleaseSecondaryIcEntryShared.c)
 *     HalpFindSecondaryIcEntry @ 0x140445C44 (HalpFindSecondaryIcEntry.c)
 *     HalpIsInterruptTypeSecondary @ 0x140445FC0 (HalpIsInterruptTypeSecondary.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpQueryPrimaryInterruptInformation(int *a1)
{
  unsigned int v1; // edi
  unsigned int v2; // ebx
  __int64 SecondaryIcEntry; // rsi
  unsigned int v4; // ebx
  __int64 v5; // rdx

  v1 = 0;
  if ( SecondaryIcServicesEnabled )
  {
    v2 = a1[14];
    if ( HalpIsInterruptTypeSecondary(*a1, v2) )
    {
      SecondaryIcEntry = HalpFindSecondaryIcEntry(v2);
      if ( SecondaryIcEntry )
      {
        v4 = guard_dispatch_icall_no_overrides(*(_QWORD *)(SecondaryIcEntry + 32));
        LOBYTE(v5) = 1;
        HalpReleaseSecondaryIcEntryShared(SecondaryIcEntry, v5);
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
