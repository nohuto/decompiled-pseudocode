/*
 * XREFs of RaidAdapterSupportsAbortCommand @ 0x140026FF0
 * Callers:
 *     RaidStartIoPacket @ 0x140004760 (RaidStartIoPacket.c)
 *     RaidUnitAllocateResources @ 0x1400264C0 (RaidUnitAllocateResources.c)
 *     RaidSrbIsPowerRequired @ 0x140026F70 (RaidSrbIsPowerRequired.c)
 * Callees:
 *     <none>
 */

char __fastcall RaidAdapterSupportsAbortCommand(__int64 a1)
{
  if ( a1 && *(_DWORD *)a1 == 1094997074 )
    return *(_BYTE *)(a1 + 604) & 0x10;
  else
    return 0;
}
