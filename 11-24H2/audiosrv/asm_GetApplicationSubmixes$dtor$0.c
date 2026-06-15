/*
 * XREFs of asm_GetApplicationSubmixes$dtor$0 @ 0x18016D1FC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall asm_GetApplicationSubmixes_dtor_0(__int64 a1, __int64 a2)
{
  return std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>((_QWORD *)(a2 + 64));
}
