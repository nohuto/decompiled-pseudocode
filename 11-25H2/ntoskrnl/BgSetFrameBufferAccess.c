/*
 * XREFs of BgSetFrameBufferAccess @ 0x140BA0814
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14058C5E0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkSetVirtualFrameBuffer @ 0x14058C870 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     <none>
 */

void __fastcall BgSetFrameBufferAccess(__int64 a1, __int64 a2, __int64 a3)
{
  qword_140EEFEF0 = a1;
  *(_QWORD *)&xmmword_140EEFF00 = a2;
  *((_QWORD *)&xmmword_140EEFF00 + 1) = a3;
}
