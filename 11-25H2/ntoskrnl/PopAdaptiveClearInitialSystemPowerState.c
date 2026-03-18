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

void __fastcall PopAdaptiveClearInitialSystemPowerState(__int64 a1)
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v1 = -1LL;
  v2 = -1LL;
  if ( byte_140FD7239 )
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
