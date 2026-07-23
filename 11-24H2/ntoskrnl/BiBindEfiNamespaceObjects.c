/*
 * XREFs of BiBindEfiNamespaceObjects @ 0x1409A812C
 * Callers:
 *     BiOpenSystemStore @ 0x1409A7610 (BiOpenSystemStore.c)
 * Callees:
 *     BiLogMessage @ 0x1409A4E48 (BiLogMessage.c)
 *     BiBuildIdentifierList @ 0x1409A55CC (BiBuildIdentifierList.c)
 *     BiBindEfiBootManager @ 0x1409A6BC4 (BiBindEfiBootManager.c)
 *     BiFreeIdentifierList @ 0x1409A8250 (BiFreeIdentifierList.c)
 *     BiBindEfiEntries @ 0x140A96064 (BiBindEfiEntries.c)
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
