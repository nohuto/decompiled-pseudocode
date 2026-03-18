/*
 * XREFs of PopBcdClearPendingResume @ 0x1409C04F8
 * Callers:
 *     PopFreeHiberContext @ 0x1406FB788 (PopFreeHiberContext.c)
 *     PoInitHiberServices @ 0x140748B24 (PoInitHiberServices.c)
 * Callees:
 *     BcdFlushStore @ 0x140811C1C (BcdFlushStore.c)
 *     BcdOpenObject @ 0x1409BE0D4 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x1409BF5DC (BcdCloseObject.c)
 *     BiDeleteElement @ 0x1409BF8D0 (BiDeleteElement.c)
 */

__int64 __fastcall PopBcdClearPendingResume(__int64 a1)
{
  __int64 result; // rax
  int v3; // ebx
  void *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  result = BcdOpenObject(a1, &GUID_WINDOWS_BOOTMGR.Data1, &v4);
  if ( (int)result >= 0 )
  {
    v3 = BiDeleteElement(v4, 0x26000005u);
    if ( v3 >= 0 )
    {
      v3 = BiDeleteElement(v4, 0x26000025u);
      if ( v3 >= 0 )
        BcdFlushStore(a1);
    }
    BcdCloseObject(v4);
    return (unsigned int)v3;
  }
  return result;
}
