/*
 * XREFs of asm_GetApplicationSubmixFromId$dtor$0 @ 0x18016D199
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall asm_GetApplicationSubmixFromId_dtor_0(__int64 a1, __int64 a2)
{
  return std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>((_QWORD *)(a2 + 56));
}
