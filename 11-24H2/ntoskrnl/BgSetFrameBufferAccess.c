/*
 * XREFs of BgSetFrameBufferAccess @ 0x140BB0814
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14058FDC0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkSetVirtualFrameBuffer @ 0x140590050 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     <none>
 */

void __fastcall BgSetFrameBufferAccess(__int64 a1, __int64 a2, __int64 a3)
{
  qword_140EF01B0 = a1;
  *(_QWORD *)&xmmword_140EF01C0 = a2;
  *((_QWORD *)&xmmword_140EF01C0 + 1) = a3;
}
