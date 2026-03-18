/*
 * XREFs of HalpEnableSecondaryInterrupt @ 0x1406EF620
 * Callers:
 *     HalEnableInterrupt @ 0x140201940 (HalEnableInterrupt.c)
 * Callees:
 *     HalpReleaseSecondaryIcEntryShared @ 0x140443CE0 (HalpReleaseSecondaryIcEntryShared.c)
 *     HalpFindSecondaryIcEntry @ 0x140445C44 (HalpFindSecondaryIcEntry.c)
 *     HalpCheckInterruptType @ 0x1404F824C (HalpCheckInterruptType.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpEnableSecondaryInterrupt(_DWORD *a1)
{
  int v2; // edi
  unsigned int v3; // ebp
  __int64 SecondaryIcEntry; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rdx

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
        v2 = guard_dispatch_icall_no_overrides(*(_QWORD *)(SecondaryIcEntry + 32));
        if ( v2 < 0 )
        {
          *(_DWORD *)(v5 + 8 * v7 + 168) |= 0x80000000;
          *(_BYTE *)(v5 + 8 * v7 + 172) = 0;
        }
        LOBYTE(v8) = 1;
        HalpReleaseSecondaryIcEntryShared(v5, v8);
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
