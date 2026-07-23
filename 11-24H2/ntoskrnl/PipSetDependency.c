/*
 * XREFs of PipSetDependency @ 0x14071C634
 * Callers:
 *     IoReserveDependency @ 0x14071BDC0 (IoReserveDependency.c)
 *     IoSetDependency @ 0x14071BE50 (IoSetDependency.c)
 *     PipConvertResolutionsToReservations @ 0x140AB77E8 (PipConvertResolutionsToReservations.c)
 * Callees:
 *     PipAddDependencyEdgeBetweenNodes @ 0x1405A1460 (PipAddDependencyEdgeBetweenNodes.c)
 *     PipCreateDependencyNode @ 0x14071C21C (PipCreateDependencyNode.c)
 *     PipQueryBindingResolution @ 0x140A67300 (PipQueryBindingResolution.c)
 *     PipDereferenceDependencyNode @ 0x140AAF930 (PipDereferenceDependencyNode.c)
 */

__int64 __fastcall PipSetDependency(__int64 a1, __int64 a2)
{
  __int64 BindingResolution; // rax
  __int64 DependencyNode; // rsi
  unsigned int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rbx

  BindingResolution = PipQueryBindingResolution(a1);
  DependencyNode = BindingResolution;
  if ( BindingResolution )
  {
    ++*(_DWORD *)(BindingResolution + 88);
  }
  else
  {
    DependencyNode = PipCreateDependencyNode(a1);
    if ( !DependencyNode )
      return (unsigned int)-1073741670;
  }
  v7 = PipQueryBindingResolution(a2);
  v8 = v7;
  if ( v7 )
  {
    ++*(_DWORD *)(v7 + 88);
  }
  else
  {
    v8 = PipCreateDependencyNode(a2);
    if ( !v8 )
    {
      v6 = -1073741670;
      goto LABEL_10;
    }
  }
  v6 = PipAddDependencyEdgeBetweenNodes(DependencyNode, v8, a2);
LABEL_10:
  PipDereferenceDependencyNode(DependencyNode);
  if ( v8 )
    PipDereferenceDependencyNode(v8);
  return v6;
}
