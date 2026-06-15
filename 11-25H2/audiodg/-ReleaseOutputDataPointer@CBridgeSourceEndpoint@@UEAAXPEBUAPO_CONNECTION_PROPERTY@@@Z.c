/*
 * XREFs of ?ReleaseOutputDataPointer@CBridgeSourceEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x140032B40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CBridgeSourceEndpoint::ReleaseOutputDataPointer(
        RTL_SRWLOCK *this,
        const struct APO_CONNECTION_PROPERTY *a2)
{
  RTL_SRWLOCK *v2; // rbx
  _QWORD *Ptr; // rbp
  _QWORD *i; // rsi

  v2 = this + 13;
  AcquireSRWLockShared(this + 13);
  Ptr = this[15].Ptr;
  for ( i = this[14].Ptr; i != Ptr; ++i )
    (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK *, const struct APO_CONNECTION_PROPERTY *))(*(_QWORD *)*i + 24LL))(
      *i,
      this + 8,
      a2);
  if ( v2 )
    ReleaseSRWLockShared(v2);
}
