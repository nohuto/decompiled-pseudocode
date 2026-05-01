/*
 * XREFs of ?LaunchRemoteSystemSettings@VirtualDesktopController@@UEAAJXZ @ 0x180494F20
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1801343EC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall VirtualDesktopController::LaunchRemoteSystemSettings(RTL_SRWLOCK *this)
{
  unsigned int v2; // ebx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(&SRWLock, this + 14);
  v2 = (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)this[15].Ptr + 104LL))(this[15].Ptr);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v2;
}
