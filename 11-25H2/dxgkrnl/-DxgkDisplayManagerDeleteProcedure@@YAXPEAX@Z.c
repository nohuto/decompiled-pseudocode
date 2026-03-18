/*
 * XREFs of ?DxgkDisplayManagerDeleteProcedure@@YAXPEAX@Z @ 0x1403BBD60
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ @ 0x1403BBDB0 (-Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ.c)
 */

void __fastcall DxgkDisplayManagerDeleteProcedure(ReferenceCounted **a1)
{
  DXGDISPLAYMANAGEROBJECT *v2; // rcx
  ReferenceCounted *v3; // rcx

  v2 = *a1;
  if ( v2 )
  {
    DXGDISPLAYMANAGEROBJECT::Invalidate(v2);
    ReferenceCounted::Release(*a1);
    *a1 = 0LL;
  }
  v3 = a1[1];
  if ( v3 )
  {
    (**(void (__fastcall ***)(ReferenceCounted *, __int64))v3)(v3, 1LL);
    a1[1] = 0LL;
  }
}
