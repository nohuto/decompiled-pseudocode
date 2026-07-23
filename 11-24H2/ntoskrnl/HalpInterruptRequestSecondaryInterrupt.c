/*
 * XREFs of HalpInterruptRequestSecondaryInterrupt @ 0x1405535A8
 * Callers:
 *     HalpInterruptRequestInterrupt @ 0x1405400F0 (HalpInterruptRequestInterrupt.c)
 * Callees:
 *     HalpFindSecondaryIcEntry @ 0x1403727AC (HalpFindSecondaryIcEntry.c)
 *     HalpReleaseSecondaryIcEntryShared @ 0x1403754EC (HalpReleaseSecondaryIcEntryShared.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpInterruptRequestSecondaryInterrupt(unsigned int a1)
{
  __int64 SecondaryIcEntry; // rax
  __int64 v3; // rbx
  unsigned int v5; // edi

  if ( !SecondaryIcServicesEnabled || !(unsigned __int8)guard_dispatch_icall_no_overrides(0LL, a1) )
    return 3221225485LL;
  SecondaryIcEntry = HalpFindSecondaryIcEntry(a1);
  v3 = SecondaryIcEntry;
  if ( !SecondaryIcEntry )
    return 3221266721LL;
  if ( *(_BYTE *)(SecondaryIcEntry + 16LL * (a1 - *(_DWORD *)(SecondaryIcEntry + 16)) + 172) )
    v5 = guard_dispatch_icall_no_overrides(*(_QWORD *)(SecondaryIcEntry + 32), a1);
  else
    v5 = -1073741823;
  HalpReleaseSecondaryIcEntryShared(v3, 1);
  return v5;
}
