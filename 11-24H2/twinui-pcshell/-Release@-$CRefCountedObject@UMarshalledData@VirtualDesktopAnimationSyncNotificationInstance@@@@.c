/*
 * XREFs of ?Release@?$CRefCountedObject@UMarshalledData@VirtualDesktopAnimationSyncNotificationInstance@@@@UEAAKXZ @ 0x180559F40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MarshalledData@VirtualDesktopAnimationSyncNotificationInstance@@QEAA@XZ @ 0x180559B58 (--1MarshalledData@VirtualDesktopAnimationSyncNotificationInstance@@QEAA@XZ.c)
 */

__int64 __fastcall CRefCountedObject<VirtualDesktopAnimationSyncNotificationInstance::MarshalledData>::Release(
        volatile signed __int32 *a1)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement(a1 + 12);
  if ( !v2 && a1 )
  {
    VirtualDesktopAnimationSyncNotificationInstance::MarshalledData::~MarshalledData((VirtualDesktopAnimationSyncNotificationInstance::MarshalledData *)(a1 + 2));
    operator delete((void *)a1, (const struct std::nothrow_t *)0x38);
  }
  return v2;
}
