/*
 * XREFs of BgSetFrameBufferAccess @ 0x140BB2814
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14058CDE0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkSetVirtualFrameBuffer @ 0x14058D070 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     <none>
 */

void __fastcall BgSetFrameBufferAccess(__int64 a1, __int64 a2, __int64 a3)
{
  qword_140EF03D0 = a1;
  *(_QWORD *)&xmmword_140EF03E0 = a2;
  *((_QWORD *)&xmmword_140EF03E0 + 1) = a3;
}
