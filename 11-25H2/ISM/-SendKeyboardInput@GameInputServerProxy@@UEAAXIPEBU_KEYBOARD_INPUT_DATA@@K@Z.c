/*
 * XREFs of ?SendKeyboardInput@GameInputServerProxy@@UEAAXIPEBU_KEYBOARD_INPUT_DATA@@K@Z @ 0x180063B00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall GameInputServerProxy::SendKeyboardInput(
        RTL_SRWLOCK *this,
        unsigned int a2,
        const struct _KEYBOARD_INPUT_DATA *a3,
        unsigned int a4)
{
  PVOID Ptr; // rcx

  if ( TryAcquireSRWLockShared(this + 4) )
  {
    Ptr = this[5].Ptr;
    if ( Ptr )
      (*(void (__fastcall **)(PVOID, _QWORD, const struct _KEYBOARD_INPUT_DATA *, _QWORD))(*(_QWORD *)Ptr + 32LL))(
        Ptr,
        a2,
        a3,
        a4);
    ReleaseSRWLockShared(this + 4);
  }
}
