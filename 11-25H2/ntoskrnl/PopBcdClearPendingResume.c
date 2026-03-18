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

__int64 __fastcall PopBcdClearPendingResume(__int64 a1)
{
  __int64 result; // rax
  int v3; // ebx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  result = BcdOpenObject(a1, &GUID_WINDOWS_BOOTMGR.Data1, &v4);
  if ( (int)result >= 0 )
  {
    v3 = BiDeleteElement(v4, 637534213LL);
    if ( v3 >= 0 )
    {
      v3 = BiDeleteElement(v4, 637534245LL);
      if ( v3 >= 0 )
        BcdFlushStore(a1);
    }
    BcdCloseObject(v4);
    return (unsigned int)v3;
  }
  return result;
}
