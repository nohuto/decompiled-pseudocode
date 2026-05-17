/*
 * XREFs of EtwpProcessInternalNotification @ 0x1800FC324
 * Callers:
 *     EtwpProcessNotification @ 0x1800421A0 (EtwpProcessNotification.c)
 *     EtwDeliverDataBlock @ 0x1800443B0 (EtwDeliverDataBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpProcessInternalNotification(__int64 a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 56));
}
