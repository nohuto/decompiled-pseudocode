/*
 * XREFs of MiBadRefCount @ 0x14028D968
 * Callers:
 *     MiDeleteNonPagedPoolPte @ 0x1402349C0 (MiDeleteNonPagedPoolPte.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14028C530 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x14028D4B0 (MiRemoveLockedPageCharge.c)
 *     MiReadyLargePageToFree @ 0x1403A36B8 (MiReadyLargePageToFree.c)
 *     MiFreeInitializationCode @ 0x140AE67EC (MiFreeInitializationCode.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MiBadRefCount(__int64 a1)
{
  KeBugCheckEx(
    0x4Eu,
    0x9AuLL,
    0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4),
    *(_BYTE *)(a1 + 34) & 7,
    (unsigned __int16)*(_DWORD *)(a1 + 32));
}
