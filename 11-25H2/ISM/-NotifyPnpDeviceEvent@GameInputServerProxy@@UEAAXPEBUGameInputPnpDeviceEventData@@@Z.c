/*
 * XREFs of ?NotifyPnpDeviceEvent@GameInputServerProxy@@UEAAXPEBUGameInputPnpDeviceEventData@@@Z @ 0x18010A450
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall GameInputServerProxy::NotifyPnpDeviceEvent(
        RTL_SRWLOCK *this,
        const struct GameInputPnpDeviceEventData *a2)
{
  PVOID Ptr; // rcx

  if ( TryAcquireSRWLockShared(this + 4) )
  {
    Ptr = this[5].Ptr;
    if ( Ptr )
      (*(void (__fastcall **)(PVOID, const struct GameInputPnpDeviceEventData *))(*(_QWORD *)Ptr + 80LL))(Ptr, a2);
    ReleaseSRWLockShared(this + 4);
  }
}
