/*
 * XREFs of RtlDeleteAtomFromAtomTable @ 0x140935CB0
 * Callers:
 *     NtDeleteAtom @ 0x140935070 (NtDeleteAtom.c)
 * Callees:
 *     RtlpLookupLowBox @ 0x1404320FC (RtlpLookupLowBox.c)
 *     RtlpDereferenceAtom @ 0x14046DD74 (RtlpDereferenceAtom.c)
 *     RtlpLockAtomTable @ 0x140935D80 (RtlpLockAtomTable.c)
 *     RtlpUnlockAtomTable @ 0x140935DFC (RtlpUnlockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x140935E40 (RtlpAtomMapAtomToHandleEntry.c)
 */

__int64 __fastcall RtlDeleteAtomFromAtomTable(__int64 a1, unsigned __int16 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 *v7; // rax

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
    v6 = v5;
    if ( v5 )
    {
      if ( *(_WORD *)(v5 + 10) == a2 )
      {
        v7 = RtlpLookupLowBox(a1, v5, 1);
        if ( v7 )
        {
          v4 = 0;
          if ( (*((_BYTE *)v7 + 22) & 1) != 0 )
            v4 = 1073741849;
          else
            RtlpDereferenceAtom(v6, v7, a1);
        }
      }
    }
  }
  RtlpUnlockAtomTable(a1);
  return v4;
}
