/*
 * XREFs of EtwpProcessInternalNotification @ 0x1800F5184
 * Callers:
 *     EtwDeliverDataBlock @ 0x18004AB50 (EtwDeliverDataBlock.c)
 *     EtwpProcessNotification @ 0x18004D190 (EtwpProcessNotification.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpProcessInternalNotification(__int64 a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 56));
}
