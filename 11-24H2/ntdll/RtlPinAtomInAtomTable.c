/*
 * XREFs of RtlPinAtomInAtomTable @ 0x18013A2B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlpLockAtomTable @ 0x18007B1E0 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x18007B20C (RtlpAtomMapAtomToHandleEntry.c)
 */

NTSTATUS __cdecl RtlPinAtomInAtomTable(PVOID AtomTableHandle, RTL_ATOM Atom)
{
  NTSTATUS v5; // ebx
  __int64 v6; // rax
  NTSTATUS v7; // r9d

  if ( !RtlpLockAtomTable((__int64)AtomTableHandle) )
    return -1073741811;
  v5 = -1073741816;
  if ( Atom < 0xC000u )
  {
    if ( Atom )
      v5 = 0;
  }
  else
  {
    v6 = RtlpAtomMapAtomToHandleEntry((__int64)AtomTableHandle, Atom & 0x3FFF);
    if ( v6 && *(_WORD *)(v6 + 10) == Atom && v6 != -12 )
    {
      v5 = v7;
      *(_WORD *)(v6 + 14) |= 1u;
    }
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)AtomTableHandle + 1);
  return v5;
}
