/*
 * XREFs of BgConvertResources @ 0x140BB05CC
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x140590050 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpGxConvertRectangle @ 0x140698508 (BgpGxConvertRectangle.c)
 */

__int64 __fastcall BgConvertResources(unsigned int a1)
{
  return BgpGxConvertRectangle((int **)&qword_140EF00D8, a1);
}
