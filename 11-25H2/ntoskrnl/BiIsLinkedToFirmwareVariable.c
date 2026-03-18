/*
 * XREFs of BiIsLinkedToFirmwareVariable @ 0x140A27ED0
 * Callers:
 *     BcdSetElementDataWithFlags @ 0x14096B5A4 (BcdSetElementDataWithFlags.c)
 *     BcdDeleteObject @ 0x140A24A18 (BcdDeleteObject.c)
 *     BiBindEfiBootManager @ 0x140A25DC8 (BiBindEfiBootManager.c)
 *     BcdCreateObject @ 0x140A26248 (BcdCreateObject.c)
 *     BiDeleteElement @ 0x140A26F84 (BiDeleteElement.c)
 * Callees:
 *     BiGetObjectDescription @ 0x14096A86C (BiGetObjectDescription.c)
 *     BiGetFirmwareType @ 0x140A27F84 (BiGetFirmwareType.c)
 */

char __fastcall BiIsLinkedToFirmwareVariable(__int64 a1, int *a2)
{
  char v4; // bl
  int v6; // eax
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)BiGetFirmwareType(0LL) != 2 )
    return 0;
  v4 = 0;
  v7 = 0LL;
  if ( (int)BiGetObjectDescription(a1, &v7) >= 0
    && (HIDWORD(v7) & 0xF0000000) == 0x10000000
    && (HIDWORD(v7) & 0xF00000) == 0x100000 )
  {
    if ( (HIDWORD(v7) & 0xFFFFF) != 2 )
      return 1;
    if ( !a2 )
      return 1;
    v6 = *a2;
    if ( *a2 == 301989890 || v6 == 285212673 || v6 == 301989892 || v6 == 369098882 )
      return 1;
  }
  return v4;
}
