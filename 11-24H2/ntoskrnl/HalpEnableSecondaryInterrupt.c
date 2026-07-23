/*
 * XREFs of HalpEnableSecondaryInterrupt @ 0x1406F90D0
 * Callers:
 *     HalEnableInterrupt @ 0x1402B3DD0 (HalEnableInterrupt.c)
 * Callees:
 *     HalpFindSecondaryIcEntry @ 0x1403727AC (HalpFindSecondaryIcEntry.c)
 *     HalpReleaseSecondaryIcEntryShared @ 0x1403754EC (HalpReleaseSecondaryIcEntryShared.c)
 *     HalpCheckInterruptType @ 0x1404F800C (HalpCheckInterruptType.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpEnableSecondaryInterrupt(_DWORD *a1)
{
  int v2; // edi
  unsigned int v3; // ebp
  __int64 SecondaryIcEntry; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rsi

  if ( SecondaryIcServicesEnabled )
  {
    if ( HalpCheckInterruptType(a1) )
    {
      v3 = a1[16];
      SecondaryIcEntry = HalpFindSecondaryIcEntry(v3);
      v5 = SecondaryIcEntry;
      if ( SecondaryIcEntry )
      {
        v6 = 2 * (v3 - *(_DWORD *)(SecondaryIcEntry + 16) + 10LL);
        v7 = 2LL * (v3 - *(_DWORD *)(SecondaryIcEntry + 16));
        *(_DWORD *)(SecondaryIcEntry + 8 * v7 + 164) = a1[6];
        *(_DWORD *)(SecondaryIcEntry + 8 * v6) = a1[5];
        *(_DWORD *)(SecondaryIcEntry + 8 * v7 + 168) = a1[3];
        *(_BYTE *)(SecondaryIcEntry + 8 * v7 + 172) = 1;
        v2 = guard_dispatch_icall_no_overrides(*(_QWORD *)(SecondaryIcEntry + 32), v3);
        if ( v2 < 0 )
        {
          *(_DWORD *)(v5 + 8 * v7 + 168) |= 0x80000000;
          *(_BYTE *)(v5 + 8 * v7 + 172) = 0;
        }
        HalpReleaseSecondaryIcEntryShared(v5, 1);
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
  return (unsigned int)v2;
}
