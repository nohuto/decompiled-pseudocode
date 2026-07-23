/*
 * XREFs of RtlRemovePointerMapping @ 0x1405E75B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRbRemoveNode @ 0x140365870 (RtlRbRemoveNode.c)
 *     RtlpAcquirePropStoreLockExclusive @ 0x1405E7774 (RtlpAcquirePropStoreLockExclusive.c)
 *     RtlpReleasePropStoreLockExclusive @ 0x1405E782C (RtlpReleasePropStoreLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlRemovePointerMapping(__int64 a1, _QWORD *a2)
{
  char v4; // al
  __int64 v5; // rdx
  _RTL_BALANCED_NODE *Min; // r8
  unsigned __int64 Root; // rbx
  char v8; // bp
  unsigned __int64 v9; // rax

  v4 = RtlpAcquirePropStoreLockExclusive(&RtlpPtrTreeLock);
  Min = RtlpPtrTree.Min;
  Root = (unsigned __int64)RtlpPtrTree.Root;
  v8 = v4;
  if ( (*(_BYTE *)&RtlpPtrTree.0 & 1) != 0 && RtlpPtrTree.Root )
    Root = (unsigned __int64)&RtlpPtrTree ^ (unsigned __int64)RtlpPtrTree.Root;
  while ( Root )
  {
    if ( a1 - *(_QWORD *)(Root + 24) >= 0 )
    {
      if ( a1 - *(_QWORD *)(Root + 24) <= 0 )
        break;
      v9 = *(_QWORD *)(Root + 8);
    }
    else
    {
      v9 = *(_QWORD *)Root;
    }
    if ( (*(_BYTE *)&RtlpPtrTree.0 & 1) != 0 && v9 )
      Root ^= v9;
    else
      Root = v9;
  }
  if ( Root )
    RtlRbRemoveNode(&RtlpPtrTree, (PRTL_BALANCED_NODE)Root);
  LOBYTE(v5) = v8;
  RtlpReleasePropStoreLockExclusive(&RtlpPtrTreeLock, v5, Min);
  if ( !Root )
    return 3221226021LL;
  *a2 = *(_QWORD *)(Root + 32);
  ExFreePoolWithTag((PVOID)Root, 0);
  return 0LL;
}
