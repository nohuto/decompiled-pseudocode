/*
 * XREFs of PopFxAcpiUnregisterDevice @ 0x1405DC790
 * Callers:
 *     PopFxAcpiDispatchNotification @ 0x1405DC3B0 (PopFxAcpiDispatchNotification.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x140429580 (IoAcquireRemoveLockEx.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x1404A7950 (IoReleaseRemoveLockAndWaitEx.c)
 *     PopFxDestroyDeviceCommon @ 0x1404FA6C0 (PopFxDestroyDeviceCommon.c)
 *     PopFxRemoveAcpiDevice @ 0x1405D1D18 (PopFxRemoveAcpiDevice.c)
 *     PopPluginAcpiNotificationStrict @ 0x1405E4454 (PopPluginAcpiNotificationStrict.c)
 */

__int64 __fastcall PopFxAcpiUnregisterDevice(char *P, ULONG_PTR a2)
{
  struct _IO_REMOVE_LOCK *v2; // rdi
  __int64 v5; // rcx
  unsigned int v6; // ebp

  v2 = (struct _IO_REMOVE_LOCK *)(P + 312);
  v6 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(P + 312), (PVOID)0x72466F50, &File, 1u, 0x20u);
  if ( *((char **)P + 25) != P + 200 )
    PopFxRemoveAcpiDevice(v5, (__int64)P);
  IoReleaseRemoveLockAndWaitEx(v2, (PVOID)0x72466F50, 0x20u);
  PopPluginAcpiNotificationStrict(*((_QWORD *)P + 10), 4uLL, a2);
  _InterlockedAnd((volatile signed __int32 *)P + 216, 0xFFFFFFFB);
  *((_QWORD *)P + 10) = 0LL;
  *((_QWORD *)P + 11) = 0LL;
  PopFxDestroyDeviceCommon((PVOID *)P, 2);
  return v6;
}
