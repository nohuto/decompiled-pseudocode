/*
 * XREFs of ?Release@GameInputServerProxy@@UEAAKXZ @ 0x18010C5A0
 * Callers:
 *     ?Release@GameInputServerProxy@@W7EAAKXZ @ 0x18010C610 (-Release@GameInputServerProxy@@W7EAAKXZ.c)
 *     ?Release@GameInputServerProxy@@WBA@EAAKXZ @ 0x18010C620 (-Release@GameInputServerProxy@@WBA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GameInputServerProxy::Release(GameInputServerProxy *this)
{
  unsigned __int32 v2; // edi

  AcquireSRWLockExclusive(&GameInputServerProxy::s_singletonLock);
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 6);
  if ( !v2 && this )
    (*(void (__fastcall **)(GameInputServerProxy *, __int64))(*(_QWORD *)this + 96LL))(this, 1LL);
  ReleaseSRWLockExclusive(&GameInputServerProxy::s_singletonLock);
  return v2;
}
