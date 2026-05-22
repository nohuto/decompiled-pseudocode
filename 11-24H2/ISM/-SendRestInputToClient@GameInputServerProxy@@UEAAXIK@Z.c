/*
 * XREFs of ?SendRestInputToClient@GameInputServerProxy@@UEAAXIK@Z @ 0x18010C6C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall GameInputServerProxy::SendRestInputToClient(RTL_SRWLOCK *this, unsigned int a2, unsigned int a3)
{
  PVOID Ptr; // rcx

  if ( TryAcquireSRWLockShared(this + 4) )
  {
    Ptr = this[5].Ptr;
    if ( Ptr )
      (*(void (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)Ptr + 48LL))(Ptr, a2, a3);
    ReleaseSRWLockShared(this + 4);
  }
}
