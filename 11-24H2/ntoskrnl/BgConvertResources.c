/*
 * XREFs of BgConvertResources @ 0x140BB25CC
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x14058D070 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpGxConvertRectangle @ 0x140699588 (BgpGxConvertRectangle.c)
 */

__int64 __fastcall BgConvertResources(unsigned int a1)
{
  return BgpGxConvertRectangle((int **)&qword_140EF02F8, a1);
}
