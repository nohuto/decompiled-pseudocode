/*
 * XREFs of ?_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1400663A0
 * Callers:
 *     ?CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z @ 0x140065D1C (-CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z.c)
 *     ?Stop@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z @ 0x140065EA0 (-Stop@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z.c)
 *     ?Stop@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z @ 0x140066080 (-Stop@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z.c)
 *     ?Purge@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z @ 0x1400661A0 (-Purge@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z.c)
 *     ?Remove@FxIoTarget@@UEAAXXZ @ 0x140066290 (-Remove@FxIoTarget@@UEAAXXZ.c)
 *     ?CancelSentIo@FxIoTarget@@QEAAXXZ @ 0x140071AB8 (-CancelSentIo@FxIoTarget@@QEAAXXZ.c)
 *     ?_CleanupPipesRequests@FxUsbDevice@@KAXPEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140083A0C (-_CleanupPipesRequests@FxUsbDevice@@KAXPEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ?Purge@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z @ 0x14009F240 (-Purge@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z.c)
 * Callees:
 *     ?Cancel@FxRequestBase@@QEAAEXZ @ 0x140004DDC (-Cancel@FxRequestBase@@QEAAEXZ.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxIoTarget::_CancelSentRequests(_SINGLE_LIST_ENTRY *RequestListHead)
{
  _SINGLE_LIST_ENTRY *i; // rdx
  _SINGLE_LIST_ENTRY *v3; // rbx

  for ( i = RequestListHead->Next; i; i = RequestListHead->Next )
  {
    v3 = i - 18;
    RequestListHead->Next = i->Next;
    i->Next = 0LL;
    FxRequestBase::Cancel((FxRequestBase *)&i[-18]);
    ((void (__fastcall *)(_SINGLE_LIST_ENTRY *, __int64, __int64, const char *))v3->Next[2].Next)(
      v3,
      1818455619LL,
      548LL,
      "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp");
  }
}
