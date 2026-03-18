/*
 * XREFs of RtlPinAtomInAtomTable @ 0x140935BE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLookupLowBox @ 0x1404320FC (RtlpLookupLowBox.c)
 *     RtlpLockAtomTable @ 0x140935D80 (RtlpLockAtomTable.c)
 *     RtlpUnlockAtomTable @ 0x140935DFC (RtlpUnlockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x140935E40 (RtlpAtomMapAtomToHandleEntry.c)
 */

__int64 __fastcall RtlPinAtomInAtomTable(__int64 a1, unsigned __int16 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  _QWORD *v6; // rax

  if ( !(unsigned __int8)RtlpLockAtomTable() )
    return 3221225485LL;
  v4 = -1073741816;
  if ( a2 < 0xC000u )
  {
    if ( a2 )
      v4 = 0;
  }
  else
  {
    v5 = RtlpAtomMapAtomToHandleEntry(a1, a2 & 0x3FFF);
    if ( v5 && *(_WORD *)(v5 + 10) == a2 )
    {
      v6 = RtlpLookupLowBox(a1, v5, 0);
      if ( v6 )
      {
        v4 = 0;
        *((_WORD *)v6 + 11) |= 1u;
      }
    }
  }
  RtlpUnlockAtomTable(a1);
  return v4;
}
