/*
 * XREFs of asm_GetApplicationSubmixes$dtor$1 @ 0x18016D20E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall asm_GetApplicationSubmixes_dtor_1(__int64 a1, __int64 a2)
{
  return std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>((_QWORD *)(a2 + 56));
}
