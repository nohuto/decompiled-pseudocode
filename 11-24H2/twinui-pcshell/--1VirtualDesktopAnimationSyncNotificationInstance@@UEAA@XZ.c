/*
 * XREFs of ??1VirtualDesktopAnimationSyncNotificationInstance@@UEAA@XZ @ 0x180559B88
 * Callers:
 *     ??_GVirtualDesktopAnimationSyncNotificationInstance@@UEAAPEAXI@Z @ 0x180559D80 (--_GVirtualDesktopAnimationSyncNotificationInstance@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall VirtualDesktopAnimationSyncNotificationInstance::~VirtualDesktopAnimationSyncNotificationInstance(
        RTL_SRWLOCK **this)
{
  RTL_SRWLOCK *v2; // rcx

  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(this + 3);
  v2 = this[2];
  if ( v2 )
  {
    this[2] = 0LL;
    (*((void (__fastcall **)(RTL_SRWLOCK *))v2->Ptr + 2))(v2);
  }
  *((_DWORD *)this + 3) = -1073741823;
}
