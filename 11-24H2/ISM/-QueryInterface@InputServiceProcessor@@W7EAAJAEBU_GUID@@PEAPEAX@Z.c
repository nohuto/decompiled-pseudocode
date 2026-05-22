/*
 * XREFs of ?QueryInterface@InputServiceProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18015C160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputServiceProcessor::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        InputServiceProcessor **a3)
{
  return InputServiceProcessor::QueryInterface((InputServiceProcessor *)(a1 - 8), a2, a3);
}
