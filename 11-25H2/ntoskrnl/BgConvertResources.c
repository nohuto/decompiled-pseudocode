/*
 * XREFs of BgConvertResources @ 0x140BA05CC
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x14058C870 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpGxConvertRectangle @ 0x14068D1B8 (BgpGxConvertRectangle.c)
 */

__int64 __fastcall BgConvertResources(unsigned int a1)
{
  return BgpGxConvertRectangle((int **)&qword_140EEFE18, a1);
}
