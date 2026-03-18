/*
 * XREFs of HalpDisableSecondaryInterrupt @ 0x14047EC50
 * Callers:
 *     HalDisableInterrupt @ 0x1403B8EA0 (HalDisableInterrupt.c)
 * Callees:
 *     HalpFindSecondaryIcEntry @ 0x1403B9DDC (HalpFindSecondaryIcEntry.c)
 *     HalpReleaseSecondaryIcEntryShared @ 0x14047ECEC (HalpReleaseSecondaryIcEntryShared.c)
 *     HalpCheckInterruptType @ 0x1404FA72C (HalpCheckInterruptType.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpDisableSecondaryInterrupt(__int64 a1)
{
  unsigned int v2; // esi
  __int64 SecondaryIcEntry; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // edi
  unsigned int v8; // esi

  if ( SecondaryIcServicesEnabled )
  {
    if ( (unsigned __int8)HalpCheckInterruptType() )
    {
      v2 = *(_DWORD *)(a1 + 64);
      SecondaryIcEntry = HalpFindSecondaryIcEntry(v2);
      if ( SecondaryIcEntry )
      {
        v7 = guard_dispatch_icall_no_overrides(*(_QWORD *)(SecondaryIcEntry + 32), v2, v4, v5);
        if ( v7 >= 0 )
        {
          v8 = v2 - *(_DWORD *)(SecondaryIcEntry + 16);
          *(_DWORD *)(SecondaryIcEntry + 16LL * v8 + 168) |= 0x80000000;
          *(_BYTE *)(SecondaryIcEntry + 16LL * v8 + 172) = 0;
        }
        LOBYTE(v6) = 1;
        HalpReleaseSecondaryIcEntryShared(SecondaryIcEntry, v6);
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
  return (unsigned int)v7;
}
