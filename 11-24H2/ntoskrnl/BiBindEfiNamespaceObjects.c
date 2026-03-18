/*
 * XREFs of BiBindEfiNamespaceObjects @ 0x1409C1ADC
 * Callers:
 *     BiOpenSystemStore @ 0x1409C0FC0 (BiOpenSystemStore.c)
 * Callees:
 *     BiLogMessage @ 0x1409BE7F8 (BiLogMessage.c)
 *     BiBuildIdentifierList @ 0x1409BEF7C (BiBuildIdentifierList.c)
 *     BiBindEfiBootManager @ 0x1409C0574 (BiBindEfiBootManager.c)
 *     BiFreeIdentifierList @ 0x1409C1C00 (BiFreeIdentifierList.c)
 *     BiBindEfiEntries @ 0x140A9AAF4 (BiBindEfiEntries.c)
 */

__int64 __fastcall BiBindEfiNamespaceObjects(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  BiLogMessage();
  v5[1] = v5;
  v5[0] = v5;
  v3 = BiBuildIdentifierList(a1, v2, v5);
  if ( v3 < 0 || (v3 = BiBindEfiEntries(a1, v5), v3 < 0) || (v3 = BiBindEfiBootManager(a1, (__int64)v5), v3 < 0) )
    BiLogMessage();
  BiFreeIdentifierList(v5);
  return (unsigned int)v3;
}
