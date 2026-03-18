/*
 * XREFs of RtlQueryPointerMapping @ 0x1405E9F00
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAcquirePropStoreLockShared @ 0x1405EA26C (RtlpAcquirePropStoreLockShared.c)
 *     RtlpReleasePropStoreLockShared @ 0x1405EA310 (RtlpReleasePropStoreLockShared.c)
 */

__int64 __fastcall RtlQueryPointerMapping(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax

  LOBYTE(v4) = RtlpAcquirePropStoreLockShared(&RtlpPtrTreeLock);
  v5 = (unsigned __int64)RtlpPtrTree;
  if ( (qword_140E0C560 & 1) != 0 && RtlpPtrTree )
    v5 = (unsigned __int64)&RtlpPtrTree ^ (unsigned __int64)RtlpPtrTree;
  while ( v5 )
  {
    if ( a1 - *(_QWORD *)(v5 + 24) >= 0 )
    {
      if ( a1 - *(_QWORD *)(v5 + 24) <= 0 )
        break;
      v6 = *(_QWORD *)(v5 + 8);
    }
    else
    {
      v6 = *(_QWORD *)v5;
    }
    if ( (qword_140E0C560 & 1) != 0 && v6 )
      v5 ^= v6;
    else
      v5 = v6;
  }
  if ( v5 )
    *a2 = *(_QWORD *)(v5 + 32);
  RtlpReleasePropStoreLockShared(&RtlpPtrTreeLock, v4);
  return v5 == 0 ? 0xC0000225 : 0;
}
