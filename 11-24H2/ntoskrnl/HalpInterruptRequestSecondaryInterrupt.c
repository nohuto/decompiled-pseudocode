/*
 * XREFs of HalpInterruptRequestSecondaryInterrupt @ 0x140555C68
 * Callers:
 *     HalpInterruptRequestInterrupt @ 0x1405427A0 (HalpInterruptRequestInterrupt.c)
 * Callees:
 *     HalpFindSecondaryIcEntry @ 0x1403B9DDC (HalpFindSecondaryIcEntry.c)
 *     HalpReleaseSecondaryIcEntryShared @ 0x14047ECEC (HalpReleaseSecondaryIcEntryShared.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpInterruptRequestSecondaryInterrupt(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 SecondaryIcEntry; // rax
  __int64 v6; // r9
  __int64 v7; // rbx
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // [rsp+38h] [rbp+10h] BYREF

  if ( !SecondaryIcServicesEnabled || !(unsigned __int8)guard_dispatch_icall_no_overrides(0LL, a1, a3, a4) )
    return 3221225485LL;
  SecondaryIcEntry = HalpFindSecondaryIcEntry(a1);
  v7 = SecondaryIcEntry;
  if ( !SecondaryIcEntry )
    return 3221266721LL;
  v13 = -1;
  if ( *(_BYTE *)(SecondaryIcEntry + 16LL * (a1 - *(_DWORD *)(SecondaryIcEntry + 16)) + 172) )
    v9 = guard_dispatch_icall_no_overrides(*(_QWORD *)(SecondaryIcEntry + 32), a1, &v13, v6);
  else
    v9 = -1073741823;
  HalpReleaseSecondaryIcEntryShared(v7, 1);
  if ( v9 < 0 || v13 == -1 )
    return (unsigned int)v9;
  else
    return guard_dispatch_icall_no_overrides(v13, v10, v11, v12);
}
