/*
 * XREFs of RtlQueryPointerMapping @ 0x180144940
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 */

__int64 __fastcall RtlQueryPointerMapping(__int64 a1, _QWORD *a2)
{
  unsigned __int64 Root; // rbx
  unsigned __int64 v5; // rax

  RtlAcquireSRWLockShared(&RtlpPtrTreeLock);
  Root = (unsigned __int64)RtlpPtrTree.Root;
  if ( (*(_BYTE *)&RtlpPtrTree.0 & 1) != 0 && RtlpPtrTree.Root )
    Root = (unsigned __int64)&RtlpPtrTree ^ (unsigned __int64)RtlpPtrTree.Root;
  while ( Root )
  {
    if ( a1 - *(_QWORD *)(Root + 24) >= 0 )
    {
      if ( a1 - *(_QWORD *)(Root + 24) <= 0 )
        break;
      v5 = *(_QWORD *)(Root + 8);
    }
    else
    {
      v5 = *(_QWORD *)Root;
    }
    if ( (*(_BYTE *)&RtlpPtrTree.0 & 1) != 0 && v5 )
      Root ^= v5;
    else
      Root = v5;
  }
  if ( Root )
    *a2 = *(_QWORD *)(Root + 32);
  RtlReleaseSRWLockShared(&RtlpPtrTreeLock);
  return Root == 0 ? 0xC0000225 : 0;
}
