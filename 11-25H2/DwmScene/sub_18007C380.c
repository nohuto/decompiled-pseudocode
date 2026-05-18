/*
 * XREFs of sub_18007C380 @ 0x18007C380
 * Callers:
 *     sub_180013330 @ 0x180013330 (sub_180013330.c)
 *     sub_180013550 @ 0x180013550 (sub_180013550.c)
 *     sub_180055CE0 @ 0x180055CE0 (sub_180055CE0.c)
 *     sub_180062584 @ 0x180062584 (sub_180062584.c)
 *     sub_180064700 @ 0x180064700 (sub_180064700.c)
 *     sub_180064D64 @ 0x180064D64 (sub_180064D64.c)
 *     sub_180065D00 @ 0x180065D00 (sub_180065D00.c)
 *     sub_18008FEF0 @ 0x18008FEF0 (sub_18008FEF0.c)
 *     sub_180090590 @ 0x180090590 (sub_180090590.c)
 * Callees:
 *     sub_180079EB0 @ 0x180079EB0 (sub_180079EB0.c)
 */

__int64 __fastcall sub_18007C380(__int64 a1, __int64 a2)
{
  unsigned __int16 v3; // ax

  v3 = sub_180079EB0(*(_QWORD *)(a1 + 16), a2);
  return sub_18007C3B8(a1, v3);
}
