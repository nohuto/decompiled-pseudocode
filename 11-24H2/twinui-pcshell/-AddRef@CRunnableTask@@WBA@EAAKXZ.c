/*
 * XREFs of ?AddRef@CRunnableTask@@WBA@EAAKXZ @ 0x180600410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRunnableTask::AddRef(__int64 a1)
{
  return CRunnableTask::AddRef((CRunnableTask *)(a1 - 16));
}
