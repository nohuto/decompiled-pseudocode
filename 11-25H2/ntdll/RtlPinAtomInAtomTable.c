/*
 * XREFs of RtlPinAtomInAtomTable @ 0x18013D7F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpLockAtomTable @ 0x1800682F0 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x18006831C (RtlpAtomMapAtomToHandleEntry.c)
 */

__int64 __fastcall RtlPinAtomInAtomTable(__int64 a1, unsigned __int16 a2)
{
  unsigned int v5; // ebx
  __int64 v6; // rax
  unsigned int v7; // r9d

  if ( !RtlpLockAtomTable(a1) )
    return 3221225485LL;
  v5 = -1073741816;
  if ( a2 < 0xC000u )
  {
    if ( a2 )
      v5 = 0;
  }
  else
  {
    v6 = RtlpAtomMapAtomToHandleEntry(a1, a2 & 0x3FFF);
    if ( v6 && *(_WORD *)(v6 + 10) == a2 && v6 != -12 )
    {
      v5 = v7;
      *(_WORD *)(v6 + 14) |= 1u;
    }
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
  return v5;
}
