/*
 * XREFs of RtlpIsLFHZoneAllocation @ 0x180049DB0
 * Callers:
 *     RtlpWalkLFHBlock @ 0x180049500 (RtlpWalkLFHBlock.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

char __fastcall RtlpIsLFHZoneAllocation(__int64 a1, unsigned __int64 a2)
{
  _QWORD *i; // rax

  RtlAcquireSRWLockExclusive(a1);
  for ( i = *(_QWORD **)(a1 + 8); ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)(a1 + 8) )
    {
      RtlReleaseSRWLockExclusive(a1);
      return 0;
    }
    if ( a2 >= (unsigned __int64)i && a2 < (unsigned __int64)(i + 126) )
      break;
  }
  RtlReleaseSRWLockExclusive(a1);
  return 1;
}
