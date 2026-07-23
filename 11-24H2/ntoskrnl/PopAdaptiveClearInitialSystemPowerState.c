/*
 * XREFs of PopAdaptiveClearInitialSystemPowerState @ 0x14075E0CC
 * Callers:
 *     PoInitHiberServices @ 0x140746E14 (PoInitHiberServices.c)
 * Callees:
 *     BcdFlushStore @ 0x14081235C (BcdFlushStore.c)
 *     BcdOpenObject @ 0x1409A4724 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x1409A5C2C (BcdCloseObject.c)
 *     BiDeleteElement @ 0x1409A5F20 (BiDeleteElement.c)
 *     BcdOpenStore @ 0x1409A8688 (BcdOpenStore.c)
 *     BcdCloseStore @ 0x140A81A08 (BcdCloseStore.c)
 */

void __fastcall PopAdaptiveClearInitialSystemPowerState(UNICODE_STRING *a1)
{
  HANDLE BcdStoreHandle; // [rsp+30h] [rbp+8h] BYREF
  HANDLE BcdObjectHandle; // [rsp+38h] [rbp+10h] BYREF

  BcdStoreHandle = (HANDLE)-1LL;
  BcdObjectHandle = (HANDLE)-1LL;
  if ( byte_140FD81E9 )
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
