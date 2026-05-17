/*
 * XREFs of RtlQueryPointerMapping @ 0x180143250
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 */

__int64 __fastcall RtlQueryPointerMapping(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rax

  RtlAcquireSRWLockShared(&RtlpPtrTreeLock);
  v4 = RtlpPtrTree;
  if ( (qword_1801CD0A0 & 1) != 0 && RtlpPtrTree )
    v4 = (unsigned __int64)&RtlpPtrTree ^ RtlpPtrTree;
  while ( v4 )
  {
    if ( a1 - *(_QWORD *)(v4 + 24) >= 0 )
    {
      if ( a1 - *(_QWORD *)(v4 + 24) <= 0 )
        break;
      v5 = *(_QWORD *)(v4 + 8);
    }
    else
    {
      v5 = *(_QWORD *)v4;
    }
    if ( (qword_1801CD0A0 & 1) != 0 && v5 )
      v4 ^= v5;
    else
      v4 = v5;
  }
  if ( v4 )
    *a2 = *(_QWORD *)(v4 + 32);
  RtlReleaseSRWLockShared(&RtlpPtrTreeLock);
  return v4 == 0 ? 0xC0000225 : 0;
}
