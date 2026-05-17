/*
 * XREFs of RtlPinAtomInAtomTable @ 0x18013C0C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpLockAtomTable @ 0x1800AEA00 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1800AEA2C (RtlpAtomMapAtomToHandleEntry.c)
 */

__int64 __fastcall RtlPinAtomInAtomTable(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  unsigned __int16 v3; // si
  unsigned int v6; // ebx
  __int64 v7; // rax
  unsigned int v8; // r9d

  v3 = (unsigned __int16)a2;
  if ( !RtlpLockAtomTable(a1, a2, a3) )
    return 3221225485LL;
  v6 = -1073741816;
  if ( v3 < 0xC000u )
  {
    if ( v3 )
      v6 = 0;
  }
  else
  {
    v7 = RtlpAtomMapAtomToHandleEntry(a1, v3 & 0x3FFF);
    if ( v7 && *(_WORD *)(v7 + 10) == v3 && v7 != -12 )
    {
      v6 = v8;
      *(_WORD *)(v7 + 14) |= 1u;
    }
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
  return v6;
}
