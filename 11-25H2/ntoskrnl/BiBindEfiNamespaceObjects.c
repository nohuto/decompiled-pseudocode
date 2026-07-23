/*
 * XREFs of BiBindEfiNamespaceObjects @ 0x140A27E30
 * Callers:
 *     BiOpenSystemStore @ 0x140A26AF8 (BiOpenSystemStore.c)
 * Callees:
 *     BiBindEfiBootManager @ 0x140A25DC8 (BiBindEfiBootManager.c)
 *     BiLogMessage @ 0x140A26990 (BiLogMessage.c)
 *     BiBuildIdentifierList @ 0x140A27590 (BiBuildIdentifierList.c)
 *     BiFreeIdentifierList @ 0x140A28030 (BiFreeIdentifierList.c)
 *     BiBindEfiEntries @ 0x140A94DD4 (BiBindEfiEntries.c)
 */

__int64 __fastcall BiBindEfiNamespaceObjects(HANDLE BcdStoreHandle)
{
  __int64 v2; // rdx
  int v3; // ebx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  BiLogMessage();
  v5[1] = v5;
  v5[0] = v5;
  v3 = BiBuildIdentifierList(BcdStoreHandle, v2, v5);
  if ( v3 < 0
    || (v3 = BiBindEfiEntries(BcdStoreHandle), v3 < 0)
    || (v3 = BiBindEfiBootManager(BcdStoreHandle, (__int64)v5), v3 < 0) )
  {
    BiLogMessage();
  }
  BiFreeIdentifierList(v5);
  return (unsigned int)v3;
}
