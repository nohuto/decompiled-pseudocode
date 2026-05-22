/*
 * XREFs of ?SendMouseInput@GameInputServerProxy@@UEAAXIPEBU_MOUSE_INPUT_DATA@@K@Z @ 0x18010C630
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall GameInputServerProxy::SendMouseInput(
        RTL_SRWLOCK *this,
        unsigned int a2,
        const struct _MOUSE_INPUT_DATA *a3,
        unsigned int a4)
{
  PVOID Ptr; // rcx

  if ( TryAcquireSRWLockShared(this + 4) )
  {
    Ptr = this[5].Ptr;
    if ( Ptr )
      (*(void (__fastcall **)(PVOID, _QWORD, const struct _MOUSE_INPUT_DATA *, _QWORD))(*(_QWORD *)Ptr + 40LL))(
        Ptr,
        a2,
        a3,
        a4);
    ReleaseSRWLockShared(this + 4);
  }
}
