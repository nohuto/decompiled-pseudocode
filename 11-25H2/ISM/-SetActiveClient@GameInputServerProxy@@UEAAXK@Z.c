/*
 * XREFs of ?SetActiveClient@GameInputServerProxy@@UEAAXK@Z @ 0x180069E80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall GameInputServerProxy::SetActiveClient(RTL_SRWLOCK *this, unsigned int a2)
{
  PVOID Ptr; // rcx

  if ( TryAcquireSRWLockShared(this + 4) )
  {
    Ptr = this[5].Ptr;
    if ( Ptr )
      (*(void (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)Ptr + 64LL))(Ptr, a2);
    ReleaseSRWLockShared(this + 4);
  }
}
