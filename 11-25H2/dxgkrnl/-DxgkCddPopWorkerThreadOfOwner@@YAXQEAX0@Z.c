/*
 * XREFs of ?DxgkCddPopWorkerThreadOfOwner@@YAXQEAX0@Z @ 0x1403E74E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXXZ @ 0x1400292E0 (-PopWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXXZ.c)
 */

void __fastcall DxgkCddPopWorkerThreadOfOwner(DXGADAPTER *a1, DXGADAPTER *a2)
{
  if ( a1 )
    DXGADAPTER::PopWorkerThreadOfExclusiveOwner(a1);
  if ( a2 )
  {
    if ( a1 != a2 )
      DXGADAPTER::PopWorkerThreadOfExclusiveOwner(a2);
  }
}
