/*
 * XREFs of ?QueryInterface@InputForwardProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801A7910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputForwardProcessor::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        InputForwardProcessor **a3)
{
  return InputForwardProcessor::QueryInterface((InputForwardProcessor *)(a1 - 8), a2, a3);
}
