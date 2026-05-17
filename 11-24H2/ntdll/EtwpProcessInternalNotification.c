/*
 * XREFs of EtwpProcessInternalNotification @ 0x1800FA424
 * Callers:
 *     EtwDeliverDataBlock @ 0x18001E150 (EtwDeliverDataBlock.c)
 *     EtwpProcessNotification @ 0x180020790 (EtwpProcessNotification.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpProcessInternalNotification(__int64 a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 56));
}
