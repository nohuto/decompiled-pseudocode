/*
 * XREFs of BiIsLinkedToFirmwareVariable @ 0x140859B3C
 * Callers:
 *     BcdCreateObject @ 0x140859F94 (BcdCreateObject.c)
 *     BcdSetElementDataWithFlags @ 0x1409A517C (BcdSetElementDataWithFlags.c)
 *     BiDeleteElement @ 0x1409A5F20 (BiDeleteElement.c)
 *     BiBindEfiBootManager @ 0x1409A6BC4 (BiBindEfiBootManager.c)
 *     BcdDeleteObject @ 0x1409A8B70 (BcdDeleteObject.c)
 * Callees:
 *     BiGetObjectDescription @ 0x1408597FC (BiGetObjectDescription.c)
 *     BiGetFirmwareType @ 0x140859BF0 (BiGetFirmwareType.c)
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
