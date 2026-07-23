/*
 * XREFs of PopFxAcpiForwardNotification @ 0x1405D9384
 * Callers:
 *     PopFxAcpiDispatchNotification @ 0x1405D9280 (PopFxAcpiDispatchNotification.c)
 * Callees:
 *     IoReleaseRemoveLockEx @ 0x140225BA0 (IoReleaseRemoveLockEx.c)
 *     IoAcquireRemoveLockEx @ 0x14041D6D0 (IoAcquireRemoveLockEx.c)
 *     PopPluginAcpiNotification @ 0x1404C9038 (PopPluginAcpiNotification.c)
 */

__int64 __fastcall PopFxAcpiForwardNotification(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  struct _IO_REMOVE_LOCK *v5; // rsi
  NTSTATUS v9; // edi
  char v10; // bl

  v5 = (struct _IO_REMOVE_LOCK *)(a1 + 312);
  v9 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 312), (PVOID)0x72466F50, &File, 1u, 0x20u);
  if ( v9 >= 0 )
  {
    v10 = PopPluginAcpiNotification(*(_QWORD *)(a1 + 80), a2, a3);
    IoReleaseRemoveLockEx(v5, (PVOID)0x72466F50, 0x20u);
    *a5 = v10;
  }
  return (unsigned int)v9;
}
