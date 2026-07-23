/*
 * XREFs of PopAdaptiveClearInitialSystemPowerState @ 0x14075270C
 * Callers:
 *     PoInitHiberServices @ 0x14073CB14 (PoInitHiberServices.c)
 * Callees:
 *     BcdFlushStore @ 0x1408020A4 (BcdFlushStore.c)
 *     BcdOpenObject @ 0x1409666B4 (BcdOpenObject.c)
 *     BcdOpenStore @ 0x140A24A98 (BcdOpenStore.c)
 *     BcdCloseStore @ 0x140A24B8C (BcdCloseStore.c)
 *     BiDeleteElement @ 0x140A26F84 (BiDeleteElement.c)
 *     BcdCloseObject @ 0x140A27BE8 (BcdCloseObject.c)
 */

void __fastcall PopAdaptiveClearInitialSystemPowerState(UNICODE_STRING *a1)
{
  HANDLE BcdStoreHandle; // [rsp+30h] [rbp+8h] BYREF
  HANDLE BcdObjectHandle; // [rsp+38h] [rbp+10h] BYREF

  BcdStoreHandle = (HANDLE)-1LL;
  BcdObjectHandle = (HANDLE)-1LL;
  if ( byte_140FD7239 )
  {
    if ( BcdOpenStore(a1, BCD_OPEN_SYNC_FIRMWARE_ENTRIES, &BcdStoreHandle) >= 0 )
    {
      if ( BcdOpenObject(BcdStoreHandle, &GUID_CURRENT_BOOT_ENTRY, &BcdObjectHandle) >= 0 )
      {
        BiDeleteElement(BcdObjectHandle, 620757338LL);
        BcdFlushStore(BcdStoreHandle);
      }
      if ( BcdObjectHandle != (HANDLE)-1LL )
        BcdCloseObject(BcdObjectHandle);
    }
    if ( BcdStoreHandle != (HANDLE)-1LL )
      BcdCloseStore(BcdStoreHandle);
  }
}
