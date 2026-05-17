/*
 * XREFs of AlpcGetCompletionListLastMessageInformation @ 0x180136860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcGetCompletionListLastMessageInformation(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 result; // rax

  *a2 = *(_DWORD *)(a1 + 72);
  result = *(unsigned int *)(a1 + 76);
  *a3 = result;
  return result;
}
