/*
 * XREFs of BgGetIsColorOverridden @ 0x140BB0704
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x140590050 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     <none>
 */

char __fastcall BgGetIsColorOverridden(_DWORD *a1)
{
  if ( !(_BYTE)qword_140EF01D0 )
    return 0;
  *a1 = HIDWORD(qword_140EF01D0);
  return 1;
}
