/*
 * XREFs of CmpSetRespectIoPriorityThread @ 0x14048800C
 * Callers:
 *     CmpDoFileWrite @ 0x14091083C (CmpDoFileWrite.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpSetRespectIoPriorityThread(__int64 a1, char a2)
{
  bool result; // al

  result = (*(_DWORD *)(a1 + 1444) & 0x80) != 0;
  *(_DWORD *)(a1 + 1444) ^= ((unsigned __int8)*(_DWORD *)(a1 + 1444) ^ (unsigned __int8)(a2 << 7)) & 0x80;
  return result;
}
