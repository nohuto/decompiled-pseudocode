/*
 * XREFs of PipNotifyDependenciesChanged @ 0x1406F7FA8
 * Callers:
 *     PipFreeDependencyEdge @ 0x1404C6D54 (PipFreeDependencyEdge.c)
 *     PipCreateNewDependencyEdge @ 0x1405A14FC (PipCreateNewDependencyEdge.c)
 *     PipMergeDependencyEdgeList @ 0x14071C45C (PipMergeDependencyEdgeList.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1409BD0AC (PnpNewDeviceNodeDependencyCheck.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1408B6E6C (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

void __fastcall PipNotifyDependenciesChanged(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx

  if ( a2 )
  {
    v3 = *(_QWORD *)(a2 + 48);
    if ( v3 )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(v3 + 312) + 40LL);
      if ( v4 )
      {
        v5 = *(_QWORD *)(v4 + 48);
        if ( v5 )
          PnpRaiseNtPlugPlayDevicePropertyChangeEvent(a1, v5, 25LL);
      }
    }
  }
  if ( a1 )
  {
    v6 = *(_QWORD *)(a1 + 48);
    if ( v6 )
    {
      v7 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 48);
        if ( v8 )
          PnpRaiseNtPlugPlayDevicePropertyChangeEvent(a1, v8, 24LL);
      }
    }
  }
}
