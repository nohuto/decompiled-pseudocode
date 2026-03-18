/*
 * XREFs of PopAdaptiveClearInitialSystemPowerState @ 0x14075F12C
 * Callers:
 *     PoInitHiberServices @ 0x140748B24 (PoInitHiberServices.c)
 * Callees:
 *     BcdFlushStore @ 0x140811C1C (BcdFlushStore.c)
 *     BcdCloseStore @ 0x14085EED8 (BcdCloseStore.c)
 *     BcdOpenObject @ 0x1409BE0D4 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x1409BF5DC (BcdCloseObject.c)
 *     BiDeleteElement @ 0x1409BF8D0 (BiDeleteElement.c)
 *     BcdOpenStore @ 0x1409C2038 (BcdOpenStore.c)
 */

void __fastcall PopAdaptiveClearInitialSystemPowerState(__int64 a1)
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v1 = -1LL;
  v2 = -1LL;
  if ( byte_140FD71E9 )
  {
    if ( (int)BcdOpenStore(a1, 2LL, &v1) >= 0 )
    {
      if ( (int)BcdOpenObject(v1, &GUID_CURRENT_BOOT_ENTRY, &v2) >= 0 )
      {
        BiDeleteElement(v2, 620757338LL);
        BcdFlushStore(v1);
      }
      if ( v2 != -1 )
        BcdCloseObject(v2);
    }
    if ( v1 != -1 )
      BcdCloseStore(v1);
  }
}
