/*
 * XREFs of PsIsProcessBeingDebugged @ 0x140A4E600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PsIsProcessBeingDebugged(__int64 a1)
{
  return *(_QWORD *)(a1 + 776) != 0LL;
}
