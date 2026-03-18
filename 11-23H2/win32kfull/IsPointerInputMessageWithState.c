/*
 * XREFs of IsPointerInputMessageWithState @ 0x1C0118D84
 * Callers:
 *     xxxRetrievePointerInputMessage @ 0x1C01C47C0 (xxxRetrievePointerInputMessage.c)
 *     ?IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z @ 0x1C01E82CC (-IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z.c)
 *     _QuerySendMessage @ 0x1C01FB53C (_QuerySendMessage.c)
 *     xxxMenuWindowProc @ 0x1C0219F60 (xxxMenuWindowProc.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C0118DA8 (IsPointerInputMessage.c)
 */

__int64 __fastcall IsPointerInputMessageWithState(__int64 a1)
{
  int v1; // eax
  int v2; // ecx
  unsigned int v3; // edx

  v1 = IsPointerInputMessage(a1);
  v3 = 0;
  if ( v1 )
    return v2 != 595;
  return v3;
}
