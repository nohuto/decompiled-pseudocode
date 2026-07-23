/*
 * XREFs of RtlDeleteAtomFromAtomTable @ 0x14091E690
 * Callers:
 *     NtDeleteAtom @ 0x14091DDE0 (NtDeleteAtom.c)
 * Callees:
 *     RtlpLookupLowBox @ 0x140435ADC (RtlpLookupLowBox.c)
 *     RtlpDereferenceAtom @ 0x14046F244 (RtlpDereferenceAtom.c)
 *     RtlpLockAtomTable @ 0x14091EAC0 (RtlpLockAtomTable.c)
 *     RtlpUnlockAtomTable @ 0x14091EB3C (RtlpUnlockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x14091EB80 (RtlpAtomMapAtomToHandleEntry.c)
 */

NTSTATUS __cdecl RtlDeleteAtomFromAtomTable(PVOID AtomTableHandle, RTL_ATOM Atom)
{
  NTSTATUS v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 *v7; // rax

  if ( !(unsigned __int8)RtlpLockAtomTable() )
    return -1073741811;
  v4 = -1073741816;
  if ( Atom < 0xC000u )
  {
    if ( Atom )
      v4 = 0;
  }
  else
  {
    v5 = RtlpAtomMapAtomToHandleEntry(AtomTableHandle, Atom & 0x3FFF);
    v6 = v5;
    if ( v5 )
    {
      if ( *(_WORD *)(v5 + 10) == Atom )
      {
        v7 = RtlpLookupLowBox((__int64)AtomTableHandle, v5, 1);
        if ( v7 )
        {
          v4 = 0;
          if ( (*((_BYTE *)v7 + 22) & 1) != 0 )
            v4 = 1073741849;
          else
            RtlpDereferenceAtom(v6, v7, (__int64)AtomTableHandle);
        }
      }
    }
  }
  RtlpUnlockAtomTable(AtomTableHandle);
  return v4;
}
