/*
 * XREFs of PostPointerDeviceInRangeMessage @ 0x14012D8B0
 * Callers:
 *     <none>
 * Callees:
 *     PostPointerEventMessage @ 0x14012D8F0 (PostPointerEventMessage.c)
 */

__int64 __fastcall PostPointerDeviceInRangeMessage(__int64 a1, __int64 a2, unsigned int a3)
{
  return PostPointerEventMessage(a1, 569LL, a2, a3);
}
