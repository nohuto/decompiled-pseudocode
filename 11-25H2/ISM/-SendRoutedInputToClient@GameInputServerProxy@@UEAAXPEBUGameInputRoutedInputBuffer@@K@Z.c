/*
 * XREFs of ?SendRoutedInputToClient@GameInputServerProxy@@UEAAXPEBUGameInputRoutedInputBuffer@@K@Z @ 0x1800614B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall GameInputServerProxy::SendRoutedInputToClient(
        RTL_SRWLOCK *this,
        const struct GameInputRoutedInputBuffer *a2,
        unsigned int a3)
{
  PVOID Ptr; // rcx

  if ( TryAcquireSRWLockShared(this + 4) )
  {
    Ptr = this[5].Ptr;
    if ( Ptr )
      (*(void (__fastcall **)(PVOID, const struct GameInputRoutedInputBuffer *, _QWORD))(*(_QWORD *)Ptr + 56LL))(
        Ptr,
        a2,
        a3);
    ReleaseSRWLockShared(this + 4);
  }
}
