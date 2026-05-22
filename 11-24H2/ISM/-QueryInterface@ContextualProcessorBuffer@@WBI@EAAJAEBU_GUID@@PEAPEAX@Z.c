/*
 * XREFs of ?QueryInterface@ContextualProcessorBuffer@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801A33F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContextualProcessorBuffer::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        ContextualProcessorBuffer **a3)
{
  return ContextualProcessorBuffer::QueryInterface((ContextualProcessorBuffer *)(a1 - 24), a2, a3);
}
