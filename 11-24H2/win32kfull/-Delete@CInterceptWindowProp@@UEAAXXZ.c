/*
 * XREFs of ?Delete@CInterceptWindowProp@@UEAAXXZ @ 0x1402C94C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x1400688A4 (-Release@CMonitorTopology@@QEAAXXZ.c)
 *     ?RemoveEntry@CInterceptWindowProp@@AEAAXPEAUSystemOperationActionData@1@@Z @ 0x1402CA34C (-RemoveEntry@CInterceptWindowProp@@AEAAXPEAUSystemOperationActionData@1@@Z.c)
 */

void __fastcall CInterceptWindowProp::Delete(CMonitorTopology **this)
{
  struct CInterceptWindowProp::SystemOperationActionData **i; // rdi
  CMonitorTopology *v3; // rcx

  for ( i = this + 4;
        *i != (struct CInterceptWindowProp::SystemOperationActionData *)i;
        CInterceptWindowProp::RemoveEntry((CInterceptWindowProp *)this, *i) )
  {
    ;
  }
  v3 = this[8];
  if ( v3 )
  {
    CMonitorTopology::Release(v3);
    this[8] = 0LL;
  }
  Win32FreePool(this);
}
