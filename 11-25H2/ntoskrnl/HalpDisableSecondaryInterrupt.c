/*
 * XREFs of HalpDisableSecondaryInterrupt @ 0x140443D28
 * Callers:
 *     HalDisableInterrupt @ 0x140444D30 (HalDisableInterrupt.c)
 * Callees:
 *     HalpReleaseSecondaryIcEntryShared @ 0x140443CE0 (HalpReleaseSecondaryIcEntryShared.c)
 *     HalpFindSecondaryIcEntry @ 0x140445C44 (HalpFindSecondaryIcEntry.c)
 *     HalpCheckInterruptType @ 0x1404F824C (HalpCheckInterruptType.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpDisableSecondaryInterrupt(__int64 a1)
{
  unsigned int v2; // esi
  __int64 SecondaryIcEntry; // rbx
  __int64 v4; // rdx
  int v5; // edi
  unsigned int v6; // esi

  if ( SecondaryIcServicesEnabled )
  {
    if ( (unsigned __int8)HalpCheckInterruptType() )
    {
      v2 = *(_DWORD *)(a1 + 64);
      SecondaryIcEntry = HalpFindSecondaryIcEntry(v2);
      if ( SecondaryIcEntry )
      {
        v5 = guard_dispatch_icall_no_overrides(*(_QWORD *)(SecondaryIcEntry + 32), v2);
        if ( v5 >= 0 )
        {
          v6 = v2 - *(_DWORD *)(SecondaryIcEntry + 16);
          *(_DWORD *)(SecondaryIcEntry + 16LL * v6 + 168) |= 0x80000000;
          *(_BYTE *)(SecondaryIcEntry + 16LL * v6 + 172) = 0;
        }
        LOBYTE(v4) = 1;
        HalpReleaseSecondaryIcEntryShared(SecondaryIcEntry, v4);
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
  return (unsigned int)v5;
}
