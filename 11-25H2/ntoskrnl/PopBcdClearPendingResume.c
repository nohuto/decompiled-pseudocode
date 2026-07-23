/*
 * XREFs of PopBcdClearPendingResume @ 0x140A26F08
 * Callers:
 *     PopFreeHiberContext @ 0x1406EF918 (PopFreeHiberContext.c)
 *     PoInitHiberServices @ 0x14073CB14 (PoInitHiberServices.c)
 * Callees:
 *     BcdFlushStore @ 0x1408020A4 (BcdFlushStore.c)
 *     BcdOpenObject @ 0x1409666B4 (BcdOpenObject.c)
 *     BiDeleteElement @ 0x140A26F84 (BiDeleteElement.c)
 *     BcdCloseObject @ 0x140A27BE8 (BcdCloseObject.c)
 */

NTSTATUS __fastcall PopBcdClearPendingResume(HANDLE BcdStoreHandle)
{
  NTSTATUS result; // eax
  int v3; // ebx
  HANDLE BcdObjectHandle; // [rsp+38h] [rbp+10h] BYREF

  BcdObjectHandle = 0LL;
  result = BcdOpenObject(BcdStoreHandle, &GUID_WINDOWS_BOOTMGR, &BcdObjectHandle);
  if ( result >= 0 )
  {
    v3 = BiDeleteElement(BcdObjectHandle, 637534213LL);
    if ( v3 >= 0 )
    {
      v3 = BiDeleteElement(BcdObjectHandle, 637534245LL);
      if ( v3 >= 0 )
        BcdFlushStore(BcdStoreHandle);
    }
    BcdCloseObject(BcdObjectHandle);
    return v3;
  }
  return result;
}
