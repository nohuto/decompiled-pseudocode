/*
 * XREFs of BgGetIsColorOverridden @ 0x140BB2704
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x14058D070 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     <none>
 */

char __fastcall BgGetIsColorOverridden(_DWORD *a1)
{
  if ( !(_BYTE)qword_140EF03F0 )
    return 0;
  *a1 = HIDWORD(qword_140EF03F0);
  return 1;
}
