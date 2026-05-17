/*
 * XREFs of RtlpIsLFHZoneAllocation @ 0x18009DA90
 * Callers:
 *     RtlpWalkLFHBlock @ 0x18009D1E0 (RtlpWalkLFHBlock.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 */

char __fastcall RtlpIsLFHZoneAllocation(__int64 a1, unsigned __int64 a2)
{
  _QWORD *i; // rax

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)a1);
  for ( i = *(_QWORD **)(a1 + 8); ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)(a1 + 8) )
    {
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
      return 0;
    }
    if ( a2 >= (unsigned __int64)i && a2 < (unsigned __int64)(i + 126) )
      break;
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  return 1;
}
