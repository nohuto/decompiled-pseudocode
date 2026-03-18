/*
 * XREFs of BgGetIsColorOverridden @ 0x140BA0704
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x14058C870 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     <none>
 */

char __fastcall BgGetIsColorOverridden(_DWORD *a1)
{
  if ( !(_BYTE)qword_140EEFF10 )
    return 0;
  *a1 = HIDWORD(qword_140EEFF10);
  return 1;
}
