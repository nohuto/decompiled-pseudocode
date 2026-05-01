/*
 * XREFs of ?SetViewInFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180189100
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18002EBC0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewManager::SetViewInFocus(RTL_SRWLOCK *this, struct IApplicationView *a2)
{
  RTL_SRWLOCK *v4; // rbx
  struct IApplicationView *Ptr; // rdx
  struct IApplicationView *v6; // rdx
  PVOID v7; // rcx

  v4 = this + 49;
  AcquireSRWLockExclusive(this + 49);
  Ptr = (struct IApplicationView *)this[54].Ptr;
  if ( a2 != Ptr || ((__int64)this[55].Ptr & 1) != 0 )
  {
    if ( Ptr && Ptr != a2 )
      CApplicationViewManager::RaiseApplicationViewChanged(
        (__int64)this,
        (int (__fastcall ***)(_QWORD, GUID *, LPMALLOC *))Ptr,
        9u,
        (__int64)a2);
    v6 = (struct IApplicationView *)this[54].Ptr;
    if ( v6 != a2 )
    {
      if ( a2 )
        (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 8LL))(a2);
      v7 = this[54].Ptr;
      this[54].Ptr = a2;
      v6 = a2;
      if ( v7 )
      {
        (*(void (__fastcall **)(PVOID, struct IApplicationView *))(*(_QWORD *)v7 + 16LL))(v7, a2);
        v6 = (struct IApplicationView *)this[54].Ptr;
      }
    }
    LODWORD(this[55].Ptr) &= ~1u;
    if ( v6 )
      CApplicationViewManager::RaiseApplicationViewChanged(
        (__int64)this,
        (int (__fastcall ***)(_QWORD, GUID *, LPMALLOC *))v6,
        7u,
        0LL);
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}
